#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	char name[20],adr[100],email[100];
	int id,phone;

	printf("\nEnter Name:");
	scanf(" %s",&name);
	printf("\nEnter Phone number:");
	scanf(" %d",&phone);
	printf("\nEnter your Email Address:");
	scanf(" %s",&email);
	printf("\nEnter your Address:");
	scanf(" %s",&adr);
	printf("\nRegistration Id:");
	scanf("%d",&id);
	
	// Saving in file
	fp=fopen("user.csv","a");
	if(fp == NULL){
		printf("Not Found");
	}
	else{
		fprintf(fp,"%s, %d, %s, %s, %d\n",name,phone,email,adr,id);
		printf("Record complete\n");
	}


return 0;
}
