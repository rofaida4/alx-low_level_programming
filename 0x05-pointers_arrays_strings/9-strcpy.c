#include "main.h"



/**
 * * *_strcpy - Copy paste string
 * * @dest: destination
 * * @src: source
 * * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int len  = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
