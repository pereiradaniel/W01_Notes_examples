#include "dot.h"
#include "hat.h"

int main() {
	char s[51];
	dot::leader(s);  // OK calls the leader() function declared in dot
	hat::leader(s);  // OK calls the leader() function declared in hat
}