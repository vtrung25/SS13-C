#include<stdio.h>
void UCLN(int a, int b){
	while(b!=0){
		int c = a%b;
		a = b;
		b = c;
	}
	printf("Uoc chung lon nhat cua a va b la %d", a);
}
int main(){
	int a,b;
	printf("Nhap so nguyen duong a ");
	scanf("%d", &a);
	printf("Nhap so nguyen duong b ");
	scanf("%d", &b);
	UCLN(a,b);
	return 0;
}