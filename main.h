#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(va_list);
} op_t;

int (*specifier(const char *format))(va_list);
int _printf(const char *format, ...);
int _putchar(char c);
int op_c(va_list c);
int op_s(va_list s);
int op_d(va_list d);
int op_i(va_list i);

/* converter */
char *convert(unsigned long int num, int base, int lowercase);
#endif
