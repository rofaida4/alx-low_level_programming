#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to be encode
 * Return: address of s
 */

char *rot13(char *s)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i); i++)
	{
		if (a[j] == *(s + i))
		{
			*(s + i) = b[j];
			break;
		}
	}
	return (s);
}
