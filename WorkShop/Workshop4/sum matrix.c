#include<stdio.h>

int main() {
	int arr[100][100];
	int n, m;
	int i,j;

	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		for ( j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	int sum = 0;
	for (i = 0; i < n; i++) {
		for ( j = 0; j < m; j++) {
			sum += arr[i][j];
		}
	}

	printf("%d", sum);

	return 0;
}
