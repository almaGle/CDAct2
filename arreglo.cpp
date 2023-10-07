#include <iostream>

int main(){
    int arr[8]={4,6,-3,2,0,1,6,7};
    int k=6;
    int n= sizeof(arr)/sizeof(arr[0]);
    int idx=0;
    while (idx<n &&arr[idx]!=k){
        idx++;
    }
    if (idx<n){
        printf("el elemento %d se encientra en la posición %d",k,idx);
    }else{
        printf("el elemento %d no se encuetra en el arreglo",k);
    }
    return 0;

}