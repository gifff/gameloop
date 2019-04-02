# gameloop

This project is Game Programming (OpenGL) exercises project for mac OS platform.
The original project given from the lecturer is written using Visual Studio and the dependencies are for Windows (DLLs).

I rewrite the project in Xcode as I'm using mac OS for the development. Another thing to state is that because some dependencies are incompatible for mac OS, I substitute them to similar ones.

Please note that the previous version of this project used glm 0.9.9.3. However, I updated them to 0.9.9.4, if you use the earlier version of the project (or currently using glm 0.9.9.3), please update your glm version through HomeBrew or see the install specific version below.

Requirements:
 - Xcode 10

Dependencies:
 - glm 0.9.9.4
 - SDL2
 - SDL2 Mixer (for lesson07 and above)
 - glew 2.1.0
 - freetype 2.10.0 (for lesson08)
 
 Substitutes:
  - libSOIL to stb_image ([https://github.com/nothings/stb/blob/master/stb_image.h](https://github.com/nothings/stb/blob/master/stb_image.h) (built into the project))

## How to install dependencies

### Installing SDL2

Please download from the official site here:
[https://www.libsdl.org/download-2.0.php](https://www.libsdl.org/download-2.0.php)

Please find the download file under **Development Libraries** section.

Then follow the ReadMe.txt.

## Installing SDL2 Mixer

SDL2 Mixer is required for lesson 07.

Please download from the official site here:
[https://www.libsdl.org/projects/SDL_mixer/](https://www.libsdl.org/projects/SDL_mixer/)

Please find the download file under **Development Libraries** section.

Then follow the ReadMe.txt.

### Installing GLEW and glm

```bash
brew install glew glm
```
NOTE:

As of writing this document, the HomeBrew formulae provided the latest version of glm and glew which match the required version above (glm 0.9.9.4 and glew 2.1.0).
However, it might change in the future.
To install specific version, execute these commands:

```bash
brew install https://raw.githubusercontent.com/Homebrew/homebrew-core/62415468c535e713fa10c3121bbf703244494f75/Formula/glm.rb
brew install https://raw.githubusercontent.com/Homebrew/homebrew-core/8479c1f6f95fccbeb0c213a55b2a9ef20f944eb4/Formula/glew.rb
```

### Installing freetype

```bash
brew install freetype
```

Install specific version (2.10.0):

```bash
brew install https://raw.githubusercontent.com/Homebrew/homebrew-core/5022e495c773f4995903c7803f32484627d828df/Formula/freetype.rb
```