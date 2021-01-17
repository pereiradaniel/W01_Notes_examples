// In the following program the name share_me refers to the same entity across two translation units.The variable share_me is accessed in module_a.cppand defined in module_b.cpp

// External linkage
// Module_a.cpp

#include <iostream>
void display();
int share_me = 0; // variable definition

int main() {
	display();
	display();
	std::cout << "share_me at " << &share_me << '\n';
	std::cout << "share_me is " << share_me++ << '\n';
}