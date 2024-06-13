// Задача 5*. Скобки
// Проверить строку состоящую из скобок "(" и ")" на корректность.
// Данные на входе: На вход подается строка состоящая из символов '(', ')'
// и заканчивающаяся символом '.'. Размер строки не более 1000 символов.
// Данные на выходе: Необходимо напечатать слово YES если скобки
// расставлены верно и NO в противном случае.
// Пример №1
// Данные на входе: (()()).
// Данные на выходе: YES
// Пример №2
// Данные на входе: ()(.
// Данные на выходе: NO

#include <stdio.h>
#include <conio.h>

char* check_brackets()
{
    int check_count = 0;
    int i = 0;
    char c;

    printf("Enter a string sequence which ends by a dot (.)\n");
    while ((c = getche()) != '.')
    {
        if(i < 1000) 
        {
            if (c == '(') 
            {
                check_count++;
            }
            else if (c == ')')
            {
                check_count--;
            }
            i++;
        }
        else
        {
            printf("\nThe length of the string is greater than 1000 characters which is not allowed.\n");
            break;
        }
    }
    return (check_count == 0) ? "\nYES" : "\nNO";
}


int main(void)
{
    printf("%s\n", check_brackets());

    return 0;
}
