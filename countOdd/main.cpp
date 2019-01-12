#include <iostream>

using namespace std;
int countOdd(int a,int b)
{
    int ans=0 ;
    for(int i=a; i<=b; i++)
    {
        if(i%2==1)
        {
            ans=ans+1;
        }
    }
    return ans;
}
int main()
{
    int a,b;
    cout<<"enter range (a,b): ";
    cin>>a>>b;
    cout<<"the number of odd number is "<<countOdd(a,b);

    return 0;
}
