#include <iostream>

using namespace std;

int main()
{   int limite=1000000;
    int a=1;
    int b=1;
    long long  num=0;
    while(a){

        if(b%3==0){
            num+=b;
        }
        if(b%5==0){
            num+=b;
        }
        if(b%3==0&&b%5==0){
            num-=b;
        }
        if(b==limite-1){
            a--;
        }

        b++;
    }
    cout<<num<<endl;

    return 0;
}
