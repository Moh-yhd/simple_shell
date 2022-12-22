#include "sshell.h"

/**
 * _strcpy - copies a string
 * @dest: input string
 * @src: string to copy from
 *
 * Return: pointer to dest after src is in it
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i++] = '\0';

	return (dest);
}
