#include "main.h"

/**
 * _strchr - locates a charcater in a string.
 * @s: the string to be searched
 * @c: The character to be located
 * Return: if c is found - pointer to the first occurence
 * If c in not found - 0
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
