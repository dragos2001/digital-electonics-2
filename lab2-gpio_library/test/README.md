
This directory is intended for PlatformIO Test Runner and project tests.

Unit Testing is a software testing method by which individual units of
source code, sets of one or more MCU program modules together with associated
control data, usage procedures, and operating procedures, are tested to
determine whether they are fit for use. Unit testing finds problems early
in the development cycle.

More information about PlatformIO Unit Testing:
- https://docs.platformio.org/en/latest/advanced/unit-testing/index.html

# Lab 2: YOUR_FIRSTNAME LASTNAME

### GPIO control registers

1. Complete the table for DDRB and PORTB control register values.

   | **DDRB** | **PORTB** | **Direction** | **Internal pull-up resistor** | **Description** |
   | :-: | :-: | :-: | :-: | :-- |
   | 0 | 0 | input | no | Tri-state, high-impedance |
   | 0 | 1 |input |yes |PINx source current |
   | 1 | 0 |output | no | low level |
   | 1 | 1 |output | no | high level |

### GPIO library

2. Complete the table with code sizes from three versions of the blink application.

   | **Version** | **Size [B]** |
   | :-- | :-: |
   | Arduino-style     | 508  |
   | Registers         | 182 |
   | Library functions | 182 |

### Traffic light

3. Scheme of traffic light application with one red/yellow/green light for cars, one red/green light for pedestrians, and one push button. Connect AVR device, LEDs, resistors, push button (for pedestrians), and supply voltage. The image can be drawn on a computer or by hand. Always name all components and their values!

   ![your figure](https://github.com/dragos2001/digital-electonics-2/blob/main/lab2-gpio_library/traficlights.png)

Resistances = 300 ohm (each)
PB5 = greenled_pedestrians_pin (13)
PB4 = btn_pin (12)
PB3 = redled_pedestrians_pin (11)
PB2 = greenled_cars_pin (10)
PB1 = redled_cars_pin (9)
PB0 = yellowled_cars_pin (8)

