#include <iostream>

using namespace std;

int sumEven(int n){
int ans=0;
for(int i=1;i<=n;i++){
    if(i%2 == 0){
        ans = i+ans;
    }
}
return ans;
}

int main()
{
    int n;
    cout<<"enter n :";
    cin>>n;
    cout<<"sumEven = "<<sumEven(n);
    return 0;
}
