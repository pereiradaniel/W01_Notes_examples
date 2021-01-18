//#include "dot.h"
//#include "hat.h"
//
//int main() {
//	char s[51];
//	dot::leader(s);  // OK calls the leader() function declared in dot
//	hat::leader(s);  // OK calls the leader() function declared in hat
//}

#include "dot.h"
#include "hat.h"

int main() {
	char s[51];

	using namespace dot;
	leader(s);  // OK calls the function declared in dot

	using namespace hat;
	hat::leader(s);  // resolves the ambiguity in favour of hat
}