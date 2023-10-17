#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <stddef.h>
#include <sys/stat.h>
#include <signal.h>

void fk_print(const char *message);
void fkread_command(char *command, size_t size);
void exec_command(char *command);
void disp_prompt(void);

#endif
