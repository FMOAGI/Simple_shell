#include "shell.h"

/**
 * costum print function
 * fk_print - prints a message
 */

void fk_print(const char *message)
{
write(STDOUT_FILENO, message, strlen(message));
}
