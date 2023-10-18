#include "shell.h"

/**
 * fk_print - Custom print function to display a message.
 * @message: The message to be printed.
 *
 * This function writes the given message to the standard output.
 */

void fk_print(const char *message)
{
write(STDOUT_FILENO, message, strlen(message));
}
