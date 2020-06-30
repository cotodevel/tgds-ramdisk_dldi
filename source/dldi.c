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

#include "dldi.h"
#include <stdbool.h>

/////////////////////////////////////////////////// RAM Disk DLDI Implementation ////////////////////////////////////////////

bool _DLDI_isInserted(void)
{
	return true;	//Always True
}

bool _DLDI_clearStatus(void)
{
    return true;	//Always True
}

bool _DLDI_shutdown(void)
{
    return true;	//Always True
}

bool _DLDI_startup(void)
{
    return true;	//Always True
} 

bool _DLDI_writeSectors(unsigned int sector, unsigned int sectorCount, const unsigned char* buffer)
{
	int sectorSize = 512;
	int curSector = 0;
	while(sectorCount > 0)
	{
        armmemcpy(((unsigned char*)0x08000000 + ((sector+curSector)*sectorSize)), (buffer + (curSector*sectorSize)), sectorSize);
		curSector++;
		--sectorCount;
	}
    return true;
}

bool _DLDI_readSectors(unsigned int sector, unsigned int sectorCount, unsigned char* buffer)
{
	int sectorSize = 512;
	int curSector = 0;
	while(sectorCount > 0)
	{
        armmemcpy(buffer + (curSector*sectorSize), ((unsigned char*)0x08000000 + ((sector+curSector)*sectorSize)), sectorSize);
		curSector++;
		--sectorCount;
	}
    return true;
}

//////////////////////////////////////////////// RAM Disk DLDI Implementation End ///////////////////////////////////////////
