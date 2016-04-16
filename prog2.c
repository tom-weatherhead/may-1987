/* prog2.c - printed on May 8, 1987 at 2:29:13 PM; retyped on May 25, 2014 */
/* To build with GCC: gcc prog2.c -o prog2.exe */

#include <stdio.h>
int one,two,dif,lp,nxt;
main ()
{
	/* ThAW 2014/05/25 : Replaced the following line with the three lines that follow it: */
	/* scanf("Enter two integers: %d,%d",&one,&two); */
	printf("Enter two integers, separated by a comma: ");
	fflush(stdout);
	scanf("%d,%d",&one,&two);
	dif = two - one;
	nxt = two;
	lp = 0; /* ThAW 2014/05/25 : Added this line. */
	while (lp < 5) /* ThAW 2014/05/25 : Deleted a semicolon from the end of this line. */
	{
		nxt = nxt + dif;
		lp = lp + 1;
		printf("Entry %d is %d\n",lp,nxt);
	}
	printf("End of program\n");
}
