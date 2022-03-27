/*C program to read and print employee's record using structure*/
 
#include <stdio.h>
 
/*structure declaration*/
struct employee{
    int     empno;
    char    name[30];
    char    depname[30];
    float   salary;
};
 
int main()
{
    /*declare structure variable*/
    struct employee emp;
     
    /*read employee details*/
    printf("\nEnter details :\n");
    printf("EMP NO:");            scanf("%d",&emp.empno);
    printf("Name :");          scanf("%s",&emp.name);
    printf("Departemnt Name :");    scanf("%s",&emp.depname);
    printf("Salary :");        scanf("%f",&emp.salary);
     
    /*print employee details*/
    printf("\nEntered detail is:");
    printf("Id: %d"     ,emp.empno);
    printf("\nName: %s"   ,emp.name);
    printf("\nDepartemnt Name: %s"   ,emp.depname);
    printf("\nSalary: %f\n",emp.salary);
    return 0;
}