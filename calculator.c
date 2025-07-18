#include<stdio.h>
int main()
{    
	int operation,sum,product,diff,quotient,a,b,EXIT;
	
	printf(" This is a calculator\n");
	do{
	
	printf("***Enter an option from the list below***\n");
	printf("1.Addition\n");
	printf("2.Substraction\n");
	printf("3.Division\n");
	printf("4.Multiplication\n");
	printf("5.EXIT\n");
	EXIT=false;
	scanf("%d",&operation);
	switch(operation)
	{
		
		case 1:
			{
				printf("Enter the first value\n");
				scanf("%d",&a);
				printf("Enter the second value\n");
				scanf("%d",&b);
				sum = a+b;
				printf("The sum of %d and %d is %d",a,b,sum);
				printf("\n\n");
			}
			break;

{

case 2:
	{
			printf("Enter the first value\n");
				scanf("%d",&a);
				printf("Enter the second value\n");
				scanf("%d",&b);
				diff = a-b;
				printf("The difference of %d and %d is %d",a,b,diff);
				printf("\n\n");
	}
}
	break;
	case 3:
		{
			printf("Enter the first value\n");
				scanf("%d",&a);
				printf("Enter the second value\n");
				scanf("%d",&b);
				quotient = a/b;
				printf("The quotient of %d and %d is %d",a,b,quotient);
				printf("\n\n");
		}
		break;
		case 4:
			{
					printf("Enter the first value\n");
				scanf("%d",&a);
				printf("Enter the second value\n");
				scanf("%d",&b);
				product = a*b;
				printf("The product of %d and %d is %d",a,b,product);
				printf("\n\n");
			}
			
				break;
				case 5:{
					printf("You have exited the program!!");
					return 0;
					break;
				}
							default:
								printf("INVALID INPUT!,PLS TRY AGAIN\n");
								
								break;
							}
							
									}while(!EXIT);
return 0;
}


