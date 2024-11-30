#include<stdio.h>
int main(){
    //khai bao bien,nhap so phan tu trong mangmang
	int n,vitri;
	printf("Nhap vao so luong phan tu :");
	scanf("%d",&n);
	int array[n];
	
	//nhap phan tu trong mangmang
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d :",i+1);
		scanf("%d",&array[i]);
	}
	
	//xu ly vi tri muon xoa trong mang
	printf("Nhap vao vi tri muon xoa :");
	scanf("%d",&vitri);
	if(vitri<0||vitri>n){
	    printf("Khong hop le!");
		return 0;
	}	
	for(int i=0;i<n;i++){
		if(i>=vitri-1){
			array[i]=array[i+1];
		}
	}
  //in ra man hinh day so sau khi xoa
	printf("Day so sau khi xoa : ");
	for(int i=0;i<n-1;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
