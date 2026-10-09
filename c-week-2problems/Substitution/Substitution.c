#include<stdio.h>
#include<ctype.h>

int size(char word[])
{
    int i = 0;
    while (word[i] != '\0')
        i++;

    return i;
}

int main()
{
    char ENC[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char enc[26]="abcdefghijklmnopqrstuvwxyz";
    char abc[26]="NQXPOMAFTRHLZGECYJIUWSKDVB";
    char word[100];
    fgets(word, sizeof(word), stdin);
    int l=size(word);
    char result[l+1];
    for (int i = 0; i < l; i++)
    {   
    int ind;

    if (islower((unsigned char)word[i]))
    {
        ind = word[i] - 'a';
        result[i] = tolower((unsigned char)abc[ind]);
    }
    else if (isupper((unsigned char)word[i]))
    {
        ind = word[i] - 'A';
        result[i] = toupper((unsigned char)abc[ind]);
    }
    else
    {
        result[i] = word[i];
    }
    }

result[l] = '\0';
printf("%s\n", result);

}