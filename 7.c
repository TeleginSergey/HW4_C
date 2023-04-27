#include <stdio.h>

int main(){
    int N, num, zero=0, negative=0, positive=0;
    scanf("%d\n", &N);
    int mas[N];
    for (int i=0; i < N; i++){
        scanf("%d", &num);
        mas[i] = num;
    }
    for (int i=0; i < N; i++){
        if (mas[i] == 0){
            zero++;
        } else if (mas[i] > 0){
            positive++;
        } else{
            negative++;
        }
    }
    printf("%d %d %d\n", zero, positive, negative);
    return 0;
}
