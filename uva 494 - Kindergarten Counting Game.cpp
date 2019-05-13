#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main()
{
    string str1;
    bool alpha=false;
    while(getline(cin, str1))
    {
        int word_count=0;
        for(int i=0; i<str1.size(); i+=1)
        {
            if((isalpha(str1[i]) && !alpha))
            {
                alpha=1;
                word_count+=1;
            }
            else if(!isalpha(str1[i]) && alpha)
            {
                alpha=0;
            }
        }
        printf("%d\n",word_count);
    }
