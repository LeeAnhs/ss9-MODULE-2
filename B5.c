#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) return 0; // Không phải số nguyên tố
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Nếu num chia hết cho i, không phải số nguyên tố
    }
    return 1; // Nếu không có ước số nào, là số nguyên tố
}
int main(){
    int arr[100];
    int n,i;
    int luachon;
    int min,max;
    
    do{
    printf("1.Nhập số phần tử cần nhập và giá trị các phần tử\n");
    printf("2.In ra giá trị các phần tử đang quản lý\n");
    printf("3.In ra giá trị các phần tử chẵn và tính tổng\n");
    printf("4.In ra giá trị lớn nhất và nhỏ nhất trong mảng\n");    
    printf("5.In ra các phần tử là số nguyên tố trong mảng và tính tổng\n");    
    printf("6.Nhập vào một số và thống kê trong mảng có bao nhiêu phần tử đó\n");
    printf("7.Thêm một phần từ vào vị trí chỉ định\n");
    printf("8.Thoát\n");
    printf("Enter your number: ");  
    scanf("%d",&luachon);
    if (luachon==1){
        printf("Nhap so phan tu:");
        scanf("%d",&n);
        for(i=0;i<n;i++){
            printf("Nhap gia tri cac phan tu:\n");
            scanf("%d",&arr[i]);
        }
    } else if (luachon==2){
        printf("In ra cac gia tri phan tu dang quan ly:\n");
        for(i=0;i<n;i++){
            printf("%d\n",arr[i]);
        }
        printf("\n");
    }else if(luachon==3){
        int sum=0;
        for(i=0;i<n;i++){
            if(arr[i]%2==0){
                printf("%d",arr[i]);
                sum=sum+arr[i];
            }
            if(sum!=0){
                printf("Tong cac phan tu so chan la:%d",sum);
            }else {
                printf("Mang ko co so chan");
                break;
            }
        }

    }else if(luachon==4){
        min=arr[0];
        max=arr[0];
        for(i=1;i<n;i++){
            if(arr[i]<min){
                min=arr[i];
            }
            if(arr[i]>max){
                max=arr[i];
            }
        }
        printf("Phan tu maxla:%d\n",max);
        printf("Phantu min la:%d\n",min);
    }else if (luachon==5){
        //inra phan tu nguyen to va tinh tong
        int sum=0;
        for(i=0;i<n;i++){
            if (isPrime(arr[i])) {
                        printf("%d ", arr[i]);
                        sum+= arr[i];
                    }
                }
                printf("\n");
                printf("\nTong cac phan tu nguyen to: %d\n", sum);
                break;
    }else if (luachon==6){
        int count=0;
        int number;
        printf("Nhap 1 so:");
        scanf("%d",&number);
        for(i=0;i<n;i++){
            if(arr[i]==number){
                count=count+1;
            }
        }
        printf("So lan xuat hien cua%d la:%d",number,count);
    } else if(luachon==7) {
        int vitri;
        int giatri;
        printf("Nhap vi tri muon them");
        scanf("%d",&vitri);
        if(vitri<0 || vitri>n){
            printf("Khong hop le");
            continue;
        }
        for (i=0;i<n;i++){
            if( i== vitri){
                printf("Nhap gia tri");
                scanf("%d",&giatri);
                arr[i]=giatri;
                break;
            }else {
                arr[i]=0;
            }
        }
        for (i=0;i<n;i++){
            printf("%d\n",arr[i]);
        }
    }else {
        printf("Finish");
        break;
    }
    } while(luachon!=8);
  return 0;
  
}
