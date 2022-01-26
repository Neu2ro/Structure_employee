/*C program to define a structure employee containing the specified details*/

#include<stdio.h>

//Defining the structure
struct employee
{
    int id, phone_no, salary;
    char name[25];
}emp[20];

void main()
{
    //Declaring the variables
    int i, n;

    //Asking the number of employes
    printf("Enter the no of employees\n");
    scanf("%d",&n);

    //Asking the user about the details of employes individually
    printf("Enter employee info as id , name , phone_no , salary\n");
    for(i=0; i<n; i++)
    {
        scanf("%d %s %d %d",&emp[i].id,emp[i].name,&emp[i].phone_no,&emp[i].salary);
    }

    //Printing the details
    printf("\nEMP_id\t\tEMP_NAME\tEMP_phone_no\t\tEMP_SAL\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t\t%s\t\t%d\t\t%d\n",emp[i].id,emp[i].name,emp[i].phone_no,emp[i].salary);
    }
}
