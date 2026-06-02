#ifndef __USART_DESC_H__
#define __USART_DESC_H__

#include "stm32f4xx.h"

struct usart_desc
{
	USART_TypeDef* USARTx;
	uint32_t BaudRate;
	uint16_t StopBits;
};

#endif /* __USART_DESC_H__ */
