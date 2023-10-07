
int main(){
    
    int a[6]={5,7,6,-1,2,0};
    for (int j=1; j<=6; j++){
        int key=a[j];
        int i=j-1;
        while (i>=0 && a[i]>key){
            a[i+1]=a[i];
            i=i-1;
            a[i+1]=key;
            
        }
        
    }
    for (int m=0; m<6;m++){
        cout<<a[m];
    }
    
}
