#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;
int main()
{
    bool f = 0;
    int case_num=0;
    cin >> case_num;
    getchar();
    while(case_num--)
    {
        getchar();
        string num_line;
        getline(cin, num_line);
        istringstream issn(num_line);
        int data_size =0;
        int num=0;
        int index[10000]= {0};
        while(issn >> num)
        {
            index[data_size] = num;
            data_size+=1;
        }
        int n_l_length = num_line.length();
        string data[data_size+1]= {};
        for(int j=0; j<data_size; j+=1)
        {
            string temp;
            cin >> temp;
            data[index[j]-1] = temp;
        }
        getchar();
        if(f)
        {
            cout << "\n";
        }
        f = 1;
        for(int j=0; j<data_size; j+=1)
        {
            cout << data[j] <<endl;
        }
    }
    return 0;
}
