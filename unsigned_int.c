#include <stdarg.h>
#include "main.h"

/**
 * op_b - converts unsigned int argument is converted to binary
 * @b: input int
 * Return: number of int printed
 */
int op_b(va_list b)
{
	unsigned int i, n, sum, x;
	unsigned int a[32];
	unsigned int count;
	
	n = va_arg(b, unsigned int);
	x = 2147483648;
	for (i = 1; i < 31; i++)
	{
		x /= 2;
		a[i] = (n / x) % 2;

	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
		(sum || i == 31) ? _putchar('0' + a[i]), count++ : (sum += a[i]);
	return (count);
}
