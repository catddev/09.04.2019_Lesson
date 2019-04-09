#include"tree.h"
#include"Vector.h"

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

	//здесь без конструктора копирования
	//вообще конструктор копирования и деструктор и перегрузки нужны для работы только с динамической памятью!
	tree t3;
	t3 = t1;
	if (t1 == t3) cout << "equal" << endl;

	(t1 + 5).print(); //т.к. оператор "+" возвращает тип tree, то можно сразу от его имени вызывать функции этого класса  как t.print();
	

	Vector v;
	v.add(tree(2, 4)); //создаем объекты по конструктору и сразу записываем в вектор
	v.add(tree(1.5, 3));
	v.add(tree(2.5, 4));
	for (int i = 0; i < v.size(); i++) //метод size() вернет cur_size;
		v[i].print();




	system("pause");
	return 0;
}