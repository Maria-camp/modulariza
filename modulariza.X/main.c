/*
 * File:   main.c
 * Author: 19180066
 *
 * Created on 13 de Março de 2020, 08:40
 */


#include <xc.h>
#include "config.h"
#include "chaves.h"
#include "leds.h"
#define LED_1  PORTDbits.RD0
#define LED_0  PORTDbits.RD1
#define CH_0   PORTDbits.RD3
#define CH_1   PORTDbits.RD2
#define SAIDA1 TRISDbits.TRISD0

void main(void) 
{
    initLED();
    initCHAVE();
 
  while(1)
   {
       if(CH_0==1)
        {
             LED_1=1;
        }
       else
        {
            LED_1=0;
        }
 
      
       if(CH_1==1)
        {
            LED_0=1;
        }
     
       else
        {
            LED_0=0;
        }
    
      
      
    }  
    
    
   
    
    
    

}  
