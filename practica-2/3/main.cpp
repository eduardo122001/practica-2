#include <iostream>

using namespace std;

int main()
{   int i;
    cin>>i;
    int m=1;
    int n=i-1;
    while(m){

        int a=1;
        int b=1;
        int perfe=0;
        while(a){

            int h=n%b;
            if(h==0){
                perfe=perfe+b;
            }
            if(n-1==b){a--;}
            else{b++;}
        }
        if(perfe==n){
        cout<<n<<endl;}
        if(n==2){
            m--;}
        n--;
    }



    return 0;
}
