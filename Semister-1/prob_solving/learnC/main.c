#include <stdio.h>

int oper(){
	int cmd;
	int cont = 1;
	int a,b;
	printf("Choose \n1 for sum\n2 for subtracton\n3 for product\n4 for division\n5 for remainder\n");
	scanf("%i",&cmd);
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	while (cont==1){
	if(cmd==1){
		printf("sum of %d and %d is %d",a,b,a+b);
	}
	else if (cmd==2)
	{
		printf("Difference fo %d and %d is %d",a,b,a-b);
	}
	else if(cmd==3){
		printf("Product of %d and %d is %d",a,b,a*b);
	}
	else if(cmd==4)
	{
		printf("Dividing %d with %d and quotient is %d",a,b,a/b);
	}
	else if(cmd==5){
		printf("Remainder when dividing %d by %d is %d",a,b,a%b);
	}
	else{
		printf("Choose collect option.");
	}
	printf("\n");
	printf("Would you like to perfrm more?");
	scanf("%d",&cont);
	}
	return 0;
};
 
int main(){
	char nm[20];
	printf("Enter Name :");
	scanf("%s",&nm);
	printf("Namaste %s!\n",nm);

	printf("Operations Programs\n");
	oper();
	return 0;
}
