#include<stdio.h>

// Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure

struct student{
	int id;
	char Name[100];
	int age;
	char course[100];
    char city[100];
    int standard;
    char school[100];
};

main()
{
	struct student s1,s2,s3;
	
	s1.id = 1;
	strcpy(s1.Name,"Krishna");
	s1.age = 18;
	strcpy(s1.course,"Full Stack Devlopment");
	strcpy(s1.city,"Surat");
	s1.standard = 12;
	strcpy(s1.school,"J.b.diamond");
	
	printf("Id = %d\n",s1.id);
	printf("Name = %s\n",s1.Name);
	printf("Age = %d\n",s1.age);
	printf("Course = %s\n",s1.course);
	printf("City = %s\n",s1.city);
	printf("Standard = %d\n",s1.standard);
	printf("School = %s\n",s1.school);
	
	printf("\n");
	
	s2.id = 2;
	strcpy(s2.Name,"shree");
	s1.age = 22;
	strcpy(s1.course,"Cyber Security");
	strcpy(s1.city,"Galapagos");
	s1.standard = 11;
	strcpy(s1.school,"kuku");
	
	printf("Id = %d\n",s2.id);
	printf("Name = %s\n",s2.Name);
	printf("Age = %d\n",s2.age);
	printf("Course = %s\n",s2.course);
	printf("City = %s\n",s2.city);
	printf("Standard = %d\n",s2.standard);
	printf("School = %s\n",s2.school);
	
	printf("\n");
		
	s3.id = 3;
	strcpy(s3.Name,"Radhe");
	s1.age = 19;
	strcpy(s3.course,"IOS devloper");
	strcpy(s3.city,"Vrindavan");
	s3.standard = 12;
	strcpy(s3.school,"BankeBihari GUrukul");
	
	printf("Id = %d\n",s3.id);
	printf("Name = %s\n",s3.Name);
	printf("Age = %d\n",s3.age);
	printf("Course = %s\n",s3.course);
	printf("City = %s\n",s3.city);
	printf("Standard = %d\n",s3.standard);
	printf("School = %s\n",s3.school);
	
	
}