#include "main.h"
/**
 * print_decimal - print a number
 *
 *@args:  input of fucnction
 *
 * Return: returns number of charactars printed
 */

int print_decimal(va_list args)
{
	int n1;

	n1 = va_arg(args, int);

	return (print_i(n1));
}

/**
 * print_i - print a number
 *
 * n:  input of fucnction
 *
 * Return: returns number of charactars printed
 */

int print_i(int n)
{
	int n1, count = 0;

	n1 = n;
	if (n1 < 0)
	{
		n1 = -n1;
		_putchar('-');
		count++;
	}
	count++;
	if ((n1 / 10) > 0)
		count += print_i(n1 / 10);

	_putchar((n1 % 10) + '0');
	return (count);
}
