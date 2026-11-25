# Plan for future Max

## How the CPU operates
* Boots
* reset vectors are fetched from 0x0 and 0x1 of rom
* PC set to reset vectors 
* Core 1 (Efficiency) Starts executing from PC

## Different Files:
* graphics.h (Acts as a graphics card, reads from 0x0 to 0xFFF and updates screen using each address as a pixel)
* cpu.h (Contains registers and instruction decoder, performs FDE)
* memory.h (idk js seems necessary)
* emulator.cpp (main program, contains everything that the user interracts with ansd brings all other files together)