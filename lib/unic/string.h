/* SPDX-License-Identifier: MIT */
/*
 * Copyright (c) 2024, Ivaylo Ivanov <ivo.ivanov.ivanov1@gmail.com>
 */

#ifndef STRING_H_	/* Include guard */
#define STRING_H_

#include "stddef.h"

void *memcpy(void *s1, const void *s2, size_t n);
void *memmove(void *s1, const void *s2, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void *memset(void *s, int c, size_t n);
void *memchr(const void *s, int c, size_t n);
char *strcpy(char *s1, const char *s2);
char *strncpy(char *s1, const char *s2, size_t n);
int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);
size_t strlen(const char *s);
size_t strnlen(const char *s, size_t n);
char *strchr(const char *s, int c);
char *strrchr(const char *s, int c);
long atol(const char *s);

static inline int tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c - 'A' + 'a';
	else
		return c;
}

static inline int toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return c - 'a' + 'A';
	else
		return c;
}

#endif // STRING_H_
