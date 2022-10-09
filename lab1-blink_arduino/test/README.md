
This directory is intended for PlatformIO Test Runner and project tests.

Unit Testing is a software testing method by which individual units of
source code, sets of one or more MCU program modules together with associated
control data, usage procedures, and operating procedures, are tested to
determine whether they are fit for use. Unit testing finds problems early
in the development cycle.

More information about PlatformIO Unit Testing:
- https://docs.platformio.org/en/latest/advanced/unit-testing/index.html


# Lab 1: YOUR_FIRSTNAME LASTNAME

### Morse code

1. Listing of C code which repeats one "dot" and one "comma" (BTW, in Morse code it is letter `A`) on a LED. Always use syntax highlighting, meaningful comments, and follow C guidelines:

"PARIS"

```c
* Defines -----------------------------------------------------------*/
#define LED_GREEN PB5   // PB5 is AVR pin where green on-board LED 
                        // is connected
#define time_delay 1000 // Delay in milliseconds
#ifndef F_CPU
# define F_CPU 16000000 // CPU frequency in Hz required for delay funcs
#endif

/* Includes ----------------------------------------------------------*/
#include <avr/io.h>     // AVR device-specific IO definitions
#include <util/delay.h> // Functions for busy-wait delay loops


// -----
// This part is needed to use Arduino functions but also physical pin
// names. We are using Arduino-style just to simplify the first lab.
#include "Arduino.h"
#define PB5 13          // In Arduino world, PB5 is called "13"
// -----
//#define LED_RED 12

/* Function definitions ----------------------------------------------*/
/**********************************************************************
 * Function: Main function where the program execution begins
 * Purpose:  Toggle one LED and use delay library.
 * Returns:  none
 **********************************************************************/
int main(void)
{
   // uint8_t led_value = LOW;  // Local variable to keep LED status
   
    // Set pin where on-board LED is connected as output
    pinMode(LED_GREEN, OUTPUT);
    

    //pinMode(LED_RED, OUTPUT);
    // Infinite loop
    while (1)
    {
        // Turn ON/OFF on-board LED


        //p
        digitalWrite(LED_GREEN, HIGH);
        _delay_ms(time_delay);
        digitalWrite(LED_GREEN,LOW);
        _delay_ms(time_delay);
        digitalWrite(LED_GREEN, HIGH);
        _delay_ms(3*time_delay);
        digitalWrite(LED_GREEN,LOW);
        _delay_ms(time_delay);
        digitalWrite(LED_GREEN,HIGH);
        _delay_ms(3*time_delay);
        digitalWrite(LED_GREEN,LOW);
        _delay_ms(time_delay);
         digitalWrite(LED_GREEN, HIGH);
        _delay_ms(time_delay);
        digitalWrite(LED_GREEN, LOW);
        _delay_ms(3*time_delay);


    //a

        digitalWrite(LED_GREEN, HIGH);
        _delay_ms(time_delay);
        digitalWrite(LED_GREEN,LOW);
        _delay_ms(time_delay);
        digitalWrite(LED_GREEN, HIGH);
        _delay_ms(3*time_delay);
        digitalWrite(LED_GREEN,LOW);
        _delay_ms(3*time_delay);

    //r 
       digitalWrite(LED_GREEN, HIGH);
        _delay_ms(time_delay);
        digitalWrite(LED_GREEN,LOW);
        _delay_ms(time_delay);
        digitalWrite(LED_GREEN, HIGH);
        _delay_ms(3*time_delay);
        digitalWrite(LED_GREEN,LOW);
        _delay_ms(time_delay);
        digitalWrite(LED_GREEN, HIGH);
        _delay_ms(3*time_delay);


    //i
        digitalWrite(LED_GREEN, HIGH);
        _delay_ms(time_delay);
        digitalWrite(LED_GREEN,LOW);
        _delay_ms(time_delay);
        digitalWrite(LED_GREEN, HIGH);
        _delay_ms(time_delay);
        digitalWrite(LED_GREEN,LOW);
        _delay_ms(3*time_delay);


    //s
        digitalWrite(LED_GREEN, HIGH);
        _delay_ms(time_delay);
        digitalWrite(LED_GREEN,LOW);
        _delay_ms(time_delay);
        digitalWrite(LED_GREEN, HIGH);
        _delay_ms(time_delay);
        digitalWrite(LED_GREEN,LOW);
      _delay_ms(time_delay);
        digitalWrite(LED_GREEN, HIGH);
        _delay_ms(time_delay);
        digitalWrite(LED_GREEN,LOW);
        _delay_ms(7*time_delay);



        
        
    }

    // Will never reach this
    return 0;
}
```

2. Scheme of Morse code application, i.e. connection of AVR device, LED, resistor, and supply voltage. The image can be drawn on a computer or by hand. Always name all components and their values!

   ![your figure](https://github.com/dragos2001/digital-electonics-2/blob/main/lab1-blink_arduino/circuit.png?raw=true)
