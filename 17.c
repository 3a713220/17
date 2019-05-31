#include <stdio.h>　

#include <stdlib.h> 

int main(int argc, char *argv[])

{
    int a[5]={0};
    int p=0, min;  
    printf("請連續輸入五個數值：\n");
    printf("\n");
	for(p=0;p<5;p++)
   {
        printf("第%d筆資料：", p+1 );
        scanf("%d", &a[p]);
   }
        min=a[0];
        for(p=0;p<5;p++)
   {
    if (min>a[p])	
        {
            min=a[p];
        }
   }
    printf("最小值是：%d\n\n",min); 
    system("pause");	
    return 0;
}
