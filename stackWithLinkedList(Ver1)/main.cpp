#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
typedef int ElementType;
typedef struct node{
ElementType data;
struct node* next;

}Node;
typedef Node* List;
int push(List *l,ElementType x);
int pop(List *l,ElementType *x);
void printList(List l);
int countList(List l);
int main()
{
    List l;
    l=NULL;
ElementType x;
    cout<<push(&l,2);
    cout<<push(&l,3);
    cout<<push(&l,4);
    cout<<push(&l,7);
    cout<<push(&l,5);
    cout<<endl;
    printList(l);
    cout<<endl;
    printList(l);
    cout<<endl;
    printList(l);
    cout<<endl;
    printList(l);
    cout<<endl;
    cout<<pop(&l,&x);
    cout<<countList(l);

    return 0;
}
int push(List *l,ElementType x){
Node *p,*q;
p=*l;
q=(Node*)malloc(sizeof(Node));
if(q==NULL)return 0;
q->data=x;
if(p==NULL){
    q->next=NULL;
    *l=q;
}
else{
    q->next=p;
    *l=q;
}
return 1;

}
int pop(List *l,ElementType *x){
Node *p,*q;
p=*l;
if(p==NULL)return 0;

q=p->next;
*l=q;
free(p);
return 1;
}
void printList(List l){
Node *p;
p=l;
if(p==NULL)return;
while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;
}
}
int countList(List l){
Node *p;
p=l;
if(p==NULL)return 0;
int count=0;
while(p!=NULL){
    count++;
    p=p->next;
}
return count;

}
