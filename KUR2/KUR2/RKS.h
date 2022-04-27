#pragma once

#include <functional>
#include <map>
#include <vector>
using namespace std;

typedef vector<double> VecR;
typedef function<double(double, double)> Func;
typedef function<double(double, VecR)> FUNC;
typedef map<double, double> Table;

struct Cond//Параметры ДУ 
{
	double h;
	double str, end;
	VecR IV;
	int n = (int)((end - str) / h);
};
class RKS
{
public:
	RKS* setInitialValue(Cond,int);
	RKS* setSystem(vector<FUNC>);	//Можно было задавать уравнения явно
	map<double,VecR> RungeKutta();	//Решает дифур на отрезке и записывает в файл
	VecR RK_step();					//Делает одно вычисление для отрисовки
	RKS* setAB(double, double);		//Параметры дифуров
private:
	VecR k1(double,VecR);
	VecR k2(double, VecR, VecR);
	VecR k3(double, VecR, VecR);
	VecR k4(double, VecR, VecR);
	RKS* saveTXT(map<double, VecR> Xt);

	Cond cond;

	vector<FUNC> F = {//В формах нельзя использовать лямбды поэтому мы константим систему
		[&](double, VecR X) {return -A * X[1] - B * X[0]; },
		[&](double, VecR X) {return X[0]; },
		[&](double, VecR X) {return -A * X[3] - B * X[2]; },
		[&](double, VecR X) {return X[2]; }
	}; // X' = F(t, X)
	int len;//количество уравнений в системе
	double A, B;//параметры ДУ пришлось сделать полями класса

};

