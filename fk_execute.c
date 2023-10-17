void exec_command(char *command)
{
	char *args[2];
	pid_t child = fork();

	if (child == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child == 0)
	{
		char full_path[350];

		strcpy(full_path, "/bin/");

		strcat(full_path, command);

		args[0] = full_path;
		args[1] = NULL;

		if (execve(full_path, args, NULL) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
}
