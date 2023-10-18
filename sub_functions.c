#include "main.h"

/**
 * get_num - used to avoid casting
 *
 * @args: function parameter
 * Return: num of printed charactares
*/
int get_num(va_list args)
{
	int n2;

	n2 = va_arg(args, int);

	return (p_binary(n2));
}

/**
 * p_binary - is a function used to convert ints to binary
 *
 * @s: is the string that entered
 * Return: binary
*/

int p_binary(int s)
{
	int n2, count = 0;
	int binary[32];
	int x = 0, y;

	n2 = s;
	if (n2 < 0)
	{
		_putchar('_');
		n2 = -n2;
		count++;
	}

	while (n2 > 0)
	{
		binary[x] = n2 % 2;
		n2 = n2 / 2;
		x++;
	}

	for (y = x - 1; y >= 0; y--)
	{
		_putchar(binary[y] + '0');
		count += 1;
	}
	return (count);
}
#include "main.h"

/**
 *print_s - prints a string with some changes
 *
 *@args: the string
 * Return: returns number of charactars printed
 */
int print_s(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0, i;

	if (str == NULL)
	return (0);
	count = _strlen(str);
	for (; *str; str++)
	{
		if (*str >= 32 && *str < 127)
		{
			_putchar(*str);
		}
		else
		{
			i = *str;
			_putchar('\\');
			_putchar('x');
			if (i / 16 >= 10)
				_putchar((i / 16) + 55);
			else
				_putchar((i / 16) + '0');
			if (i % 16 >= 10)
				_putchar((i % 16) + 55);
			else
				_putchar((i % 16) + '0');
			count += 3; }}
	return (count);
}
