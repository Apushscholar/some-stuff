#include <iostream>
using namespace std;
typedef float fl;
int main()
{
    const fl pi=3.141592653;
    fl a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    ((a+b+c+d)*(++a+ ++b+ ++c+ ++d)>(pi*pi*pi*pi*pi))?(a=pi,b=pi*pi,c=pi*pi*pi,d=pi*pi*pi*pi):(a=a,b=b,c=c,d=d);//essentially the values of a.b.c.d are reassigned if they do meet particulat conditions, the 2 expressions in parenthesis tell us that if the condition is held (in the primary statement), then the values of a,b,c,d are all reassigned to different values, which increase in powers of pi.
    cout<<"a:       "<<a<<endl;
    cout<<"b:       "<<b<<endl;
    cout<<"c:       "<<c<<endl;
    cout<<"d:       "<<d<<endl;
    return 0;
    
}
