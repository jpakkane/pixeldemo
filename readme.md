# Sample app for using olcPixelGameEngine with Meson

This repo contains a sample application that uses both
[olcPixelGameEngine](https://github.com/OneLoneCoder/olcPixelGameEngine)
and Lua. Both ef these are automatically downloaded and built from
source during compilation. The game engine is obtained directly from
Git whereas Lua is obtained from [Meson
WrapDB](https://wrapdb.mesonbuild.com).

Building has only been tested on Windows and uses the following steps:

- install Meson and Ninja
- start a Visual Studio dev tools command prompt
- check out the code and `cd` into is
- `meson build`
- `meson compile -C build`
- run `build\pixeldemo`

Instead of Ninja you can also generate a Visual Studio project. See
the [Meson web site](https://mesonbuild.com) for more details.
