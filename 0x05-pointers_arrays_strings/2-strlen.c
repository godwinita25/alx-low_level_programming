#include <stdio.h>

/**
* _strlen - Returns the length of a string
* @str: The string to get the lenght of
* Return: The lenght of @str
*/
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
