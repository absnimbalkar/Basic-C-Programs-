#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Pick a Food Item of your chocie:\n1.Egg Sandwhich\n2.Pizza\n3.French Fries\n4.Mexican Noodles\n5.Italian Pasta \n");
	int choice=0;
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:printf("Hello,You choosed to eat Egg Sandwhich");
		      printf("\nPrice:270");
		      break;
		case 2:printf("Hello,You choosed to eat Pizza");
		      printf("\nPrice:320");
		      break;
		case 3:printf("Hello,You choosed to eat French Fries");
			  printf("\nPrice:125");
			  break;
		case 4:printf("Hello,You choosed to eat Mexican Noodles");
		      printf("\nPrice:300");
		      break;
		case 5:printf("Hello,You choosed to eat Italian Pasta");
			  printf("\nPrice:220");
			  break;
			  default:printf("Invalid Choice");
		
	}
}