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

int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    return x * power(x, y / 2) * power(x, y / 2);
};
 
int isprime(int num){
int cou = 0;
for(int i =1;i<=num;++i){
	if (num/i==0){
		++cou;
	};
};
if (cou>2){
	return 1;
}
else{
	return 0;
};
};

int isArmstrong(int x)
{
    int n ;
    while (x) {
        n++;
        x = x / 10;
    }
    int temp = x, sum = 0;
    while (temp) {
        int r = temp % 10;
        sum += power(r, n);
        temp = temp / 10;
    }
 
     if (sum == x)
        return 1;
    else
        return 0;
};

int table(int n){
	printf("Table of %d is: \n",n);
	for(int i=1;i<=10;++i){
		printf("%d * %d =%d",n,i,i*n);
		printf("\n");
	};
	return 0;
}

int fabonacci(n){
	printf("Fabonacci of %d series is:",n);
	int ii;
	for(int i = 0;i<=n;++i){
		if (i==0){
		printf("  %d",i);
		}
		else{

		};
ii = i;
	};

	printf("%d");
	return 0;
};
int pattern(){
	int i;
	for (i=1;i<=10;++i){

	};
};

int main(){
	/*
	char nm[20];
	printf("Enter Name :");
	scanf("%s",&nm);
	printf("Namaste %s!\n",nm);
	*/
	printf("Nemeste!\n");
	if (isArmstrong(153)==1){
		printf("It is armstrong number.");
	}
	else{
		printf("IT is not armstrong number.");
	}
return 0;
}
