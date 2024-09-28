#include <stdio.h>

int gcd(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}
	int lcm(int a , int b ){
		return a*b/gcd(a,b);
	}

int main()
{
	int a,b;
	int d,n,m;
	do{
		scanf("%d%d",&a , &b);
	}
	while (a <= 0 || b <= 0);
	d = gcd(a,b);
	m = lcm(a,b);
	printf("Uoc Chung Lon Nhat = %d\n",d);
	printf("Boi Chung Nho Nhat = %d",m);
	return 0;
}
