#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,a,b,c;
    cin>>n;
    a=n/100;
    b=n/10-a*10;
    c=n%10;
    cout<< a <<endl;
    cout<< b <<endl;
    cout<< c <<endl;
     return 0;
}