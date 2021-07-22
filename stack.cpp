#include <iostream>
using namespace std;
#define size 10
class Stack {
    private:
    int top;
    int arr[size];
    
    public:
    Stack(){
        top = -1;
    };
    
   void push(int n){
        if(top-1 == size){
            cout<<"Stack is full";
        } else {
            top++;
            arr[top]=n;
        };
    };
    
   void pop(){
     if(top == -1){
       cout<<"Stack is empty";  
     }else{
       top--;  
     };  
   };
   
   void show(){
     for(int i=0; i<= top; i++){
       cout<<arr[i]<<endl;  
     };  
   };
};

int main() {
Stack st;
st.push(20);
st.push(25);
st.show();
st.pop();
st.show();
return 0;
}
