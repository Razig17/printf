#include"main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *_strlen -findes the length of a string
 *
 *@s: the string
 *
 *Return: returens the length of the string
*/

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		len += 1;
	return (len);
}

/**
  * print_char - Prints a character
  * @args: a list of variadic arguments
  *
  * Return: the printed string or 1
  */

int print_char(va_list args)
{
	int i;

	i = va_arg(args, int);

	_putchar(i);
	return (1);
}

/**
  * print_string - Prints a string
  * @args: a list of variadic arguments
  *
  * Return: the lenght of the string or -1
  */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == (char *)0)
		return (_printf("(null)"));

	count = _strlen(str);
	for (; *str; str++)
	{
		if (*str == '\0')
		break;

	_putchar(*str);

	}

	return (count);

}

/**
  * get_specifier - is used to specifey what formating function to call
  * @s: is the string
  * @args: it's the parameter that reprsent the arguments of the function
  *
  * Return: a function call or 0
  *
*/
int get_specifier(const char *s, va_list args)
{
	format_s formats[] = {
		{ 'c', print_char },
		{ 's', print_string },
		{ 'd', print_decimal},
		{ 'i', print_decimal},
		{ 'r', print_rev},
		{ 'R', p_rot},
		{ 'S', print_s},
		{ 'b', get_num},
		{ '\0', NULL }
	};
	unsigned int i = 0;



	if (s == NULL)
		return (0);

	while (formats[i].specifier != '\0')
	{
		if (formats[i].specifier == *s)
		{
			return (formats[i].f(args));

		}
		i++;
	}

	_putchar('%');
	_putchar(*s);
	return (2);
}
