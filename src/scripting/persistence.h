/*
 * Copyright (C) 2006-2010 by the Widelands Development Team
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 */

#ifndef WL_SCRIPTING_PERSISTENCE_H
#define WL_SCRIPTING_PERSISTENCE_H

#include <string>

#include "third_party/eris/lua.hpp"

class FileRead;
class FileWrite;

namespace Widelands {
	class MapMapObjectLoader;
	struct Map_Map_Object_Saver;
	class Editor_Game_Base;
	class Game;
}


/**
 * This persists the lua object at the stack position
 * 2 after populating the (empty) table at position 1
 * with the items given in globals.
 */
uint32_t persist_object
	(lua_State * L,
	 FileWrite &, Widelands::Map_Map_Object_Saver &);

// Does all the unpersisting work. The unpersisted object is at the top of the
// stack after the function returns.
void unpersist_object
	(lua_State * L,
	 FileRead & fr, Widelands::MapMapObjectLoader & mol,
	 uint32_t size);

#endif  // end of include guard: WL_SCRIPTING_PERSISTENCE_H
