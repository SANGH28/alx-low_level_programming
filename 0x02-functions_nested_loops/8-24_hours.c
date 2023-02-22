#include "main.h"
/**
 * jack_bauer - prints every minute
 *
 * Return: 0 always success
 *
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (m = 0 ; m <= 60 ; m++)
	{
		for (h = 0 ; h < 24 ; h++)
		{
			_putchar('m');
			_putchar('h');
		}
	}
}
