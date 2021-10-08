#include "main.h"
#include <stdlib.h>

/**
 * op_R - prints a string in rot13
 * @R: string to print
 *
 * Return: number of chars printed
 */
int op_R(va_list R)
{
	char *str;
	unsigned int i, j;
	int count = 0;
	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(R, char *);
	if (str == NULL)
		str = "(ahyy)";
	for (i = 0; str[i]; i++)
	{
		for (j = 0; x[j]; j++)
		{
			if (x[j] == str[i])
			{
				_putchar(y[j]);
				count++;
				break;
			}
		}
		if (!x[j])
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
