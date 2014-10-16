/* Funciones para UART del MSP430G2955 */
#ifndef uart
#define uart
	
void init_UART();
void send_uart(char *data);
void send_dato(char data);
#endif
