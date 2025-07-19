/*
Step : 3
	Extend the program(step : 3)
	Input : 	Enter your score : 87
	Output : 	Your grade is A. Excellent work! You are eligible for the next level.
	if get A,B,C,D : Congratulations! You are eligible for the next level.
	if get F : Please try again next time.
	Use if else statement 
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
    		printf("Excellent work! ");
    		break;
    	case 'B':
    		printf("Well done. ");
    		break;
    	case 'C':
    		printf("Good job. ");
    		break;
    	case 'D':
    		printf("You passed. ");
    		break;
    	case 'F':
    		printf("Sorry, you failed. ");
    		break;
    	default:
            printf("Invalid grade. ");
            break;
	}
	if(grd == 'A'|| grd == 'B'|| grd == 'C'|| grd == 'D')
	{
		printf("You are eligible for the next level.\n", grd);
	}
	else
	{
		printf("Please try again next time.\n", grd);
	}
}