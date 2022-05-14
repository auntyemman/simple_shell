#include "main.h"

/**
 * sh_execute - execute program launch
 *
 * @args: Null terminated list of arguments
 *
 * Return: 1 to continue running and 0 to terminate
 */

int sh_execute(char **args)
{
	int j;

	if (args[0] == NULL)
	{
		return (1);
	}
	for (i = 0; i < num_builtins(); i++)
	{
		if (strcmp(args[0], builtin_str[i]) == 0)
		{
			return ((*builtin_func[i])(args));
		}
	}

	return (sh_launch(args));
}

/**
 * sh_shell - loop that gets inputs and executes functions
 *
 * Return: void
 */

void sh_shell(void)
{
	char *line;
	char **args;
	int status;

	do {
		printf("$ ");
		line = sh_read_line();
		args = sh_split_line(line);
		status = sh_execute(args);

		free(line);
		free(args);
	} while (status);
}

/**
 * main - main shell function
 *
 * @argc: arguments count
 *
 * @argv: arguments vector
 *
 * Return: status code
 */

int main(int argc, char **argv)
{
	sh_shell();

	return (EXIT_SUCCESS);
}