#include "shellheader.h"

/**
 * myshell_cd - function to change directory
 * @args: pointer to an array of pointers holding the arguments
 * Return: 1 on success, exit value on error otherwise
*/

int myshell_cd(char **args)
{

	if (args == NULL)
	write(STDOUT_FILENO, "Please enter a command\n", 23);

	else if (chdir(args[1]) != 0)
	{
		perror("hsh");
		exit(EXIT_FAILURE);
	}

return (1);
}

/**
 * myshell_env - function that prints the current environment
 * @args: pointer to an array of pointers holding the arguments
 * Return: 1, always success
*/

int myshell_env(__attribute__((unused)) char **args)
{
	char **envp;

	for (envp = environ; *envp; envp++)
	{
		write(STDOUT_FILENO, *envp, _strlen(*envp));
		write(STDOUT_FILENO, "\n", 1);
	}

return (1);
}

/**
 * myshell_exit - function to exit from shell
 * @args: pointer to an array of pointers holding the arguments
 * Return: 0, always success
*/

int myshell_exit(__attribute__((unused)) char **args)
{
	return (2);
	/*return (0);*/
}
