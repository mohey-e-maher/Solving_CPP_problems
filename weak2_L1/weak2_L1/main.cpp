#include <iostream>

using namespace std;

int main()
{
   long long x,y,t,h,g=0,coun=0;
   cin>>x>>y;
   for(int i=x;i<=y;i++){
   h=i;
   while(i!=0){
    t=h%10;
    h=h/10;
    if(t!=4 || t!=7){
        g=-1;
        break;
    }
   }
   if(g==-1){
    g=0;
    continue;
   }
   else{
    cout<<i<<" ";
    coun++;
   }
   }
   if(coun==0){
    cout<<-1;
   }
   return 0;
}
