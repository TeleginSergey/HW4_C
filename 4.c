#include <stdio.h>

int main(){
    int num, i=0;
    int mas[1000];
    scanf("%d", &num);
    if (num < 0){
        printf("-");
    }
    while (num != 0){
        mas[i]=abs(num)%2;
        num=abs(num)/2;
        i++;
    }
    for (int n=0; n< i; n++){
        printf("%d", mas[i-n-1]);
    }
    printf("\n");
    return 0;

}