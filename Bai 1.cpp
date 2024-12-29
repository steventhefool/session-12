#include <stdio.h>
using namespace std;
int tong (int a, int b){
	int sum=a+b;
	return sum;
}
int main (){
	int a,b;
	printf ("nhap gia tri cua so a: ");
	scanf ("%d",&a);
	printf ("Nhap gia tri cua so b: ");
	scanf ("%d",&b);
	printf ("Tong 2 so %d, %d la: %d",a,b,tong(a,b));
	return 0;
}
