#include<stdio.h>
int main()
{
	int marks;char ch;
	printf("Enter marks of the student: \n");
	scanf("%d",&marks);
	{
		if(marks>=85 && marks<=100)
		{
			printf("Grade A");
		}
		else if(marks >=70 && marks<=84)
		{
			printf("Grade B");
		}
		else if(marks >=55 && marks<=69)
		{
			printf("Grade C");
		}
		else if(marks >=40 && marks<=54)
		{
			printf("Grade D");
		}
		else
		{
			printf("Grade F");
		}	
	}
}