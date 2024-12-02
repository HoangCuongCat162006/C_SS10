#include<stdio.h>

int main(){
	
	int y,n,search,found=0;
	int arr[n];

		
	printf("Nhap vao so luong phan tu bat ki : ");
	scanf("%d",&y);
	
	printf("Nhap cac phan tu cua mang : ");
	for (int i=0;i<n;i++){
		printf("Phan tu %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("Nhap phan tu can tim : ");
	scanf("%d",&search);
	
	for (int i=0;i<n;i++){
		if (arr[i]==search){
		printf("Phan tu %d da duoc tim thay tai vi tri : %d ",&search,i+1);
		found =1;
		}
	}
	if(!found){
		printf("Phan tu %d khong ton tai trong mang \n");
	}
	return 0;
}
