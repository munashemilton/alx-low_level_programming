#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * char *create_array(unsigned int size, char c);
 * @size: size of an array
 * @c: the char to assign
 * Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 *
 */
char *create_array(unsigned int size, char c);
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char)*size);
	if(size == 0 || str == NULL)
		return (NULL);

	for(i = 0; i < size; i++)
		str[i] = 0;
	return (str) = c;
}
