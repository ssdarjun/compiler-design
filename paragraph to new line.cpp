#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main()
{

    cout<<"Enter the paragraph: ";
    char str[100];
    gets(str);
    int i,l;
    l = strlen(str);

    for(i=0;i<1;i++)
    {
        if (str[i]==' ')
        {
            str[i]='\n';
        }
    }
    puts(str);
    return 0;
}
