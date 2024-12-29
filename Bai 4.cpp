#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int max (){
	int n, a[n],max;
	srand (time(NULL));
	n =rand()%15 +1;
	for (int i =0; i<n;i++){
		int rd =rand()%50 +1;
		a[i]=rd;
	}
	for (int i =0; i<n;i++){
		printf ("%d ",a[i]);
	}
	max = a[0];
	for (int i =0; i<n;i++){
		if (a[i]>max){
			max = a[i];
		}
	}
	return max;
}
int main (){
	max();
	printf ("\nso lon nhat trong mang la: %d ",max ());
	return 0;
}
