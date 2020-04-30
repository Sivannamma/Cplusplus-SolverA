//
// Created by sivannamma on 4/28/20.
//

#ifndef MATALA3_SOLVER_H
#define MATALA3_SOLVER_H

#endif //MATALA3_SOLVER_H

#include <stdio.h>
#include <string>
#include <strstream>
#include <complex>
#include <stdexcept>

#define EPS 0.0001

namespace  solver{
    class RealVariable{
    private:
        double a;
        double b;
        double c;

    public:
        // constructors
        RealVariable(); // default
        RealVariable(double a_, double _b, double c_); // parameters

        // setters
        double& getA();
        double& getB();
        double& getC();

        // getters
        double const& getA() const;
        double const& getB() const;
        double const& getC() const;

        // + operations : plus
        friend RealVariable operator +(const RealVariable& current, const double n);
        friend RealVariable operator +(const double n,const RealVariable& current);
        friend RealVariable operator +(const RealVariable& num1,const RealVariable& num2);

        // - operations : minus
        friend RealVariable operator -(const RealVariable& current,const double n);
        friend RealVariable operator -(const double n,const RealVariable current);
        friend RealVariable operator -(const RealVariable& num1,const RealVariable& num2);

        // * operations : multiply
        friend RealVariable operator *( const RealVariable& current,const  double n);
        friend RealVariable operator *(const double n,const RealVariable& current);
        friend RealVariable operator *(const RealVariable& num1,const RealVariable& num2);

        // / operations : divide
        friend RealVariable operator /(const RealVariable& current,const double n);
        friend RealVariable operator /(const double n,const RealVariable& current);
        friend RealVariable operator /(const RealVariable& num1,const RealVariable& num2);

        // ^ operations : power
        friend RealVariable operator ^(const RealVariable& current,const double n);

        // == operator
        friend RealVariable operator ==(const RealVariable& current,const double n);
        friend RealVariable operator ==(const double n,const RealVariable& current);
        friend RealVariable operator ==(const RealVariable& num1,const RealVariable& num2);

	///// '==' //////
friend RealVariable operator== (const RealVariable& x_1 , const RealVariable& x_2);
friend RealVariable operator== (const RealVariable& x , const double n);
friend RealVariable operator== ( const double n ,const RealVariable& x);
    };

    class ComplexVariable{
    private:
        std::complex <double> a;
        std::  complex <double> b;
        std::  complex <double> c;

    public:

        // constructors
        ComplexVariable();
        ComplexVariable(std::complex <double> a,std::complex <double> b,std::complex <double> c);

        // setters
        double& getA();
        double& getB();
        double& getC();

        // getters
        double const& getA() const;
        double const& getB() const;
        double const& getC() const;

        // + operator : plus
        friend ComplexVariable operator+(const ComplexVariable& num1,const ComplexVariable &num2 );
        friend ComplexVariable operator+(const ComplexVariable& current, const std::complex<double> n );
        friend ComplexVariable operator+(const std::complex<double> n,const ComplexVariable& current);

        // - operator : minus
        friend ComplexVariable operator-(const ComplexVariable& num1,const ComplexVariable &num2 );
        friend ComplexVariable operator-(const ComplexVariable& current,const std::complex<double> n);
        friend ComplexVariable operator-(const std::complex<double> n,const ComplexVariable& current);

        // * operator : multiply
        friend ComplexVariable operator*(const ComplexVariable& num1, const ComplexVariable &num2);
        friend ComplexVariable operator*(const ComplexVariable& current, const std::complex<double> n);
        friend ComplexVariable operator*(const std::complex<double> n,const ComplexVariable& xcurrent);

        // / operator : divide
        friend ComplexVariable operator/(const ComplexVariable& num1, const ComplexVariable &num2);
        friend ComplexVariable operator/(const ComplexVariable& current, const std::complex<double> n);
        friend ComplexVariable operator/(const std::complex<double> n,const ComplexVariable& current);

        // ^ operator : power
        friend ComplexVariable operator^(const ComplexVariable &current, const std::complex<double> n);

        // == operator : equal
        friend ComplexVariable operator==(const ComplexVariable &num1, const ComplexVariable &num2);
        friend ComplexVariable operator==(const ComplexVariable &current, const std::complex<double> n);
        friend ComplexVariable operator==(const std::complex<double> n,const ComplexVariable &current);

///// '==' //////
friend ComplexVariable operator== (const ComplexVariable &y_1 ,const  ComplexVariable &y_2);
friend ComplexVariable operator== (const ComplexVariable &y , std::complex<double> n);
friend ComplexVariable operator== ( std::complex<double> n ,const ComplexVariable &y);
friend ComplexVariable operator== (const ComplexVariable &y , double n);
friend ComplexVariable operator== ( double n ,const ComplexVariable &y);

    };
    double solve (const RealVariable& num);
    double solve (const ComplexVariable& num);
}

