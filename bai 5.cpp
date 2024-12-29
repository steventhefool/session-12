#include <stdio.h>
using namespace std;
int ktrasongto (int n){
	if (n<=1){
		return false;
	}
	for (int i =2; i*i<n;i++){
		if (n%i==0){
			return false;
		}
	}
	return true;
}
int main (){
	int n;
	printf ("nhap vao so nguyen dau tien: ");
	scanf ("%d",&n);
	if (ktrasongto(n))
	printf ("so %d la so nguyen to.\n",n);
	else {
		printf ("Khong phai la so nguyen to.\n");
	}
	printf ("nhap vao so nguyen thu hai: ");
	scanf ("%d",&n);
	if (ktrasongto(n)){
		printf ("so %d la so nguyen to.\n",n);
	}
	else {
		printf ("Khong phai la so nguyen to.\n");
	}
	return 0;
}
