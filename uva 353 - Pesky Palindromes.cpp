#include <iostream>
#include <cstdio>
#include <sstream>
#include <algorithm>
#include <fstream>
using namespace std;
int main()
{
    string s;
    while(cin >> s)
    {
        int palin =0;
        string data[10000];
        for(int i=0; i<s.length(); i+=1)
        {
            for(int j=0; j<=s.length(); j+=1)
            {
                string ori_sub = s.substr(i,j);
                string rev_sub = ori_sub;
                reverse(rev_sub.begin(), rev_sub.end());
                if(ori_sub == rev_sub)
                {
                    data[i] = ori_sub;
                }
            }
        }
        unique(data, data+s.length()+1, [](string a, string b)
        {
            return a==b;
        });
        for(int i=0; isalpha(data[i][0]); i+=1)
        {
            bool same = true;
            for(int j=0; isalpha(data[i][0]) && i!=j; j+=1)
            {

                if(data[i]==data[j])
                {
                    same = false;
                    break;
                }
            }
            if(same == true)
            {
                //cout <<i << ":" << data[i] << "**"<< endl;
                palin+=1;
            }
        }
        cout << "The string \'" << s << "\' contains " <<palin << " palindromes."<< endl;
    }
    return 0;
}
