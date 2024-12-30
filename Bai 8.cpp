#include <stdio.h>
using namespace std;
int ucln (int a,int b){
	if (a==0 || b==0){
		return a+b;
	}
	while (a!=b){
		if (a>b){
			a=a-b;
		}
		else if (b>a){
			b=b-a;
		}
	}
	return a;
}
int main (){
	int a,b;
	printf ("Nhap vao so a: ");
	scanf ("%d",&a);
	printf ("Nhap vao so b: ");
	scanf ("%d",&b);
	printf ("%d",ucln(a,b));
	return 0;
}
