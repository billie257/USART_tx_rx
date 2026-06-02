#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include "board.h"

int main(void)
{
	board_lowlevel_init();
	usart_init(usart_1);

	printf("hello Yulian\r\n");

  while (1)
	{
		// wait for usart received data
		uint8_t rdata = usart_get_data(usart_1);
		
		printf("received: %c ascii: %d\r\n", rdata, rdata);
	}
}
