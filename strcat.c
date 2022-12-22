#include "sshell.h"

/**
 * _strcat - joins 2 strings
 * @dest: 1st string
 * @src: 2nd string
 *
 * Return: pointer to joined string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i] != '\0'; i++)
		dest[i + j] = src[i];

	dest[i + j] = '\0';

	return (dest);
}
