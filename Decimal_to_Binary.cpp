#include <iostream>
using namespace std;
#include <time.h>

int decimal_binary(int num)
{
    int binary = 0;
    int remainder;
    int i = 1;
    while (num != 0)
    {
        remainder = num % 2;
        num = num / 2;
        binary = binary + remainder * i;
        i = i * 10;
    }
    return binary;
}

int main()
{   
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    cout<<"Please enter your decimal number: ";
    int num;
    string decision;
    while (true)
    {
        cin>>num;
        if (num < 0)
        {
            cout<<"Please enter a positive number: ";
        }
        else
        {
            cout<<"Please check your input: "<<decimal_binary(num)<<endl;
        }
        cout<<"Do you want to continue? (y/n): ";
        cin>>decision;
        if (decision == "n")
        {
            break;
        }

    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    cout<<"CPU time used: "<<cpu_time_used<<endl; 
}