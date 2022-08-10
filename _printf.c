#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: format.
 *
 * Return: Printed chars.
 */

int _printf(const char *format, ...)
{
	if (!format)
		return (0);
	va_list ap;
        va_start(ap, format);        
        for (int i = 0; va_arg(format) != /0 ; i++)
        {
                
                
        }
