#include "../MCAL/TIMER/TIMER.h"
#include "../ECUAL/LED/LED_Driver.h"

int main(void)
{

    LED_init(A0, LOW); // Used as an indicator by the timer for testing purposes
    LED_init(A2, LOW);
    TIMER_init(TIMER0, NORMAL);
    
    while (1)
    {
        LED_setState(A2, HIGH);
        TIMER_delay_ms(TIMER0, 300);
        LED_setState(A2, LOW);
        TIMER_delay_ms(TIMER0, 500);
    }
    
    return 0;
}