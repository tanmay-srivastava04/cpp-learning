#include<bits/stdc++.h>
using namespace std;
void pattern15(int n){
    for(int i=1;i<=n;i++){
        char value = 'A';
        for(int j=n;j>=i;j--){
            cout<<value;
            value++;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern15(n);
}