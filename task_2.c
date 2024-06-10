// Задача 2. НОД
// Составить функцию, которая определяет наибольший общий делитель двух
// натуральных и привести пример ее использования
// https://younglinux.info/algorithm/euclidean
// int nod(int a, int b)
// Данные на входе: Два целых положительных числа
// Данные на выходе: Одно целое число - наибольший общий делитель.
// Пример №1
// Данные на входе: 14 21
// Данные на выходе: 7

#include <stdio.h>

int nod(int a, int b)
{
    int max = (a > b) ? a : b;
    int min = (a > b) ? b : a;
    
    if(min == 0)
    {
        return max;
    }
    
    int remainder = max % min;
    while (remainder != 0)
    {
        max = min;
        min = remainder;
        remainder = max % min; 
    }
    return min;
}

int main(void)
{
    printf("%d", nod(14, 21));

    return 0;
}
