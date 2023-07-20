## Flatbuffer_Melodies firmware

The Flatbuffer_Melodies firmware is developed using PlatformIO and VS Code, providing several advantages over the Arduino environment. PlatformIO offers flexibility with support for multiple platforms and frameworks, while VS Code provides a feature-rich code editor. PlatformIO's efficient build system reduces compilation times and firmware size. The unified project structure and CLI facilitate automation and collaboration. Debugging support is robust, and the library manager simplifies library management. Overall, this combination enhances development experience, productivity, and enables advanced firmware development for ESP32 devices.

## Project Structure

The firmware project has the following structure:

- `src/main.cpp`: The main file containing the `setup()` and `loop()` functions. This is where the firmware's execution starts.

- `lib`: A directory containing the header files used in the firmware. These files define functions, classes, and structures used throughout the project.

- `data`: A directory containing HTML files and other binaries used in the firmware. These files are stored in a separate LittleFS partition on the device. On the local system, they can be found in the `data` directory.

- `flatbuffer`: A directory containing the flatbuffer(flatcc) declarations for the firmware. These files define the message structures used for communication.

## Setting up environment

Find detailed instructions on to set up your environment [here](https://code.k9network.org/K9network/FlatbufferMelodies/src/branch/master/Firmware/platform_io.md) 

## Todo:

Implement skeleton project which will:use the structure provided in the [Melodies flatbuffer IDL](https://code.k9network.org/K9network/FlatbufferMelodies/src/branch/master/Firmware/flatbuffer) file, 


- It must compile and run on any ESP32 MCU

It must contain

- void GenerateRandomTone() which will create a melody file containing 2 or more tones and write it to the littleFS filesystem on the ESP32. 
- void PlayMelody(const String& Filename) which will read the contents of the file including Label and embedded tones and print each Freq/Duration (each freq/duration on a separate line)

## Note:

Currently it does not compile and the code is provided as example only
