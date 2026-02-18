#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value: ";
    cin>>n;
    n=(n+1)/2;

    for(int i = 1; i<=n; i++){
        for(int j = 1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j = 1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    int k = n;
    if (n%2==0){
        k = k-1;
    }

    for(int i = k; i>=1; i--){
        for(int j =1; j<=n-i;j++){
            cout<<"  ";
        }
        for(int j = 1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}