#include <stdio.h>
#include <string.h>
int is_palindrome(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char S[1001];
    scanf("%s", S);
    int result = is_palindrome(S);
    if (result == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}

//not use function
//#include<stdio.h>
//#include<string.h>
//int main ()
//{
//    char a[1001];
//    int m = 1;
//    scanf("%s",&a);
//    int len = strlen(a);
//    for (int i = 0; i < len / 2; i++)
//    {
//        if (a[i] != a[len - i - 1])
//        {
//            m = 0;
//        }
//    }
//
//        if (m == 1)
//        {
//            printf("Palindrome\n");
//        }
//        else
//        {
//            printf("Not Palindrome\n");
//        }
//        return 0;
//    }
