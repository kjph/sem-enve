//==============================================================================
/*
Set Waveform generation mode
    Fast PWM
    Phase correct PWM
Create period in ICR1
    CTC (OCR1A) Clear on Timer or Compare Match mode
Prescalar CS10
Inverted or non-inverted
    COM1A1=1 & COM1A0=1 for inverted (on at the end)
    COM1A1=1 & COM1A0=0 for non-inverted (on at the beginning)
*/
//==============================================================================

/*
// this code sets up counter0 for an 8kHz Fast PWM wave @ 16Mhz Clock
// Fast PWM non inverting
#include <avr/io.h>

int main(void)
{
    DDRD |= (1 << DDD6); // PD6 is now an output
    OCR0A = 128; // set PWM for 50% duty cycle (where 2^8 = 100%)
    TCCR0A |= (1 << COM0A1); // set none-inverting mode
    TCCR0A |= (1 << WGM01) | (1 << WGM00); // set fast PWM Mode
    TCCR0B |= (1 << CS01); // set prescaler to 8 and starts PWM

    while (1); {} // we have a working Fast PWM on PD6
}
*/

// TIMER1
#include <avr/io.h>
int main (void)
{
    DDRB |= (1<<PINB1);
    TCCR1A |= 1<<WGM11 | 1<<COM1A1 | 1<<COM1A0;
    TCCR1B |= 1<<WGM12 | 1<<WGM13 | 1<<CS10;
    ICR1 = 19999;
    OCR1A = ICR1 - 10000;

    while (1)
    {
    }
}
