#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compare(char word[])
{
    const int points[26] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
        1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10
    };

    int value = 0;

    for (int i = 0; i < strlen(word); i++)
    {
        int ind;

        if (isupper((unsigned char)word[i]))
        {
            ind = word[i] - 'A';
        }
        else if (islower((unsigned char)word[i]))
        {
            ind = word[i] - 'a';
        }
        else
        {
            continue;
        }

        value += points[ind];
    }

    return value;
}
int main()
{
    char word1[100];
    char word2[100];
    printf("Player 1: ");
    scanf("%99s" , word1);

    printf("Player 2 : ");
    scanf("%99s" , word2);
    int v1=compare(word1);
    int v2=compare(word2);
    if (v1>v2)
    {
        printf("Player 1 wins\n");
    }
    else if (v2>v1)
    {
        printf("Player 2 wins\n");
    }
    else
    {
        printf("Tie\n");
    }

}