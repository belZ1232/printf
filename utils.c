#include "main.h"
/**
* is_printable - char evaluates if it can be printed
* @c: an evaluation of char.
* Return: 0 or 1 if c can be printed
*/
int is_printable(char c)
{
if (c >= 32 && c < 127)
return (1);
return (0);
}
/**
* append_hexa_code - A buffer to an append ascci
* in hexadecimal code
* @buffer: chars of an array.
* @i: an index to start appending.
* @ascii_code: an ASSCI CODE.
* Return: 3(successfully)
*/
int append_hexa_code(char ascii_code, char buffer[], int i)
{
char map_to[] = "0123456789ABCDEF";
/* The hexa format code is always 2 digits long */
if (ascii_code < 0)
ascii_code *= -1;
buffer[i++] = '\\';
buffer[i++] = 'x';
buffer[i++] = map_to[ascii_code / 16];
buffer[i] = map_to[ascii_code % 16];
return (3);
}
/**
* is_digit - Verifies if a char is a digit
* @c: evaluation of char
* Return: 0 or 1 if c is a digit
*/
int is_digit(char c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
/**
* convert_size_number - number to the specified size casted
* @num: our casted number.
* @size: the number dat indicates the type to be casted.
* Return: number casted value
*/
long int convert_size_number(long int num, int size)
{
if (size == S_LONG)
return (num);
else if (size == S_SHORT)
return ((short)num);
return ((int)num);
}
/**
* convert_size_unsgnd - Casted number to a specified size.
* @num: our casted number
* @size: the number dat indicates the type to be casted
* Return: Casted value of num
*/
long int convert_size_unsgnd(unsigned long int num, int size)
{
if (size == S_LONG)
return (num);
else if (size == S_SHORT)
return ((unsigned short)num);
return ((unsigned int)num);
}
