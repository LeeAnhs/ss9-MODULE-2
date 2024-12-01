#include <stdio.h>

int main () {
    int array[100],n,i;
    int luachon,vitri,giatri;
    printf ("1.Nhap so \n");
    printf ("2.In mang\n");
    printf("3.Them phan tu\n");
    printf("4.Sua phan tu\n");
    printf("5.Xoa phan tu\n");
    printf("6.Thoat\n");
    
    do{
        printf("Chon tu 1-6:\n");
        scanf("%d",&luachon);
        if(luachon==1) {
            printf("Nhap so phan tu:\n");
            scanf("%d",&n);
            for (i=0;i<n;i++){
                printf("Nhap phan tu %d:\n",i+1);
                scanf("%d",&array[i]);
            }
        }else if (luachon==2){
            printf("Hien thi:\n");
            for(i=0;i<n;i++){
                printf("%d",array[i]);
            }
        }else if(luachon==3){
            printf("Nhap vi tri muon them vao phan tu\n");
            scanf("%d",&vitri);
            if(vitri==0){
                vitri==1;
            }
            if(vitri <1||vitri>n+1){
                printf("Khong hop le vui long nhap lai\n");
            }
            printf("Nhap gia tri muon them:\n");
            scanf("%d",&giatri);
            for(i=n;i>vitri;i--){
                array[i]=array[i-1];
            }
            array[vitri-1]=giatri;
            n=n+1;
        } else if(luachon==4){
            printf("Nhap vi tri muon sua: \n");
            int fix;
            scanf("%d",&fix);
            if(fix<1||fix>n){
                printf("Khong hop le\n");
                
            }
            printf("Nhap vao gia tri muon sua\n");
            int vfix;
            scanf("%d",&vfix);
            for(i=0;i<n;i++){
                if(i==fix-1){
                    array[i]=vfix;
                }
        }
    }
    else if(luachon==5){
        printf("Nhap vao vi tri muon xoa\n");
        int empty;
        scanf("%d",&empty);
        if(empty<1||empty>n){
            printf("Khong hop le\n");
        }
        for(i=0;i<n;i++){
            if(i>=empty-1){
                array[i]=array[i+1];
            }
        }
        n=n-1;
    } else{ 
        printf("Hoan thanh\n");
        break;
}
}while(luachon!=6);
return 0;
}
