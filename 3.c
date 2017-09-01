#include <stdio.h>
int main()
{
    char s;
    int LowercaseVowel, UppercaseVowel;

    printf("Enter an alphabet: ");
    scanf("%c",&c);

    LowercaseVowel = (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s  == 'u');

    
    UppercaseVowel = (s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U');
    if (LowercaseVowel || UppercaseVowel)
        printf("%c  a vowel.", s);
    else
        printf("%c  a consonant.", s);
    return 0;
}
