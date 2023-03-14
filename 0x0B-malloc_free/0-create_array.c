#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *pt;

	if (size == 0)
	return ('\0');
		pt = (char *)malloc(size * sizeof(char));
		if (pt == NULL)
			return ('\0');
	for (i = 0; i < size; i++)
		*(pt + i) = c;
	return (pt);
}


