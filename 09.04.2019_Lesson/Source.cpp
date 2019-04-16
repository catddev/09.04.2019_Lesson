#include"tree.h"
#include"Vector.h"

//int main() {
//	tree t1(3, 10);
//
//	tree t2(1.2, 3);
//
//	//t1.compare(t2);
//	if (t1 == t2) cout << "equal" << endl;
//	else cout << "different" << endl;
//
//	if (t1.operator==(t2)) cout << "equal" << endl;
//	else cout << "different" << endl;
//
//	if (t1 > t2) cout << "larger" << endl;
//	if (t1 > 8) cout << "lives longer" << endl;
//
//	//здесь без конструктора копирования
//	//вообще конструктор копирования, присваивания и деструктор нужны для работы только с динамической памятью!
//	tree t3;
//	t3 = t1;
//	if (t1 == t3) cout << "equal" << endl;
//
//	(t1 + 5).print(); //т.к. оператор "+" возвращает тип tree, то можно сразу от его имени вызывать функции этого класса  как t.print();
//	
//
//	Vector v;
//	v.add(tree(2, 4)); //создаем объекты по конструктору и сразу записываем в вектор
//	v.add(tree(1.5, 3));
//	v.add(tree(2.5, 4));
//	for (int i = 0; i < v.size(); i++) //метод size() вернет cur_size;
//		v[i].print();
//
//	ifstream in_file("in.txt");
//	double tmp1, tmp2;
//
//	while (!in_file.eof()) {
//		in_file >> tmp1 >> tmp2;
//		v.add(tree(tmp1, tmp2)); //не через сеттеры, а сразу через параметризованный конструктор
//		//каждый раз создается новый tree, вместо записи во временный объект класса как раньше
//	}
//	cout << "from file" << endl;
//	for (int i = 0; i < v.size(); i++)
//		v[i].print();
//	cout << endl;
//
//	Vector tv;
//	tv = v;
//	for (int i = 0; i < tv.size(); i++)
//		tv[i].print();
//	cout << endl;
//
//	if (v[0] == v[1]) cout << "equal" << endl;
//
//	system("pause");
//	return 0;
//}

//main() for Lesson 16.04.2019
int main() {

	ifstream in("in.txt");

	Vector ts;
	tree t;
	while (!in.eof()) {
		in >> t;
		ts.add(t);
	}
	for (int i = 0; i < ts.size(); i++)
		cout << ts[i];

	//double tmp;
	//cin >> tmp;
	//t.setHeight(tmp);
	//cin >> tmp;
	//t.setLifeLength(tmp);
	//t.print();

	system("pause");
	return 0;
}