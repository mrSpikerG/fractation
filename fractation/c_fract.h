#include <iostream>
#pragma once
class c_fract {
private:
	int numerator;
	int denominator;

	//НОД
	int NOD(int num1, int num2) {
		while (num1 != num2) {
			if (num1 > num2) {
				num1 -= num2;
			}
			if (num2 > num1) {
				num2 -= num1;
			}
		}
		return num1;
	}
public:

	c_fract();
	inline c_fract(int numerator, int denominator) {
		this->numerator = numerator;
		this->denominator = denominator;
	}
	//вспомогательные функции
	inline void SetChis(int num) {
		numerator = num;
	}
	inline void SetZnam(int num) {
		denominator = num;
	}



	inline int GetChis() const {
		return numerator;
	}
	inline int GetZnam() const {
		return denominator;
	}

	inline void CoutDrob() const {
		std::cout << numerator << "/" << denominator;
	}



	//я не был уверен можно ли просто поделить и потом выполнять арифметические операции
	inline float DrobToFloat() const {
		return numerator / denominator;
	}


	//сумма дробей
	c_fract* sum(c_fract*);

	//разность дробей
	c_fract* sub(c_fract*);

	//умножение дробей
	c_fract* mul(c_fract*);

	//деление дробей
	c_fract* div(c_fract*);
};