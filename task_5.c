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

char* check_brackets(const char* my_string)
{
    int length = strlen(my_string);
    if(length > 1000)
    {
        return "The length of the string is greater than 1000 characters. Please enter a string of less than 1000 characters.";
    }

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
    printf("%s\n", check_brackets("() )("));  // Should output NO
    printf("%s\n", check_brackets("(())"));   // Should output YES
    printf("%s\n", check_brackets(")("));     // Should output NO
    printf("%s\n", check_brackets("()()"));   // Should output YES
    printf("%s\n", check_brackets("()(."));     // Should output NO
    printf("%s\n", check_brackets("(()())."));   // Should output YES

    return 0;
}