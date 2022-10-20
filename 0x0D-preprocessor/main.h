#ifndef _MAIN_H_
#define _MAIN_H_

void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
char **strtow(char *str);
char *argstostr(int ac, char **av);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *_strdup(char *str);
int is_palindrome(char *s);
