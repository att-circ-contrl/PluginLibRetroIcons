#include "RetroIcons.h"

using namespace RetroIcons;


//
// Functions that instantiate arbitrary images.
// NOTE - These have no bounds checking! Use with caution.


namespace RetroIcons
{


// Generic two-colour icon.
// Pixels with value ' ' are background; anything else is foreground.
// NOTE - This has no bounds checking! Use with caution.

Image* BuildIconMonochrome(int width, int height, const char *pixels, Colour bgcolour, Colour fgcolour)
{
    Image *result = new Image(Image::PixelFormat::ARGB, width, height, true);

    for (int hidx = 0; hidx < width; hidx++)
        for (int vidx = 0; vidx < height; vidx++)
        {
            char thischar = pixels[vidx * width + hidx];
            result->setPixelAt( hidx, vidx, (thischar == ' ' ? bgcolour : fgcolour) );
        }

    return result;
}


// Icon built with a colour lookup table.
// Pixels with values found in the lookup table use LUT values. Anything else uses the default.
// NOTE - This has no bounds checking! Use with caution.
// NOTE - Passing the map by value lets us build it on the fly in-line using C++11 initialization syntax, if desired.

Image* BuildIconPalette(int width, int height, const char *pixels, Colour defaultcolour, std::map<char,Colour> palette)
{
    Image *result = new Image(Image::PixelFormat::ARGB, width, height, true);

    for (int hidx = 0; hidx < width; hidx++)
        for (int vidx = 0; vidx < height; vidx++)
        {
            char thischar = pixels[vidx * width + hidx];
            if ( palette.count(thischar) > 0 )
                result->setPixelAt( hidx, vidx, palette[thischar] );
            else
                result->setPixelAt( hidx, vidx, defaultcolour );
        }

    return result;
}


// namespace RetroIcons
}


//
// This is the end of the file.
