#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct Employee
{
	char Name[100];
	char Position[100];
	int Salary;
};

typedef struct Employee Employee;//create the alias

void setEmployee(char n[], char p[], int sal, Employee* e)
{
	strcpy(e->Name, n);//strcpy() can copy the second arguement to the first one
	strcpy(e->Position, p);
	e->Salary = sal;
}

void showInfo(Employee e)
{
	printf("Name: %s\n", e.Name);
	printf("Position: %s\n", e.Position);
	printf("Salary: %d\n", e.Salary);
}

int main()
{
	int numOfEmployee;
	scanf("%d", &numOfEmployee);
	Employee* e;
	e = (int*)malloc(numOfEmployee * sizeof(int));
	char n[100];
	char p[100];
	int sal;
	for (int i = 0; i < numOfEmployee; i++)
	{
		scanf("%s%s%d", n, p, &sal);//get the user input
		setEmployee(n, p, sal, &e[i]);//call the function
	}
	for (int i = 0; i < numOfEmployee; i++)
	{
		showInfo(e[i]);//call the function
	}

	free(e);//remember to free the memory

	return 0;
}
