#include "main.h"
/**
 * print_last_digit - prints the last digit
 *
 * @n: parameter value
 *
 * Return: 0 if successfull
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (n < 0)
	{
		return (-m);
	}
	else
	{
		return (m);
	}
}

