#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2
 * dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j, k, l;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
		for (i = 0; i < height; i++)
		{
			array[i] = malloc(sizeof(int) * width);
				if (array == NULL)
			{
				for (j = i; j <= 0; j--)
				{
					free(array[j]);
				}
				free(array);
				return (NULL);
			}
		}
		for (k = 0; k < height; k++)
		{
			for (l = 0; l < width; l++)
				array[k][l] = 0;
		}
		if (array = '\0')
			return (NULL);
		return (array);
}
