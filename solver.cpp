//
// Created by sivannamma on 4/28/20.
//
#include "solver.hpp"

using namespace solver;

// constructors
RealVariable::RealVariable() {
    this->a = 0;
    this->b = 1;
    this->c = 0;

}

RealVariable::RealVariable(double a_, double _b, double c_) {
    this->a = a_;
    this->b = _b;
    this->c = c_;
}

// setters
double &RealVariable::getA() {
    return this->a;
}

double &RealVariable::getB() {
    return this->b;
}

double &RealVariable::getC() {
    return this->c;

}

// getters
double const &RealVariable::getA() const {
    return this->a;
}

double const &RealVariable::getB() const {
    return this->b;
}

double const &RealVariable::getC() const {
    return this->c;
}

// + operations : plus
RealVariable solver::operator+(const RealVariable &current, const double n) {
    return RealVariable(current.getA(), current.getB(), current.getC() + n);
}

RealVariable solver::operator+(const double n, const RealVariable &current) {
    return current + n;
}

RealVariable solver::operator+(const RealVariable &num1, const RealVariable &num2) {
    return RealVariable(num1.getA() + num2.getA(), num1.getB() + num2.getB(), num1.getC() + num2.getC());
}

// - operations : minus
RealVariable solver::operator-(const RealVariable &current, const double n) {
    return RealVariable(current.getA(), current.getB(), current.getC() - n);
}

RealVariable solver::operator-(const double n, const RealVariable current) {
    return RealVariable(current.getA(), current.getB(), -current.getC() + n);
}

RealVariable solver::operator-(const RealVariable &num1, const RealVariable &num2) {
    return RealVariable(num1.getA() - num2.getA(), num1.getB() - num2.getB(), num1.getC() - num2.getC());
}

// * operations : multiply
RealVariable solver::operator*(const RealVariable &current, const double n) {
    return RealVariable(current.getA() * n, current.getB() * n, current.getC() * n);
}

RealVariable solver::operator*(const double n, const RealVariable &current) {
    return current * n;
}

// / operations : divide
RealVariable solver::operator/(const RealVariable &current, const double n) {
	if(n==0){
 	throw std::invalid_argument("cannot divide by 0");
	}

    return RealVariable(current.getA() / n, current.getB() / n, current.getC() / n);
}

RealVariable solver::operator/(const double n, const RealVariable &current) {
    return current / (1 / n);
}

// ^ operations : power
RealVariable solver::operator^(const RealVariable &current, const double n) {
    if (n == 2) {
        return RealVariable(current.getA() + current.getB(), 0, current.getC());
    } else {
        throw std::invalid_argument("the power cannot be bigger than two");
    }

}

// == operator
RealVariable solver::operator== (const RealVariable& num1 , const RealVariable& num2){
    RealVariable v_1;
    v_1.getA()= num1.getA();
    v_1.getB()= num1.getB();
    v_1.getC()= num1.getC();
    if (num2.getA() != 0){
        v_1.getA() =num1.getA()+ (-1*num2.getA());
    }
    if (num2.getB() != 0){
        v_1.getB() =num1.getB()+ (-1*num2.getB());
    }
    if (num2.getC() != 0){
        v_1.getC() =num1.getC()+ (-1*num2.getC());
    }
    return v_1;
}
RealVariable solver::operator== (const RealVariable& x , const double n){
    RealVariable v;
    v.getA()= x.getA();
    v.getB()= x.getB();
    v.getC()= x.getC();
    v.getC()= x.getC() + (-1*n);

	if(n!=0 && x.getA()==0 && x.getB()==0)
	{
	  throw std::invalid_argument("power cannot be over 2, invalid");
	}

    return v;
}
RealVariable solver::operator== ( const double n ,const RealVariable& x){
    RealVariable v;
    v.getA()= x.getA();
    v.getB()= x.getB();
    v.getC()= x.getC();
    v.getC()= x.getC() + (-1*n);

	if(n!=0 && x.getA()==0 && x.getB()==0)
	{
 	 throw std::invalid_argument("power cannot be over 2, invalid");
	}
    return v;
}

// constructors
ComplexVariable::ComplexVariable() {
    this->a = 0;
    this->b = 1;
    this->c = 0;
}

