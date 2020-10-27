#ifndef __ISR_H
#define __ISR_H 1

#include  "include.h"

extern void HardFault_Handler(void);      //����Ӳ���Ϸã������ܷɣ�
extern void PIT_IRQHandler(void); 
extern void PORTA_IRQHandler(void);         //PORTA �ⲿ�ж�
extern void PORTC_PORTD_IRQHandler(void);     //PORTC,D�ⲿ�ж�
extern void UART0_Handler();    //串口中断函数
#endif