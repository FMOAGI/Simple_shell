#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * fkread_command - Reads a command from stdin and removes the newline character.
 * @command: The buffer to store the command.
 * @size: The size of the buffer.
 */
void fkread_command(char *command, size_t size)
{
    size_t len = strlen(command);
    ssize_t bytes_read;
    
    /* Read a line of input into 'command' */
    bytes_read = getline(&command, &size, stdin);

    if (bytes_read == -1)
    {
        if (feof(stdin))
        {
            fk_print("\n");
            exit(EXIT_SUCCESS);
        }
        else
        {
            fk_print("Error while reading input.\n");
            exit(EXIT_FAILURE);
        }
    }

    /* Remove the trailing newline character if it exists */
    if (len > 0 && command[len - 1] == '\n')
    {
        command[len - 1] = '\0';
    }
}
