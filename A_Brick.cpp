#include<bits/stdc++.h>
using namespace std;
// class node {
//     public:
//     int val;
//     node *pre;
//     node *next ;
//     node (int val){
//         this->val = val;
//         this->pre=NULL;
//         this ->next = NULL;
//     }
// };
// class myList{
//     public:
//     node *head = NULL;
//     node *tail = NULL;
//     int s = 0;
//     void push(int v){
//         s++;
//         node *newNode = new node (v);
//         if(head==NULL){
//             head =  newNode;
//             tail = newNode;
//             return;
//         }
//         tail->next= newNode;
//         newNode->pre=tail;
//         tail= tail->next;
//     }
//     void pop(){
//         s--;
//         node *deleteNode = head;
//         head = head->next;
//         if(head==NULL){
//             tail=NULL;
//             delete deleteNode;
//             return;
//         }
//         delete deleteNode;
//         head->pre=NULL;
//     }
//     int front(){
//         return head->val;
    
//     }
//     int empty(){
//         if(s>0)return false;
//         else return true;
//     }
// };
  
int main(){
   list<int>li;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
        int x;cin>>x;
        li.push_back(x);
   }
   while(!li.empty()){
        cout<<li.front()<<" ";
        li.pop_front();
   }
    
    return 0;
}