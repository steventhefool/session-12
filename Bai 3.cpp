#include <stdio.h>
using namespace std;
int giaithua (int n){
	int g=1;
	for (int i =n; i >0;i--){
		g*=i;
	}
	return g;
}
int main (){
	int n;
	printf ("Nhap so nguyen bat ky: ");
	scanf ("%d",&n);
	printf ("Giai thua cua so nguyen vua nhap la: %d", giaithua(n));
	return 0;
}
