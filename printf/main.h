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

/*functions prototypes for flags, precision, width and size*/
int _flags(const char *format, int *i);
int _precision(const char *format, int *i, va_list list);
int _size(const char *format, int *i);
int _width(const char *format, int *i, va_list list);

#endif
