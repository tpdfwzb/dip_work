#include "qtcyberdip.h"
#include <QtWidgets/QApplication>
using namespace std;

int flag = 1;
int main()
{
	int x = 2, y = 3;
	if (flag == 0){ cout << 6; flag = 1; return 0;}
	if (flag == 1){ cout << 1.5; flag = 0; return 0;}
}
