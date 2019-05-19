#include <cctype>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
struct STR
{
    string ori_str;
    string low_str;
    bool is_anan;
};
int main()
{
    STR str[10000];
    int data_count=0;
    string input;
    while(cin >> input && input!="#")
    {
        str[data_count].ori_str = input;
        string temp=input;
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        //int temp_len = temp.length();
        sort(temp.begin(), temp.end());
        str[data_count].low_str = temp;
        str[data_count].is_anan = false;
        for(int i=0; i<data_count;i+=1)
        {
            if(str[i].low_str == str[data_count].low_str)
            {
                str[i].is_anan = true;
                str[data_count].is_anan = true;
                break;
            }
        }
        data_count+=1;
    }
    vector<string> s;
    for(int i = 0;i < data_count;i++)
    {
        if(str[i].is_anan == false)
        {
            s.push_back(str[i].ori_str);
        }
    }
    sort(s.begin(),s.end());
    for(int i=0; i<s.size(); i+=1)
    {
        cout << s[i] << endl;
    }
    return 0;
}
