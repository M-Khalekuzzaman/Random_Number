#include<iostream>
#include<stdlib.h> // Using stdlib.h header function because rand() is using in main function.
#include<conio.h>
using namespace std;
int main()
{
    int randomNumber;
    for(int i = 1;i<=5 ;i++)
    {
        randomNumber = rand() % 5 +1;
        cout<<"Random number is : "<<randomNumber<<endl;
    }

    getch();
}
