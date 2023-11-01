#ifndef CONSOLE_H_INCLUDED
#define CONSOLE_H_INCLUDED

#define CONSOLE_UART USART1
#define RESET_ON_CTRLC

void console_putc(char c);
char console_getc(int wait);
void console_puts(char* s);
int console_gets(char* s, int len);
void console_setup(int baudrate);

#endif // CONSOLE_H_INCLUDED