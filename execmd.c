#include "shell.h"


/**
 * execmd - execute a command
 *
 * @prog_name: program name
 * @tokens: command tokens
 *
 * Return: void
 */
void execmd(char *prog_name, char **tokens)
{
	pid_t pid;
	char *command;
	/* wait status */
	int status;

	command = tokens[0];
	pid = fork();
	if (pid == -1)
	{
		perror(prog_name);
		exit(1);
	}
	if (pid == 0)
	{
		if (execve(command, tokens, environ))
		{
			perror(prog_name);
			exit(1);
		}
		exit(0);
	}
	else
	{
		wait(&status);
	}
}
