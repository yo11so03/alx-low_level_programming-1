#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main -main fonction to generate a random number
 * return: always 0 (succes)
 */
int maid(void)
{
	int n;
	srand(time(0));
	n =rand() - RAND_MAX / 2;
	    if (n > 0)
	    {
		 printf("%d is positive,\n", n);
	    }
	    else if (n = 0) 
	    {
		   printf("%d is zero,\n", n);
	    }
	    else if (n < 0)
	    {
		   printf("%d is negative,\n", n);
	    }
	   return (0); 
	
