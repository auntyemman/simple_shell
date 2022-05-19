#include "hsh.h"

/**
 *execution - executes commands entered by users
 *@cp: command
 *@cmd:vector array of pointers to commands
 * Return: 0
 */
void execution(char *cp, char **command)
{
	pid_t child_pid;
	int status;
	char **env = environ;

	child_pid = fork();
	if (child_pid < 0)
		perror(cp);
	if (child_pid == 0)
	{
		execve(cp, command, env);
		perror(cp);
		free(cp);
		free_buffers(command);
		exit(98);
	}
	else
		wait(&status);
}
