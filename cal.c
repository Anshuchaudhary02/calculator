#include<stdio.h>
#include<conio.h>
int k=0,result;
int menu()
{
	int ch;
	printf("\n1.Add");
	printf("\n2.Subtract");
	printf("\n3.Multiply");
	printf("\n4.Divide");
	printf("\n5.Getremainder");
	printf("\n6.Clear");
	printf("\n7.Exit");
	printf("\nEnter your choice");
	scanf("%d",&ch);
	return ch;
}
void Add()
{
	int a,b;
	if(k){
		printf("Enter a number:");
		scanf("%d",&a);
		result=result+a;
		printf("\nResult=%d",result);
	}
	else{
		printf("Enter two numbers:");
		scanf("%d%d",&a,&b);
		result=a+b;
		printf("\nResult=%d",result);
	}
}
void Subtract()
{
	int a,b;
	if(k){
		printf("Enter a number:");
		scanf("%d",&a);
		result=result-a;
		printf("\nResult=%d",result);
	}
	else{
		printf("Enter two numbers:");
		scanf("%d%d",&a,&b);
		result=a-b;
		printf("\nResult=%d",result);
	}
}
void Multiply()
{
	int a,b;
	if(k){
		printf("Enter a number:");
		scanf("%d",&a);
		result=result*a;
		printf("\nResult=%d",result);
	}
	else{
		printf("Enter two numbers:");
		scanf("%d%d",&a,&b);
		result=a*b;
		printf("\nResult=%d",result);
	}
}	
void Divide()
{
	int a,b;
	if(k){
		printf("Enter a number:");
		scanf("%d",&a);
		result=result/a;
		printf("\nResult=%d",result);
	}
	else{
		printf("Enter two numbers:");
		scanf("%d%d",&a,&b);
		result=a/b;
		printf("\nResult=%d",result);
	}
}	
void Rem()
{
	int a,b;
	if(k){
		printf("Enter a number:");
		scanf("%d",&a);
		result=result%a;
		printf("\nResult=%d",result);
	}
	else{
		printf("Enter two numbers:");
		scanf("%d%d",&a,&b);
		result=a%b;
		printf("\nResult=%d",result);
	}
}
void clear()
{
	printf("\nOld data cleared");
	result=0;
	k=0;
}

main()
{
	while(1){
	switch (menu()){
		case 1:
			Add();
			k=1;
			break;
		case 2:
		    Subtract();
			k=1;
			break;
		case 3:
		    Multiply();
			k=1;
			break;
		case 4:
		    Divide();
			k=1;
			break;
		case 5:
		    Rem();
			k=1;
			break;				
		case 6:
			clear();
			break;
		case 7:
		    exit(0);  
		default:
		printf("\nInvalid choice");	
	}
getch();
}
}
