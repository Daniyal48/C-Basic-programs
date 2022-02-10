//Author : Daniyal Shahzad
//Date: Feburary 8, 2022
//Description:
//This code will ask the user for the input of choixe table and will keep running until four entries are made. so that the
//gets the exact table he/she wants then as if the user want to continue or not. and same process will repeat until the user exits.
//Known issues: infite loop while a character is entered. Working on the issue and I will update the code in my repository if some is interested so they can look up to it.
//This will be the first program in C++. in my github repository if plagiarism is detecected it will be my repository.
//Github: https://www.github.com/Daniyal48/
#include <iostream>
#include <time.h>
using namespace std;
void and_table()
{
    int a,b;
    cout<<"Please enter a number either 0 or 1 for value of \"A\":"<<endl;
    cin>> a;
    if (a==0)
    {
        cout<<"Please enter a number either 0 or 1 for value of \"B\":"<<endl;
        cin>>b;
        if (b==0)
        {
            cout<<"The value of "<<a<<" OR "<<b<< " is 0"<<endl;
        }
        else if (b==1)
        {
            cout<<"The value of "<<a<<" OR "<<b<< " is 0"<<endl;
        }
        else if (b != 0 || b != 1)
        {
            cout<<"Invalid input"<<endl;
        }
    }
    else if (a==1)
    {
        cout<<"Please enter a number either 0 or 1 for value of \"B\":"<<endl;
        cin>>b;
        if (b==0)
        {
            cout<<"The value of "<<a<<" OR "<<b<< " is 0"<<endl;
        }
        else if (b==1)
        {
            cout<<"The value of "<<a<<" OR "<<b<< " is 1"<<endl;
        }
        else if (b != 0 || b != 1)
        {
            cout<<"Invalid input"<<endl;
        }
    }
    else if (a != 0 || a != 1)
    {
        cout<<"Invalid input"<<endl;
    }
}
void OR_table()
{
    int a,b;
    cout<<"Please enter a number either 0 or 1 for value of \"A\":"<<endl;
    cin>> a;
    if (a==0)
    {
        cout<<"Please enter a number either 0 or 1 for value of \"B\":"<<endl;
        cin>>b;
        if (b==0)
        {
            cout<<"The value of "<<a<<" OR "<<b<< " is 0"<<endl;
        }
        else if (b==1)
        {
            cout<<"The value of "<<a<<" OR "<<b<< " is 1"<<endl;
        }
        else if (b != 0 || b != 1)
        {
            cout<<"Invalid input"<<endl;
        }
    }
    else if (a==1)
    {
        cout<<"Please enter a number either 0 or 1 for value of \"B\":"<<endl;
        cin>>b;
        if (b==0)
        {
            cout<<"The value of "<<a<<" OR "<<b<< " is 1"<<endl;
        }
        else if (b==1)
        {
            cout<<"The value of "<<a<<" OR "<<b<< " is 1"<<endl;
        }
        else if (b != 0 || b != 1)
        {
            cout<<"Invalid input"<<endl;
        }
    }
    else if (a != 0 || a != 1)
    {
        cout<<"Invalid input"<<endl;
    }
}
void XOR_table()
{
    int a,b;
    cout<<"Please enter a number either 0 or 1 for value of \"A\":"<<endl;
    cin>> a;
    if (a==0)
    {
        cout<<"Please enter a number either 0 or 1 for value of \"B\":"<<endl;
        cin>>b;
        if (b==0)
        {
            cout<<"The value of "<<a<<" XOR "<<b<< " is 0"<<endl;
        }
        else if (b==1)
        {
            cout<<"The value of "<<a<<" XOR "<<b<< " is 1"<<endl;
        }
        else if (b != 0 || b != 1)
        {
            cout<<"Invalid input"<<endl;
        }
    }
    else if (a==1)
    {
        cout<<"Please enter a number either 0 or 1 for value of \"B\":"<<endl;
        cin>>b;
        if (b==0)
        {
            cout<<"The value of "<<a<<" XOR "<<b<< " is 1"<<endl;
        }
        else if (b==1)
        {
            cout<<"The value of "<<a<<" XOR "<<b<< " is 0"<<endl;
        }
        else if (b != 0 || b != 1)
        {
            cout<<"Invalid input"<<endl;
        }
    }
    else if (a != 0 || a != 1)
    {
        cout<<"Invalid input"<<endl;
    }
}
void NAND_table()
{
    int a,b;
    cout<<"Please enter a number either 0 or 1 for value of \"A\":"<<endl;
    cin>> a;
    if (a==0)
    {
        cout<<"Please enter a number either 0 or 1 for value of \"B\":"<<endl;
        cin>>b;
        if (b==0)
        {
            cout<<"The value of "<<a<<" NAND "<<b<< " is 1"<<endl;
        }
        else if (b==1)
        {
            cout<<"The value of "<<a<<" NAND "<<b<< " is 1"<<endl;
        }
        else if (b != 0 || b != 1)
        {
            cout<<"Invalid input"<<endl;
        }
    }
    else if (a==1)
    {
        cout<<"Please enter a number either 0 or 1 for value of \"B\":"<<endl;
        cin>>b;
        if (b==0)
        {
            cout<<"The value of "<<a<<" NAND "<<b<< " is 1"<<endl;
        }
        else if (b==1)
        {
            cout<<"The value of "<<a<<" NAND "<<b<< " is 0"<<endl;
        }
        else if (b != 0 || b != 1)
        {
            cout<<"Invalid input"<<endl;
        }
    }
    else if (a != 0 || a != 1)
    {
        cout<<"Invalid input"<<endl;
    }
}
int main()
{
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    while (true)
    {
        
        cout<<"Please enter your choice for the truth table \"AND\" , \"OR\" , \"NAND\" or \"XOR\" "<<endl;
        string choice;
        cin>>choice;
        if (choice == "And" || choice =="and" || choice == "AND")
        {
            for (int i=0; i<4; i++)
            {    
                and_table();
            }   
        }
        else if (choice == "Or" || choice =="or" || choice == "OR")
        {
            for (int i=0; i<=4; i++)
            {    
                OR_table();
            } 
        }
        else if (choice == "Xor" || choice =="xor" || choice == "XOR")
        {
            for (int i=0; i<=4; i++)
            {    
                XOR_table();
            } 
        }
        else if (choice == "Nand" || choice =="nand" || choice == "NAND")
        {
            for (int i=0; i<=4; i++)
            {    
                NAND_table();
            } 
        }
        else if (choice == "Exit" || choice =="exit" || choice == "EXIT")
        {
            break;
        }
        else
        {
            cout<<"Invalid input"<<endl;
        }
    
        cout<<"Do you want to continue? (y/n)"<<endl;
        string cont;
        cin>>cont;
        if (cont == "n" || cont == "N")
        {
            break;
        }
    }

    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    cout<<"Time taken: "<<cpu_time_used<<" seconds"<<endl;
    return 0;
}
