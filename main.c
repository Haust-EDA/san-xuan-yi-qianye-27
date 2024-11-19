//请在下方输入你的代码：

#include<stdio.h>
int main() {
	int i, j, ji = 1;
	for (i = 0; i < 10; i++) {
		for (j = 0; j <= i; j++) {
			ji = i * j;
			printf("%d*%d=%d ", i, j, ji);
		}printf("\n");}
	printf("\n");
	for (i=9 ; i >=0; i--) {
		for (j=0; j <= i; j++) {
			ji = i * j;
			printf("%d*%d=%d ", i, j, ji);
		}printf("\n");
	}
	return 0;
}
