#include<stdio.h>
int fact1(int x);

void main(void) {
	int n,kai;
	printf("�K������߂����l����͂��Ă��������F");
	scanf("%d",&n);
	while(n < 0) {
		printf("0�ȏ�̒l����͂��Ă�������\n");
		printf("�K������߂����l����́F");
		scanf("%d",&n);
	}
	kai = fact2(n);
	printf("%d�̊K���%d�ł�\n",n,kai);
}
int fact2(int x) {
	int ans = 1,i;
	if(x <= 1) {
		return 1;
	}
	return (x * fact2(x - 1));
}
