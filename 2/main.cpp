#include <iostream>

using namespace std;

int factorial1(int x){
    int a=1;
    int b=1;
    int num=1;
    while(a){
        num*=b;
        if(b==x){
            a--;
        }
        b++;
    }
    return num;
}
int factorial2(int x){
    if (x==1){
        return 1;
    }
    else{
        return x*factorial2(x-1);}



}


int main()
{   int b=factorial1(4);
    cout<<b<<endl;
    int c=factorial2(5);
    cout<<c<<endl;


    return 0;
}
