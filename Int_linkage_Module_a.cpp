// The following program allocates separate memories for the variables named local in Ext_linkage_Module_a.cpp and Ext_linkage_Module_b.cpp. The same name (local) refers to two distinct variables in the two translation units.

// Internal Linkage
// Int_linkage_Module_a.cpp

#include <iostream>
static int local = 4;

void display() {
	std::cout << "local is at " << &local << '\n';
	std::cout << "local is " << local++ << '\n';
}