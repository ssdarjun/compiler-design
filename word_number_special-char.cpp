#include<iostream>
using namespace std;

int main()
{

    string text;
    int totalNumber = 0;
    int totalAlphabet = 0;
    int totalSpecialChereter = 0;

    cout << "Enter a string: ";
    cin >> text;
    cout << endl;



    for(int i=0; i < text.length(); i++)
    {
        if(isalpha(text[i]))
        {
            totalAlphabet += 1;
        }
        else if(isdigit(text[i]))
        {
            totalNumber += 1;
        }
        else
        {
            totalSpecialChereter += 1;
        }
    }


    cout << "totalAlphabet: " << totalAlphabet << endl;
    cout << "totalNumber: " << totalNumber << endl;
    cout << "totalSpecialChereter: " << totalSpecialChereter << endl;

    return 0;
}
