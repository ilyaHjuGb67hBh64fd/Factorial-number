#include <iostream>

using namespace std;

int fact(int n)
{
    if(n < 0)  /// При отрицательном число
	
        return 0;  // Вернется ноль
		
    if (n == 0) // При нуле
	
        return 1; //  Вернется единица
		
    else // Для всех других случаях
	
        return n * fact(n - 1); // Выполняем рекурсию.
}

int main()
{
    int n;
    
	setlocale(0,""); // Кириллица
	
    cout << "Введите число для факториала: "; 
    
	cin >> n;
    
	cout << "Факториал равен "<< fact(n) << endl; // Факториал числа
	
    return 0;
}