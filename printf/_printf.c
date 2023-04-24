#include "header.h"

/**
 * _printf - a function that works like the original printf
 *
 * @format: the character pointer
 *
 * Return: Printed output
 */

int _printf(const char *format, ...)
{
	/*initializing variables*/
	/*int a is used to count loops in the function*/
	/*buffer_ind is an index to the buffer array*/
	/*flags, width, precision, size are used to store values of format specifier*/
	int a, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buffer_ind = 0;
	va_list arguments;
	char buffer[BUFFER_SIZE];

	if (format == NULL)
		return (-1);

	va_start(arguments, format);

	/*for loop that iterates through the format string*/
	/*this loop stops when an error is reached*/
	for (a = 0; format && format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			/*if not a format specifier, store in buffer and increment buffer index */
			buffer[buffer_ind++] = format[a];
			if (buffer_ind == BUFFER_SIZE)
				print_buffer(buffer, &buffer_ind);
			/*print_buffer works just like write(1, &format[a], 1);*/
			printed_chars++;
		}
		else
		{
			/* if a format specifier is found, process the specifier and the argument */
			print_buffer(buffer, &buffer_ind);
			flags = _flags(format, &a);
			width = _width(format, &a, list);
			precision = _precision(format, &a, list);
			size = _size(format, &a);
			++a;
			printed = print_arg_type(format, &a, list, buffer, flags, width, precision, size);

}
