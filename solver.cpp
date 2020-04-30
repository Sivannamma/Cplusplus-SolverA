//
// Created by sivannamma on 4/28/20.
//
#include "solver.hpp"

namespace solver {

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
        return RealVariable(-current.getA(), -current.getB(), -current.getC() + n);
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

    RealVariable solver::operator*(const RealVariable &x, const RealVariable &y) {
        if (x.getA() != 0 && y.getA() != 0) { // 4
            throw std::invalid_argument("the equations must be maximum square");
        }
        if ((x.getA() != 0 && y.getB() != 0) || (y.getA() != 0 && x.getB() != 0)) { //3
            throw std::invalid_argument("the equations must be maximum square");
        }
        return RealVariable(x.getA() * y.getC() + y.getA() *
                                                  x.getC() + x.getC() * y.getB(), x.getB() *
                                                                                  y.getC() + y.getB() * x.getC(),
                            x.getC() * y.getC());
    }

    // / operations : divide
    RealVariable solver::operator/(const RealVariable &current, const double n) {
        return RealVariable(current.getA() / n, current.getB() / n, current.getC() / n);
    }

    RealVariable solver::operator/(const double n, const RealVariable &current) {
        return current / n;
    }

//    RealVariable operator/(const RealVariable &num1, const RealVariable &num2){
//
//    }

    // ^ operations : power
    RealVariable solver:: operator^(const RealVariable &current, const double n) {
    if ( n==1)
        return RealVariable(current.getA(), current.getB(), current.getC());
    if(current.getA()!=0)
        throw std::invalid_argument("the equations must be maximum square");
    if(current.getB()!=0 && n>2)
        throw std::invalid_argument("the equations must be maximum square");
    return RealVariable(pow(current.getB(),n), current.getB()*n*current.getC(), pow(current.getC(),n));

    }

    // == operator
    RealVariable solver::operator==(const RealVariable &current, const double n);

    RealVariable solver:: operator==(const double n, const RealVariable &current);

    RealVariable solver::operator==(const RealVariable &num1, const RealVariable &num2);

    // constructors
    ComplexVariable::ComplexVariable(){
}

    ComplexVariable::ComplexVariable(std::complex<double> a, std::complex<double> b, std::complex<double> c){
}

    // setters
    double &ComplexVariable::getA() {

    }

    double &ComplexVariable::getB() {

    }

    double &ComplexVariable::getC() {

    }

    // getters
    double const & ComplexVariable::getA() const {

    }

    double const &ComplexVariable::getB() const {

    }

    double const &ComplexVariable::getC() const {

    }

    // + operator : plus
    ComplexVariable solver::operator+(const ComplexVariable &num1, const ComplexVariable &num2);

    ComplexVariable solver::operator+(const ComplexVariable &current, const std::complex<double> n);

    ComplexVariable solver::operator+(const std::complex<double> n, const ComplexVariable &current);

    // - operator : minus
    ComplexVariable solver::operator-(const ComplexVariable &num1, const ComplexVariable &num2);

    ComplexVariable solver::operator-(const ComplexVariable &current, const std::complex<double> n);

    ComplexVariable solver::operator-(const std::complex<double> n, const ComplexVariable &current);

    // * operator : multiply
    ComplexVariable solver::operator*(const ComplexVariable &num1, const ComplexVariable &num2);

    ComplexVariable solver::operator*(const ComplexVariable &current, const std::complex<double> n);

    ComplexVariable solver::operator*(const std::complex<double> n, const ComplexVariable &xcurrent);

    // / operator : divide
    ComplexVariable solver::operator/(const ComplexVariable &num1, const ComplexVariable &num2);

    ComplexVariable solver::operator/(const ComplexVariable &current, const std::complex<double> n);

    ComplexVariable solver::operator/(const std::complex<double> n, const ComplexVariable &current);

    // ^ operator : power
    ComplexVariable solver::operator^(const ComplexVariable &current, const std::complex<double> n);

    // == operator : equal
    ComplexVariable solver::operator==(const ComplexVariable &num1, const ComplexVariable &num2);

    ComplexVariable solver::operator==(const ComplexVariable &current, const std::complex<double> n);

    ComplexVariable solver::operator==(const std::complex<double> n, const ComplexVariable &current);

    double solve(const RealVariable &num);

    double solve(const ComplexVariable &num);
}



