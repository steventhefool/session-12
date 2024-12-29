#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
void mang (){
	int n, a[n];
	srand(time(NULL));
	n =rand()%15 +1;
	for (int i=0; i<n;i++){
		int rd = rand()%50 +1;
		a[i]= rd;
		printf ("%d ",a[i]);
	}
}
int main (){
	mang ();
	return 0;
}
