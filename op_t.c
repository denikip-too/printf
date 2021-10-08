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
/**
 * op_r - prints astring in reverse
 * @r: string to print
 *
 * Return: number of chars printed
 */
int op_r(va_list r)
{
	char *str;
	int i, count = 0;

	str = va_arg(r, char *);
	if (str == NULL)
		str = ")llun(";
	for (i = 0; str[i]; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
