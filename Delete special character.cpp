#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    cout<<"Enter the paragraph: ";
    char line[150];
    gets(line);
    int j;

    for(int i=0; line[i]!= '\0'; i++)
    {
        while(!(line[i]>='a' && line[i]<='z')
                &&!(line[i]>='A' && line[i]<='Z')
                &&!(line[i]>='0' && line[i]<='9')
                &&!(line[i]==' ')
                &&!(line[i]=='\0')
                &&!(line[i]=='\n'))
        {
            for (j=i; line[j]!='\0'; j++)
            {
                line[j] = line[j+1];
                cout << j << endl;
            }
       // cout << line << endl;
        //cout << j << endl;
            line[j] = '\0';
        }
    }
    cout<<"Output is: ";
    puts(line);
    return 0;
}
