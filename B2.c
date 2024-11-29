#include <stdio.h>

int main () {
    int array[10]={23,55,41,23,76,88,45,90,87,7};
    int vitri;
    int number;

    
    
         printf("Nhap vi tri can sua : ");
         scanf("%d", &vitri);
         vitri--;
         
         
    if(vitri<0 || vitri>10) {
        printf("Khong hop le");
        return 1;
        
    }
    for (int i=0;i<10;i++){
        if (i == vitri){
            printf("Nhap gia tri can sua");
            scanf("%d",&number);
            array[i] = number;
    }
        
    } 
    
    
    
    for (int i=0;i<10;i++) {
         printf("%d\n", array[i]);
         
        
    }
  return 0;
    
}
    
