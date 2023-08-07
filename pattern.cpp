// text and pattern for the length search string
#include<iostream>
#include<string.h>

using namespace std;

void pattern_search(char* pat, char* txt);
int main(){
char txt[100], pat[100];
cout<<" Enter a text: "<<endl;
gets(txt);

cout<<"Enter a pattern: "<<endl;
gets(pat);

pattern_search(pat, txt);
return 0;
}

void pattern_search(char* pat, char* txt){
int i, j, p, t;
p = strlen(pat);
t = strlen(txt);

for(i = 0; i<= t-p; i++)
{
     for(j = 0; j < p; j++)
     {
          if(txt[i+j] !=pat[j])
               break;
     }
     if(j == p){
          cout<<"pattern found at index: "<<i<<endl;
     }
}
}
