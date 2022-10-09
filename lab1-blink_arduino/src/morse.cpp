
/* Defines -----------------------------------------------------------*/
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