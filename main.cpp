#include <iostream>

using namespace std;

int main()
{
int n,x,t,batas;
 n=64;
 batas = n+100;
 x = 20;
 t = n;
while(t<=batas){
    t=t+x;
    x=x+10;
}
cout << t;
return 0;
}
