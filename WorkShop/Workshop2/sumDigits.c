#include <stdio.h>

int sumDigits(int n ){
	int sum = 0 ;
	do{
		int remainder = n % 10;
		n = n/10 ;
		sum += remainder;
	}while (n > 0 );
	return sum;
}

int main(int n ){
	int S = 0;
	do{
	printf("Enter Number: ");
	scanf("%d", &n);
	if (n >= 0)
	{
		S = sumDigits(n);
		printf("Sum of remainder : %d\n",S);
 	}
		 }while (n >= 0);
 	return 0;
}
