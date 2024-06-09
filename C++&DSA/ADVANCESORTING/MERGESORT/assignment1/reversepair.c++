//leetcode 493
#include<bits/stdc++.h>
using namespace std;
int c=0;
void merge(vector<int> &arr1,vector<int>&arr2,vector<int> &res){

    int i=0;
    int j=0;
    int k=0;
    while (i<arr1.size() && j<arr2.size())
    {
        if(arr1[i]<arr2[j]){
           res[k]=arr1[i];
           i++;
           k++;
        }
      else{
           res[k]=arr2[j];
           j++;
           k++;
        }
    }
    if(i==arr1.size()){
  while(j<arr2.size()){
         res[k]=arr2[j];
        j++;
        k++;
    }
    }
   if(j==arr2.size()){
  while(i<arr1.size()){
        res[k]=arr1[i];
        i++;
        k++;
    }
   }

}
int reversepair(vector< int> &arr1,vector< int>&arr2){
    int i=0,j=0;
    int count=0;
    while (i<arr1.size() && j<arr2.size())
    {
       long long int d=(arr2[j]);
       long long int c=arr1[i];
       if(c>2*d){
        count+=arr1.size()-i;
        j++;
       }
       else{
        i++;
       }
    }
    return count;

}


void merge_sort(vector<int>&v){
    if(v.size()==1){
        return;
    }
    int n=v.size();
    int n1=n/2;
    int n2=n-n/2;
    vector<int>a(n1);
     vector<int>b(n2);
    for (int i = 0; i < n1; i++)
    {
        a[i]=v[i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i]=v[i+n1];
    }
    

    merge_sort(a);
    merge_sort(b);
    c+=reversepair(a,b);
    merge(a,b,v);


}

int main(){
 
  int n;
  cout<<"enter size of array";
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  merge_sort(v);

cout<<c;
}
