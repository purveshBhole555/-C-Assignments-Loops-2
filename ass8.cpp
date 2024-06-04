#include <iostream>
using namespace std;

int main()
{
    int a1,a2,a3,no,next;
    cout<<"Enter a number ";
    cin>>no;

    a1=0;a2=1;
    cout<<a1<<" "<<a2<<" ";
    for(int i=3;i<=no;i++)
    {
        next = a1+a2;
        cout<<next<<" ";
        a1=a2;
        // a2=next;
        a2=next;


    }

    








}


// OUTPUT IS 
Enter a number 10
0 1 1 2 3 5 8 13 21 34 55