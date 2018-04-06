s#include#include<iostream>

using namespace std;

int main()

{

	int width, height, perimeter ;

	cout << "Enter  Width of Rectangle = ";

	cin >> width;

	cout << "Enter  Height of Rectangle = ";

	cin >> height;

	perimeter = 2 * (height + width);

	cout << " Perimeter of rectangle are = " << perimeter << endl;

	return 0;

	SYSTEM("PAUSE");
}