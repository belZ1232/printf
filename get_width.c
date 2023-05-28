#include "main.h"
/**
* get_width - calculations of width f field used in format string.
* @format: our format string.
* @i: current index in formart string.
* @list: print va_list of arguments.
* @Return: value of field width, or 0 if width is not found.
*/
int get_width(const char *format, int *i, va_list list)
{
int curr_i;
int width = 0;
for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
{
if (is_digit(format[curr_i]))
{
width *= 10;
width += format[curr_i] - '0';
}
else if (format[curr_i] == '*')
{
curr_i++;
width = va_arg(list, int);
break;
}
else
break;
}
*i = curr_i - 1;
return (width);
}
