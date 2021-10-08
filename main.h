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
int op_S(va_list S);
int op_x(va_list x);
int op_X(va_list X);
int op_o(va_list o);
int op_u(va_list u);
int op_p(va_list p);
int op_b(va_list b);
int op_R(va_list R);
int op_r(va_list r);
#endif
