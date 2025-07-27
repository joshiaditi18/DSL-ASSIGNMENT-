#include<iostream>
using namespace std;

    void insertion_sort( int arr[],int n){
        for(int i=1;i<n;i++){
            int j=i-1;
           int key=arr[i];
            while(j>=0 && arr[j]>key){
                arr[j+1]=arr[j];
                j--;

            }
            arr[j+1]=key;
        }
    }
    
    

int main(){
    int n;

cout<<"Enter the no reading :"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the input temperture"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
insertion_sort(arr,n);
cout<<"Temperture in sorte dorder is "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;

}