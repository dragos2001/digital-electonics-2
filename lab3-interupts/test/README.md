
This directory is intended for PlatformIO Test Runner and project tests.

Unit Testing is a software testing method by which individual units of
source code, sets of one or more MCU program modules together with associated
control data, usage procedures, and operating procedures, are tested to
determine whether they are fit for use. Unit testing finds problems early
in the development cycle.

More information about PlatformIO Unit Testing:
- https://docs.platformio.org/en/latest/advanced/unit-testing/index.html

# Lab 3: INSERT_YOUR_FIRSTNAME INSERT_YOUR_LASTNAME

### Overflow times

1. Complete table with overflow times.

   | **Module** | **Number of bits** | **1** | **8** | **32** | **64** | **128** | **256** | **1024** |
   | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: |
   | Timer/Counter0 | 8  | 16u | 128u | - | 1m | - | 4m | 16m |
   | Timer/Counter1 | 16 |  4m |  33m  | - | 262m | - |1s | 4s|
   | Timer/Counter2 | 8  | 16u | 128u | 512u | 1m | 2m | 4m | 16m |



    | **Module** | **Operation** | **I/O register(s)** | **Bit(s)** |
   | :-: | :-- | :-: | :-- |
   | Timer/Counter0 | Prescaler<br><br>8-bit data value<br>Overflow interrupt enable | TCCR0B<br><br>TCNT0<br>TIMSK0 |CS02, CS01, CS00<br>(000: stopped, 001: 1, 010: 8, 011: 64, 100: 256, 101: 1024)<br>TCNT0[7:0]<br>TOIE0 (1: enable, 0: disable) |
   | Timer/Counter1 | Prescaler<br><br>16-bit data value<br>Overflow interrupt enable | TCCR1B<br><br>TCNT1H, TCNT1L<br>TIMSK1 | CS12, CS11, CS10<br>(000: stopped, 001: 1, 010: 8, 011: 64, 100: 256, 101: 1024)<br>TCNT1[15:0]<br>TOIE1 (1: enable, 0: disable) |
   | Timer/Counter2 | Prescaler<br><br>8-bit data value<br>Overflow interrupt enable |  TCCR2B<br><br>TCNT2<br>TIMSK2 |CS22, CS21, CS20<br>(000: stopped, 001: 1, 010: 8, 011: 64, 100: 256, 101: 1024)<br>TCNT2[7:0]<br>TOIE2 (1: enable, 0: disable) |

### Interrupts

2. In `timer.h` header file, define macros also for Timer/Counter2. Listing of part of the header file with settings for Timer/Counter2. Always use syntax highlighting, meaningful comments, and follow C guidelines:

   ```c
  /* Defines -----------------------------------------------------------*/

   /**
   *  @name  Definitions for 8-bit Timer/Counter2
   * @note  t_OVF = 1/F_CPU * prescaler * 2^n where n = 8, F_CPU = 16 MHz
   */






   /** @brief Stop timer, prescaler 000 --> STOP */
   #define TIM2_stop()           TCCR2B &= ~((1<<CS22) | (1<<CS21) | (1<<CS20));
   /** @brief Set overflow 16us, prescaler 001 --> 1 */
   #define TIM2_overflow_16us()   TCCR2B &= ~((1<<CS22) | (1<<CS21)); TCCR2B |= (1<<CS20);
   /** @brief Set overflow 128us, prescaler 010 --> 8 */
   #define TIM2_overflow_128us()  TCCR2B &= ~((1<<CS22) | (1<<CS20)); TCCR2B |= (1<<CS21);
   /** @brief Set overflow 512us, prescaler 011 --> 32 */
   #define TIM2_overflow_512us() TCCR2B &= ~(1<<CS22); TCCR2B |= (1<<CS21) | (1<<CS20);
   /** @brief Set overflow 1ms, prescaler 100 --> 64 */
   #define TIM2_overflow_1ms() TCCR2B &= ~((1<<CS21) | (1<<CS20)); TCCR0B |= (1<<CS02);
   /** @brief Set overflow 2ms, prescaler 101 --> 128 */
   #define TIM2_overflow_2ms() TCCR2B &= ~(1<<CS21); TCCR2B |= (1<<CS22) | (1<<CS20);
   /** @brief Set overflow 2s, prescaler 110 --> 256 */
   #define TIM2_overflow_4ms()    TCCR2B &= ~(1<<CS20); TCCR2B |= (1<<CS21) | (1<<CS22);
   /** @brief Set overflow 4s, prescaler // 111 --> 2024 */
   #define TIM2_overflow_16ms()    TCCR2B |= (1<<CS22) | (1<<CS20)| (1<<CS21);

   /** @brief Enable overflow interrupt, 1 --> enable */
   #define TIM2_overflow_interrupt_enable()  TIMSK2 |= (1<<TOIE2);
   /** @brief Disable overflow interrupt, 0 --> disable */
   #define TIM2_overflow_interrupt_disable() TIMSK2 &= ~(1<<TOIE2);



   ```

