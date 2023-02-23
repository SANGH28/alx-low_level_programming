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

	for (h = 0 ; h <= 60 ; h++)
	{
		for (m = 0 ; m < 24 ; m++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}
}
