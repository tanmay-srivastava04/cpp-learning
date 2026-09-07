#include<bits/stdc++.h>
using namespace std;
void pattern14(int n){
    for(int i=1;i<=n;i++){
         char value='A';
        for(int j=1;j<=i;j++){
            cout<<value;
            value++;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern14(n);
}
