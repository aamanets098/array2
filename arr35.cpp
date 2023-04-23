#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    int tri=0;
    for(int b=0;b<n;b++){
        for(int j=b+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[b]+a[j]+a[k]==x){
                tri++;
                }
            }
        }
    }
    cout<<tri<<endl;
    return 0;
}