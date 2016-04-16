/* mod.c - printed on May 8, 1987 at 2:28:50 PM; retyped on May 25, 2014 */
/* To build with GCC: gcc mod.c -o mod.exe */

/* The modulus operator */

#include <stdio.h> /* ThAW 2014/05/25 : Added this line */

main ()
{
	int  a = 25, b = 5, c = 10, d = 7;
	printf ("a %% b = %d\n", a % b);
	printf ("a %% c = %d\n", a % c);
	printf ("a %% d = %d\n", a % d);
	printf ("a / d * d + a %% d = %d\n",
	           a / d * d + a % d);
}
