/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int total = 0;
    float avg = 0.0;
    int i = 0;
    while(i<10000)
    {
        i++;
        total += (rand() % 2)*2;
        avg = float(total) / float(i);
        cout << avg;
        cout <<"\n";
    }
}
