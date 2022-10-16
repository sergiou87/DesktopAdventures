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

#ifndef PLAYER_H
#define PLAYER_H

#include "character.h"

extern enum MAP_CHANGE_REASON {
    MAP_CHANGE_NONE,
    MAP_CHANGE_DOOR_IN,
    MAP_CHANGE_DOOR_OUT,
    MAP_CHANGE_VEHICLE_TO,
    MAP_CHANGE_VEHICLE_FROM,
    MAP_CHANGE_XWING_TO,
    MAP_CHANGE_XWING_FROM,
    MAP_CHANGE_SCRIPT,
} MAP_SWAP_REASON;

void player_equip_item(u16 inv_slot);
void player_add_item_to_inv(u16 item);
void player_remove_item_from_inv(u16 item);
bool player_has_item(u16 item);

bool player_collides(int dir, int x, int y);
void player_stand(int x, int y);
void player_face(int dir);
void player_move(int dir);
void player_goto_door_in();
void player_update();
void player_init();

extern entity player_entity;
extern u16 player_experience;
extern u16 *player_inventory;
extern u16 player_inventory_count;
extern u16 PLAYER_EQUIPPED_ITEM;
extern bool player_position_updated;
extern u16 PLAYER_MAP_CHANGE_TO;
extern u8 PLAYER_MAP_CHANGE_REASON;
extern int CURRENT_ITEM_DRAGGED;

#endif