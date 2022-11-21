//include <EditorHeaders.h>
#include "RetroIcons.h"

using namespace RetroIcons;


//
// Common constants.

#define ICON16_WIDTH 16
#define ICON16_HEIGHT 16



//
// Wrench image definition.

const char wrench16picture[ICON16_WIDTH*ICON16_HEIGHT] =
{ ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#',' ',' ',' ',' ',
  ' ',' ',' ',' ',' ',' ',' ','#','#','#','#',' ',' ',' ',' ',' ',
  ' ',' ',' ',' ',' ',' ',' ','#','#','#',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ',' ',' ',' ',' ','#','#','#','#',' ',' ',' ','#',' ',
  ' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#',' ','#','#',' ',
  ' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#',' ',
  ' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#',' ',
  ' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#',' ',' ',
  ' ',' ',' ','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',
  ' ',' ','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',
  ' ','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ',' ','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' };


//
// "Connected" image definition.

const char connected16picture[ICON16_WIDTH*ICON16_HEIGHT] =
{ ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',

  ' ',' ',' ',' ',' ',' ','x','x','x','x',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ',' ',' ',' ','x',' ',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ',' ',' ',' ','x',' ','x','x',' ',' ',' ',' ',' ',' ',
  'x','x','x','x','x','x','x',' ','x','x','x','x','x','x','x','x',

  'x','x','x','x','x','x','x',' ','x','x','x','x','x','x','x','x',
  ' ',' ',' ',' ',' ',' ','x',' ','x','x',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ',' ',' ',' ','x',' ',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ',' ',' ',' ','x','x','x','x',' ',' ',' ',' ',' ',' ',

  ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' };


//
// "Disconnected" image definition.

const char disconnected16picture[ICON16_WIDTH*ICON16_HEIGHT] =
{ ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',

  ' ',' ',' ','x','x','x','x',' ',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ','x',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ','x',' ',' ',' ',' ',' ',' ',' ','x','x',' ',' ',' ',
  'x','x','x','x',' ',' ',' ',' ',' ',' ',' ','x','x','x','x','x',

  'x','x','x','x',' ',' ',' ',' ',' ',' ',' ','x','x','x','x','x',
  ' ',' ',' ','x',' ',' ',' ',' ',' ',' ',' ','x','x',' ',' ',' ',
  ' ',' ',' ','x',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ','x','x','x','x',' ',' ',' ',' ',' ',' ',' ',' ',' ',

  ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
  ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' };


//
// Indicator lamp image definition.

const char lamp16picture[ICON16_WIDTH*ICON16_HEIGHT] =
{ 'b','b','b','b','b','b',' ',' ',' ',' ','b','b','b','b','b','b',
  'b','b','b','b',' ',' ',' ',' ',' ',' ',' ',' ','b','b','b','b',
  'b','b',' ',' ',' ',' ','l','l','l','l',' ',' ',' ',' ','b','b',
  'b','b',' ',' ','l','l','l','l','l','l','l','l',' ',' ','b','b',

  'b',' ',' ','l','l','l','l','l','#','#','l','l','l',' ',' ','b',
  'b',' ',' ','l','l','l','l','l','l','#','#','l','l',' ',' ','b',
  ' ',' ','l','l','l','l','l','l','l','l','#','#','l','l',' ',' ',
  ' ',' ','l','l','l','l','l','l','l','l','l','#','l','l',' ',' ',

  ' ',' ','l','l','#','l','l','l','l','l','l','l','l','l',' ',' ',
  ' ',' ','l','l','#','#','l','l','l','l','l','l','l','l',' ',' ',
  'b',' ',' ','l','l','#','#','l','l','l','l','l','l',' ',' ','b',
  'b',' ',' ','l','l','l','#','#','l','l','l','l','l',' ',' ','b',

  'b','b',' ',' ','l','l','l','l','l','l','l','l',' ',' ','b','b',
  'b','b',' ',' ',' ',' ','l','l','l','l',' ',' ',' ',' ','b','b',
  'b','b','b','b',' ',' ',' ',' ',' ',' ',' ',' ','b','b','b','b',
  'b','b','b','b','b','b',' ',' ',' ',' ','b','b','b','b','b','b' };


//
// Constructors for specific monochrome images.


namespace RetroIcons
{


// NOTE - If image dimensions don't match image pixel buffer size, bad things will happen. Use caution.

Image* BuildIcon16_Wrench(Colour bgcolour, Colour fgcolour)
{
    return BuildIconMonochrome(ICON16_WIDTH, ICON16_HEIGHT, wrench16picture, bgcolour, fgcolour);
}


Image* BuildIcon16_Connected(Colour bgcolour, Colour fgcolour)
{
    return BuildIconMonochrome(ICON16_WIDTH, ICON16_HEIGHT, connected16picture, bgcolour, fgcolour);
}


Image* BuildIcon16_Disconnected(Colour bgcolour, Colour fgcolour)
{
    return BuildIconMonochrome(ICON16_WIDTH, ICON16_HEIGHT, disconnected16picture, bgcolour, fgcolour);
}


//
// Constructors for specific palette-based images.

// NOTE - If image dimensions don't match image pixel buffer size, bad things will happen. Use caution.

// NOTE - We're building maps on the fly using C++11 initializers. This is compact but might not be supported by all compilers.

Image *BuildIcon16_IndicatorLamp(Colour bgcolour, Colour outlinecolour, Colour lampcolour, Colour highlightcolour)
{
    return BuildIconPalette( ICON16_WIDTH, ICON16_HEIGHT, lamp16picture, bgcolour,
        {{' ',outlinecolour},{'l',lampcolour},{'#',highlightcolour}} );
}


// namespace RetroIcons
}


//
// This is the end of the file.
