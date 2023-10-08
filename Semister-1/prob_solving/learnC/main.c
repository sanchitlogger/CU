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
 
int exp4_1(){
	int cou =0,nc=0,sum=0;
	float avg;
	printf("Program to find sum and avg of number between 1 t0 300 divisible by 7.\n");
	for(cou=1;cou<300;++cou){
		if (cou%2!=0){
			if (cou%7==0){
				sum +=cou;
				++nc;
			};
		};
	};
	avg = sum/nc;
	printf("The sum is %d and average is %f",sum,avg);
	return 0;
}
int main(){
	char nm[20];
	printf("Enter Name :");
	scanf("%s",&nm);
	printf("Namaste %s!\n",nm);

exp4_1();
	
	return 0;
}
