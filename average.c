#include <stdio.h>
int main()
{
	float marks1,marks2,marks3,average;
	
	printf("Enter marks obtained in subject 1:");
	scanf("%f",&marks1);
	printf("Enter marks obtained in subject 2:");
	scanf("%f",&marks2);
	printf("Enter marks obtained in subject 3:");
	scanf("%f",&marks3);
	
	average = (marks1 + marks2 + marks3) / 3;
	printf("average: %0.2f\n",average);
	
	if(average >= 90 )
	{
		printf("Grade A");
	}
	else if (" average >= 80")
	{
		printf("Grade B");
	}
	else if("average >= 60")
	{
		printf("Grade C");
	}
	else if ("average >= 50")
	{
		printf("Grade D");
	}
	else
	{
		printf("Grade F");
	}
	
	return 0;
}
