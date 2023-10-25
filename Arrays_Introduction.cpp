#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }  
    int s=0,e=n-1;
    while(s<e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
    cout<<a[0];
    for(int i=1;i<n;i++){
        cout<<" "<<a[i];
    }
    return 0;
}
