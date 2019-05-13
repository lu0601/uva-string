#include <iostream>
#include <cstdio>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    while(getline(cin, str))
    {
        istringstream iss(str);
        string sub_str;
        iss >> sub_str;
        reverse( sub_str.begin(), sub_str.end());
        cout << sub_str ;
        while(iss >> sub_str)
        {
            reverse( sub_str.begin(), sub_str.end());
            cout << ' ' << sub_str ;
        }
        cout << endl;
    }
}
