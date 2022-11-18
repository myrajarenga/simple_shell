#include "main.h"
/**
 * exec - executes aprogram
 * @argv:arguments to be executed
 *
 * Return:0
 */
void exec(char **argv)
{
	char *cmd = NULL, *actual_cmd = NULL;

	if (argv)
	{
		/*get the command*/
		cmd = argv[0];
 /* generate the path to this command before passing it to execve */
	actual_cmd = get_location(cmd);
	}

	if (fork() == 0)
	{
	/*execute the actual cmd with execv*/
		if (execve(actual_cmd, argv, NULL) == -1)
		{	
			perror("");
		}
	}
	else
	{
		wait(NULL);
		
	}
}
