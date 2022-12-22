#include "sshell.h"

/**
 * main - super simple shell
 * @ac: number of arguments passed to main
 * @av: arguments vector
 * @en: environment variables vector
 *
 * Return: 0
 */
int main(__attribute__((unused)) int ac, char **av, char **en)
{
	size_t len = 0;
	char *cmd, *token = NULL, *buffer = NULL, *argv[100];
	int i, chars_read, status;

	while (1)
	{
		write(STDIN_FILENO, "#cisfun$ ", 9);
		chars_read = getline(&buffer, &len, stdin);
		if (chars_read > 1)
		{
			token = strtok(buffer, " \n");
			for (i = 0; token != NULL; i++)
			{
				argv[i] = token;
				token = strtok(NULL, " \n");
			}
			argv[i] = NULL;
			cmd = create_cmd(argv[0]);
			_env(argv[0], en);
			_ext(argv[0]);
			if ((_strcmp(argv[0], "exit")) != 0 &&
					(_strcmp(argv[0], "env")) != 0)
			{
				if (fork() != 0)
					wait(&status);
				else
				{
					if (execve(argv[0], argv, en) == -1)
					{
						perror(av[0]);
						exit(0);
					}
				}
			}
		}
	}

	return (0);
}