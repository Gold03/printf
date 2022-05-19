#include "main.h"
/**
 * _print_str - prints a string to te standard output
 * @str: string argument passed
 *
 * Return: 0 always
 */
int _print_str(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k++
	}
	return (k);
}

