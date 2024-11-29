#include <stdio.h>

int main () {
    int array[100];
    int vitri;
    int number;
  
    int Y;
    
    printf("Nhap so phan tu muon nhap:");
    scanf("%d",&Y);
   
    
    while (Y>0) {
         printf("Nhap vi tri:");
         scanf("%d", &vitri);
         vitri--;
         
    if(vitri<0 || vitri>100) {
        printf("Khong hop le");
        return 1;
        
    }
    for (int i=0;i<=100;i++){
        if (i == vitri){
            printf("Nhap gia tri");
            scanf("%d",&number);
            array[i] = number;
            break;
        }else {
            array[i] = 0;
        }
    } 
        Y--;
    }
    
    for (int i=0;i<100;i++) {
         printf("%d\n", array[i]);

	return 0;
        
    }
   
