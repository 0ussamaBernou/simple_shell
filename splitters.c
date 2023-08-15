#include "shell.h"
/**
 * _splitter - counts the number of paths in PATH
 * @s: pointer to PATH string
 *
 * Return: number of directories to check in PATH
 */
int _splitter(char *s)
{
  int i, count = 0;
  for (i = 0; s[i]; i++)
  {
    if (s[i] != ':' && (i == 0 || s[i - 1] != ':'))
	{
      count++;
    }
  }
  return (count);
}