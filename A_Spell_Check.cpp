#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int s,int e){
    int mid = (s+e)/2;

    int len1 = mid - s+1;
    int len2 = e-mid;

    int *first = new int [len1];
    int *second = new int [len2];

    int k= s;       // index of main array

    for(int i=0;i<len1;i++){
        first[i] = arr[k];
        k++;
    }
    k= mid+1;
    for(int i=0;i<len2;i++){
        second[i] = arr[k];
        k++;
    }
    

    int ind1=0,ind2=0;
    k=s;
    while(ind1<len1 && ind2<len2){
        if(first[ind1]>second[ind2]){
            arr[k] = first[ind1];
            ind1++;k++;
        }
        else{
            arr[k]=second[ind2];
            k++;
            ind2++;
        }

    }
    while(ind1<len1){
        arr[k] = first[ind1];
        ind1++;
        k++;
    }
    while(ind2<len2){
        arr[k]=second[ind2];
        ind2++;
        k++;
    }


}
void mergeSort(vector<int>&arr,int s,int e){
    if(s>=e)return;
    int mid = (s+e)/2;

    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    
    merge(arr,s,e);

}
int main(){
    int n;
    cin>>n;
    vector<int>v[n];
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v->push_back(x);
    }
    mergeSort(*v,0,n-1);

    for(auto it=v->begin();it!=v->end();it++){
        cout<<*it<<" ";
    }

    return 0;
}