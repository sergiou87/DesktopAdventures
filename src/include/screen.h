/*  DesktopAdventures, A reimplementation of the Desktop Adventures game engine
 *
 *  DesktopAdventures is the legal property of its developers, whose names
 *  can be found in the AUTHORS file distributed with this source
 *  distribution.
 *
 *  DesktopAdventures is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, see <http://www.gnu.org/licenses/>
 */

#include "useful.h"

extern unsigned short tiles_low[0x100 * 0x100];
extern unsigned short tiles_middle[0x100 * 0x100];
extern unsigned short tiles_middle_overlay[0x100 * 0x100];
extern unsigned short tiles_high[0x100 * 0x100];
extern unsigned short tiles_overlay[0x100 * 0x100];

extern char *active_text;
extern int active_text_x;
extern int active_text_y;

extern void init_screen();
extern int draw_screen();
extern void screen_transition_in();
extern void screen_transition_out();

extern u32 SCREEN_WIDTH;
extern u32 SCREEN_HEIGHT;

extern int SCREEN_SHIFT_X;
extern int SCREEN_SHIFT_Y;
extern u8 SCREEN_FADE_LEVEL;
extern u16 TARGET_TICK_FPS;
