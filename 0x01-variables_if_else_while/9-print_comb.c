#include <stdio.h>

/**
 * main - main fuction
 *
 * Return: always 0
 */

int main(void)
{
int i;
for (i = '0' ; i <= '9' ; i++)
{
if (i == '9')
	putchar(i);
else if (i != '9')
{
putchar(i);
putchar(',');
putchar(' ');
}
}
return (0);
}
