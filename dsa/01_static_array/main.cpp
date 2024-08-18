#include <iostream>
using namespace std;

namespace StaticArray {
	struct StaticArray {
		int lenght;
		// enum type = ["string", "int", "double" ...etc}
		int location0;
		int location1;
		int location2;
	};
		
	void foo() {
		printf("Hello from static array!\n");
	};
	
	auto new(int length, int value0, int value1, int value2) {
		return (StaticArray){ .length = 2, .location0 = 10, .location1 = 11, .location2 = 12 }
	};
}

int main() {
	StaticArray::foo();
	cout << "hello world" << endl;
}

