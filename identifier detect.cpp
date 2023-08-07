#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    printf("Enter the identifier: ");

    char str[100];
    gets(str);

    int i,l,flag=0,count=1;
    l=strlen(str);

    if((str[0]>='a' && str[0]<='z')
            ||(str[0]>='A' && str[0]<='Z')
            ||(str[0]=='_'))
    {
        for(i=0; i<l; i++)
        {
            if(str[i]==' ')
            {
                flag = 1;
                break;
            }
            else if((str[i+1]>='a'&&str[i+1]<='z')
                    ||(str[i+1]>='A'&&str[i+1]<='Z')
                    ||(str[i+1]>='0'&&str[i+1]<='9')
                    ||(str[i+1]=='_'))
            {
                count++;
            }
        }
        if(count==l)
        {
            flag = 0;
        }
        else
            flag =1;
    }
    else
    {
        flag =1;
    }
    if(flag==1)
    {
        printf("%s is a invalid identifier",str);
    }
    else if(flag==0)
    {
        printf("%s is a valid identifier",str);
    }
    return 0;
}
