#include <iostream>
#include <string>
using namespace std;

class StackArray {
private:
	string stack_array[5];
	int top;
public:
	//constructor
	StackArray() {
		top = -1;
	}

	string push(string element) {
		if (top == 4) { //step 1
			cout << "Number of data exceeds the limit. " << endl;
			return "";
		}

		top++;			//step 2
		stack_array[top] = element;		//step 3
		cout << endl;
		cout << element << "ditambahkan (pushed)" << endl;

		return element;
	}

	void pop() {
		if (empty()) {			//step 1
			cout << "\nStack is empty. cannot pop" << endl; //1.a
			return;											//1.b
		}
		cout << "\nthe popped element is; " << stack_array[top] << endl; //step 2
		top--;												// step 3 decrement
	}

	//metode for checking if data is empty
	bool empty() {
		return (top == -1);
	}
	void display() {
		if (empty()) {
			cout << "\nStack is empty" << endl;
		}
	}
};