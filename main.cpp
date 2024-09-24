#include <iostream>
#include <iomanip>
using namespace std;

class Color {
private:
	int red, green, blue;
public:
	int getRed() {return red; }
	void setRed(int r) {red = r; }
	int getGreen() {return green; }
	void setGreen(int g) {green = g; }
	int getBlue() {return blue; }
	void setBlue(int b) {blue = b; }

	//print method
	void print() {
		cout << setw(15) << "Red: " << red << endl;
		cout << setw(15) << "Green: " << green << endl;
		cout << setw(15) << "Blue: " << blue << endl;
	}
};

int main() {
	//declare colors
	Color teal, orange, turquoise;

	//teal color
	teal.setRed(0);
	teal.setGreen(128);
	teal.setBlue(128);

	//orange color
	orange.setRed(255);
	orange.setGreen(165);
	orange.setBlue(0);

	//turquoise color
	turquoise.setRed(48);
	turquoise.setGreen(213);
	turquoise.setBlue(200);

	//output
	cout << "Teal" << endl;
	teal.print();

	cout << "Orange" << endl;
	orange.print();

	cout << "Turquoise" << endl;
	turquoise.print();
	return 0;
}