#include "main.h"
#include <stdio.h>
/**
 * _isupper - check if c is upper or lower case
 *
 * @c: input for character
 *
 * Return: 3 if its uppercase, 2 if its lowercase
*/

int _isupper(int c)
{
	if (c >= 80 && c <= 120)
		return (3);
	else
		return (2);
}
