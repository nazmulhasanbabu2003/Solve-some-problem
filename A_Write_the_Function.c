#include <stdio.h>
int marks_summation(int marks[], int number_of_students, char gender)
{
    int sum = 0;
    for ( int i = 0 ; i < number_of_students; i++)
    {
        if( gender=='b')
        {
            if ( i % 2 == 0)
            {
                sum= sum + marks[i];
            }
        }
        else
        {
            if( i %2 != 0)
            {
                sum= sum + marks[i];
            }
        }
    }


    return sum;
}

int main()
{
    int number_of_students;
    char gender;

    scanf("%d", &number_of_students);


    int marks[number_of_students];
    for (int i = 0; i <number_of_students; i++)
    {
        scanf("%d", &marks[i]);
    }

    scanf(" %c", &gender);
    int sum = marks_summation(marks, number_of_students, gender);
    printf("%d\n", sum);

    return 0;
}
