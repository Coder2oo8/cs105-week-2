#include <stdio.h>

char move(char c, int k)
{
    char result = c;

    if (c >= 'A' && c <= 'Z')
        result = (c - 'A' + k % 26) % 26 + 'A';
    else if (c >= 'a' && c <= 'z')
        result = (c - 'a' + k % 26) % 26 + 'a';

    return result;
}

int size(char word[])
{
    int i = 0;
    while (word[i] != '\0')
        i++;

    return i;
}

int main()
{
    char word[100];
    int k = 0;
    printf("Ceasar key : ");
    scanf("%i", &k);
    printf("Plain Text : ");
    scanf("%99s", word);

    int sz = size(word);
    char result[sz + 1];

    for (int i = 0; i < sz; i++)
    {
        result[i] = move(word[i], k);
    }

    result[sz] = '\0';
    printf("Ceasar Text : ");
    printf("%s\n", result);

    return 0;
}