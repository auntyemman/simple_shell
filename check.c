#include "hsh.h"
/**
 *checker- checks if its a built in function
 *@cmd: tokenized user input
 *@buf: line drived fromgetline function
 *Return: 1 if cmd excuted 0 if cmd is not executed
 */
int checker(char **cmd, char *buffer)
{
	if (handle_builtin(cmd, buffer))
		return (1);
	else if (**cmd == '/')
	{
		execution(cmd[0], cmd);
		return (1);
	}
	return (0);
}
