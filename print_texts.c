#include "main.h"

/**
 * print_char - prints a character
 * @arguments: character
 * Return: Always 0
 */
int print_char(va_list arguments)
{
	return (_putchar(va_arg(arguments, int)));
}

/**
 * print_string - prints a string
 *
 * @arguments: character
 * Return: string
 */
int print_string(va_list arguments)
{
	char *str = va_arg(arguments, char *);

	if (!str)
	{
		str = "(null)";
	}

	return (_puts(str));
}

/**
 * print_reverse_string - prints a string
 *
 * @arguments: character
 * Return: string
 */
int print_reverse_string(va_list arguments)
{
	char *str = va_arg(arguments, char *);
	int len = 0;

	if (!str)
	{
		str = "(null)";
	}

	while (str[len])
	{
		len++;
	}

	print_rev_recursion(str);

	return (len);
}
