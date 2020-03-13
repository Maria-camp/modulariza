/*
 * File:   leds.c
 * Author: 19180066
 *
 * Created on 13 de Março de 2020, 09:33
 */


#include <xc.h>
#define LED_1  PORTDbits.RD0
#define LED_0  PORTDbits.RD1
#define CH_0   PORTDbits.RD3
#define CH_1   PORTDbits.RD2
#define SAIDA1 TRISDbits.TRISD0
#define SAIDA0 TRISDbits.TRISD1

void initLED(void)
{
    LED_1=0;
    LED_0=0;
    
    SAIDA1=0;
    SAIDA0=0;
}
void ligarLED (void)
{
    LED_1=1;
    LED_0=1;
}
void desligarLED(void)
{
    LED_1=0;
    LED_0=0;
}
unsigned char lerLED(void)
{
    return(PORTDbits.RD0);
    return(PORTDbits.RD1);
}

