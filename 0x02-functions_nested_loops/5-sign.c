#include "main.h"
/**
 * print_sign - prints sign of a number
 *
 * @n: parameter to be tested
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	if  (n > 0)
	{
		_putchar('+');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(' ');
		return (-1);
	}
}
