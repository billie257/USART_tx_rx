#include <stdio.h>
#include "stm32f4xx.h"
#include "usart_desc.h"
#include "driver_usart.h"

struct usart_desc usart1_desc = {USART1, 2u*1000u*1000u, USART_StopBits_1};
usart_desc_t usart_1 = &usart1_desc;

void board_lowlevel_init(void)
{
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1, ENABLE);
}

int fputc(int ch, FILE* stream)
{
	 (void)stream;
	
		USART_ClearFlag(USART1, USART_FLAG_TC);
		USART_SendData(USART1, (uint16_t)ch);		
		while (USART_GetFlagStatus(USART1, USART_FLAG_TC) == RESET);
	
		return ch;  
}
