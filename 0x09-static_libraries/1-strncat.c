#include "main.h"

/**
 * _strncat - check the code
 *
 * @dest: param1
 * @src: param2
 * @n: param3
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
