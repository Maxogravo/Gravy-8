# Instruction Set Architecture (ISA)
The unique architecture for the CPU.

## Instructions
| Instruction | words | 
* No Operation x1
* Move (reg A to reg B) x2
* Move Immediate (reg B) x3
* Swap (reg A and reg B) x2
* Load (ram addr to register) x4
* Store (register to ram addr) x3
* Store Immediate (to ram addr) x4
* Push (reg A) x2
* Pop (reg A) x2
* Call x2
* Return x1
* Add x2
* Sub x2
* Divide x2 
* Multiply x2
* Left Shift x2
* Right Shift x2
* Increment x2
* Decrement x2
* Jump x3
* Jump if zero x3
* Jump if negative x3
* Jump if carry x3
* And x2
* Or x2
* Xor x2
* Not x2
* Set Core 2 Target x3
* Set Core 3 Target x3
* Set Core 4 Target x3
* Toggle Core 2 x1
* Toggle Core 3 x1
* Toggle Core 4 x1
* Reset System x1
* Halt x1

## Instruction Structure
* First Word (1 Byte): The Opcode
* Following words can either be:
    - Registers 00000000 = loc A, loc B, loc C, unsigned (Each two bits)
    - Addresses (Two words)
    - Immediates
