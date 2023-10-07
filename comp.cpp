#include <iostream>

using namespace std;

int comparacion(int a[], int n){
    bool com=false;
    
    for (int i=0; i<=n-2;i++){
        for (int j=i+1; j<=n-1; j++){
            if (a[i]==a[j]){
                com= false;
               // cout<<com<<endl;

            }else { com=true;
            //cout<<com<<endl;
            }
        }
    }return com;
}
int main(){
    int arr[6]={1,1,1,1,1,1};
     int n = sizeof(arr)/sizeof(arr[0]);
     int comp=comparacion(arr,n);
     cout<<comp<<endl;
     return 0;
}
