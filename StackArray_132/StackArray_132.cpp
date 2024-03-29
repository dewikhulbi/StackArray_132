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

	void push() {
		cout << "\nenter a element : ";
		string element;
		getline(cin, element);

		if (top == 4) { //step 1
			cout << "Number of data exceeds the limit. " << endl;
			return;
		}

		top++;			//step 2
		stack_array[top] = element;		//step 3
		cout << endl;
		cout << element << "ditambahkan (pushed)" << endl;

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
		else {
			for (int tmp = 0; tmp <= top; tmp++) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	StackArray s;
	while (true) {
		cout << endl;
		cout << "\n***Stack Menu***\n";
		cout << "1. push\n";
		cout << "2. pop\n";
		cout << "3. display\n";
		cout << "4. exit\n";
		cout << "enter your choice : ";
		string input;
		getline(cin, input);
		char ch = (input.empty() ? '0' : input[0]);
		switch (ch) {
		case '1': {
			s.push();
			break;
		}
		case '2':
			if (s.empty()) {
				cout << "\nStack is empty." << endl;
				break;
			}
		case '3': 
			s.display();
			break;

		case '4': 
			return 0;
		default:
			cout << "\nInvalid choice." << endl;
			break;
		}

	}
}