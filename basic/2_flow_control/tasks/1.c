#include <stdio.h>

int main(){
	int k, b;
	int x, y;

	scanf("%d %d", &k, &b);
	scanf("%d %d", &x, &y);

	if(y == k*x + b){
		puts("Да\n");
	} else {
		puts("Нет\n");
	}

}