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
	return 0;
}