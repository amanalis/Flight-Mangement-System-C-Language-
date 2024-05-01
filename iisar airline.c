#include<stdio.h>
struct info
{
  char code[10];
  char name[20];
  char gender;
  char email[200];
  char mob[12];
  char address[200];
  char date[200];
  int flight;
  char seat;
  int price;
}i;
//functions
void booking(void);
void menu(void);
void info(void);
void view(void);
void about(void);
void exi(void);
void key(void);
void main(void){
	system("cls");
	system("COLOR 8F");
	printf("\t\t\t=================================\n");
	printf("\t\t\t|| WELCOME TO IISAR AIRLINES:D ||\n");
	printf("\t\t\t||        COME FLY WITH US.    ||\n");
	printf("\t\t\t=================================\n");
	printf("\n");
	printf("\n");
	int chk;
	printf("Enter your prefences:\n");
	printf("\t\t\t1.Filght Schedule.\n");
	printf("\t\t\t2.Book your tickets.\n");
	printf("\t\t\t3.Info.\n");
	printf("\t\t\t4.View All tickets.\n");
	printf("\t\t\t5.About.\n");
	printf("\t\t\t6.Exit\n");
	scanf("%d",&chk);
	switch(chk){
		case 1:{
			menu();
			key();
			break;
		}
		case 2:{
			menu();
			booking();
			key();
			break;
		}
		case 3:{
			info();
			key();
			break;
		}

		case 4:{
			view();
			key();
			break;
		}
		case 5:{
			about();
			break;
		}
		case 6:{
			exi();
			break;
		}
		default:{
			int key;
	    	printf("Wrong Input\n");
			printf("press any number from 1 to 9 to return to home screen\n");
	        scanf("%d",&key);
        	if(key>=0 && key<=9){
        		main();
			}
			break;
		}
	}
}
void menu(void){
    printf("====================================================================================================================\n");
    printf("||                                                  IISAR AIRLINES                                                ||\n");
    printf("||==================================================================================================================\n");
    printf("||FLIGHT NO.||DEPARTURE TIME||ARRIVAL TIME||DURATION||DESTINATION||BUSSINESS CLASS||SECONDARY CLASS||ECONOMY CLASS||\n");  
    printf("||________________________________________________________________________________________________________________||\n");
    printf("||   22201  ||    3:00 AM   ||   4:50 AM  ||1hr50min||  KHI-LHR  ||    12000 rs   ||   10000 rs    ||   7000 rs   ||\n");
    printf("||________________________________________________________________________________________________________________||\n");
    printf("||   11501  ||    7:30 AM   ||   8:25 AM  ||1hr55min||  KHI-PSH  ||    10000 rs   ||    8000 rs    ||   6000 rs   ||\n");
    printf("||________________________________________________________________________________________________________________||\n");
    printf("||   33805  ||    1:00 PM   ||   3:00 PM  ||   2hr  ||  KHI-ISL  ||    12500 rs   ||   10000 rs    ||   8500 rs   ||\n");
    printf("====================================================================================================================\n");
}
void booking(void){
	char b='b',s='s',e='e';
	int amount,j;
	FILE *fp;
	struct info;
	printf("Enter Code(alpha-numeric):");
	scanf(" %s",&i.code);
	printf("Enter Name(first name only with no spaces):");
	scanf(" %s",&i.name);
	printf("Enter Gender(M/F):");
	scanf(" %c",&i.gender);
	printf("Enter your Email Address:");
	scanf(" %s",&i.email);
    printf("Enter Mobile No.:");
	fflush(stdin);
	gets(i.mob);
	printf("Enter your Address(no spaces):");
	scanf(" %s",&i.address);
	printf("Enter your date of travel(dd-mm-yy):");
	scanf(" %s",&i.date);
	printf("Enter Flight No.:");
	scanf(" %d",&i.flight);
	
	if(i.flight == 22201){
		printf("Enter your Seat \n(B)Buissness class\n(S)Secondary class\n(E)Economy class\n (note: enter small letter)\n");
		scanf(" %c",&i.seat);
		if(i.seat == b){
			i.price=12000;
			amount=12000;
		}
		else if(i.seat == s){
			i.price=10000;
			amount=10000;
		}
		else if(i.seat == e){
			i.price=7000;
			amount=7000;
		}
	}
	else if(i.flight == 11501){
		printf("Enter your Seat \n(B)Buissness class\n(S)Secondary class\n(E)Economy class\n (note: enter small letter)\n");
		scanf(" %c",&i.seat);
		if(i.seat == b){
			i.price=10000;
			amount=10000;
		}
		else if(i.seat == s){
			i.price=8000;
			amount=8000;
		}
		else if(i.seat == e){
			i.price=6000;
			amount=6000;
		}
	}
	else if(i.flight == 33805){
		printf("Enter your Seat \n(B)Buissness class\n(S)Secondary class\n(E)Economy class\n (note: enter small letter)\n");
		scanf(" %c",&i.seat);
		if(i.seat == b){
			i.price=12500;
			amount=12500;
		}
		else if(i.seat == s){
			i.price=10000;
			amount=10000;
		}
		else if(i.seat == e){
			i.price=8500;
			amount=8500;
		}
	}
	// Saving in file
	fp=fopen("booking.txt","a");
	if(fp == NULL){
		printf("Not Found");
		main();
	}
	else{
		fprintf(fp,"%s %s %c %s %s %s %s %d %c %d \n",i.code,i.name,i.gender,i.email,i.mob,i.address,i.date,i.flight,i.seat,i.price);
		printf("Congratulation! Booking Successful.Total amount to pay %drs. Have a safe Flight.\n",amount);
	}
	printf("\n");
	fclose(fp);
  
}
//Printing every record in file
void view(void){
	char ch;
	FILE *fp;
	fp = fopen("booking.txt","r");
	if(fp==NULL){
		printf("Not found");
		main();
	}
	else
	{
		while((ch=fgetc(fp))!=EOF)
		printf("%c",ch);
	}
	fclose(fp);
}
void about(void){
	system("cls");
	printf("People behind the project:\n\n\n  \t\t\t-->Capt.Aman-2012375\n\n  \t\t\t-->Capt.Hasnain Ali-2012384\n\n  \t\t\t-->Manager.Ali Mohammad-2012389\n\n ");
	printf("press any number from 1 to 9 to return to home screen\n");
	key();
}

