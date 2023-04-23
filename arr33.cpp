#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    int pair=0;
    for(int i=0;i<t;i++){
        for(int j=i+1;j<t;j++){
            if(abs(a[i]-a[j])==x){
                pair++;
            }
            
        }
    }
    if(pair>=0){
        cout<<"yes"<<endl;
    }

    else{
        cout<<"no"<<endl;
    }
    return 0;
}