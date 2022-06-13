#include <stdio.h>
#include "main.h"

/**
 *_strlen - returns the length of a string..
 *@s: value to be evaluate.
 *Returns: not.
 */
int _strlen(char *s)
{
	int len;
len = 0;

	while (s[len] != '\0')
	{

		len++;
	}
	return (len);
}
