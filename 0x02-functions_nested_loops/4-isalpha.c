#include"main.h"
/*
 * _isalpha - function that cheks for alphabetic character
 * @c: the character to be checked
 * Return: Always (Success)
 * Description: function that checks for alphabetic character
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
