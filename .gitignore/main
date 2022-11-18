#include "main.h"

/**
 * main - runs asimple shell
 * @argv:used to store tockens
 * @ac:unused
 * Return: returns 0 on success , -1 on failure
 */
int main(int ac, char **argv)
{
	char *prompt = "#cisfun$ ";
	char *buffer = NULL, *buffer_copy = NULL;
	size_t n = 0;        /*declaring variables*/
	ssize_t chars_read;
	const char *delim = "\n";
	int i, num_tokens = 0;
	char *token;
	(void)ac;

	while (1) /* creat alop for the shell's prompt */
	{
		printf("%s", prompt);
		chars_read = getline(&buffer, &n, stdin);
	/*check if getline failed or reached EOF or user use CTRL +D */
		if (chars_read == -1)
		{
			printf("exit\n");
			return (-1);
		}

		/*allocate space for copy of *buffer*/

		buffer_copy = malloc(sizeof(char) * chars_read);
		if (buffer_copy  == NULL)
		{
			perror ("failed to allocate memory");
			return (-1);
		}
		/*printf("%s\n", buffer);*/
		/*copy buffer to buffer_copy*/
		strcpy(buffer_copy, buffer);

	/* split the string (buffer) into an array of words*/
		token = strtok(buffer, delim);
		/* determine how many tockens are there using loop */
		while (token != NULL)
		{
			num_tokens++;
			token = strtok(NULL, delim);
		}
		num_tokens++;
		/*alocate space to hold array of strings*/
		argv = malloc(sizeof(char *) * num_tokens);
		/*store each tocken in argv attay */
		token = strtok(buffer_copy, delim);

		for (i = 0; token != NULL; i++)
		{
		argv[i] = malloc(sizeof(char) * strlen(token));
		strcpy(argv[i], token);

		token = strtok(NULL, delim);
		}
		argv[i] = NULL;

		/*execute the command */
		exec(argv);

		printf("%s\n", buffer);


	}
	return (0);
}
