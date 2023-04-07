#include "main.h"
/**
 * @s: The string to be measured.
 * return : length of the string measured. (success)
 * _strlen_recursion - function that  returns the length of a string measured.
 */
int _strlen_recursion(char *s)
{
int longit = 0;
if (*s)
longit++;
longit += _strlen_recursion(s + 1);
}
return (longit);
}
