#include <iostream>

using namespace std;

int main()
{int a,b,x,y;
cin>>a>>b;
x=a;
y=b;
while (x!=y){
    if (x<y)
        x=x+a;
        else y=y+b;
}
    cout << x;
    return 0;
}
