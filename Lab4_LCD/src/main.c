/***********************************************************************
 * 
 * Stopwatch by Timer/Counter2 on the Liquid Crystal Display (LCD)
 *
 * ATmega328P (Arduino Uno), 16 MHz, PlatformIO
 *
 * Copyright (c) 2017 Tomas Fryza
 * Dept. of Radio Electronics, Brno University of Technology, Czechia
 * This work is licensed under the terms of the MIT license.
 * 
 * Components:
 *   16x2 character LCD with parallel interface
 *     VSS  - GND (Power supply ground)
 *     VDD  - +5V (Positive power supply)
 *     Vo   - (Contrast)
 *     RS   - PB0 (Register Select: High for Data transfer, Low for Instruction transfer)
 *     RW   - GND (Read/Write signal: High for Read mode, Low for Write mode)
 *     E    - PB1 (Read/Write Enable: High for Read, falling edge writes data to LCD)
 *     D3:0 - NC (Data bits 3..0, Not Connected)
 *     D4   - PD4 (Data bit 4)
 *     D5   - PD5 (Data bit 5)
 *     D6   - PD6 (Data bit 3)
 *     D7   - PD7 (Data bit 2)
 *     A+K  - Back-light enabled/disabled by PB2
 * 
 **********************************************************************/

/* Includes ----------------------------------------------------------*/
#include <avr/io.h>         // AVR device-specific IO definitions
#include <avr/interrupt.h>  // Interrupts standard C library for AVR-GCC
#include <gpio.h>           // GPIO library for AVR-GCC
#include "timer.h"          // Timer library for AVR-GCC
#include <lcd.h>            // Peter Fleury's LCD library
#include <stdlib.h>         // C library. Needed for number conversions


/* Function definitions ----------------------------------------------*/
/**********************************************************************
 * Function: Main function where the program execution begins
 * Purpose:  Update stopwatch value on LCD screen when 8-bit 
 *           Timer/Counter2 overflows.
 * Returns:  none
 **********************************************************************/
int main(void)
{
    // Initialize display
    lcd_init(LCD_DISP_ON_CURSOR_BLINK);

    // Put string(s) on LCD screen
              uint8_t customChar[] = {
            0b10001,
            0b01110,
            0b10001,
            0b11011,
            0b10101,
            0b00000,
            0b01110,
            0b10001
          };


  lcd_command(1<<LCD_CGRAM);


  for (uint8_t i = 0; i < 8; i++)  // Copy new character patterns line by line to CGRAM
        lcd_data(customChar[i]);
    lcd_command(1<<LCD_DDRAM);       // Set addressing back to DDRAM (Display Data RAM)
                                     // ie to character codes

    // Display symbol with Character code 0
    lcd_putc(0x00);


    TIM2_overflow_16ms();
    TIM2_overflow_interrupt_enable();

    GPIO_mode_output(&DDRB,PB2);
    GPIO_write_high(&PORTB,PB2);

    // Configuration of 8-bit Timer/Counter2 for Stopwatch update
    // Set the overflow prescaler to 16 ms and enable interrupt


    // Enables interrupts by setting the global interrupt mask
    sei();

    // Infinite loop
    while (1)
    {
        /* Empty loop. All subsequent operations are performed exclusively 
         * inside interrupt service routines, ISRs */
    }

    // Will never reach this
    return 0;
}


/* Interrupt service routines ----------------------------------------*/
/**********************************************************************
 * Function: Timer/Counter2 overflow interrupt
 * Purpose:  Update the stopwatch on LCD screen every sixth overflow,
 *           ie approximately every 100 ms (6 x 16 ms = 100 ms).
 **********************************************************************/
ISR(TIMER2_OVF_vect)
{
    static uint8_t no_of_overflows = 0;
    static uint8_t tenths = 0;  //Tenths of a second
     static uint8_t seconds = 0;// seconds
     static uint8_t minutes = 0;//minutes
    char string[2];             // String for converted numbers by itoa()
    char string_seconds[2];   
    char string_minutes[2];        
         
         
         no_of_overflows++;

        
       
        
        

               if (no_of_overflows >= 6)
              {
                // Do this every 6 x 16 ms = 100 ms
                no_of_overflows = 0;
                
              tenths++;


                if(tenths>9)
                {
                 tenths=0;
                 seconds++;
                }

                if(seconds>59)
                {
                  seconds=0;
                  minutes++;
                }

                if(minutes>59)
                {
                  minutes=0;
                }

                
                itoa(tenths, string, 10);  // Convert decimal value to string
                itoa(seconds,string_seconds,10); //
                itoa(minutes,string_minutes,10);

              
                if(minutes<10)
                {
                  lcd_gotoxy(1, 0);
                  lcd_puts("0");
                  lcd_puts(string_minutes);
                  lcd_puts(":");
                }
                else{
                  lcd_gotoxy(1, 0);
                  lcd_puts(string_minutes);
                  lcd_puts(":");
                }
                if(seconds<10)
                {
                  lcd_gotoxy(5, 0);
                  lcd_puts("0");
                  lcd_puts(string_seconds);
                  lcd_puts(".");
                }
                else{
                  lcd_gotoxy(5, 0);
                  lcd_puts(string_seconds);
                  lcd_puts(".");
                }
                lcd_gotoxy(8, 0);
                lcd_puts(string);

                // Count tenth of seconds 0, 1, ..., 9, 0, 1, ...

                
                
              }

          
    
    
    // Else do nothing and exit the ISR
}