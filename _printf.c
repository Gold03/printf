#include "main.h"
#include <stdarg.h>

/**
 * _printf - writes the character c to stdout
 * @format: The format of the character to print
 * @...: The variable arguments
 *
 * Return: int the number of character dispalyed.
 */
int _printf(const char *format, ...)
{
int i = 0;
int n_displayed = 0;
va_list args;

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
        if(format[i + 1] == 'c')
        {
            _putchar(va_arg(args, int));
            n_displayed++;
            i++;
        }
    }
        
}

va_end(args);

return (n_displayed);
}
