#include <stdio.h>
using namespace std;
#define max 100
int a[max][max];
void menu(){
	printf ("================MENU==============");
	printf ("\n1.Nhap gia tri cua cac phan tu cua mang.");
	printf ("\n2. In gia tri cua cac phan tu trong mang theo ma tran");
	printf ("\n3. In ra cac phan tu o goc tren ma tran.");
	printf ("\n4. In ra cac phan tu nam tren duong bien cua ma tran.");
	printf ("\n5. In ra cac phan tu nam tren duong cheo chinh va phu.");
	printf ("\n6. In ra cac phan tu la so nguyen to theo ma tran.");
	printf ("\n7. Thoat.");
	printf ("\nLua chon cua ban: ");
}
void nhap(int n, int m){	
	for (int i=0; i<m;i++){
		for (int j =0;j<n;j++){
			printf ("Nhap gia tri phan tu array[%d][%d]: ",j,i);
			scanf ("%d",&a[i][j]);
		}
	}
}
void printarray (int n, int m){
	for (int i =0; i<m;i++){
		for (int j =0; j<n;j++){
			printf ("%d  ",a[i][j]);
		}
		printf ("\n");
	}
	printf ("\n");
}
void corner (int n,int m){
	for (int i =0; i<m;i++){
		for (int j=0;j<n;j++){
			if (( (i==0) && ( (j==0) || (j=n-1) )) || ((i==m-1) && ( (j==0) || (j=n-1) )  )  ){
				printf ("%d  ", a[i][j]);
			}
		}
		printf ("\n");
	}
}
void bien (int n, int m){
	for (int i =0; i< m; i++){
		for (int j =0; j<n;j++){
			if (i==0 || j==0 || i==m-1 || j==n-1){
				printf ("%d  ",a[i][j]);
			}
		}
	}
	printf ("\n");
}
void duongcheo (int n, int m){
			int t;
			printf ("Cac phan tu nam tren duong cheo chinh la: \n");
			if (n>m){
				t=m;
			}
			else if (n<m){
				t=n;
			}
			else if (n==m){
				t=n;
			}
			for (int i =0; i<t;i++){
				printf ("%d \n",a[i][i]);
			}
			printf ("phan tu tren duong cheo phu cua ma tran la: \n");
   			for (int i = 0; i < m; i++) {
     	 		int j = n - 1 - i;
       			if (j >= 0 && j < n) {
       	    		printf("%d ", a[i][j]);
        }
    }
    printf ("\n");
}
bool ktrasongto (int n){
	if (n <=1){
		return false;
	}
	for (int i =2; i*i < n; i++){
		if (n%i==0){
			return false;
		}
	}
	return true;
}
void insongto(int n, int m) {
    printf("Cac so nguyen to trong ma tran la:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (ktrasongto(a[i][j])) {
                printf("%d ", a[i][j]);
            }
            else {
            	printf ("  ");
			}
        }
        printf ("\n");
    }
    printf("\n");
}
void thoat (){
	printf ("thoat khoi chuong trinh!\n");
}
int main (){
	int c,r,choice;
	printf ("Nhap so cot cua mang: ");
	scanf ("%d",&c);
	printf ("Nhap so hang cua mang: ");
	scanf ("%d",&r);
	while (1){
		menu();
		scanf ("%d",&choice);
		switch (choice){
			case 1:
				nhap (c,r);
				break;
			case 2:
				printarray (c,r);
				break;
			case 3:
				corner (c,r);
				break;
			case 4:
				bien (c,r);
				break;
			case 5:
				duongcheo(c,r);
				break;
			case 6:
				insongto (c,r);
				break;
			case 7:
				thoat ();
				return 0;
		}
	}
}
