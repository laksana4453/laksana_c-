#include <iostream>

using namespace std;
int IsPrime(int n)
{
    bool ans = true ;
    for(int i = 2 ; i <= n/2 ; i++)
    {
        if(n%i == 0)
        {
            ans = false;
        }
    }
    return ans;
}
int main()
{
    int number;
    cout<<"enter number :";
    cin>>number;
    if (IsPrime(number))
        cout << "This is a prime number";
    else
        cout << "This is not a prime number";


    return 0;
}
