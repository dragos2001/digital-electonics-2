
This directory is intended for PlatformIO Test Runner and project tests.

Unit Testing is a software testing method by which individual units of
source code, sets of one or more MCU program modules together with associated
control data, usage procedures, and operating procedures, are tested to
determine whether they are fit for use. Unit testing finds problems early
in the development cycle.

More information about PlatformIO Unit Testing:
- https://docs.platformio.org/en/latest/advanced/unit-testing/index.html


# Lab 5: Dragos Bratfalean

### Analog-to-Digital Conversion

1. Complete table with voltage divider, calculated, and measured ADC values for all five push buttons.

   | **Push button** | **PC0[A0] voltage** | **ADC value (calculated)** | **ADC value (measured)** | **ADC value (measured, hex)** |
   | :-: | :-: | :-: | :-: | :-: |
   | Right  | 0&nbsp;V | 0   | 0 | 0 |
   | Up     | 0.495&nbsp;V | 101 | 99 | 0x63 |
   | Down   | 1.203&nbsp;V | 246 | 256 | 0x100 |
   | Left   |  1.96&nbsp;V|  401| 409  | 0x199 |
   | Select | 3.11&nbsp;V |  636 | 639 | 0x27F|
   | none   | 5&nbsp;V | 1023 | 1023  | 0x3FF |

### Temperature meter

Consider an application for temperature measurement. Use analog temperature sensor [TC1046](http://ww1.microchip.com/downloads/en/DeviceDoc/21496C.pdf), LCD, and a LED. Every 30 seconds, the temperature is measured and the value is displayed on LCD screen. When the temperature is too high, the LED will turn on.

2. Draw a schematic of temperature meter. The image can be drawn on a computer or by hand. Always name all components and their values.
   ![your figure](https://github.com/dragos2001/digital-electonics-2/blob/main/lab5-Analog-to-Digital-Converter/temperature_measurement_scheme.png)

3. Draw two flowcharts for interrupt handler `TIMER1_OVF_vect` (which overflows every 1&nbsp;sec) and `ADC_vect`. The image can be drawn on a computer or by hand. Use clear descriptions of the individual steps of the algorithms.
   ![your figure](https://github.com/dragos2001/digital-electonics-2/blob/main/lab5-Analog-to-Digital-Converter/flow_chart.jpg)
