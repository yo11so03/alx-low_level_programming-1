#include "main.h"
/*
 * strpbrk - entry point
 * @s: input
 * @accept: input 
 * return always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;
	whil (*s)
	{
		for ( = 0;accept[k]; k++)
			{
				if (*s == accept[k])
					return (s);
			}
		s++
	}
	return ('\0')
}
					    
