#include"tree.h"

int main() {
	tree t1(3, 10);

	tree t2(1.2, 3);

	//t1.compare(t2);
	if (t1 == t2) cout << "equal" << endl;
	else cout << "different" << endl;

	if (t1.operator==(t2)) cout << "equal" << endl;
	else cout << "different" << endl;

	if (t1 > t2) cout << "larger" << endl;
	if (t1 > 8) cout << "lives longer" << endl;

	system("pause");
	return 0;
}