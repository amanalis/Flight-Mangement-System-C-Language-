#include<stdio.h>
	struct name{
		char nam[20];
	}n;
int main()
{
    struct name n;
	char name[20];
	printf("Name: ");
	gets(name);
	gets(n.nam);
	printf("Your name is %s %s",name,n.nam);
	
}
