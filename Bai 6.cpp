#include <stdio.h>
using namespace std;
int so_hoan_hao (int n){
	int sum=0;
	for (int i =1;i<n;i++){
		if (n%i==0){
			sum+=i;
		}
	}
	if (sum == n){
		return true;
	}
	return false;
}
int main (){
	int n;
	printf("Nhap vao so nguyen thu nhat de kiem tra co phai la so hoan hao khong: ");
	scanf ("%d",&n);
	if (so_hoan_hao(n)){
		printf ("%d la so hoan hao\n",n);
	}
	else {
		printf ("%d khong phai la so hoan hao\n",n);
	}
	printf ("Nhap vao so nguyen thu hai de kiem tra co phai la so hoan hao khong: ");
	scanf ("%d",&n);
	if (so_hoan_hao(n)){
		printf ("%d la so hoan hao\n",n);
	}
	else {
		printf ("%d khong phai la so hoan hao\n",n);
	}
	return 0;
}
