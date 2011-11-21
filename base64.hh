/*
 * 
 * This is port of OpenHttpStreamer for win32
 * copyright (c) 2011 andrew.kondratovich@gmail.com
 * 
 * Originally:
 * copyright (c) 2010 ZAO Inventos (inventos.ru)
 * copyright (c) 2010 jk@inventos.ru
 * copyright (c) 2010 kuzalex@inventos.ru
 * copyright (c) 2010 artint@inventos.ru
 *
 * This file is part of mp4frag.
 *
 * mp4grag is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * mp4frag is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 */

#ifndef __base64_hh__e9c78cb8_9990_4225_b6e9_f8da6edbe0f3
#define __base64_hh__e9c78cb8_9990_4225_b6e9_f8da6edbe0f3

#include <iostream>

namespace base64 {
    void encode( ::std::streambuf *, const char *, size_t );
}

#endif
