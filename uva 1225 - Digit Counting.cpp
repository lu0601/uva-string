#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    //ofstream output("test.txt");
    int data_num=0;
    cin >> data_num;
    for(int i=0;i<data_num;i+=1)
    {
        int arr[10]={};
        int num=0;
        cin >> num;
        std::string stringnum;
        for(int j=1;j<=num;j+=1)
        {
            int temp = j;
            while(temp>0)
            {
                int n = temp%10;
                stringnum += ('0'+n);
                arr[n]+=1;
                temp/=10;
            }
        }
        for(int j=0;j<10;j+=1)
        {
            cout << arr[j];
            if(j!=9)
            {
                cout << ' ';
            }
        }
        cout <<endl;
    }
    return 0;
}
