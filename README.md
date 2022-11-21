# Retro Icons Library

## Overview

This library provides functions that build JUCE `Image` objects that contain
various icons and images useful for Open Ephys plugin development.

To get an image with a specific icon, call the generator function for that
icon. The constructor takes arguments that let you specify the icon colours.

To make your own custom icons, make a character array with pixel art and pass
it to one of the generic generator functions.

You are responsible for deleting the resulting `Image` objects after
construction; the generators don't keep track of them.

## Classes

The generig generator functions take a character array with pixel art as one
argument, and a list or lookup table of colours as additional arguments.

This library provides two generic generator functions:
* `BuildIconMonochrome` - This constructs a two-colour image. Pixels specified as `' '` are the background colour; anything else is the foreground colour.
* `BuildIconPalette` - This constructs an image with more than two colours. You pass it a lookup table specifying which characters are translated to which colours. Any unrecognized character gets a default colour.

The library's individual icon generators call the generic generators, and
specify hard-coded image pixel art and dimensions while letting the user
specify the colours.

The following icon generator functions are provided:
* ![Connected16](./Auxiliary/connect16-orange.png) `BuildIcon16_Connected`
* ![Disconnected16](./Auxiliary/disconnect16-orange.png) `BuildIcon16_Disconnected`
* ![IndicatorLamp16](./Auxiliary/lamp16-yellow-on-blue.png) `BuildIcon16_IndicatorLamp`
* ![Wrench16](./Auxiliary/wrench16-blue.png) `BuildIcon16_Wrench`

## (From Open Ephys's documentation): Providing libraries for Windows

Since Windows does not have standardized paths for libraries, as Linux and macOS do, it is sometimes useful to pack the appropriate Windows version of the required libraries alongside the library files.
To do so, a *libs* directory has to be created **at the top level** of the repository, alongside this README file, and files from all required libraries placed there. The required folder structure is:
```
    libs
    ├─ include           #library headers
    ├─ lib
        ├─ x64           #64-bit compile-time (.lib) files
        └─ x86           #32-bit compile time (.lib) files, if needed
    └─ bin
        ├─ x64           #64-bit runtime (.dll) files
        └─ x86           #32-bit runtime (.dll) files, if needed
```
DLLs in the bin directories will be copied to the open-ephys GUI *shared* folder when installing.

_(This is the end of the file.)_
