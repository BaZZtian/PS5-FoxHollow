<p align="center">
  <img src="assets/branding/foxhollow-icon-v2.png" width="160" alt="FoxHollow fox emblem">
</p>

<h1 align="center">FoxHollow</h1>
<p align="center"><strong>A dedicated native PlayStation 5 port project for Star Fox Adventures.</strong></p>
<p align="center">Target firmware 12.40 | Bring your own GameCube disc image</p>

![FoxHollow original project artwork](assets/branding/foxhollow-background-v3.png)

## About

FoxHollow brings the native [Foxhollow](https://github.com/JackPriceBurns/foxhollow)
foundation to a dedicated PS5 homebrew project. That foundation is built on
[SFA-Decomp](https://github.com/zcanann/SFA-Decomp) and
[Aurora](https://github.com/encounter/aurora).

Maintained by **BaZZtian**, with the goal of a standalone PS5 homebrew title
using native graphics, audio and DualSense input. FoxHollow is dedicated to
this game and uses the native PC port as its foundation.

**Version 0.1.4: early PAL release tested on PS5 firmware 12.40.**

## Requirements

- A homebrew-capable PlayStation 5. Target firmware: **12.40**.
- Your own legally obtained **Star Fox Adventures** GameCube disc image.

This release supports **Europe / PAL (`GSAP01`)** on PS5 firmware **12.40**,
including gameplay, language selection and save/load.
**North America / NTSC-U (`GSAE01`)** has not been verified.

**No game disc or original game assets are included.** Disc images, extracted
original executables, textures, music and saves must not be uploaded to this
repository or attached to issues. The separate source archive contains the
native port/reconstruction sources and their original license notices.

## Download and installation

Download `FoxHollow-0.1.4-PPSA99573.zip` from the
[Releases page](https://github.com/BaZZtian/PS5-FoxHollow/releases/tag/v0.1.4).
Extract the `PPSA99573` folder to `/data/homebrew/` on your console, then launch
FoxHollow through your native homebrew title launcher. Place your own PAL
`GSAP01` disc image at `/data/foxhollow/media/game.iso`. Game data is not included.
Keep `/data/foxhollow/state/` when updating; it contains your settings and saves.

Version 0.1.4 corrects the language-menu layout and memory-card file inspection.
The language selection is in the existing LANGUAGE menu. Original HUD artwork,
widescreen switching and configurable PS5 controls are retained.

The same release provides `FoxHollow-0.1.4-source.tar.gz`, containing the
corresponding port/platform/dependency sources, build instructions and original
license notices. The bundled platform/runtime includes GPL-3.0-or-later code;
the repository's MIT notice does not replace third-party licenses.

## Credits

This project depends on the work of the following upstream communities:

| Project | Authors / maintainers | Contribution |
| --- | --- | --- |
| [SFA-Decomp](https://github.com/zcanann/SFA-Decomp) | zcanann and SFA-Decomp contributors | Star Fox Adventures decompilation forming the native foundation |
| [Foxhollow](https://github.com/JackPriceBurns/foxhollow) | JackPriceBurns and Foxhollow contributors | Native PC port used as the PS5 integration reference |
| [Aurora](https://github.com/encounter/aurora) | encounter and Aurora contributors | Graphics compatibility framework used by the native foundation |
| [ps5-payload-sdk](https://github.com/ps5-payload-dev/sdk) | Open PS5 payload SDK contributors | Open homebrew target toolchain |
| [PS5_Vulkan](https://github.com/mihawk-99/PS5_Vulkan) | mihawk-99 and contributors | Native PS5 platform, graphics integration and conversion tooling |
| Native app runtime/companion | BlackBearReloaded and ps5-native-app-boilerplate contributors | Native startup/runtime and generated loader companion; original GPL notices retained |
| [Dawn](https://dawn.googlesource.com/dawn) | The Dawn Authors and contributors | WebGPU implementation used by the rendering stack |
| [Mesa / RADV](https://gitlab.freedesktop.org/mesa/mesa) | Mesa contributors and the RADV developers | Vulkan graphics driver |
| [SDL](https://github.com/libsdl-org/SDL) | Sam Lantinga and SDL contributors | Windowing, audio and controller support |

Borealis, nod, Dear ImGui, FreeType, libpng, fmt, SQLite, Tracy, xxHash, zlib,
Zstandard, Corrosion and the remaining transitive dependencies also retain
their original authorship and notices in the corresponding source archive.
BaZZtian maintains this PS5 integration; upstream authors retain credit for
their engines, libraries and platform work.

## Licensing and attribution

SFA-Decomp and Foxhollow publish CC0-1.0 declarations. Their notices and those
of separately licensed dependencies remain applicable. A root license does
not automatically cover every nested component or the original game data.

The existing [MIT license](LICENSE) covers the independently authored code
previously distributed under that grant. Upstream components retain their own
licenses, copyright notices and attribution.

The distributed application combines separately licensed components:

| Scope | License information |
| --- | --- |
| Independently authored repository code already covered by the existing grant | MIT; see [LICENSE](LICENSE) |
| SFA-Decomp / Foxhollow native foundation | Upstream CC0-1.0 declarations, with nested dependency notices preserved |
| Native PS5 platform/runtime and generated companion | GPL-3.0-or-later notices and corresponding sources included with the release |
| Aurora, Dawn, SDL, Mesa/RADV and other dependencies | Their own component/file licenses; see the bundled notices and source archive |

The Store's `MIT AND GPL-3.0-or-later` expression summarizes the repository and
platform/runtime scopes. It is not an exhaustive replacement for dependency
licenses and does not relicense third-party files. The root MIT notice does
not describe the entire combined executable.

This is an unofficial homebrew project, not affiliated with, endorsed by or
sponsored by Nintendo or Rare. Original game content remains the property of
its respective rights holders.
