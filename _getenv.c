#include "main.h"
/**
 * _getenv - returns the value of an environment variable
 * @name:user command input
 * Return: returns value of environment variable, NULL on failure
 */
char *_getenv(const char *name)
{
	char *str = NULL;
	char *str_return = malloc(1024), char *env = NULL;
	int i = 0, j = 0, k = 0, p = 0;

	while (environ[p] != NULL)
	{
		env = strdup(environ[p]);
		str = malloc(sizeof(env));
		for (i = 0; env[i] != '='; i++, j++)
		{
			*(str + j) = env[i];

		}
		str[j] = '\0';

		if (strcmp(str, name) == 0)
		{
			i++;

			for (; env[i] != '\0'; i++, k++)
			{
				*(str_return + k) = env[i];
			}
			str_return[k] = '\0';

			break;
		}
		k = 0;
		j = 0;

		p++;
	}
	free(env);
	free(str);
	return (str_return);
}
