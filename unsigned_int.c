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
	for (i = 1; i < 32; i++)
	{
		x /= 2;
		a[i] = (n / x) % 2;

	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
/**
 * op_o - takes an unsigned int and prints it in octal notation
 * @o: unsigned int to print
 *
 * Return: number of digits printed
 */
int op_o(va_list o)
{
	unsigned int a[11];
	unsigned int i, m, n, sum;
	int count;

	n = va_arg(o, unsigned int);
	m = 1073741824; /* (8 ^ 10) */
	a[0] = n / m;
	for (i = 1; i < 11; i++)
	{
		m /= 8;
		a[i] = (n / m) % 8;
	}
	for (i = 0, sum = 0, count = 0; i < 11; i++)
	{
		sum += a[i];
		if (sum || i == 10)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
/**
 * op_u - prints an unsigned in in decimal notation
 * @u: unsigned int to print
 *
 * Return: number of digits printed
 */
int op_u(va_list u)
{
	unsigned int a[10];
	unsigned int i, m, n, sum;
	int count;

	n = va_arg(u, unsigned int);
	m = 1000000000; /* (10 ^ 9) */
	a[0] = n / m;
	for (i = 1; i < 10; i++)
	{
		m /= 10;
		a[i] = (n / m) % 10;
	}
	for (i = 0, sum = 0, count = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum || i == 9)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
