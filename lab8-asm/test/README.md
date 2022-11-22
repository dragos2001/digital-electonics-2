# Lab 8: INSERT_YOUR_FIRSTNAME INSERT_YOUR_LASTNAME

### Instruction set

1. Complete the conversion table with selected instructions:

   | **Instruction** | **Binary opcode** | **Hex opcode** | **Compiler Hex opcode** |
   | :-- | :-: | :-: | :-: |
   | `add r24, r0` | 0000 1101 1000 1010 | D8A | 0xD8A |
   | `com r26` | 1001 0101 1010 0000 | 95A0  | 0x95A0  |
   | `eor r26, r27` | 0010	0111	1010	1011  | 27AB  | 0x27AB   |
   | `mul r22, r20` |  1001	1111	0110	0100 | 4F64 | 0x4F64  |
   | `ret` | `1001_0101_0000_1000` | 95 08 | 0x95 08  |

### 4-bit LFSR

2. Complete table with 4-bit LFSR values for different Tap positions:

   | **Tap position** | **Generated values** | **Length** |
   | :-: | :-- | :-: |
   | 4, 3 | 0 1 3 7 14 13 11 6 12 9 2 5 10 4 8 | 15  |
   | 4, 2 | 0 1 3 6 12 8 | 6 |
   | 4, 1 | 0 1 2 5 10 4 9 3 6 13 11 7 14 12 8 | 15 |

### Variable number of short pulses

3. Draw a flowchart of function `void burst_c(uint8_t number)` which generates a variable number of short pulses at output pin. Let the pulse width be the shortest one. The image can be drawn on a computer or by hand. Use clear descriptions of the individual steps of the algorithms.

   ![](lab8-asm/images/burstchart.jpg)
