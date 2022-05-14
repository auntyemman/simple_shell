#include "main.h"

char *builtin_str[] = {
	"cd",
	"help",
	"exit"};

int (*builtin_func[])(char **) = {
	&builtin_cd,
	&builtin_help;
	&builtin_exit};

/** num_builtins - function to return number of builtins
 *
 * Return: void
 */
int num_builtins()
{
	int nb;

	nb = (sizeof(builtin_str) / sizeof(char *));

	return (nb);
}

/**
 * builtin_cd - function that changes directory
 *
 * @args: pointer to arguments
 *
 * Return: integer(1)
 */

int builtin_cd(char **args)
{
	if (args[1] == NULL)
	{
		fprintf(stderr, "No such file or directory\n");
	}
	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("No such file or directory\n");
		}
	}
	return (1);
}

/**
 * builtin_help - help function
 *
 * @args: pointer to arguments
 *
 * Return: integer(1)
 */

int builtin_help(char **args)
{
	int i;

	printf("An ALX simple shell project\n");
	printf("Type program names and arguments, and hit enter.\n");
	printf("The following are built in:\n");

	for (i = 0; i < num_builtins(); i++)
	{
		printf(" %s\n", builtin_str[i]);
	}

	printf("Use man command for more information.\n"));

	return (1);
}

/**
 * builtin_exit - exit function
 *
 * @args: pointer to arguments
 *
 * Return: integer(0)
 */

int builtin_exit(char **args)
{
	return (0);
}
