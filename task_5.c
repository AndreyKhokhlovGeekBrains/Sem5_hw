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
#include <string.h>
#include <conio.h>

char* check_brackets(const char* my_string)
{
    int length = strlen(my_string);

    int check_count = 0;
    for(int i = 0; i < length; i++)
    {
        char ch = my_string[i];
        if(check_count < 0)
        {
            return "NO";
        }
        if(ch == '(')
        {
            check_count ++;
        } else if (ch == ')')
        {
            check_count --;
        } 
    }
    return (check_count == 0) ? "YES" : "NO";
}


int main(void)
{
    char my_string[1001];  // Allocate a buffer of 1001 characters (1000 + 1 for the null terminator)
    int i = 0;
    char c;

    printf("Enter a string sequence which ends by a dot (.)\n");
    while ((c = getche()) != '.')
    {
        if(i < 1000) 
        {
            my_string[i++] = c;
        }
        else
        {
            printf("\nThe length of the string is greater than 1000 characters which is not allowed.");
            break;
        }
    }
    my_string[i] = '\0';  // Null-terminate the string
    printf("\n");

    printf("The accepted string is:\n%s\n", my_string);
    printf("%s\n", check_brackets(my_string));

    return 0;
}
