#include"Header.h"
//вроде работает
//алгоритм Сильвера-Полига-Хеллмана, нахождение дискр. логарифма x в y = b^x mod n
int main()
{
	cout << "Enter a module (n): ";
	int n;
	cin >> n;
	cout << "\nEnter b: ";
	int b;
	cin >> b;
	cout << "\nEnter y: ";
	int y;
	cin >> y;
	
	cout << "\n\nX is: " << SPH(n, b, y) << endl << endl;
	
	cout << "Session is over. Thank you." << endl;
	cin.sync();
	cin.get();
	return 0;
}