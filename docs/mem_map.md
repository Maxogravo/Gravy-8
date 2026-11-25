# Memory Map
The maximum amount of RAM the gravy 8 can support is 64kb.
The maximum amount of ROM the gravy 8 can support is 64kb.

## ROM
* 0x0 - 0x1: Reset Vectors (Used to determine starting point for the PC)
* 0x2+ Free ROM! Can be used for programs, character sets, anything!

## RAM 
* 0x0 - 0xFFF: Framebuffer (Each Address Represents a pixel)
* 0x1000 - 0x10FF: Input Buffer
* 0x1100 - 0x11FF: Audio Registers
* 0x1200 - 0xFFFF: Free Use