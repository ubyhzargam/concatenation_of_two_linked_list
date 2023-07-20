//
//  main.cpp
//  concatenation_of_two_linked_list
//
//  Created by Uby H on 19/07/23.
//

#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*first1=NULL,*first2=NULL,*first3=NULL,*last=NULL;
void create1(int x)
{
    struct Node *t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;
    if(first1==NULL)
    {
        first1=t;
        last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}
void create2(int x)
{
    struct Node *t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;
    if(first2==NULL)
    {
        first2=t;
        last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}
void display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
void concatenate(struct Node *p1, struct Node *p2)
{
    while (p1->next != NULL)
    {
        p1 = p1->next;
    }
    p1->next = p2;
    first2=NULL;
    first3=first1;
    first1=NULL;
}
int main()
{
    int n1=0,x=0;
    cout<<"Enter the number of elements in liked list 1 : "<<endl;
    cin>>n1;
    cout<<"Enter the elements of linked list 1 : "<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>x;
        create1(x);
    }
    cout<<"Enter the number of elements in linked list 2 : "<<endl;
    cin>>n1;
    cout<<"Enter the elements of linked list 2 : "<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>x;
        create2(x);
    }
    cout<<"Linked list 1 is given by : "<<endl;
    display(first1);
    cout<<"Linked list 2 is given by : "<<endl;
    display(first2);
    concatenate(first1,first2);
    cout<<"The concatenation of the two lists is given by : "<<endl;
    display(first3);
    return 0;
}
