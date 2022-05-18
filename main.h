#ifndef _MAIN_H
#define _MAIN_H

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"
#define LSH_USE_STD_GETLINE

int builtin_cd(char **args);
int builtin_exit(char **args);
int num_builtins(void);
int sh_launch(char **args);
int sh_execute(char **args);
char *sh_read_line(void);
char **sh_split_line(char *line);
void sh_shell(void);
int main(int argc, char **argv);

int (*builtin_func[])(char **) = {
	&builtin_cd,
	&builtin_exit};

char *builtin_str[] = {
	"cd",
	"exit"};

#endif
