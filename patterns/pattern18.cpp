#include<bits/stdc++.h>
using namespace std;
void pattern18(int n){
    for(int i=0;i<n;i++){
        for(char value ='E'-i;value<='E';value++){
            cout<<value<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern18(n);
}