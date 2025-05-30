#include <stdio.h>
int main(void){
    int score;
    printf("点数を入力してください");
    scanf("%d",&score);
    if(score>=80){
    printf("合格です");
    }else{
        printf("不合格です");
}
    return 0;
}
