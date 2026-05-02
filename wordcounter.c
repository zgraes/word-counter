#include <stdio.h>
#include <stdlib.h>
int word(char*);
int main(void)
{
    char arr[100];
    puts("enter the sentence:");
    gets(arr);
    printf("count of words: %d\n",word(arr));
}
int word(char* ptr)
{
    int total=1;
    int i=0;
    while(ptr[i]!='\0')
    {
        if(ptr[i]== ' '){
        total++;
        }
        i++;
    }
    return total;
    
}