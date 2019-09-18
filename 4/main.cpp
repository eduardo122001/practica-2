#include <iostream>

using namespace std;

int main()
{   long long num=600851475143;  //600851475143     //13195
    int m=1;
    long long n=num-1;              //n=num-1
    while(m){
        cout<<n<<endl;
        int a=1;
        long long b=1;
        long long pri=0;
        while(a){
            long long h=n%b;
            if(h==0){
                pri++;
            }
            if(n==b){a--;}
            else{b++;}
        }
        if(pri==2){
            if(num%n==0){
                cout<<n<<endl;
                m--;
            }
        }
        n--;
        }
    return 0;
}
