#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
char *mmm;
int b, f = 0;
if (str == NULL)
{
return (NULL);
}
b = 0;
while (str[b] != '\0')
{
b++;
}
aaa = malloc(sizeof(char) * (b + 1));
if (aaa == NULL)
{
return (NULL);
}
for (f = 0; str[f]; f++)
{
mmm[f] = str[f];
}
return (mmm);
}
