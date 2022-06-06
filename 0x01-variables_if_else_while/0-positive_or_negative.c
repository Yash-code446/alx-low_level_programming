#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main -> assign a random number to the variable n each time it is executed
 * and prints out based on a condition
 * Return: Always 0 (success)
*/

int main(void)
{
             	int n;

	        srand(time(0));
		n = rand() - RAND_MAX / 2;
                if (n > 0)
			prinf("%d is positive\n", n);
		if (n == 0)
			prinf("%d is zero\n", n);
{		
		if (n < 0)
			prinf("%d is negative\n", n);
}		
                return (0);
}
