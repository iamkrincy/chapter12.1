#include<stdio.h>

//Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure.


struct Employees{
	int id;
    char name[100];
    int age;
	char role[100];
    char city[100];
    char experience[100];
    char company_name[100];
};

main()
{
	int n,i;
	printf("Enter How Many employees data enter=");
	scanf("%d",&n);
	
	struct Employees e[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter Employer ID=");
		scanf("%d",&e[i].id);
		printf("Enter Employer Name=");
		scanf("%s",&e[i].name);
		printf("Enter Employer Age=");
		scanf("%d",&e[i].age);
		printf("Enter Employer Role=");
		scanf("%s",&e[i].role);
		printf("Enter Employer City=");
		scanf("%s",&e[i].city);
		printf("Enter Employer Experience=");
		scanf("%s",&e[i].experience);
		printf("Enter Employer Company Name=");
		scanf("%s",&e[i].company_name);
		
		printf("\n");
	}
	
	for(i=0; i<n; i++)
	{
		printf("ID = %d\n",e[i].id);
		printf("Name = %s\n",e[i].name);
		printf("Age = %d\n",e[i].age);
		printf("Role = %d\n",e[i].role);
		printf("City = %s\n",e[i].city);
		printf("Experience = %s\n",e[i].experience);
		printf("Company_Name = %s\n",e[i].company_name);
		
		printf("\n");
	}
}