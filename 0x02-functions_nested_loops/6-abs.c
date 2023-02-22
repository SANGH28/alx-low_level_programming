#include "main.h"
/**
 * _abs - prints the absolute value of an integer
 *
 * @n: parameter to be tested
 *
 * Return: 0 if successful
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}
