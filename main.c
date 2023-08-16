/*
 * Created on: Aug 15, 2023
 * Author: Mohamad Ahmed Mohamad Abdelmoniem
 */
#include <stdio.h>
#include <stdlib.h>

#include "MCAL/MRCC/MRCC_Int.h"
#include "MCAL/MEXTI/MEXTI_Int.h"
#include "MCAL/MNVIC/MNVIC_Int.h"
#include "MCAL/MGPIO/MGPIO_Int.h"

u8 Interupt_Flag = 0; /* flag for push button interrupt */

void delayMs(u32 n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 3180; j++) {
        }
    }
}

// EXTI line 0 handler for button 0
void Lights_ON(void) {
    Interupt_Flag = 1;
}

int main(int argc, char *argv[]) {
    /* Enable Clock */
    MRCC_vInit();
    MRCC_vEnableClock(RCC_BUS_AHB1, RCC_PERIPHERAL_GPIOA);
    MRCC_vEnableClock(RCC_BUS_AHB1, RCC_PERIPHERAL_GPIOB);

    /* Set Pin 0 PORTA as Input */
    MGPIO_vSetPinMode(GPIO_PORTA, PIN0, GPIO_MODE_INPUT);

    /* Set Pins 0 PORTA as PULLDOWN */
    MGPIO_vSetPinInputPull(GPIO_PORTA, PIN0, GPIO_PULLDOWN);

    /* Set Pins 0,1,2 PORTB as OUTPUT */
    MGPIO_vSetPinMode(GPIO_PORTB, PIN0, GPIO_MODE_OUTPUT);
    MGPIO_vSetPinMode(GPIO_PORTB, PIN1, GPIO_MODE_OUTPUT);
    MGPIO_vSetPinMode(GPIO_PORTB, PIN2, GPIO_MODE_OUTPUT);

    /* Set Pins 0,1,2 PORTB as PUSHPULL */
    MGPIO_vSetPinOutputType(GPIO_PORTB, PIN0, GPIO_PUSHPULL);
    MGPIO_vSetPinOutputType(GPIO_PORTB, PIN1, GPIO_PUSHPULL);
    MGPIO_vSetPinOutputType(GPIO_PORTB, PIN2, GPIO_PUSHPULL);
    while (1) {
    	if(MGPIO_u8GetPinValue(GPIO_PORTA,GPIO_HIGH))
    	{
            MGPIO_vSetPinValue(GPIO_PORTB, PIN0, GPIO_HIGH);
            MGPIO_vSetPinValue(GPIO_PORTB, PIN1, GPIO_HIGH);
            MGPIO_vSetPinValue(GPIO_PORTB, PIN2, GPIO_HIGH);
            delayMs(5000);
            MGPIO_vSetPinValue(GPIO_PORTB, PIN0, GPIO_LOW);
            MGPIO_vSetPinValue(GPIO_PORTB, PIN1, GPIO_LOW);
            MGPIO_vSetPinValue(GPIO_PORTB, PIN2, GPIO_LOW);
    	}
      }
}
