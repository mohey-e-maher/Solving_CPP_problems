###################Q(A)#####################
#include <iostream>

using namespace std;

int main()
{
    string x;
    cin>>x;

    cout << "Hello, " <<x<< endl;
    return 0;
}

###################Q(B)#####################
#include <iostream>

using namespace std;

int main()
{
    char z;
    long long x,y;
    cin >> x >> z >> y;
    long long m=x*y;
    switch(z){
    case '+': cout<<x+y; return 0;
    case '-': cout<<x-y; return 0;
    case '*': cout<<m; return 0;
    case '/': cout<<x/y; return 0;

    }
    return 0;
}

###################Q(C)#####################

#include <iostream>

using namespace std;

int main()
{
    long long x,z;
    cin>>x;
    z=(x*(x+1)/2);
    cout<<z;

    return 0;
}
###################Q(D)#####################
#include <iostream>

using namespace std;

int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    bool oada=false,gom3a=false;
    if(c%b==0 || b%c==0){
        gom3a=true;
    }
    if(a%c==0 || c%a==0){
        oada=true;
    }
    if(oada && gom3a){
        cout<<"Draw";
    }
    else if(oada){
        cout<<"Ouda";
    }
    else if(gom3a){
        cout<<"Gom3a";
    }
    else{
        cout<<"Draw";
    }
    return 0;
}
###################Q(E)#####################
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    if(s2 == s4){
        cout<<"Siblings";
    }
    else{
        cout<<"Not Siblings";
    }
    return 0;
}

###################Q(F)#####################
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char z,x;
    cin>>z;
    if(z<'a'){
        x=z+32;
        cout<<x;
        return 0;
    }
    else{
        x=z-32;
        cout<<x;
        return 0;
    }
    return 0;
}
###################Q(G)#####################

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int x,z,f;
    cin>>x;
    z=x%1000;
    z=z/100;
    f=z;
    if(f%2==0){
        cout<<"EVEN";
        return 0;
    }
    else{
        cout<<"ODD";
    }
    return 0;
}
###################Q(H)#####################
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    float x,y;
    cin>>x>>y;
    if (x==0 && y==0){
        cout<<"Origem";
        return 0;
    }
    if(x==0){
        cout<<"Eixo Y";
    return 0;
    }
    if(y==0){
        cout<<"Eixo X";
    return 0;
    }
    if(y>0 && x>0){
        cout<<"Q1";
    return 0;
    }
    if(y>0 && x<0){
        cout<<"Q2";
    return 0;
    }
    if(y<0 && x>0){
        cout<<"Q4";
    return 0;
    }
    else{
        cout<<"Q3";
        return 0;
    }

    return 0;
}
###################Q(I)#####################
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    long long x,y,m,d;
    cin>>x;
    y=x/365;
    m=(x-(365*y))/30;
    d=x-(365*y)-(30*m);
    cout<<y<<" years\n"<<m<<" months\n"<<d<<" days";
    return 0;
}

###################Q(J)#####################
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y,z;
    cin>>x>>y>>z;
    long long a[3],b[3];
    a[0]=x;a[1]=y;a[2]=z;
    b[0]=x;b[1]=y;b[2]=z;
    sort(a,a+3);
    for(int i=0;i<3;i++){
        cout<<a[i]<<" ";
        if(i==2){
            break;
        }
    }
    cout<<"\n";
    for(int j=0;j<3;j++){
        cout<<b[j]<<" ";
        if(j==2){
            break;
        }
    }
    return 0;
}
###################Q(K)#####################
    #include <iostream>
    #include <string.h>
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        long long x,y,z,c,m,h;
        cin>>x>>y>>z>>c;
        h=x*y;
        if(h>9999){
            h=h%10000;
        }
        m=h*z*c;
        if(m>9999){
            m=m%10000;
        }
        if(m==0){
            cout<<m;
            return 0;
        }
        m=m%100;
        cout<<m/10;
        cout<<m%10;
        return 0;
    }
###################Q(L)#####################
    #include <iostream>
    #include <string.h>
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
       int x,a[3],res2=0,res3=0;
       cin>>x;
       a[0]=x/100;
       a[1]=(x/10)%10;
       a[2]=x%10;

       cout<<x+(a[0]+(10*a[2])+(100*a[1]))+(a[1]+(10*a[0])+(100*a[2]));
        return 0;
    }
###################Q(M)#####################

    #include <iostream>
    #include <string.h>
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
       int x,y;
       cin>>x>>y;
       if((x==y+1 || x==y-1) || ((x==1 && y==10) || (y==1 &&x == 10))){
        cout<<"YES";
       }
        else{
        cout<<"NO";
       }
        return 0;
    }
###################Q(S)#####################
    #include <iostream>
    #include <string.h>
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
      long long r,s,x;
      double m=1.414,z;
       cin>>r>>s;
       z=(m*s)/2;
       x=s*s;
       if(r>=z){
       cout<<"Circle";
       return 0;
       }
       if(r<=(0.5*s)){
        cout<<"Square";
       }
       else{
        cout<<"Complex";
       }
       return 0;
    }
###################Q(T)#####################
    #include <iostream>
    #include <string.h>
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
      long long x,z,r;
       cin>>x;
       r=x/4;
        cout<<(x*365)+r;
        return 0;
    }
###################Q(U)#####################
    #include <iostream>
    #include <string.h>
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
      double n,k,a,m;

      cin>>n>>k>>a;
      m=(-n+k)*a*0.5;
      if(m!=(long long)m){
        cout<<"double";
      }
      else{
        if(m>-2147483648 && m<2147483647){
            cout<<"int";
        }
        else{
            cout<<"long long";
        }
      }
       return 0;
    }
###################Q(V)#####################
    #include <iostream>
    #include <string.h>
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
      int s,t,x;
      cin>>s>>t>>x;
      if(s<=t){
        if(x>=s && x<t){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
      }
      else{
        swap(s,t);
        if(x>=s && x<t){
            cout<<"No";
        }
        else{
            cout<<"Yes";
        }
      }
       return 0;
    }
