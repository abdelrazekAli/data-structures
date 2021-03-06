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
            if(rear==front==-1 || front>rear) return true;
            else return false;
        };
    
        bool isFull(){
            if(rear==size-1) return true;
            else return false;
        }
    
        void enqueue(int n){
            if(isFull())
                cout<<"Queue is full"<<endl;
            else{
                arr[++rear] =n;
            };
            if(front==-1) front++;
        };
        
        void dequeue(){
            if(isEmpty())
                cout<<"Queue is empty"<<endl;
            else
                  cout<<"The deleted number is "<<arr[front++]<<endl;   
        };    
        
        void show(){
            if(isEmpty()) cout<<"Queue is empty"<<endl;
            else{
                for(int i=front;i<=rear;i++){
                    cout<<arr[i]<<endl;
                 };
            };
        };       
};

int main() {
Queue q1;
q1.enqueue(1);
q1.enqueue(2);
q1.show();
q1.dequeue();
q1.show();
return 0;
}
