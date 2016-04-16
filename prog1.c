/* prog1.c - printed on May 8, 1987 at 2:29:04 PM; retyped on May 25, 2014 */
/* To build with GCC: gcc prog1.c -o prog1.exe */

/* A simple C program (hope it works!) */

#include <stdio.h> /* ThAW 2014/05/25 : Added this line */

int a=0;

main ()
{
	while (a < 20)
	{
		a=a+1;
		printf("a is %d\n",a);
	}
	printf("** End of program **\n");
}
