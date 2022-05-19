#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - writes the character c to stdout
 * @format: The format of the character to print
 * @...: The variable arguments
 *
 * Return: int the number of character dispalyed.
 */
int _printf(const char *format, ...)
{
	int i = 0, k = 0, n_displayed = 0;
	va_list args;
	char *str = NULL;
	
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n_displayed++;
		}
		else
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				i++;
				n_displayed++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				str = va_arg(args, char *);
				k = 0;
				while (str[k] != '\0')
				{
					_putchar(str[k]);
					n_displayed++;
					k++;
				}
			}
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				n_displayed++;
				i++;
			}
		}
		i++;
	}
	va_end(args);
	return (n_displayed);
}

