#include <iostream>

using namespace std;

int maxNumber(int a,int b,int c){
   int ans;
   if(a>b && a>c){
    ans = a;
   }
   else if(b>a && b>c){
    ans = b;
   }
   else{
    ans = c;
   }
  return ans;
}

int main()
{
    int a,b,c;
    cout<<"a = ";
    cin >> a;
    cout<<"b = ";
    cin >> b;
    cout<<"c = ";
    cin >> c;
    cout<<"maximum number is "<<maxNumber(a,b,c);


    return 0;
}

