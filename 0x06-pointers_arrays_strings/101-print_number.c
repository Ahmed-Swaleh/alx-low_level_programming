#include "main.h"

/**
 * print_number - print an integer, withut using long, arrays or pointer
 * @n: number to be printed
 */
void print_number(int n)
{
	unsigned int tens, dig, pos = n;
	double temp_tens = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			pos = n * -1;
			putchar('-');
		}
		while (temp_tens <= pos)
			temp_tens *= 10;
		tens = temp_tens / 10;

		while (tens >= 1)
		{
			dig = pos / tens;
			_putchar(dig + '0');
			pos = (pos - (tens * dig));
			tens /= 10;
		}
	}
}
