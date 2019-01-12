#include <iostream>

using namespace std;
int divider(int number)
{
    int ans = 0;
    for(int i=1;i<=number;i++){
        if(number%i==0){
            ans = ans + 1;
        }
    }
    return ans;
}
int main()
{
    int number;
    cout<<"enter number :" ;
    cin>>number;
    cout<<"divider number is "<<divider(number);
    return 0;
}
