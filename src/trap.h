/*
 *  Opensvs - A lightweight services for Hybrid ircd OFTC branch.
 *  Copyright (C) 2006 The Openbrasil Opensvs Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307
 *  USA
 *
 */

#ifndef _osvs_trap_h
#define _osvs_trap_h

#include <string.h>

typedef void trap_callback(char *sender, char *cmd, char *args);

typedef struct {
	char *cmd;
	trap_callback *cb;
} trap_entry;

extern trap_entry trap_table[];
extern int trap_table_sz;

extern trap_entry trap_pvt_table[];
extern int trap_pvt_table_sz;

#endif

