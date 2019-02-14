#include<stdio.h>
int main(){
    int x,y,*px,*py;
    int arr[10];
    x=5;
    y=6;
    
   // for(int i = 0; i<10;i++){
     //   arr[i]=i;
       // printf("%d",i);

    //}
        printf("\n");
    printf("%p ",&x);
    printf("%p",&y);    

    px=&x;
    py=&y;

    printf("\n");
    printf("%d ",*px);
    printf("%d",*py);

    printf("\n");

    printf("%p ",&px);
    printf("%p",&py);
   
    printf("\n");

    for(int j = 0; j<10;j++){
        printf("%d",*arr+j);
    }
    printf("\n");
     printf("%p %p",arr,&arr[0]);    

        
    return 0;





}
