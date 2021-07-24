#include <iostream>
using namespace std;
#define size 5
class Queue {
    private:
        int arr[size], rear, front;
    public:
        Queue(){
        rear = -1;
        front = -1;
        };
        bool isEmpty(){
            if(front==-1 && rear==-1) return true;
            else return false;
        };
        bool isFull(){
            if(front ==0 && rear == size-1) return true;
            else if(front == rear+1) return true;
            else return false;
        };
        void enqueue(int n){
          if(isFull()) cout<<"Queue is full"<<endl;  
          else{
              if(isEmpty()) {
                  front=rear=0;
                  arr[rear]= n;
              }else if(rear == size-1){
                  rear =0;
                  arr[rear] =n;
              }else arr[++rear] =n;
          };
        };
        void dequeue(){
            if(isEmpty()) cout<<"Queue is empty"<<endl;
            else{
                if(rear == front) rear=front=-1;
                else if(front == size-1) front =0;
                else front++;
            }
        };    
        void show(){
            if(isEmpty()) cout<<"Queue is empty"<<endl;
            else{
                if(front <= rear){
                    for(int i=front;i<=rear;i++){
                    cout<<arr[i]<<"\t";
                }
                }else{
                    for(int i=front;i<size;i++){
                    cout<<arr[i]<<"\t";
                }
                    for(int i=0;i<=rear;i++){
                    cout<<arr[i]<<"\t";
                }                
                }
            }
            };
};

int main() {
Queue q1;
q1.enqueue(1);
q1.enqueue(2);
q1.enqueue(3);
q1.enqueue(4);
q1.enqueue(5);
q1.dequeue();
q1.dequeue();
q1.show();
cout<<endl;
q1.enqueue(6);
q1.enqueue(7);
q1.dequeue();
q1.show();
return 0;
}
