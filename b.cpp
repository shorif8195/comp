#include<bits/stdc++.h> 
using namespace std;
int main(){
    int t;cin>>t;  // taking the number of test cases
    for(int i=0;i<t;i++){
        string s; cin>>s; //taking a string

        int frq[26];    // initializing a freequency array
        memset(frq,0,sizeof(frq)); // initialize by zero

        for(int j=0;j<s.length();j++){  // applying a loop to length of string 
            if(s[j]>='a'){              // checking the charecter is small or not;
                int x = s[j]-97;        //  if the charecter is a then x  denote 0 th index of frequency array
                frq[x]++;               //  incrising the number of charecter index
            }

        }
        for(int i=0;i<26;i++){      // apply loop for print the answer
            if(frq[i]>0){           // if ith index is greter 0 . It means the cherecter was exist; and ith value is the number of cherecter
                char ch = i+97;     // taking charecter from frequency array
                cout<<frq[i]<<ch;    // print the number and the cherecter
            }

        }
        cout<<endl;                 // lastly ending the line

    }
    
    return 0;
}