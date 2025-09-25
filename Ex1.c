#include<stdio.h>
int main(){
	int a,i;
	scanf("%d", &a);
	double sum = 0;
	for (i = 1; i <= a ; i++)
	sum+=(double) 1/i;
	printf("%.3lf", sum);
	return 0;
}