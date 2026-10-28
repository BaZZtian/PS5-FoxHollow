// SPDX-License-Identifier: MIT
#pragma once
#include "gc_disc.h"

namespace foxhollow {
// A validated image whose heap context is owned by the stream consumer.
// Transfer the whole descriptor, then invoke close exactly once after every
// retained reader is gone. Do not use the descriptor after close. Unlike the
// borrowed GcMediaLayer callbacks, close destroys this context.
struct GcImageStream {
    void* context = nullptr;
    int64_t (*read_at)(void*, uint64_t, void*, size_t) = nullptr;
    int64_t (*length)(void*) = nullptr;
    void (*close)(void*) = nullptr;
};
// Output must be empty. On failure it stays empty and owns no resources.
int open_owned_image_stream(const char* iso_path, GcImageStream* output);

// Positional reads keep concurrent streaming independent of a shared seek cursor.
// The caller must join all readers before closing or destroying this object.
class GcMediaLayer final {
public:
    GcMediaLayer() = default;
    ~GcMediaLayer();
    GcMediaLayer(const GcMediaLayer&) = delete;
    GcMediaLayer& operator=(const GcMediaLayer&) = delete;
    int open(const char* iso_path);
    void close();
    int find(const char* path, GcFile* file) const;
    int read(const GcFile* file, uint64_t offset, void* data, size_t size) const;
    // Bounded access to the already validated image for native disc-stream adapters.
    int read_image(uint64_t offset, void* data, size_t size) const;
    // Callback context is borrowed and must outlive every native disc/partition
    // handle using it. Release those handles and stop readers before destruction.
    static int64_t stream_read_at(void* context, uint64_t offset, void* data, size_t size);
    static int64_t stream_length(void* context);
    static void stream_close(void* context);
    const GcDisc& disc() const { return disc_; }
    const GcFile& dol() const { return dol_; }
    const GcDolInfo& dol_info() const { return dol_info_; }
private:
    static int read_at(void*, uint64_t, void*, size_t);
    int fd_ = -1;
    GcDisc disc_{};
    GcFile dol_{};
    GcDolInfo dol_info_{};
};
}
