# ImGui-VS
A dependency based Visual Studio solution for ImGui.


## SDL2 - Download and configuration

This project requires the SDL2 library.


### Method 1 - Use Vcpkg

1. Download and install [Vcpkg](https://github.com/microsoft/vcpkg) on your system.
2. Open a command prompt or terminal and run the following commands to install SDL2 using Vcpkg:
```
vcpkg install sdl2
```
This will download and install the SDL2 libraries and its dependencies.


### Method 2 - Manual installation

First, you need to download and install the SDL2 development libraries and configure your environment to use them.
Here's how to proceed:
1. Go to the [SDL GitHub release page](https://github.com/libsdl-org/SDL/releases/latest) and download the appropriate SDL2 development libraries (e.g., ``SDL2-devel-2.x.x-VC.zip``).
2. Extract the contents of the downloaded file to a folder on your computer (e.g., `C:\SDL2`).

Now you need to set up the ``SDL2_DIR`` environment variable to point to the SDL2 installation folder.
Here's how to do it:
1. Open the Windows Control Panel and go to "System and Security" > "System" > "Advanced system settings" > "Environment Variables".
2. In the "User variables" section, click "New" to create a new variable.
3. Set the variable name to ``SDL2_DIR`` and the variable value to the path to the SDL2 installation folder (e.g., ``C:\SDL2``).
4. Click "OK" to save the variable.


That's it!
