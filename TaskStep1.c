/*
Step : 1
	Input : 	Enter your score : 92
	Output : 	Your grade is A.
	
	Using Ternary oprtr & allocate A to F grade.
*/

#include<stdio.h>
int main()
{
	int scr;
    char grd;

    printf("Enter your score : ");
    scanf("%d", &scr);

    grd = (scr >= 80) ? 'A' : (scr >= 70) ? 'B' : (scr >= 60) ? 'C' : (scr >= 40) ? 'D' : 'F';
    printf("Your grade is %c.\n", grd);

}