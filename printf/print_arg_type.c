#include "main.h"
/**
 * print_arg_type - Prints an argument based on its type
 * @fmt: Formatted string in which to print the arguments.
 * @list: List of arguments to be printed.
 * @ind: ind.
 * @buffer: Buffer array to handle print.
 * @flags: Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: 1 or 2;
 */
int print_arg_type(const char *fmt, int *ind, va_list list, char buffer[],
	int flags, int width, int precision, int size)
{
	int i, unknow_len = 0, printed_chars = -1;
	fmt_t fmt_types[] = {
		{'c', print_character}, {'s', print_str}, {'%', print_percentage},
		{'i', print_int}, {'d', print_int}, {'b', print_bin},
		{'u', print_unsigned_int}, {'o', print_octa}, {'x', print_hexadecimal},
		{'X', print_upper_hexa}, {'p', print_pointers}, {'S', print_non_printable},
		{'r', print_reverse}, {'R', print_r13string}, {'\0', NULL}
	};
