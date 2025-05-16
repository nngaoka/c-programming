#include <stdio.h>

int main(vodi){
    int mode;
    float a,b;
    printf("モード選択(1:+,2:-,3:*)\n");
    scanf("%d",&mode);
    printf("1つ目の値の入力\n");
    scanf("%d",&a);
    printf("2つ目の値の入力\n");
    scanf("%d",&b);
    if(mode==1){
        printf("足し算を入力しました。\n");
        n=tasu(a+b);
    } else if(mode==2){
        printf("引き算を入力しました。\n");
        n=tasu(a-b);
    }else if(mode==3){
        printf("掛け算を入力しました。\n");
        n=tasu(a*b);
    }else{
        printf("不正なモードです。\n");
    }
    return 0;
}

float tasu(float a,float b){
    return a+b;
}

float hiku(float a,float b){
    return a-b;
}

float kakeru(float a,float b){
    return a*b;
}
