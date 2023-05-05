#include<stdio.h>
#include<conio.h>
main()
{
    int d;
    clrscr();

    printf("enter value d=");
    scanf("%d",&d);
    printf("press to 1 monday");
    printf("\npress to 2 tuesday");
    printf("\npress to 3 wednesday");
    printf("\npress to 4 thursday");
    printf("\npress to 5 friday");
    printf("\npress to 6 saturday");
    printf("\npress to 7 sunday");
    printf("\nenter your day");
    scanf("%d",d);
    switch(d)
    {
	case 1 :
	       printf("1=monday");
	       break;
	case 2 :
	       printf("2=tuesday");
	       break;
	case 3 :
	       printf("3=wednesday");
	       break;
	case 4 :
	       printf("4=thursday");
	       break;
	case 5 :
		printf("5=friday");
		break;
	case 6 :
		printf("6=saturday");
		break;
	case 7 :
		printf("7=sunday");
		break;
	default :
		 printf("\nplz enter valid day");
    }
getch();
}


