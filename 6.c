#include <stdio.h>

int main(){
    int N, num, s=0;
    scanf("%d\n", &N);
    int mas[N];
    //считываем числа и записываем в массив
    for (int i=0; i < N; i++){
        scanf("%d", &num);
        mas[i] = num;
    }
    //проходимся по каждому числу и проверяем на условие (> 0)
    for (int i=0; i < N; i++){
        if (mas[i] > 0){
            s++;
        }
    }
    printf("%d\n", s);
    return 0;
}