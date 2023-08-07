#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char str[100];
    int i,flag=0,L;
    cout<<"Enter the implement :";
    gets(str);
    L = strlen(str);

    if(str[0]=='/')
    {
        if(str[1]=='/')
        {
            cout<<"This is single line comment."<<endl;
        }
        else if(str[1]=='*')
        {
            for(i=2; i<=L; i++)
                if(str[i]=='*' && str[i+1]=='/')
                {
                    cout<<"This is multiline comment."<<endl;
                    flag=1;
                    break;
                }
            if(flag==0)
                cout<<"Its not a comment."<<endl;
        }
        else cout<<"Its not a comment."<<endl;
    }
    else cout<<"This is not comment."<<endl;
    return 0;

}



