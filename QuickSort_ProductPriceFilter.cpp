#include<iostream>
using namespace std;
class shop{
    private:
    string name;
    float price;
    public:
    void add(){
        cout<<"Name of product :"<<endl;
        cin>>name;
        cout<<"Price of product :"<<endl;
        cin>>price;

    }
    void display(){
        cout<<"Name of product is :"<<name<<endl;
        cout<<"Price of product is :"<<price<<endl;
    }
    void quicksort(shop arr[],int s,int n){
        int i=s;
        int j=n-1;
        shop pivot=arr[s];
        
            if(s<n){
                while(i<j){
                while(i<n && arr[i].price<pivot.price){
                    i++;
                }
                 while(j>s && arr[j].price>pivot.price){
                    j--;
                }
                swap(arr[i],arr[j]);

            }
            swap(arr[s],arr[j]);
            quicksort(arr,0,j-1);
            quicksort(arr,j+1,n);
        }

    }

};
int main(){
int n;
cout<<"Enter no of product :"<<endl;
cin>>n;
shop s[n];
for(int i=0;i<n;i++){
    s[i].add();

}
shop s1;
s1.quicksort(s,0,n-1);
for(int i=0;i<n;i++){
    s[i].display();

}
return 0;
}