s#include#include<iostream>

using namespace std;

int main()

{

	int width, height, perimeter ;

<<<<<<< HEAD
	cout << "The width of rectangle = ";
=======
	cout << "Width of Rectangle = ";
>>>>>>> 92a3f79ee0163414ad90dd6faf23f46d39c65705

	cin >> width;

	cout << "Enter  Height of Rectangle = ";

	cin >> height;

	perimeter = 2 * (height + width);

	cout << " Perimeter of rectangle is = " << perimeter << endl;

	return 0;

	SYSTEM("PAUSE");
}