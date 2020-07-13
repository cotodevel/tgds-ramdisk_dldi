tgds-ramdisk_dldi

Update 0.1.2:
- Remove static DLDI allocation, all compiled objects are ordered the way they should: dynamically, while filling DLDI binary to 16K

Update 0.1.1:
-Add ToolchainGenericDS environment and distributed DLDI is generated from it.

First Release 0.1: Add TGDS Project


A NEAT ToolchainGenericDS tool. Enables Ramdisk DLDI for emulators mapping a FAT16/FAT32 filesystem to GBA's Slot-2. 
DSOrganize, SnemulDS, and TGDS Projects can now mount and work with TGDS Filesystem's DLDI code. 
devkitARM homebrew working as well!!

This DLDI supports R/W but GBA Slot-2 is mapped @0x08000000 and apparently it's Read only. Not my fault!

How to:
Download http://memory.dataram.com/products-and-services/software/ramdisk#freeware, mount a RAMDisk, copy files to it. 
Then use Desmume, choose Slot-2 (Gba slot) -> GBA Cartridge, choose the RAMDisk!. 
Launch emulator, TGDS Project now works with DLDI (32MB @ 0x08000000)!


Compile with dkARM r43: Makefile_dkarm (rename it to Makefile) -> make clean -> make

Compile with TGDS 1.6: Makefile -> make clean -> make
License: GPLv2

Notes:
TGDS RAMDISK only works mapped : GBA Slot-2 @ ARM9

Coto.