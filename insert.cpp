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

void dispaly(){
node *temp=head;
while(temp!=NULL){
cout<<temp->data<<endl;;
temp=temp->next;

}
}

node *insert_head(int val){
node *nn;
nn=new node(val);
nn->next=head;
if(head!=NULL){
head->prev=nn;
}
head=nn;
return head;
}

node *insert_pos(){
node *nn,*temp;
int pos,i=1, val;
cout<<"enter position";cin>>pos;
cout<<"enter value";cin>>val;
nn=new node(val);
temp=head;
if(pos==1){
insert_head(val);
}
else{
while(temp!=NULL && i<pos-1){
temp=temp->next;
i++;
}
if(temp==NULL){
cout<<"position doesn't exist";
}
else{
nn->next=temp->next;
temp->next=nn;
temp->next->prev=nn;
nn->prev=temp;
}
}
return head;
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
cout<<"enter value to isert";cin>>val;
head=insert_head(val);
dispaly();
head=insert_pos();
dispaly();
return 0;
}





