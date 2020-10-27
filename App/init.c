#include "include.h"
#include "init.h"

void init(void)
{
  DisableInterrupts;
  uart_init(UART1, 9600);UAER
  set_vector_handler(UART1_VECTORn, UART1_Handler);
  EnableInterrupts;
}