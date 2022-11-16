#include "main.h"
/**
 * free_dp - A function that frees all the memory allocated for command.
 * @ch: The pointer to allocated memory to free.
 * Return: Nothing.
 */
void free_dp(char **ch)
{
	size_t i = 0;

	if (ch == NULL)
		return;
	while (ch[i])
	{
		free(ch[i]);
		i++;
	}
	if (ch[i] == NULL)
		free(ch[i]);
	free(ch);
}
/**
 * free_exit - A function that frees all the memory allocated and exit.
 * @ch: The pointer to allocated command memory to free.
 * Return: Nothing.
 */
void free_exit(char **ch)
{
	size_t i = 0;

	if (ch == NULL)
		return;
	while (ch[i])
	{
		free(ch[i]);
		i++;
	}
	if (ch[i] == NULL)
		free(ch[i]);
	free(ch);
	exit(EXIT_FAILURE);
}
