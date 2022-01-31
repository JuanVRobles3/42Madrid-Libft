#ifndef LIBFT_H
#define LIBFT_H
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_isalpha(int a);
int ft_isdigit(int a);
int ft_isalnum(int a);
int ft_ascii(int a);
int ft_isprint(int a);
void *ft_memset(void *str, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *str1, const void *str2, size_t n);
void *ft_memmove (void *str1, const void *str2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);


#endif