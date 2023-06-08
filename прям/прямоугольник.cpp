// прям.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream> //Заголовочный файл//
#include <string>

	using namespace std; // использовать все идентификаторы из пространства имен std//


	class Rectangle			//класс прямоугольника
	{
	private: //
		double length;
		double width;

	public:

		//конструктор 
		Rectangle() {
			length = 0;

		}

		//сеттеры
		void set_length(float new_length) {
			if (new_length > 0)
				length = new_length;
		}

		void set_width(float new_width) {
			if (new_width > 0)
				length = new_width;//
		}
		//геттеры:
			float get_length(){
				return length;}
			
			float get_width() {
				return width;
			}
			string to_string() {
			}

		
		// Функциональный раздел ..
		void set(double l, double w) // Получаем данные
		{
			// вызов сеттеров
			length = l;  //..
			width = w;
		}
		double getGirth() // Находим длину окружности
		{
			return 2 * (length + width);
		}

		double getArea() // Находим область 
		{
			return  length * width;
		}



	}; // Определяем класс 


	int main()
	{
		setlocale(LC_ALL, "rus");

		Rectangle myclass; // Определите свой собственный класс 
		myclass.set(6, 9); // ввод данных 
		double girth, area;
		girth = myclass.getGirth(); // Вызов функции в классе 
		area = myclass.getArea();
		cout << "Периметр прямоугольника = " << girth << endl; // Вывод периметра и площади 
		cout << "Площадь прямоугольника = " << area << endl;
		return 0;
	}
















// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
