#include<stdio.h> 
#include<math.h>
int main()
{ 
	int choice, num1, num2, ans, op;
	char cont; 
	do 
	{ 
		printf("\nCalculator menu:\n1.Basic Arithmetic\n2.Power and Root of number\n3.Factorial\n4.Exit\nEnter your choice:");
		scanf("%d",&choice); 
		switch(choice)
		{
			case 4:
		{ 
			printf("Exiting\n"); 
			break; 
		} 

			case 1:
		
			do 
			{ 
				printf("\nArithmetic menu:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nEnter your choice:"); 
				scanf("%d",&op);
				printf("Enter the 2 numbers:"); 
				scanf("%d\n%d",&num1,&num2);
				switch(op)
				{ 
					case 1: 
					ans=num1+num2;
					break;
					case 2: 
					ans=num1-num2;
					break;
					case 3: 
					ans=num1*num2;
					break; 
					case 4: 
					if(num1==0 || num2==0) 
					{ 
						printf("Error: Division by zero not possible\n"); 
					} 
					else
						ans = num1/num2;
					break;
					default:
					printf("\nInvalid\n");
				}		 
				printf("Answer:%d",ans); 
				printf("\nDo you want to continue?y/n\n");
				scanf(" %c", &cont); 
			} 
			while(cont == 'y' || cont == 'Y'); 
			break;
		case 2:
		
			do 
			{ 
				printf("\n1.Power\n2.Square Root\nEnter your choice:\n");
				scanf("%d",&op); 
				switch(op)
				{
					case 1: 
					printf("Enter your number:\n"); 
					scanf("%d",&num1);
					printf("\nEnter the power:\n");
					scanf("%d",&num2);
					ans = pow(num1,num2);
					break;
					case 2:
					printf("Enter your number:\n");
					scanf("%d",&num1);
					if(num1>0)
					ans=sqrt(num1);
					else
					printf("ERROR: Negative integer input.\n");
					break;
					default:
					printf("Invalid.\n");
					break;
				}
				printf("Answer:%d",ans); 
				printf("\nDo you want to continue?y/n");
				scanf(" %c", &cont); 
			} 
			while(cont == 'y' || cont == 'Y'); 
			break;
		case 3: 
			do 
			{
				ans=1;
				printf("Enter the number:\n");
				scanf("%d",&num1);
				if(num1>0){ 
				for(int i=1;i<=num1;i++) 
				{ 
					ans*=i; 
				}
				printf("Answer:%d",ans);}
				else 
				printf("ERROR: Negative integer input.\n");
				printf("Do you want to continue?y/n");
				scanf(" %c", &cont); 
			} 
			while(cont == 'y' || cont == 'Y'); 
			break;
		}
	}while(choice!=4);
}
