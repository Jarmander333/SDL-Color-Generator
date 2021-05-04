# SDL-Color-Generator

A SDL Color Generator written in C++ 

## Technologies Used

This program was assembled with the following technologies:

Linux Version:
* GCC 9.3.0
* Vim 8.2.0000

Windows Version:
* MSVC 2010 x86 (32-bit for compatibility)
* Visual Studio 2010 Ultimate

## Folder Structure

"sdl2.cpp" is the source code, and "a.out" is the executable for Ubuntu.  Run "./a.out" in the folder in terminal, and the program should run.  For the Windows version, "SDL-Color-Generator is the root folder, "Debug" contains the executable, while "main" contains the source code.  

**NOTE**: If the program doesn't run, or says an error that a.out is not executable on Linux, run the command "chmod +x a.out" to make the file executable.  On Windows if you get an error saying that "SDL.dll could not be found" or something like that, make sure that the SDL.dll is installed alongside the program.  https://libsdl.org/. 

## Brief How-to

$ ls

a.out  sdl2.cpp

$ ./a.out

Please select the amount of RED you'd like 0-255: 238

Please select the amount of GREEN you'd like 0-255: 163

Please select the amount of BLUE you'd like 0-255: 54

Please select the amount of ALPHA you'd like 0-255: 37

Preparing to make a window with the color 238, 163, 54, 37.

Made a window with the color 238, 163, 54, 37.

This would make a window filling the screen with this color: https://www.color-hex.com/color/eea336 (Hex #EEA336)

## How to Build "sdl2.cpp"

* On Debian based systems (Ubuntu, Kubuntu, Lubuntu, Debian) install the SDL2 header files, the SDL2 runtime, and GCC  `sudo apt-get install libsdl2-2.0 libsdl2-dev build-essential`

NOTE: Now I'm not some genius who knows how to install everything on every Linux flavor ever released, but all you need to install are the SDL2 development libraries, the SDL2 runtime, and GCC.  Also, maybe in the future I may go further in depth about compiling on a Windows machine with Visual Studio, but for now, that's a bit long, so I'll hope you know how to set up Include, and Library paths.  
