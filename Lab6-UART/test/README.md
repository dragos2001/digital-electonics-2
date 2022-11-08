
This directory is intended for PlatformIO Test Runner and project tests.

Unit Testing is a software testing method by which individual units of
source code, sets of one or more MCU program modules together with associated
control data, usage procedures, and operating procedures, are tested to
determine whether they are fit for use. Unit testing finds problems early
in the development cycle.

More information about PlatformIO Unit Testing:
- https://docs.platformio.org/en/latest/advanced/unit-testing/index.html
# Lab 6: INSERT_YOUR_FIRSTNAME INSERT_YOUR_LASTNAME

### ASCII

1. Complete the table with selected ASCII codes.

   | **Char** | **Decimal** | **Hexadecimal** | **Binary** |
   | :-: | :-: | :-: | :-: |
   | `a` | 97 | 0x61 | `0b0110_0001` |
   | `b` |  98 | 0x62 | `0b0110_0010` |
   | `c` | 99 | 0x63  | `0b0110_0011`|
   | `0` | 48 | 0x30 | `0b0011_0000` |
   | `1` | 49 | 0x31 |  `0b0011_0001`|
   | `2` | 50 | 0x32 |  `0b0011_0010`|
   | `Esc` | 27 | 0x1B |`0b0001_1011` |
   | `Space` | 32 | 0x20 | `0b001_00000`  |
   | `Tab` | 9 |  0x9 | `0b0000_1001` |
   | `Backspace` | 8 | 0x8 | `0b0000_1000` |
   | `Enter` | 13  | 0xD  | `0b0000_1101`|

### UART communication

2. Draw timing diagram of the output from UART/USART when transmitting three character data `De2` in 4800 7O2 mode (7 data bits, odd parity, 2 stop bits, 4800&nbsp;Bd). The image can be drawn on a computer or by hand. Name all parts timing diagram.

   ![your figure](https://github.com/dragos2001/digital-electonics-2/blob/main/Lab6-UART/time_diagram.jpg)

3. Draw a flowchart for function `uint8_t get_parity(uint8_t data, uint8_t type)` which calculates a parity bit of input 8-bit `data` according to parameter `type`. The image can be drawn on a computer or by hand. Use clear descriptions of individual algorithm steps.

   ![your figure](https://github.com/dragos2001/digital-electonics-2/blob/main/Lab6-UART/flow_chart_parity_bit.jpg)
