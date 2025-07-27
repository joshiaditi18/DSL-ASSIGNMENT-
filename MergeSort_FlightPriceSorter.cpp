#include<iostream>
using namespace std;
class travelling{
private:
string from;
string too;
float  price;
public:
void add(){

    cout<<"Enter the source place "<<endl;
    cin>>from;
    cout<<"Enter the destination place "<<endl;
    cin>>too;
    cout<<"Enter ticket price "<<endl;
    cin>>price;

}
void display(){
    cout<<from<<"  to "<<too << " price is "<<price<<endl;


}
void mergesort(travelling arr[],travelling temp[],int s,int l){
    int m;
    if(s<l){
        m=(s+l)/2;
        mergesort(arr,temp,0,m);
        mergesort(arr,temp,m+1,l);
        merge(arr,temp,0,m,l);

    }

}
void merge(travelling arr[],travelling temp [],int s,int m,int l){
    int i=s;
    int j=m+1;
    int k=s;
    while(i<=m && j<=l){
        if(arr[i].price<arr[j].price){
            temp[k]=arr[i];
            i++;
            k++;
            
        }
        else{
            temp[k]=arr[j];
            j++;
            k++;
        }
        
    }
    while(i<=m){
        temp[k]=arr[i];
            i++;
            k++;

    }
    while(j<=l){
        temp[k]=arr[j];
            j++;
            k++;

    }

}
};
int main(){
int n;
cout<<"Enter total trips :"<<endl;
cin>>n;
cout<<"Enter details of it :"<<endl;
travelling t[n];
travelling t2[n];
for(int i=0;i<n;i++){
    t[i].add();
}
travelling t1;
t1.mergesort(t,t2,0,n-1);
for(int i=0;i<n;i++){
    t[i].display();
}
return 0;
}