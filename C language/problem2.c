// PLAYING WITH CHARACTERS

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char c;
    char c1[20];
    char c2[50];
    scanf("%c",&c);
    scanf("%s",&c1);
    scanf("\n");
    scanf("%[^\n]%*c",&c2);
    printf("%c\n",c);
    printf("%s\n",c1);
    printf("%s\n",c2);
    return 0;
}

// Output:
// C
// Language
// Welcome To C!!
