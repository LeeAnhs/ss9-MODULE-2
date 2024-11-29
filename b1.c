#include <stdio.h>

int main () {
	//kahi bao do dai phan tu 
	int array[100];
	int number,i;
	int length=0;
	int giatri,vitri;
	 
	 
	
	//nhap vao so phan tu muon nhap va kiem tra 
	printf("Nhap vao so phan tu muon nhap(max 100): ");
	scanf("%d",&number);
	if (number<0 || number > 100){
		printf("Khong hop le\n");
		return 1;
		 
	}
	//nhap phan tu vao mang 
	for (i=0;i<100;i++){
		printf("Thu %d:\n", i+1);
		scanf("%d",&array[i]);
		 
	} 
	length=number;//do dai
	//nhap va kiem tra 
	printf("Nhap gia tri va vi tri(0-%d) muon them", length);
	scanf("%d %d", &giatri,&vitri);
	if(vitri<0 || vitri>length) {
		printf("Khong hop le\n");
		return 1; 
	}
	
	
	 
	
	
	 
}
