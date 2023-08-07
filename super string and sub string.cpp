#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

bool CheckSubstring(string firststring, string secondstring){
    if(secondstring.size() > firststring.size())
        return false;

    for (int i=0; i < firststring.size(); i++){
        int j = 0;

        if(firststring[i] == secondstring[j]){
            while (firststring[i] == secondstring[j] && j < secondstring.size()){
                i++;
                j++;
            }
            if(j == secondstring.size())
                return true;
        }
    }
    return false;

}

int main()
{
    string firststring,secondstring;

    cout<<"Enter the first string: ";

    cin>>firststring;

    cout<<"Enter the second string: ";

    cin>>secondstring;

    if(CheckSubstring(firststring, secondstring))
        cout<<"\nSecond string is a substring of the first string.\n";
    else
        cout<<"\nFirst string is a substring of the first string.\n";

    return 0;
}
