#include<bits/stdc++.h>
using namespace std;
void pattern16(int n){
    char value='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<value;
        }
        cout<<endl;
        value++;
    }
}
int main(){
    int n;
    cin>>n;
    pattern16(n);
}