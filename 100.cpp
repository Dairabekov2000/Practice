#include <iostream>
using namespace std;
int main() {
    int b,c,d,e;
    for(int a=1000;a<=9999;a++){
        b=a/1000;
        c=(a%1000)/100;
        d=((a%1000)%100)/10;
        e=((a%1000)%100)%10;
        if(b!=6 && b!=5 && c!=5 && c!=6 && d!=5 && d!=6 && e!=5 && e!=6 ){cout<<b*1000+c*100+d*10+e<<endl;}
    }
}
