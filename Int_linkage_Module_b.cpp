// In the following program the name share_me refers to the same entity across two translation units.The variable share_me is accessed in Ext_linkage_Module_a.cpp and defined in Ext_linkage_Module_b.cpp

// Internal Linkage
// Int_linkage_Module_b.cpp

//#include <iostream>
//void display();
//static int local = 2;
//
//int main() {
//	display();
//	display();
//	std::cout << "local is at " << &local << '\n';
//	std::cout << "local is " << local++ << '\n';
//}