// Задача 3. Сумма цифр равна произведению
// Составить логическую функцию, которая определяет, верно ли, что в заданном
// числе сумма цифр равна произведению.
// int is_happy_number(int n)
// Данные на входе: Целое не отрицательное число
// Данные на выходе: YES или NO
// Пример №1
// Данные на входе: 123
// Данные на выходе: YES
// Пример №2
// Данные на входе: 528
// Данные на выходе: NO

#include <stdio.h>

int is_happy_number(int n)
{
    int my_sum = 0;
    int my_multiplier = 1;

    while (n > 0)
    {
        my_sum += n % 10;
        my_multiplier *= n % 10;
        n /= 10;
    }
    if(my_sum == my_multiplier)
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    printf("%s", is_happy_number(22) == 1 ? "YES" : "NO");

    return 0;
}
