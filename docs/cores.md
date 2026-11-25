# Cores
The Gravy 8 has 4 cores. 2 effeciency cores and 2 power cores.

* Core 1: Efficiency
* Core 2: Efficiency
* Core 3: Power
* Core 4: Power

Each core conatins the following:
* PC
* ALU
* Decoder

## Efficiency Cores
Efficiency Cores are very straightforward. A simple FDE cycle. One instruction at a time.

## Power Cores
Uses pipelining to run multiple instructions.
### Pipelining 
The core multitasks each cycle performing multiple operations per cycle. On an effciency core it works a little something like this:
    -  Cycle 1: Fetch Instruction 1
    -  Cycle 2: Decode Instruction 1
    -  Cycle 3: Execute Instruction 1
However on a power core it looks like this:
    -  Cycle 1: Fetch Instruction 1
    -  Cycle 2: Fetch Instruction 2, Decode Instruction 1
    -  Cycle 3: Fetch Instruction 3, Decode Instruction 2, Execute Instruction 1

