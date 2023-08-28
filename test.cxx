#include<iostream>
using namespace std;
int main(){
    int t,x,y;
    cin>>t;
    while(t>=1)
    {
       cin>>x>>y;
       if(x+y>6)
       {
        cout<<"YES";
       }
       else
       cout<<"NO";
       t--;
    }


return 0;
}