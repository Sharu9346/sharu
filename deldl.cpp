#include<iostream>
using namespace std;
struct node *head=NULL;
struct node{
int data;
node *prev,*next;
node(int val){
data=val;
next=prev=NULL;
}
};

node *insert(int val){
node *nn,*temp;
nn=new node(val);
if(head==NULL){
head=nn;
}
else{
temp=head;
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=nn;
nn->prev=temp;
}
return head;
}

node *del(){
node *temp=head;
int pos,i=1;
cout<<"enter position to delete";cin>>pos;
if(pos==1){
head->next->prev=head->prev;
delete(head);
head=head->next;
}
else{
while(temp!=NULL && i<pos){
temp=temp->next;
i++;
}
if(temp==NULL){
cout<<"position doesn't exist";
}
else{
temp->prev->next=temp->next;
if(temp->next!=NULL){
temp->next->prev=temp->prev;
}
delete(temp);
}
}
return head;
}
node *delval(){
node *temp=head;
int val,j,f=0;
cout<<"enter value";cin>>val;
while(temp->next!=NULL){
if(temp->data==val){
f=1;
break;
}
temp=temp->next;
}
if(f==1){
cout<<"enter 1-before val 2-after val";cin>>j;
if()


void dispaly(){
node *temp=head;
while(temp!=NULL){
cout<<temp->data<<endl;;
temp=temp->next;
}
}
int main()
{
int val;
cout<<"zero to stop list\n";
cout<<"enter the value:";cin>>val;
while(val){
head=insert(val);
cin>>val;
}
cout<<"linked list is\n";
dispaly();
head=del();
dispaly();
head=delval();
display();
}
