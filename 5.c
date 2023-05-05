#include <stdio.h>


int main(){
    int i=0;
    float num, sum=0, arithmetic_mean, mas[1000];
    //считываем первое значение вне цикла, чтобы работало условие
    scanf("%f", &num);
    //каждое введеное пользователем значение записываем в массив
    while (num != 0){
        mas[i] = num;
        scanf("%f", &num);
        i++;
    }
    //сумма всех введеных чисел
    for (int n=0; n<i; n++){
        sum+=mas[n];
    }
    //соответственно, делим сумму чисел на их кол-во 
    arithmetic_mean = sum/i;
    printf("%f\n", arithmetic_mean);
    return 0;
}