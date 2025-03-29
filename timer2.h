#include <avr/interrupt.h>

void timing_1ms()
{
    TCCR2A = 2;
    TCCR2B = 4;
    TIMSK2 = 2;
    OCR2A = 249;
}

