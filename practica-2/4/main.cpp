#include <iostream>

using namespace std;

int main()
{   long long num=600851475143;  //600851475143     //13195
    long long num2=num;
    int a=1;
    long long primo=2;
    while (a){

        long long h=num%primo;
        if(h==0){
            num=num/primo;
        }
        else{

            primo++;
            int m=1;
            while(m){

                int p=1;
                long long d=1;
                long long pri=0;
                while(p){

                    int l=primo%d;
                    if(l==0){
                        pri++;
                    }
                    if(primo==d){
                        p--;
                    }
                    else{d++;}
                }
                if (pri==2){
                    m--;
                }
                else{primo++;}
            }

        }
        if(num==1){a--;}

    }
    cout<<primo<<endl;



    return 0;
}
