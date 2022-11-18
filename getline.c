#include "main.h"

/**
 * _getline - reads aline from stream storing addres of the buffer
 *
 * Return: returns no of characters read
 */
char *_getline()
{
	char *cmd = NULL;
	size_t n;

	printf("#cisfun$ ");
	if (getline(&cmd, &n, stdin) == -1)
	/*|| strcmp(cmd, "exit\n") == 0)*/

	{
		free(cmd);
		exit(0);
	}

	tokenizer(cmd);
	return (0);
}
