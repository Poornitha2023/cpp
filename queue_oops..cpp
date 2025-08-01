#include<bits/stdc++.h>
using namespace std;

class Queue{
	private:
		int front,rear,arr[100];
		
	public:
	    Queue(){
	    	front = 0;
	    	rear = -1;
		}
	 
	 bool isempty(){
	 	return rear<front;
	 }   
	 bool isfull(){
	 	return rear==99;
	 }
	 void  push(int x){
	    if(!isfull()) {
	    	 arr[++rear]=x;
		}
	 }
	 int pop(){
	     if(!isempty()){
		 return arr[front++];
	 	}
	 	else{
	 		return -1;
		 }
	 
	 }
	 int peek(){
	 	 return (isempty()) ? -1 : arr[front];
	 }
	 
};

int main(){
	Queue q;
	q.push(20);
	q.push(30);
	q.push(40);
	if(q.isempty()){
	cout<<"queue is empty"<<endl;
    }
	else 
	{
	cout<<"queue is not empty"<<endl;
    }
    cout << q.peek() << endl; 
    q.pop();
    cout << q.peek() << endl;

}
	
	

