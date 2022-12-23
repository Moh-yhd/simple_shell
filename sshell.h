#ifndef SSHELL_H
#define SSHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;

/*
 * File : sshell.h
 * Functions
 */

void _builtin(char *s);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_getenv(char *envarname);
char *create_cmd(char *cmd);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _execute(char **argv);
void sighandler(int sig);
int _argck(int ac);

#endif /* #ifndef SSHELL_H */
