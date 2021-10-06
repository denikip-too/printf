#include "main.h"
#include <stdarg.h>

/**
 * prints_hex - prints a char's ascii value in uppercase hex
 * @c: char to print
 *
 * Return: number of chars printed (always 2)
 */
int prints_hex(char c)
{
	int count;
	char diff = 'A' - ':';
	char str[2];

	str[0] = c / 16;
	str[1] = c % 16;
	for (count = 0; count < 2; count++)
	{
		if (str[count] >= 10)
			_putchar('0' + diff + str[count]);
		else
			_putchar('0' + str[count]);
	}
	return (count);
}
/**
 * op_S - prints a string
 * @S: input string
 * Return: no. of chars printed in string
 */
int op_S(va_list S)
{
	unsigned long int i = 0;
	int count = 0;
	char *rep = va_arg(S, char *);

	if (rep != NULL)
	{
		rep = "(null)";
	}
	while (rep[i])
	{
		if (rep[i] < 32 || rep[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += prints_hex(rep[i]);
		}
		_putchar(rep[i]);
		count++;
	}
	return (count);
}
