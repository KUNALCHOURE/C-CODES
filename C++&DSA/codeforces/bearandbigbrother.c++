#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int count=0;
    if(a==b){
        cout<<1;
    }
    else{
while (a<=b)
{ count++;
    a=3*a;
    b=2*b;
}
cout<<count;
}


    
}