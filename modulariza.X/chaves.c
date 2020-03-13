/*
 * File:   chaves.c
 * Author: 19180066
 *
 * Created on 13 de Março de 2020, 09:33
 */


#include <xc.h>
#define LED_1    PORTDbits.RD0
#define LED_0    PORTDbits.RD1
#define CH_0     PORTDbits.RD3
#define CH_1     PORTDbits.RD2
#define SAIDA1   TRISDbits.TRISD0
#define SAIDA0   TRISDbits.TRISD1
#define ENTRADA1 TRISDbits.TRISD2
#define ENTRADA0 TRISDbits.TRISD3

void initCHAVE(void)
{
   ENTRADA0=1; 
   ENTRADA1=1;
}
unsigned char chave (void)
{
     return (PORTDbits.RD3);
     return (PORTDbits.RD2);
}

