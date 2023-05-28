#include "main.h"

/**
* get_size -  Calculates the size of a data
* type used in a  format string.
*
* @format: format string.
* @i: current index in the format string.
*
*Return: integer value representing the size of the data type
*or 0 if no size was found
*/

int get_size(const char *format, int *i)
{
int curr_i = *i + 1;
int size = 0;
if (format[curr_i] == 'l')
/*OUR SIZES */
#define S_LONG 2
#define S_SHORT 1
size = S_LONG;
else if (format[curr_i] == 'h')
size = S_SHORT;
if (size == 0)
*i = curr_i - 1;
else
*i = curr_i;
return (size);
}
