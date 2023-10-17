#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include"main.h"

/**
  * _printf - prints anything like printf.
  * @format: format passed to the function
  *
  * Return: number of charactar printed
  */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (; *format; format++)
	{
		if (*format == '\0')
			break;
	if (*format != '%')
	{
		_putchar(*format);
			count++; }
	else
	{
		format++;
		if (*format == '%')
		{
			_putchar('%');
			count++; }
		else
		{
			if (args == NULL)
				return (-1);
			count += get_specifier(format, args);
		}}}
	va_end(args);
	return (count);
}
