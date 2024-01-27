#include <iostream>

using namespace std;

int main()
{
    long long n,x,forw,bac;
    cin>>n>>x;
    if(n>x){
        if(n%x==0){
            cout<<n/x;
            return 0;
        }
        forw=n/x;
        bac=((forw*x)+x)-n;
        cout<<forw+bac+1;
    }
    else{
        cout<<1+(x-n);
    }
    return 0;
}
