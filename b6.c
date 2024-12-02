#include <stdio.h>
 
int main () {
    int arr[100][100]={0};
    int row,col,i,j;
    printf("1.Nhap so phan tu va gia tri cac phan tu \n");
    printf("2.In ra cac phan tu theo ma tran\n");
    printf("3.In ra cac phan tu le va tinh tong\n");
	printf("4.In ra cac phan tu o bien va tinh tich\n");
	printf("5.In ra cac phan tu nam tren duong cheo chinh\n");
	printf("6.In ra cac phan tu nam tren duong cheo phu\n");
	printf("7.In ra dong co tong lon nhat\n8.Thoat\n");
	printf("8.Thoat\n");
	do {
	    int luachon;
	    printf("Nhap tu 1-8");
	    scanf("%d",&luachon);
	    
	    if(luachon==1){
	        printf("Nhap vao so hang :");
	        scanf("%d",&row);
        	printf("Nhap vao so cot :");
        	scanf("%d",&col);
        	for (int i=0;i<row;i++){
        		for(int j=0;j<col;j++){
        			printf("Nhap vao phan tu o hang %d cot %d :",i+1,j+1);
	        		scanf("%d",&arr[i][j]);
		}
	    }
	    }else if (luachon==2){
	        printf("In mang theo ma tran");
	        for (i=0;i<row;i++){
	            for (j=0;j<col;j++){
	                printf("%3d",arr[i][j]);
	            }
	            printf("\n");
	        }
	    }else if(luachon==3){
	        int sum=0,num=0;
	        printf("Cac so le trong mang:\nn");
	        for(i=0;i<row;i++){
	            for(j=0;j<col;i++){
	                if(arr[i][j]%2!=0){
	                    printf("%d", arr[i][j]);
	                    sum=sum+arr[i][j];
	                    num=num+1;
	                }
	        }
	    }
	    if(num==0){
	        printf("Khong co so le\n");
	    }
	    printf("Tong cac so le trong mang:%d\n",sum);
}else if(luachon==4){
    int line=1;
    printf("Duong bien co so la:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(i==0 || j==0 || i==row-1||j==col-1){
                printf("%3d",arr[i][j]);
                line=line*arr[i][j];
            }
        }
    }
    printf("\nTich cac so o duong bien la:%d\n",line);
}else if(luachon==5){
    if(row==col){
        printf("cac phan tu tren duong cheo chinh:");
        for(i=0;i<row;i++){
            printf("%4d",arr[i][j]);
        }
    }else {
        printf("Khong co duong cheo chinh\n");
}
}else if(luachon==6){
    if(row==col){
        printf("cac phan tu nam tren dg cheo phu la:");
        for(i=0;i<row;i++){
            printf("%d",arr[row-1-i][i]);
        }
    }else {
        printf("Khong co duong cheo phu\n");
    }
}else if(luachon==7){
    int summax=0;
    int giatri=0;
    int row=0;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            giatri=arr[i][j]+giatri;
        }if(giatri>summax){
            summax=giatri;
            row=i;
        }
    }
    printf("Dong %d tong lon nhat trong mang:%d\n",row+1,summax);
}
else {
    printf("Finish");
    break;
}
} 
while(luachon!=8);
return 0;
}	
