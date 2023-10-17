#include "shell.h"

/**
 *
 */


int main(void)
{
	char command[350];

	while (1)
	{
		disp_prompt();
		fkread_command(command, sizeof(command));
		exec_command(command);
	}

		return (0);
}
