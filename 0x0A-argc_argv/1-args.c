#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the numbers of arguments
 * @argc: number of arguments typed
 * @argv: array pointing to arguments
 * Return: 0
 */
int main (int argc, __attribute__((unused)) char *argv[])
{
  int i;

  for (i = 0; i < argc; i++)
    {
    }
  printf("%d\n",i - 1);
  return(0);
}