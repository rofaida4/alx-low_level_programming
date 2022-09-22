#include "main.h"



/**
 * * *_strcpy - Copy paste string
 * * @dest: destination
 * * @src: source
 * * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int a;
	int b = 0;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[b] = src[a]
			b++;
	}
	dest[b] = '\0';
	return (dest);
}
