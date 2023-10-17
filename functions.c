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
 * @n:  input of fucnction
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

/**
 *print_rev - prints a string in reverse, followed by a new line
 *
 *@args: the string
 * Return: returns number of charactars printed
 */

int print_rev(va_list args)
{
	char *s = va_arg(args, char *);
	int i;
	int len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		len += 1;
	for (i = len - 1; i >= 0; i--)
		_putchar(*(s + i));
	return (len);

}

/**
 * p_rot - function that implement rot13 encription
 *
 * @args:the string
 * Return: number of charactars printed
*/

int p_rot(va_list args)
{
	char *s = va_arg(args, char *);
	int i;
	char c;
	int len = 0;

	char rots[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rotc[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rots[i])
			{
				c = rotc[i];
				_putchar(c);
				len += 1;
				break;
			}
		}
		s++;
	}
	return (len);
}
