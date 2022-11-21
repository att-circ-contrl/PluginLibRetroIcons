#ifndef RETRO_ICONS_16_H_DEFINED
#define RETRO_ICONS_16_H_DEFINED

namespace RetroIcons
{
	// Functions that instantiate monochrome icons.

	// Settings button image (wrench).
	Image* BuildIcon16_Wrench(Colour bgcolour, Colour fgcolour);

	// Connected image (cable).
	Image* BuildIcon16_Connected(Colour bgcolour, Colour fgcolour);

	// Disconnected image (cable).
	Image* BuildIcon16_Disconnected(Colour bgcolour, Colour fgcolour);


	// Palette-based icons.

	// Indicator lamp image.
	Image* BuildIcon16_IndicatorLamp(Colour bgcolour, Colour outlinecolour, Colour lampcolour, Colour highlightcolour);
}

#endif

// This is the end of the file.
