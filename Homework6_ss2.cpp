#include<stdio.h>
int main(){
	int r;
	const float pi = 3.14;
	printf("Nhap ban kinh r: ");
	scanf("%d",&r);
	
	printf("Chu vi hinh tron la: %f",2*pi*r);
	printf("\nDien tich hinh tron la: %f",pi*r*r);
	return 0;
}
