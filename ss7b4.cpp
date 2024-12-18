#include<stdio.h>
int main(){
	int n;
	int array[10];
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&n);
	 if (n <= 0 || n > 10) {
        printf("so phan tu khong hop le.\n");
        return 1;
    }
	printf("nhap lan luot %d phan tu: \n", n);
	for(int i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	printf(" mang vua nhap la: ");
	for(int i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
	return 0;
}
