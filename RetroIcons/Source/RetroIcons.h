#ifndef RETRO_ICONS_H_DEFINED
#define RETRO_ICONS_H_DEFINED

#include <CommonLibHeader.h>
#include <map>

namespace RetroIcons
{
	// Functions that instantiate arbitrary images.
	// NOTE - These have no bounds checking! Use with caution.

	// Generic two-colour icon.
	// Pixels with value ' ' are background; anything else is foreground.
	Image* BuildIconMonochrome(int width, int height, const char *pixels, Colour bgcolour, Colour fgcolour);

	// Icon built with a colour lookup table.
	// Pixels with values found in the lookup table use LUT values. Anything else uses the default.
	Image* BuildIconPalette(int width, int height, const char *pixels, Colour defaultcolour, std::map<char,Colour> palette);
}

// Specific icon instances.
#include "RetroIcons16.h"

#endif

// This is the end of the file.
