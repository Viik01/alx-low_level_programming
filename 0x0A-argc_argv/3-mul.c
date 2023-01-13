#include <stdio.h>

/**
 * main- multiply two numbers
 * @argc: argument
 * @argv: array
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, j;

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", i * j);
	return (0);

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
}

