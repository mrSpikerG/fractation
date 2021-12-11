#include <iostream>
#include "c_fract.h"
using namespace std;

int main()
{
   
	c_fract* drobj1 = new c_fract(2,3);
	c_fract* drobj2 = new c_fract();
	c_fract* drobj3 = new c_fract();

	drobj2->SetChis(3);
	drobj2->SetZnam(2);
	cout << "\n";

	drobj3 = drobj1->sum(drobj2);
	drobj3->CoutDrob();
	cout << "\n";

	drobj3 = drobj1->sub(drobj2);
	drobj3->CoutDrob();
	cout << "\n";

	drobj3 = drobj1->mul(drobj2);
	drobj3->CoutDrob();
	cout << "\n";

	drobj3 = drobj1->div(drobj2);
	drobj3->CoutDrob();
}

