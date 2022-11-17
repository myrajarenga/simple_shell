#include "main.h"
/**
 * exec - executes aprogram
 * @argv:arguments to be executed
 *
 * Return:0
 */
void exec(char **argv)
{

	if (fork() == 0)
	{
		if (execve(argv[0], argv, environ) == -1)
			perror("");
	}
	else
	{
		wait(NULL);
		_getline();
	}
}
