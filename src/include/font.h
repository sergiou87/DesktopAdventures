#ifndef FONT_H
#define FONT_H

// Font data for Coder's Crux 12pt, by NAL

typedef struct
{
    int width;  // Character width in bits.
    int offset; // Offset in bytes into font bitmap.
} FONT_CHAR_INFO;

typedef struct
{
    int height;                                   // Character height in bits.
    char start_char;                              // Start character.
    char end_char;                                // End character.
    char space_width;                             // Space width
    const FONT_CHAR_INFO *p_character_descriptor; // Character decriptor array.
    const u8 *p_character_bitmaps;                // Character bitmap array.
} FONT_INFO;

#define DESKADV_FONT_FONT_HEIGHT (9)
#define DESKADV_INV_FONT_HEIGHT (10)

extern const u8 deskAdvFontBitmaps[846];
extern const FONT_INFO deskAdvFontFontInfo;
extern const FONT_CHAR_INFO deskAdvFontDescriptors[94];

extern const u8 deskAdvInvFontBitmaps[980];
extern const FONT_INFO deskAdvInvFontInfo;
extern const FONT_CHAR_INFO deskAdvInvFontDescriptors[94];

#endif
