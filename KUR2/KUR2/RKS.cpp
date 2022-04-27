#include "RKS.h"
#include <fstream>
#include <iostream>
#include <iomanip>
RKS* RKS::setInitialValue(Cond cnd, int len)
{
    this->len = len;
	this->cond = cnd;
	return this;
}

RKS* RKS::setSystem(vector<FUNC> _F)
{
    for (auto& f: _F) {
        F.push_back(f);
    }
    return this;
}

VecR RKS::k1(double t, VecR X)
{
    VecR v;
    for (int i = 0; i < len; ++i) {
        v.push_back(F[i](t, X));
    }
    return v;
}

VecR RKS::k2(double t, VecR X, VecR k1)
{
    VecR v;
    VecR x;
    for (int i = 0; i < len; ++i) {
        x.push_back(X[i] + cond.h*k1[i] / 2);
    }
    for (int i = 0; i < len; ++i) {
        v.push_back(F[i](t + cond.h/2, x));
    }
    return v;
}

VecR RKS::k3(double t, VecR X, VecR _k2)
{
    return k2(t,X,_k2);
}

VecR RKS::k4(double t, VecR X, VecR _k3)
{
    VecR v;
    VecR x;
    for (int i = 0; i < len; ++i) {
        x.push_back(X[i] + cond.h * _k3[i]);
    }
    for (int i = 0; i < len; ++i) {
        v.push_back(F[i](t + cond.h, x));
    }
    return v;
}

map<double,VecR> RKS::RungeKutta()
{
	double t = cond.str;
	map<double, VecR> Xt;//Решения от времени
	Xt[t] = cond.IV;//коопирование
    for (int i = 0; i < cond.n; ++i) {//шагаем по времени
        VecR _k1 = k1(t, Xt[t]);//по очереди вычисляем k 
        VecR _k2 = k2(t, Xt[t], _k1);
        VecR _k3 = k3(t, Xt[t], _k2);
        VecR _k4 = k4(t, Xt[t], _k3);
        for (int j = 0; j < len; ++j) {//для каждой функции делам шаг
            Xt[t + cond.h].push_back(
            Xt[t][j] + 
            cond.h / 6 * (_k1[j] + 2 * _k2[j] + 2 * _k3[j] + _k4[j]));
        }
        t += cond.h;
    }
    saveTXT(Xt);
    return Xt;
}

VecR RKS::RK_step()
{
    double t = cond.str;
    VecR X = cond.IV;
    VecR Xnew;
    VecR _k1 = k1(t, X);//по очереди вычисляем k 
    VecR _k2 = k2(t, X, _k1);
    VecR _k3 = k3(t, X, _k2);
    VecR _k4 = k4(t, X, _k3);
    for (int j = 0; j < len; ++j) {//для каждой функции делам шаг
        Xnew.push_back(
        X[j] +
        cond.h / 6 * (_k1[j] + 2 * _k2[j] + 2 * _k3[j] + _k4[j]));
    }
    cond.str += cond.h;
    cond.IV = Xnew;
    return Xnew;
}

RKS* RKS::setAB(double a, double b)
{
    A = a; B = b;
    return this;
}

RKS* RKS::saveTXT(map<double, VecR> Xt)
{
    ofstream out("1.txt");
    for (auto& xt : Xt) {
        out << xt.first << "\t";
        for (auto& x : xt.second) {
            out << std::fixed << std::setprecision(4) << x << "\t";
        }
        out << endl;
    }
    return this;
}
