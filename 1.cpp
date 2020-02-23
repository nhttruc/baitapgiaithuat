#include<iostream>
#include<math.h>
using namespace std;
int giaithua(int n){
    if(n==0)
        return 1;
    return n*giaithua(n-1);
}
int main(int argc, char const *argv[]){
    int a;
    cout<<"Nhập n = ";
    cin>>a;
    int kq=giaithua(a);
    cout<<a<<"!="<<kq;
  return 0;
}