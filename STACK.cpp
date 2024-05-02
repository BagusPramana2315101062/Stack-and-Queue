#include <iostream>
using namespace std;

class Stack{
	
	public:
	int size = 0;
	int top = -1;
	char *items;
	
	Stack(int stacksize){
		size = stacksize;
		items = new char[size];
	}
	
	void push(char item){
		if (top==size-1){
			cout << "ERROR, Stack Penuh" << endl;
		}else{
			top++;
			items[top] = item;
		}
	}
	
	char pop(){
		char item;
		
		if (top==-1){
			cout << "ERROR, Stack Kosong" << endl;
		}else{
			item = items[top];
			top--;
		}
		return item;
	}
};

int main(int argc, char** argv) {
	
	Stack stack1(5);
	
	stack1.push('A');
	stack1.push('B');
	stack1.push('C');
	stack1.push('D');
	stack1.push('E');
	stack1.push('F');
	
	cout << stack1.pop() << endl;
	cout << stack1.pop() << endl;
	cout << stack1.pop() << endl;
	cout << stack1.pop() << endl;
	cout << stack1.pop() << endl;
	cout << stack1.pop() << endl;
	
	return 0;
}