void exi(void){
	printf("\t\t\t*****************\n");
	printf("\t\t\t**             **\n");
	printf("\t\t\t**Thank You For**\n");
	printf("\t\t\t** using  our  **\n");
	printf("\t\t\t**   Service   **\n");
	printf("\t\t\t**             **\n");
	printf("\t\t\t*****************\n");	
}
void key(void){
	int key;
	printf("Press any Number key:\n");
    scanf("%d",&key);
    if(key>=0 && key<=999){
    	main();
	}
}
//searching in File
void info(void){
	struct info i;
	FILE *fp;

	char ch[5];
	printf("Enter ticket code :");
	scanf("%s",&ch);

	fp = fopen("booking.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		main();

	}
	else
	{
		while(getc(fp) != EOF)
		{
			fscanf(fp,"%s %s %c %s %s %s %s %d %c %d",&i.code,&i.name,&i.gender,&i.email,&i.mob,&i.address,&i.date,&i.flight,&i.seat,&i.price);
			if(strcmp((ch),i.code)==0)
			{
				printf("%s %s %c %s %s %s %d %c %d\n",i.code,i.name,i.gender,i.email,i.mob,i.date,i.flight,i.seat);
				printf("\n Record Found\n");
				printf("\n\t\tTicket Code : %s",i.code);
				printf("\n\t\tName : %s",i.name);
				printf("\n\t\tGender : %c",i.gender);
				printf("\n\t\tEmail : %s",i.email);
				printf("\n\t\tMobile No.: %s",i.mob);
				printf("\n\t\tDate : %s",i.date);
				printf("\n\t\tFlight No. : %d",i.flight);
				printf("\n\t\tSeat : %c",i.seat);
				printf("\n\t\tAmount: %d\n",i.price);
				break;
			}
		}
	}
	fclose(fp);	
}

