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
		str = "(null)";
	}
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
