#include "main.h"
#include <stdlib.h>
/**
 * print_hexa - print a hexadecimal
 *
 * @arguments: hexadecimal
 * Return: Always 0
 */
int print_hexa(va_list arguments)
{
	char *str = string_to_base(va_arg(arguments, unsigned int), 16, false);

	if (str == NULL)
		return (0);

	return (_puts(str));
}

/**
 * print_hexa_in_uppercase - print a hexadecimal in uppercase
 *
 * @arguments: hexadecimal
 * Return: Always 0
 */
int print_hexa_in_uppercase(va_list arguments)
{
	char *str = string_to_base(va_arg(arguments, unsigned int), 16, true);

	if (str == NULL)
		return (0);

	return (_puts(str));
}

/**
 * print_octal - prints an octal number
 *
 * @arguments: octal
 *
 * Return: Always 0
 */
int print_octal(va_list arguments)
{
	char *str = string_to_base(va_arg(arguments, unsigned int), 8, false);

	if (str == NULL)
		return (0);

	return (_puts(str));
}
/**
 * print_binary - prints a binary number
 *
 * @arguments: binary number
 *
 * Return: Always 0
 */
int print_binary(va_list arguments)
{
	char *str = string_to_base(va_arg(arguments, unsigned int), 2, false);

	if (str == NULL)
		return (0);

	return (_puts(str));
}

/**
 * print_percent - print percent symbol
 * @arguments: binary number
 *
 * Return: Always 0
 */
int print_percent(va_list arguments)
{
	(void)arguments;
	return (_putchar('%'));
}
