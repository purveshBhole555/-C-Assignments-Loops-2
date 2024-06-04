#include <iostream>
using namespace std;
long int fact(int n) {
    if (n>=1)
        return n*fact(n-1);
    else
    {
        return 1;
    }
}
int main()
{
    int n ,f=1 ;
    cout<<"Enter the number ";
    cin>>n;
    
    // while(n>0)
    // {
    
    //   cout<<fact(n)<<endl;
    //     n--;
    // }


    // return 0;
    for(int i=1 ; i<=n ; i++)
    {
        
        f*=i;
        cout<<f<<endl;
    }











}


// Output is 
Enter the number 10
1
2
6
24
120
720
5040
40320
362880
3628800




