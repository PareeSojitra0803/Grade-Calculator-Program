/*
Step : 2
	Extend the program(step : 2)
	Input : 	Enter your score : 92
	Output : 	Your grade is A. Excellent work!
	if get A : Excellent work!
	if get B : Well done.
	if get C : Good job.
	if get D : You passed.
	if get F : Sorry, you failed.
	Use switch case 
*/

#include<stdio.h>
int main()
{
	int scr;
    char grd;

    printf("Enter your score : ");
    scanf("%d", &scr);

    grd = (scr >= 80) ? 'A' : (scr >= 70) ? 'B' : (scr >= 60) ? 'C' : (scr >= 40) ? 'D' : 'F';
    printf("Your grade is %c.", grd);
    
    switch(grd)
    {
    	case 'A':
    		printf("Excellent work!\n");
    		break;	
    	case 'B':
    		printf("Well done.\n");
    		break;
    	case 'C':
    		printf("Good job.\n");
    		break;
    	case 'D':
    		printf("You passed.\n");
    		break;
    	case 'F':
    		printf("Sorry, you failed.\n");
    		break;
    	default:
    		printf("Invalid input");
    		break;
	}
}