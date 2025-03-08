#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;


    public:
    Node(int data1) {
        data = data1;
        next = NULL;
    }
};

Node* covertArr2LL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;// to point to the next node 
        mover=mover->next;  // to move to the next node or mover=temp 
    }
    return head;
}
int length(Node* head){
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;

}

int checkispresent(Node* head,int key){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}

Node* removeshead(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

void print(Node* head ){
    Node* temp= head;
    while ((temp))
    {
        cout<< head->data<< " ";
        head= head->next;

    }
    cout<<endl;
}
Node * deletetail( Node * head) {
    if(head==NULL || head->next== NULL )return NULL;

    Node* temp=head;
    while(temp->next->next!=NULL){
        temp= temp->next; // to move to the next node or mover=temp 
        }
        delete temp->next;
        temp->next= NULL;

        return head;
}

int main(){
    vector<int> arr = {10, 20, 30,43,76,56,78,90};

    Node* head=covertArr2LL(arr);
    cout<< head->data<<endl;
    // cout<< head->next->data;

    //Traverdal
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<"Length of the linked list is: "<<length(head)<<endl;
    cout<<"Is 43 present in the linked list: "<<checkispresent(head,43)<<endl;
    head=removeshead(head);
    cout<<head->data<<endl;

    

    
}