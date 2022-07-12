#include <iostream>
#include <string>
using namespace std;


int main()
{

    for(int i = 0; i < 25; i++)
    {
        for(int k = 0; k < i; k++)
        {
            cout << "*";
        }

        cout << endl;
    }


    return 0;
}