//if you have a dream to chase nothing can stop you despite of yourself
//program to find logarithm of a real number with base 10
#include <iostream>
using namespace std;
int main()
{
    float a,log=0,w,i=1;
    cout <<"give the number whose logarithmic value is needed\t";
    cin>>a;
    w=(a-1)/1000;
    for(i=1;i<=1000;i++)
    {
        log=log+w*(1/(1+(i-1)*w));
    }
    log=log/2.303;
    cout<<"logarithm of\t"<<a<<"\t"<<"is\t"<<log;
    return 0;
}

    