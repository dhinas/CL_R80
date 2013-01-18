#include<stdio.h>
int fact1(int x);

void main(void) {
	int n,kai;
	printf("階乗を求めたい値を入力してください：");
	scanf("%d",&n);
	while(n < 0) {
		printf("0以上の値を入力してください\n");
		printf("階乗を求めたい値を入力：");
		scanf("%d",&n);
	}
	kai = fact2(n);
	printf("%dの階乗は%dです\n",n,kai);
}
int fact2(int x) {
	int ans = 1,i;
	if(x <= 1) {
		return 1;
	}
	return (x * fact2(x - 1));
}
