#include "main.h"
/**
 *tokenizer- accepts a string and string delimiter and breaks the  into
 * an array of words using strtok (only works for certain dilimiters)
 * @cmd:pointer delimetr to break strings
 *
 * Return: An array of strings
 */
char **tokenizer(char *cmd)
{
	char *cmdcpy = NULL, *token = NULL;
	char **argv = NULL;
	int argc = 0, i = 0;
	struct stat st;

	cmdcpy = strdup(cmd);
	token = strtok(cmd, " \n");

	/* get number of arguments ==> argc */
	while (token)
		token = strtok(NULL, " \n"), argc++;

	argv = malloc(sizeof(char *) * argc);

	/* insert strings in string array */
	token = strtok(cmdcpy, " \n");
	while (token)
		argv[i++] = token, token = strtok(NULL, " \n");

	argv[i] = NULL;
	if (argv[0][0] == '/' && stat(cmd, &st) == 0)
		exec(argv);

	file_stat(argv[0], argv);

	return (NULL);
}

