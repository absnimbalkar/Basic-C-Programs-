#include<stdio.h>  
 int main()    
{    
int x=50, y=25;      
printf("Before swap x=%d y=%d",x,y);      
x=x+y;//x=50 (50+25)    
y=x-y;//y=25 (75-25)    
x=x-y;//x=50 (75-50)    
printf("\nAfter swap x=%d y=%d",x,y);    
return 0;  
}