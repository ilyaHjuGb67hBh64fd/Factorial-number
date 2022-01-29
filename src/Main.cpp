#include <iostream>

using namespace std;

int fact(int n)
{
    if(n < 0)  /// При отрицательном числе // if nagative number
	
        return 0;  // Вернется ноль // callback 0
		
    if (n == 0) // При нуле if 0
	
        return 1; //  Вернется единица // callback 1
		
    else // Для всех других случаях
	
        return n * fact(n - 1); // Выполняем рекурсию. // return formula of factorial recursion 
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
