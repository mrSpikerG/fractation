#include "c_fract.h"





inline c_fract::c_fract()
{
}

//сумма дробей
c_fract* c_fract::sum(c_fract* drob2) {
	c_fract* Temp = new c_fract;
	int NOK = (denominator * drob2->GetZnam()) / NOD(denominator, drob2->GetZnam());

	//числитель дроби(1) * доп. множитель(1) + числитель дроби(2) * доп. множитель(2) 
	Temp->SetChis((numerator * (NOK / denominator)) + (drob2->GetChis() * (NOK / drob2->GetZnam())));

	//знаменатель = найменьшее общее кратное
	Temp->SetZnam(NOK);
	return Temp;
}

//разность дробей
c_fract* c_fract::sub(c_fract* drob2) {
	c_fract* Temp = new c_fract;
	int NOK = (denominator * drob2->GetZnam()) / NOD(denominator, drob2->GetZnam());

	//числитель дроби(1) * доп. множитель(1) + числитель дроби(2) * доп. множитель(2) 
	Temp->SetChis((numerator * (NOK / denominator)) - (drob2->GetChis() * (NOK / drob2->GetZnam())));

	//знаменатель = найменьшее общее кратное
	Temp->SetZnam(NOK);
	return Temp;
}

//умножение дробей
c_fract* c_fract::mul(c_fract* drob2) {
	c_fract* Temp = new c_fract;

	Temp->SetChis(numerator * drob2->numerator);
	Temp->SetZnam(denominator * drob2->denominator);

	return Temp;
}

//деление дробей
c_fract* c_fract::div(c_fract* drob2) {
	c_fract* Temp = new c_fract;

	//переворачиваем вторую дробь и умножаем
	Temp->SetChis(numerator * drob2->GetZnam());
	Temp->SetZnam(denominator * drob2->GetChis());

	return Temp;
}