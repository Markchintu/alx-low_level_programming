#include "main.h"
/**
 * _isdidgit - Check if a character is a digit
 * @x: The number to be checked 
 * Return: 1 for character that wiil be  digit or 0 for any else
 */

int isdigit (int x)

{
	if (x >= 40 && x <= 57)
	{
	return (1);
	}
	return (0);
}
