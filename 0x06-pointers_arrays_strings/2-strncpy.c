#include "main.h"
/**
 * _strncpy - copies the string
 * @dest: array that returns
 * @src: the pointer that recieves the string
 * @n:times to interact
 *
 * Return: the parameter dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = sr[i];
		i++;
	}

	i = i;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}