ComplexVariable::ComplexVariable(std::complex<double> a, std::complex<double> b, std::complex<double> c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

// setters
std::complex<double> &ComplexVariable::getA() {
    return this->a;
}

std::complex<double> &ComplexVariable::getB() {
    return this->b;
}

std::complex<double> &ComplexVariable::getC() {
    return this->c;
}

// getters
std::complex<double> const &ComplexVariable::getA() const {
    return this->a;
}

std::complex<double> const &ComplexVariable::getB() const {
    return this->b;
}

std::complex<double> const &ComplexVariable::getC() const {
    return this->c;
}

// + operator : plus
ComplexVariable solver::operator+(const ComplexVariable &num1, const ComplexVariable &num2) {
    return ComplexVariable(num1.getA() + num2.getA(), num1.getB() + num2.getB(), num1.getC() + num2.getC());
}

ComplexVariable solver::operator+(const ComplexVariable &current, const std::complex<double> n) {
    return ComplexVariable(current.getA(), current.getB(), current.getC() + n);
}

ComplexVariable solver::operator+(const std::complex<double> n, const ComplexVariable &current) {
    return current + n;
}

// - operator : minus
ComplexVariable solver::operator-(const ComplexVariable &num1, const ComplexVariable &num2) {
    return ComplexVariable(num1.getA() - num2.getA(), num1.getB() - num2.getB(), num1.getC() - num2.getC());
}

ComplexVariable solver::operator-(const ComplexVariable &current, const std::complex<double> n) {
    return ComplexVariable(current.getA(), current.getB(), current.getC() - n);
}

ComplexVariable solver::operator-(const std::complex<double> n, const ComplexVariable &current) {
    return ComplexVariable(-current.getA(), -current.getB(), -current.getC() + n);
}

// * operator : multiply
ComplexVariable solver::operator*(const ComplexVariable &current, const double n) {
    return ComplexVariable(current.getA() * n, current.getB() * n, current.getC() * n);
}

ComplexVariable solver::operator*(const double n, const ComplexVariable &current) {
    return current * n;
}

ComplexVariable solver::operator*(const ComplexVariable &current, const std::complex<double> n) {
    return ComplexVariable(current.getA() * n, current.getB() * n, current.getC() * n);
}

ComplexVariable solver::operator*(const std::complex<double> n, const ComplexVariable &current) {
    return current * n;
}

///// '/' //////
ComplexVariable solver::operator/(const ComplexVariable &y_1, const ComplexVariable &y_2) {
    ComplexVariable v_1;
    v_1.getA() = y_1.getA();
    v_1.getB() = y_1.getB();
    v_1.getC() = y_1.getC();
    if (y_1.getA() != std::complex<double>(0) && y_2.getA() != std::complex<double>(0)) {
        v_1.getA() = 0;
        v_1.getC() += y_1.getA() / y_2.getA();
    }
    if (v_1.getA() != std::complex<double>(0) && y_2.getB() != std::complex<double>(0)) {
        v_1.getA() = 0;
        v_1.getB() += y_1.getA() / y_2.getB();
    }
    if (y_1.getB() != std::complex<double>(0) && y_2.getB() != std::complex<double>(0)) {
        v_1.getC() += v_1.getB() / y_2.getB();
        v_1.getB() = 0;
    }
    return v_1;
}

ComplexVariable solver::operator/(const ComplexVariable &y, std::complex<double> n) {
    return ComplexVariable(y.getA() / n, y.getB() / n, y.getC() / n);
}

ComplexVariable solver::operator/(std::complex<double> n, const ComplexVariable &y) {
    return ComplexVariable(n / y.getA(), n / y.getB(), n / y.getC());
}

ComplexVariable solver::operator/(const ComplexVariable &y, double n) {
    return ComplexVariable(y.getA() / n, y.getB() / n, y.getC() / n);
}

ComplexVariable solver::operator/(double n, const ComplexVariable &y) {
    return (y / n);
}

// ^ operator : power
ComplexVariable solver::operator^(const ComplexVariable &current, int n) {
    if (n == 2) {
        return ComplexVariable(current.getA() + current.getB(), 0, current.getC());
    } else {
        throw std::invalid_argument("power cannot be over 2, invalid");
    }
}

// == oparation : equal
ComplexVariable solver::operator==(const ComplexVariable &y_1, const ComplexVariable &y_2) {
    ComplexVariable v_1;
    v_1.getA() = y_1.getA();
    v_1.getB() = y_1.getB();
    v_1.getC() = y_1.getC();
    if (y_2.getA() != std::complex<double>(0)) {
        v_1.getA() = y_1.getA() + (std::complex<double>(-1) * y_2.getA());
    }
    if (y_2.getB() != std::complex<double>(0)) {
        v_1.getB() = y_1.getB() + (std::complex<double>(-1) * y_2.getB());
    }
    if (y_2.getC() != std::complex<double>(0)) {
        v_1.getC() = y_1.getC() + (std::complex<double>(-1) * y_2.getC());
    }
    return v_1;
}

ComplexVariable solver::operator==(const ComplexVariable &y, std::complex<double> n) {
    ComplexVariable v;
    v.getA() = y.getA();
    v.getB() = y.getB();
    v.getC() = y.getC();
    v.getC() = y.getC() + (std::complex<double>(-1) * n);
    return v;
}

ComplexVariable solver::operator==(std::complex<double> n, const ComplexVariable &y) {
    ComplexVariable v;
    v.getA() = y.getA();
    v.getB() = y.getB();
    v.getC() = y.getC();
    v.getC() = y.getC() + (std::complex<double>(-1) * n);
    return v;
}

ComplexVariable solver::operator==(const ComplexVariable &y, double n) {
    ComplexVariable v;
    v.getA() = y.getA();
    v.getB() = y.getB();
    v.getC() = y.getC();
    v.getC() = y.getC() + (-1 * n);
    return v;
}

ComplexVariable solver::operator==(double n, const ComplexVariable &y) {
    ComplexVariable v;
    v.getA() = y.getA();
    v.getB() = y.getB();
    v.getC() = y.getC();
    v.getC() = y.getC() + (-1 * n);
    return v;
}

double solver::solve(const RealVariable &num) {
    double ans = 0;
    double eq = pow(num.getB(), 2) - (4 * num.getA() * num.getC());
    if (num.getA() == 0) {
        ans = (-1 * num.getC()) / num.getB();
    } else {
        if (eq < 0) { // if its lover than zero, its means we cant get sqr out of it
            throw std::invalid_argument("There is no real solution in the real numbers");
        } else { // otherwise we can
            eq = sqrt(eq);
            ans = (-num.getB() + eq) / (2 * num.getA());
        }
    }
    double rounded = (int) (ans * 10000.0) / 10000.0;
    return rounded;
}

std::complex<double> solver::solve(ComplexVariable y) {
    std::complex<double> dis = (y.getB() * y.getB()) - (std::complex<double>(4, 0) * y.getA() * y.getC());
    std::complex<double> ans = 0;
    if (y.getA() == std::complex<double>(0, 0)) {
        ans = (-y.getC()) / y.getB();
    } else {
        dis = sqrt(dis);
        ans = ((std::complex<double>(-1) * y.getB()) + dis) / (std::complex<double>(2, 0) * y.getA());
    }
    return ans;
}




