/* BELT (STB 34.101.31) Hash Function Implementation
 * Copyright (C) 2015  Evgeny Sidorov <luc-lynx@yandex.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <string>
#include <stdio.h>
#include <inttypes.h>
#include <string.h>

#include <stdio.h>
#include <bee2/defs.h>
#include <bee2/core/mem.h>
#include <bee2/core/hex.h>
#include <bee2/core/u32.h>
#include <bee2/core/util.h>
#include <bee2/core/word.h>
#include <bee2/crypto/belt.h>
#include <stdio.h>
#include <inttypes.h>
#include <string.h>


extern "C"
{
	__declspec(dllexport) void test_belt_hash_bytes(octet* result, char* hash) {
		beltHash(result, beltH(), 32);

		hash = "asas";
	}
}


