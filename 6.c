#include <stdio.h>

int main(){
    int N, num, s=0;
    scanf("%d\n", &N);
    int mas[N];
    for (int i=0; i < N; i++){
        scanf("%d", &num);
        mas[i] = num;
    }
    for (int i=0; i < N; i++){
        if (mas[i] > 0){
            s++;
        }
    }
    printf("%d\n", s);
    return 0;
}