#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = *((char *)(ptr) + i);
	}
	free(ptr);
	return (ptr1);
}
