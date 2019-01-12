#include <iostream>

using namespace std;
int gdc(int a,int b)
{
    int ans ;
    for(int i=1; i<100; i++)
    {
        if(a%i==0&&b%i==0)
        {
            ans=i;
        }
    }
    return ans;

}

int main()
{
    int a,b;
    cout << "enter number {a,b}:";
    cin>>a>>b;
    cout<<"ICM is "<<a*b/gdc(a,b);

    return 0;
}
