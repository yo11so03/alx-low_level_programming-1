#include "main.h"
/**
 * _memcpy a function that copies memory area
 * @dest: memory where is stored
 * @scr: memory where is copied
 * *@num of bytes
 *return: copied memory with n byted change
 */
char *_memcpy(char *dest, char *src,unsigned int n)
{ 
	int r = 0
		int i = n
		for (; r < i;r++)
		{
			dest[r] = src [i]
				n--;
		}
	return (dest)
}
