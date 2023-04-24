#ifndef HEADER_H
#define HEADER_H

/*header guard for libraries as they will be used in the code*/
#include <stdarg.h>
#include <unistd.h>
/*unistd.h is included because you must use write() in the codes*/

#define BUFFER_SIZE 1024
#define UNUSED(x) (void)(x)

/*flags*/
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16


/*function prototypes used in the code*/
int _printf(const char *format, ...);
void print_buffer(char buffer[], int *buffer_ind);
int _isdigit(char c);
int print_arg_type(const char *fmt, int *ind, va_list list, char buffer[], int flags, int width, int precision, int size)

int print_character(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_str(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_percentage(va_list types, char buffer[], int flags, int width, int precision, int size);

int print_int(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_bin(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_unsigned_int(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_octa(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_upper_hexa(va_list types, char buffer[], int flags, int width, int precision, int size)
int print_non_printable(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_pointers(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_reverse(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_r13string(va_list types, char buffer[], int flags, int width, int precision, int size);


int print_hexa(va_list types, char map_to[], char buffer[], int flags, char flag_ch, int width, int precision, int size);



/*functions prototypes for flags, precision, width and size*/
int _flags(const char *format, int *i);
int _precision(const char *format, int *i, va_list list);
int _size(const char *format, int *i);
int _width(const char *format, int *i, va_list list);

#endif
