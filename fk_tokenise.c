#include <stdio.h>
#include <string.h>

/**
 * demonstrates how to break down a string into tokens
 * main - entry point
 * fk_print: functions as printf
 * @message: string to print
 * @token_str:string to tokenize
 * Return: Always 0 (Success)
 */

void fk_print(const char *message);

int token_str(void)

{
	char command[] = "this.is.our.shell";
	char *tokens;
	char *delimiter = ".";
	tokens = strtok(command, delimiter);
	while (tokens != NULL)
	{
		fk_print("Token: %s\n", tokens);
		tokens = strtok(NULL, delimiter);
	}
	return (0);
}
