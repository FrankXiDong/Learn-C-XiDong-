//n代表需拆位的四位数
//a,b,c,d分别代表千位、百位、十位、个位
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,a,b,c,d;
    cin>>n;
    a=n/1000;
    b=n/100-a*10;
    c=n/10-a*100-b*10;
    d=n%10;
     return 0;
}
