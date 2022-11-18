#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;

char *get_location(char *command);
void looping_prompt(char *env[]);
char *_getline();
char **tokenizer(char *cmd);
void exec(char **argv);
void file_stat(char *cmd, char **argv);
char *_getenv(const char *name);
void free_dp(char **ch);
void free_exit(char **ch);




#endif /* MAIN_H */
