#include <stdio.h>

int main(){
    int month, year;
    scanf("%d %d", &month, &year);
    // "выколим" наш особенный месяц январь, у к-рого кол-во дней зависит от високосного/невисокосного года
    if ( month == 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) ){
        printf("29\n");
    }
    //если не сработало первое условие, то год не високосный и в феврале 28 дней
    else if ( month == 2 ){
        printf("28\n");
    }
    // в апреле, июне, сентябре, ноябре по 30 дней
    else if ( month ==  4 || month == 6 || month == 9 || month == 11){
        printf("30\n");
    }
    //оставшиеся месяца имеют по 31 дню
    else{
        printf("31\n");
    }
    return 0;
}