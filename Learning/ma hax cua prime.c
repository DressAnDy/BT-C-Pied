#include <stdio.h>
#include <math.h>
int isPrime(int n ){
	int i;
	if(n < 2)
		return 0;
	for ( i = 2 ; i < sqrt(n) ; i++){
		if ( n % i == 0)
			return 0;
	}
	return 1;
}

int main(){
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Ma Hex cua %d = 0x%X\n", n ,n);
	if(isPrime(n)){
		printf("%d is a prime number",n);
	}
	else{
		printf("%d is a not prime number",n);
	}
	return 0;
}
