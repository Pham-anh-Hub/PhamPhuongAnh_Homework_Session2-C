#include<stdio.h>
int main(){
	int a, b;
	printf("Nhap chieu dai a: ");
	scanf("%d",&a);
	
	printf("\nNhap chieu rong b: ");
	scanf("%d",&b);
	int circuit = (a+b)*2;
	int square = a*b;
	printf("\nChu vi hinh chu nhat la: %d",circuit);
	printf("\nDien tich hinh chu nhat la: %d",square);
	return 0;
}
