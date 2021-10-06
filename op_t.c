#include "main.h"
#include <stdarg.h>

/**
 * op_c - prints a char
 * @c: char to print
 *
 * Return: always 1
 */
int op_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}
/**
 * op_s - prints a string
 * @s: string to print
 *
 * Return: always 1
 */
int op_s(va_list s)
{
	int i;
	char *str;

	str = va_arg(s, char *);
	if (!str)
	{
		str = "null";
	}
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
/**
 * op_d - prints a int
 * @d: int to print
 *
 * Return: always 1
 */
int op_d(va_list d)
{
	int x = (int)va_arg(d, int);

	_putchar(x);
	return (1);
}
/**
 * op_i - prints a int
 * @i: int to print
 *
 * Return: always 1
 */
int op_i(va_list i)
{
	int y = (int)va_arg(i, int);

	_putchar(y);
	return (1);
}
