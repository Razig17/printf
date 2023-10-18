#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int print_string(va_list args);
int print_char(va_list args);
int get_specifier(const char *s, va_list args);
int print_decimal(va_list args);
int print_i(int n);
int print_rev(va_list args);
int p_rot(va_list args);
int print_s(va_list args);
/**
 * struct format_specfier - is a struct that contains two members
 *
 * @specifier: used to track the charctares specfier
 * @f: used to decied what function to call
 *
 * Description: struct that used to track functions based on chars
*/
typedef struct format_specfier
{
	char specifier;
	int (*f)(va_list args);
} format_s;



#endif
