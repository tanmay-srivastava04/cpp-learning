#include<bits/stdc++.h>
using namespace std;
void pattern17(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        char value='A';
        int breakpoint = (2*i-1)/2;
        for(int j=1;j<=2*i-1;j++){
            cout<<value;
           if(j<=breakpoint) value++;
           else value--;
        }
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern17(n);
}