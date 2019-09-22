#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * next;
}*start=NULL;
void creatnode(int s)
{
    int i=0,d;
    struct node * newnode,*ptr;
    scanf("%d",&d);
    while(i<s)
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=d;
        newnode->next=NULL;
        if(start==NULL)
            newnode=start;
        else
            ptr=start;
            while(ptr->next!=NULL)
            {
               ptr=ptr->next;
            }
            ptr->next=newnode;
            scanf("%d",&d);
            i--;
}

int search(int k)
{
    struct node * temp=start;
    int i;
    for(i=1;i<k;i++)
    {
        temp=temp->next;
    }
    return temp->data;
}
void main()
{
    int s,n,k,x;
    printf("enter size:");
    scanf("%d",&s);
    creatnode(s);
    printf("enter node no from end:");
    scanf("%d",n);

    k=s-n+1;
    x=search(k);
    printf("%d",x);
}
