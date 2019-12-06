#include<iostream>
using namespace std;
#define SIZE 5
int A[SIZE];
int front=-1;
int rear=-1;

bool isempty(){
    if(front==-1&&rear==-1)
    return true;
    else return false;
}

void enqueue(int value){
    if(rear==SIZE-1){
        cout<<"The Queue Is Full"<<endl;
    }
    else{
    if(front==-1){
        front=0;
    }
    
    rear++;
    A[rear]=value;
    }
}

void dequeue(){
    if(isempty()){
        cout<<"The Queue Is Empty"<<endl;
    }
    else
    { if(front==rear){
        front=rear=-1;
        }
    else
        front++;
    }
}

void showfront( )
{
 if( isempty())
  cout<<"Queue is empty\n";
 else
  cout<<"element at front is:"<<A[front]<<"\n";
}

void displayQueue()
{
 if(isempty())
  cout<<"Queue is empty\n";
 else
 {
  for( int i=front ; i<= rear ; i++)
   cout<<A[i]<<" ";
  cout<<"\n";
 }
}

int main(){
    int choice,flag=0;
    while(flag==0){
        cout<<"Enter The Choice"<<endl;
        cout<<"1.Insert Value"<<endl;
        cout<<"2.Delete Value"<<endl;
        cout<<"3.Show Front Element"<<endl;
        cout<<"4.Display Queue"<<endl;
        cout<<"5.Exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1: int value;
                        cout<<"Enter The Value To Insert"<<endl;
                        cin>>value;
                        enqueue(value);
                        break;
            case 2: dequeue();
                    break;
            case 3: showfront();
                    break;
            case 4: displayQueue();
                    break;
            case 5: flag=1;
                    break;
            default:cout<<"Enter A Valid Choice"<<endl;
                    break;
        }
    }
        return 0;
}