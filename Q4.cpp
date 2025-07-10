#include <iostream>
using namespace std;

int main(){
    int n = 14;
    bool isprime = true ;

    for (int i=2; i*i<=n;i++)
     if (n%i==0)
     {
        isprime = false;
        break;
     }
    if(isprime == true)
    {
        cout<<n<<"prime no.\n";
    }else{
        cout<<"nonprime no.\n";
    }
    return 0;
}
