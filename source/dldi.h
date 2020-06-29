#ifndef __DLDI_H__
#define __DLDI_H__

/*

			Copyright (C) 2017  Coto
This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301
USA

*/

#include <stdbool.h>


#endif

//Coto: RAM Disk DLDI Implementation. DLDI RW Works (32MB @ 0x08000000) in emulators now!
extern void *armmemcpy( void *dest, const void *src, int n);
extern bool _DLDI_isInserted(void);
extern bool _DLDI_clearStatus(void);
extern bool _DLDI_shutdown(void);
extern bool _DLDI_startup(void);
extern bool _DLDI_readSectors(unsigned int sector, unsigned int sectorCount, unsigned char* buffer);
extern bool _DLDI_writeSectors(unsigned int sector, unsigned int sectorCount, const unsigned char* buffer);
