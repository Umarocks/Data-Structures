#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *link;
};
Node *head=NULL;

void insertbeg(int d){
                Node *ptr= new Node();
                ptr->data=d;
                ptr->link=head;
                head=ptr;
}
void insertend(int d){
                  Node *ptr = new Node();
                  ptr->data=d;
                  ptr->link=NULL;
                  if(head==NULL)
                  head=ptr;
                  else
                  {
                   Node *temp = head;
                   while(temp->link != NULL)
                   {
                    temp=temp->link;
                   }
                   temp->link=ptr;
                   }
}
void dispLink()
                {
                 Node *temp=head;
                     while(temp!=NULL)
                         {
                          cout<<temp->data<<" ";
                          temp=temp->link;
                         }
                 cout<<"\n";
                }
void deleteBeg(){
                if(head==NULL)
                 cout<<"LIST IS EMPTY\n";
                    else
                    {
                         Node *ptr=head;
                         head=head->link;
                         free(ptr);
                        
                        }
}


void deleteEnd()
{
                 Node *ptr;
                 if(head==NULL)
                  cout<<"EMPTY LIST\n";
                 if(head->link==NULL)
                    {
                     ptr=head;
                     head=NULL;
                     free(ptr);
                    }
                 else
                    {  
                        Node *prev;
                        ptr=head;
                             while(ptr->link!=NULL)
                                {
                                   prev=ptr;
                                   ptr=ptr->link;
                                  }
                  prev->link=NULL;
                  free(ptr);
                
                 }

}                

    
int main(){
    int choice;
    int k;
    while(k!=1){
    cout<<"select the operation."<<endl;
    cout<<"1.insert at front."<<endl;
    cout<<"2.insert at end."<<endl;
    cout<<"3.delete at front."<<endl;
    cout<<"4.delete at end."<<endl;
    cout<<"5.display the linked list."<<endl;
    cout<<"6.Exit"<<endl;
    cin>>choice;
    int d;
    switch (choice){
        case 1: cout<<"Enter the number to be added"<<endl;
                    
                    cin>>d;
                    insertbeg(d);
                    break;
        case 2: cout<<"Enter the number to be added"<<endl;
                    cin>>d;
                    insertend(d);        
                    break;
        case 3:  deleteBeg();
                    break;
        case 4:  deleteEnd();
                    break;
        case 5: dispLink();
                    break;
        case 6: k=1;
                break;
                    
        default : cout<<"choose the appropraite choice"<<endl;
                    
    }
    }
    dispLink();
                    
    return 0;
}