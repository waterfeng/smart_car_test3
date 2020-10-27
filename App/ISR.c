#include "common.h"
#include "include.h"
#include "define.h"
#include "ISR.h"


void HardFault_Handler(void)
{
  while(1)
  {
    
  }
}

void PIT_IRQHandler(void)
{
  PIT_Flag_Clear(PIT0);

}

void uart0_test_handler(void)
{

}

void PORTA_IRQHandler(void)             //端口A外部中断服务函数
{
  uint32 flag = PORTA_ISFR;
  PORTA_ISFR = flag; 
  if(flag &(1<<16)) 
  { 
    //PTA16引脚中断 
  } 
  if(flag &(1<<24)) 
  { //PTA24引脚中断 
      
  }
}

void PORTC_PORTD_IRQHandler(void)       //端口C、D外部中断服务函数
{ 
  uint32 flagC = PORTC_ISFR; 
  //uint32 flagD = PORTD_ISFR;
  PORTC_ISFR= flagC; 
  //PORTD_ISFR = flagD; 
  if(flagC &(1<<11)) 
  {
    //PTC11引脚中断
  }
//  if(flagD &(1<<4)) 
//  {
//    //PTD4引脚中断 
//  }
}