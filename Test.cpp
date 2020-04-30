#include "solver.hpp"
#include "doctest.h"
#include <complex>

using std::string;
using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;
TEST_CASE("Test Realvarible") {
    RealVariable x;

CHECK((solve(2 * x - 4 == 10)) == 7);
CHECK((solve(3 * x == 2)) == 2 / 3);
CHECK((solve(3 * x + 5 == 4)) == -1 / 3);
CHECK(((solve((x^2) + 4*x +2 == 0) == -2-sqrt(2)) || (solve((x^2) + 4*x +2 == 0) ==-2+sqrt(2))));
CHECK(((solve((x^2) + x == 2) == 1) || (solve((x^2) + x == -2))));
CHECK((solve(x == 3)) == 3);
CHECK((solve(4 * x + 5 == 8)) == 3 / 4);
CHECK(((solve(x^2 + 2 == 4) == sqrt(2)) || (solve(x^2 + 2 == sqrt(2)))));
CHECK(((solve((x^2) + 2*x == 16 ) == -1+ sqrt(17)) || (solve((x^2) + 2*x == 16 ) == -1 - sqrt(17))));
CHECK((solve(x + 4 == 8)) == 4);
CHECK(((solve((x^2) +3*x + 2 == 0) == -1) || (solve((x^2) +3*x + 2 == 0) == -2)));
CHECK_THROWS(solve((x^2) +3*x + 5 == 0));
CHECK_THROWS(solve(2*(x^2) +4*x + 5 == 0));
CHECK_THROWS(solve((x^2) + 3*x + 10 == 0));
CHECK(((solve(3*(x^2) -10*x + 7 == 7) == 0) || (solve(3*(x^2) -10*x + 7 == 10/3))));
CHECK(((solve(4*(x^2) -5*x + 7 == 6) == 1) || (solve(4*(x^2) -5*x + 7 == 1/4))));
CHECK((solve(10*x + 10 == 5*x)) == -2);
CHECK(((solve(2*x + 9 == (x^2)) == (1+sqrt(10))) || (solve(2*x + 9 == (x^2)) ==  1 - sqrt(10))));
CHECK(solve((2/3)*x + 9 == x) == 27);
CHECK(solve((2/3)*x + 1/5 == x) == 3/5);
CHECK(((solve(5*x + 3 == -2*(x^2)) == -2/3) || (solve(5*x + 3 == -2*(x^2)) ==-1)));
CHECK_THROWS(solve(x+1 == -1*(x^2)));
CHECK_THROWS(solve(x+1 == -2*(x^2)));
CHECK_THROWS(solve((x+3 == -2*(x^2))));
CHECK_THROWS(solve(5*x + 1  == -8*(x^2)));


            CHECK((solve(x+x+x-2 == 10)==4));
            CHECK((solve(3*x -12==0)==4));
            CHECK(((solve((x^2)-16==0)==4)  || (solve((x^2)-16==0))==-4));
            CHECK(((solve((x^2)+8*x+12 ==0)==-2) || (solve((x^2) +8*x+12 ==0)==2)));
            CHECK(((solve((x^2)-16==0)==4) || (solve((x^2)-16==0)==-4)));
            CHECK(((solve((x^2)+8*x-9==0)==-9)  || (solve((x^2)+8*x-9==0)==-9)));
            CHECK(((solve((x^2)+-10*x+16==0)== 2)  || (solve((x^2)+-10*x+16==0)== 2)));
            CHECK_THROWS(solve(x/0 == 16));// error
            CHECK_THROWS(solve((x^2)+2 == 0));// error
            CHECK((solve(5*x+25 == 0)==-5));
            CHECK((solve(2*x+3+2+3*x == 0)==-1));
            CHECK((solve(-2*x+4 == 0)==2));
            CHECK((solve(5*x+3== 0)==-0.6));
            CHECK_THROWS(solve(3 == 0*x));// error
            CHECK((solve(10*x == 0)==0));
            CHECK_THROWS(solve((5*x)/x == 0));// error
            CHECK((solve(20*x == 5)==4));
            CHECK((solve(-20*x == -5)==4));
            CHECK((solve(-20*x == 5)==-4));
            CHECK(((solve((x^2) ==9)==3) || (solve((x^2) ==9)==-3)));
            CHECK(((solve((x^2)==25)==5) || (solve((x^2)==25)==-5)));
            CHECK((solve(6*x == 2)==3));
            CHECK((solve(6*x == -2)==-3));
            CHECK_THROWS(solve(0*x == 5));// error
            CHECK_THROWS(solve (0*x == -9));// error
            CHECK_THROWS(solve(34 == 0*x));// error
            CHECK((solve(6*x == 36)==6));
            CHECK(((solve((x^2) == 36)==6) || (solve((x^2) == 36)==-6)));

}


TEST_CASE("Test Realvarible") {
    RealVariable x;

CHECK((solve(2 * x - 4 == 10)) == 7);
CHECK((solve(3 * x == 2)) == 2 / 3);
CHECK((solve(3 * x + 5 == 4)) == -1 / 3);
CHECK(((solve((x^2) + 4*x +2 == 0) == -2-sqrt(2)) || (solve((x^2) + 4*x +2 == 0) ==-2+sqrt(2))));
CHECK(((solve((x^2) + x == 2) == 1) || (solve((x^2) + x == -2))));
CHECK((solve(x == 3)) == 3);
CHECK((solve(4 * x + 5 == 8)) == 3 / 4);
CHECK(((solve(x^2 + 2 == 4) == sqrt(2)) || (solve(x^2 + 2 == sqrt(2)))));
CHECK(((solve((x^2) + 2*x == 16 ) == -1+ sqrt(17)) || (solve((x^2) + 2*x == 16 ) == -1 - sqrt(17))));
CHECK((solve(x + 4 == 8)) == 4);
CHECK(((solve((x^2) +3*x + 2 == 0) == -1) || (solve((x^2) +3*x + 2 == 0) == -2)));
CHECK_THROWS(solve((x^2) +3*x + 5 == 0));
CHECK_THROWS(solve(2*(x^2) +4*x + 5 == 0));
CHECK_THROWS(solve((x^2) + 3*x + 10 == 0));
CHECK(((solve(3*(x^2) -10*x + 7 == 7) == 0) || (solve(3*(x^2) -10*x + 7 == 10/3))));
CHECK(((solve(4*(x^2) -5*x + 7 == 6) == 1) || (solve(4*(x^2) -5*x + 7 == 1/4))));
CHECK((solve(10*x + 10 == 5*x)) == -2);
CHECK(((solve(2*x + 9 == (x^2)) == (1+sqrt(10))) || (solve(2*x + 9 == (x^2)) ==  1 - sqrt(10))));
CHECK(solve((2/3)*x + 9 == x) == 27);
CHECK(solve((2/3)*x + 1/5 == x) == 3/5);
CHECK(((solve(5*x + 3 == -2*(x^2)) == -2/3) || (solve(5*x + 3 == -2*(x^2)) ==-1)));
CHECK_THROWS(solve(x+1 == -1*(x^2)));
CHECK_THROWS(solve(x+1 == -2*(x^2)));
CHECK_THROWS(solve((x+3 == -2*(x^2))));
CHECK_THROWS(solve(5*x + 1  == -8*(x^2)));


            CHECK((solve(x+x+x-2 == 10)==4));
            CHECK((solve(3*x -12==0)==4));
            CHECK(((solve((x^2)-16==0)==4)  || (solve((x^2)-16==0))==-4));
            CHECK(((solve((x^2)+8*x+12 ==0)==-2) || (solve((x^2) +8*x+12 ==0)==2)));
            CHECK(((solve((x^2)-16==0)==4) || (solve((x^2)-16==0)==-4)));
            CHECK(((solve((x^2)+8*x-9==0)==-9)  || (solve((x^2)+8*x-9==0)==-9)));
            CHECK(((solve((x^2)+-10*x+16==0)== 2)  || (solve((x^2)+-10*x+16==0)== 2)));
            CHECK_THROWS(solve(x/0 == 16));// error
            CHECK_THROWS(solve((x^2)+2 == 0));// error
            CHECK((solve(5*x+25 == 0)==-5));
            CHECK((solve(2*x+3+2+3*x == 0)==-1));
            CHECK((solve(-2*x+4 == 0)==2));
            CHECK((solve(5*x+3== 0)==-0.6));
            CHECK_THROWS(solve(3 == 0*x));// error
            CHECK((solve(10*x == 0)==0));
            CHECK_THROWS(solve((5*x)/x == 0));// error
            CHECK((solve(20*x == 5)==4));
            CHECK((solve(-20*x == -5)==4));
            CHECK((solve(-20*x == 5)==-4));
            CHECK(((solve((x^2) ==9)==3) || (solve((x^2) ==9)==-3)));
            CHECK(((solve((x^2)==25)==5) || (solve((x^2)==25)==-5)));
            CHECK((solve(6*x == 2)==3));
            CHECK((solve(6*x == -2)==-3));
            CHECK_THROWS(solve(0*x == 5));// error
            CHECK_THROWS(solve (0*x == -9));// error
            CHECK_THROWS(solve(34 == 0*x));// error
            CHECK((solve(6*x == 36)==6));
            CHECK(((solve((x^2) == 36)==6) || (solve((x^2) == 36)==-6)));

}




TEST_CASE("Test ComplexVariable") {
    ComplexVariable y;

    CHECK(((solve(5*y + 1  == -8*(y^2)) == complex<double>(-5/16,(-sqrt(7))/16)) || (solve(5*y + 1  == -8*(y^2)) == complex<double>(-5/16,(sqrt(7))/16))));
    CHECK(((solve(y - 1  == (y^2)) == complex<double>(1/2,(sqrt(3))/2)) || (solve(y - 1  == (y^2)) == complex<double>(1/2,(-sqrt(3))/2))));
    CHECK(((solve(5*(y^2) +2  == -5*y) == complex<double>(-1/2,(sqrt(15))/10)) || (solve(5*(y^2) +2  == -5*y) == complex<double>(-1/2,(-sqrt(15))/10))));
    CHECK(((solve(5*(y^2) +3  == -5*y) == complex<double>(-1/2,(sqrt(35))/10)) || (solve(5*(y^2) +3  == -5*y) ==complex<double>(-1/2,(-sqrt(35))/10))));
    CHECK(((solve(10*(y^2) +3  == -5*y) == complex<double>(-1/4,(sqrt(95))/20)) || (solve(10*(y^2) +3  == -5*y) ==complex<double>(-1/4,(-sqrt(95))/20))));
    CHECK(((solve(10*(y^2) +3  == -5*y -5) == complex<double>(-1/4,(sqrt(295))/20)) || (solve(10*(y^2) +3  == -5*y -5) == complex<double>(-1/4,(-sqrt(295))/20))));
    CHECK(((solve(10*(y^2) +3  == -5*y -5 -10) == complex<double>(-1/4,(sqrt(695))/20)) || (solve(10*(y^2) +3  == -5*y -5 -10) ==complex<double>(-1/4,(-sqrt(695))/20))));
    CHECK(((solve(10*(y^2) +8*y  == -5*y -5 -10) == complex<double>(-13/20,(sqrt(431))/20)) || (solve(10*(y^2) +8*y  == -5*y -5 -10) ==complex<double>(-13/20,(-sqrt(431))/20))));
    CHECK(((solve(5*(y^2) +8*y  == -5*y -30) == complex<double>(-13/10,(sqrt(431))/10)) || (solve(5*(y^2) +8*y  == -5*y -30) ==complex<double>(-13/10,(-sqrt(431))/10))));
    CHECK(((solve(5*(y^2) +8*y  == -5*y -30 -5) == complex<double>(-13/10,(3*sqrt(59))/10)) || (solve(5*(y^2) +8*y  == -5*y -30 -5) ==complex<double>(-13/10,(-3*sqrt(59))/10))));
    CHECK(((solve(5*(y^2) +9*y  == -5*y -30 -5) == complex<double>(-7/5,(3*sqrt(14))/5)) || (solve(5*(y^2) +9*y  == -5*y -30 -5) == complex<double>(-7/5,(-3*sqrt(14))/5))));
    CHECK(((solve(5*(y^2) +8*y + 13 == 0) == complex<double>(-4/5,7/5)) || (solve(5*(y^2) +8*y + 13 == 0) ==complex<double>(-4/5,-7/5))));
    CHECK(((solve(5*(y^2) +8*y + 13 - 5 == 0) == complex<double>(-4/5,(2*sqrt(6))/5)) || (solve(5*(y^2) +8*y + 13 - 5 == 0) ==complex<double>(-4/5,(-2*sqrt(6))/5))));
    CHECK(((solve(5*(y^2) +8*y + 13 - 5 == 2) == complex<double>(-4/5,(sqrt(14))/5)) || (solve(5*(y^2) +8*y + 13 - 5 == 2) ==complex<double>(-4/5,(-sqrt(14))/5))));
    CHECK(((solve(5*(y^2) +y + 2 == 0) == complex<double>(-1/10,(sqrt(39))/20)) || (solve(5*(y^2) +y + 2 == 0) ==complex<double>(-1/10,(-sqrt(39))/20))));
    CHECK(((solve((y^2) == -49) == complex<double>(0.0,7.0)) || (solve((y^2) == -49) ==complex<double>(0.0,-7.0))));
    CHECK(((solve((y^2) == -25) == complex<double>(0.0,5.0)) || (solve((y^2) == -25) ==complex<double>(0.0,-5.0))));
    CHECK(((solve((y^2) == -36) == complex<double>(0.0,6.0)) || (solve((y^2) == -36) ==complex<double>(0.0,-6.0))));
    CHECK_THROWS(solve((y^5) == 3));// error
    CHECK_THROWS(solve((y^5) == 5));// error
    CHECK_THROWS(solve((y^8) == 5));// error
    CHECK(((solve((y^2)-4*y+20== 0) == complex<double>(2.0,4.0)) || (solve((y^2)-4*y+20== 0) ==complex<double>(2.0,-4.0))));
    CHECK(((solve(10*(y^2)+2*y+1== 0) == complex<double>(-0.1,0.3)) || (solve(10*(y^2)+2*y+1== 0) ==complex<double>(-0.1,-0.3))));
    CHECK_THROWS(solve((y^8)/0 == 5));// error
    CHECK_THROWS(solve((y^3)/0 == 5));// error


    solver::ComplexVariable x;
    solver::ComplexVariable z;

            CHECK((solve(x+x+x-2 == 10)) == complex<double>(4.0,0.0));
            CHECK(solve(3*x-12==0) == complex<double>(4.0,0.0));
    CHECK(((solve((z^2)+16==0) == complex<double>(0.0,4.0)) || (solve((z^2)+16==0) == complex<double>(0.0,-4.0))));
            CHECK(((solve((z^2)==complex<double>(-3.0,4.0)) == complex<double>(1.0,2.0)) || (solve((z^2)==complex<double>(-3.0,4.0)) == complex<double>(-1.0,-2.0))));
            CHECK(((solve((z^2)+6*z+13==0) == complex<double>(-3.0,2.0)) || (solve((z^2)+6*z+13==0) == complex<double>(-3.0,-2.0))));
            CHECK(((solve((9*z^2)==-91) == complex<double>(0.0,3.0)) || (solve((9*z^2)==-91) == complex<double>(0.0,-3.0))));
            CHECK_THROWS(solve((z^3) == complex<double>(0.0,0.0)));// error
            CHECK_THROWS(solve((z)/0 == complex<double>(0.0,0.0)));// error
            CHECK(((solve((z^2)==complex<double>(-5.0,12.0)) == complex<double>(-2.0,-3.0)) || (solve((z^2)==complex<double>(-5.0,12.0)) == complex<double>(2.0,3.0))));
            CHECK(((solve((z^2)==complex<double>(3.0,-4.0)) == complex<double>(2.0,-1.0)) || (solve((z^2)==complex<double>(3.0,-4.0)) == complex<double>(-2.0,1.0))));
            CHECK(solve((x+13)==7) == complex<double>(-6.0,0.0));
            CHECK(solve((x+2)==2) == complex<double>(0.0,0.0));
            CHECK_THROWS(solve((x)/0 == complex<double>(0.0,0.0)));// error
            CHECK(((solve((z^2)==-25) == complex<double>(5.0,0.0))|| (solve((z^2)==-25) == complex<double>(-5.0,0.0))));
            CHECK_THROWS(solve(0*z == complex<double>(40.0,0.0)));// error
            CHECK_THROWS(solve(30 == x*0));// error
            CHECK(solve((10*z)==0) == complex<double>(0.0,0.0));
            CHECK_THROWS(solve((10*z)/z == complex<double>(0.0,0.0)));// error
            CHECK(((solve((z^2)==-4) == complex<double>(0.0,2.0)) || (solve((z^2)==-4) == complex<double>(0.0,-2.0))));
            CHECK(solve((4*x)==2) == complex<double>(2.0,0.0));
            CHECK(solve((4*x)==-2) == complex<double>(-2.0,0.0));
            CHECK(solve((-4*x)==-2) == complex<double>(2.0,0.0));
            CHECK(solve((z^2)==0) == complex<double>(0.0,0.0));
            CHECK(solve((4*x)==0) == complex<double>(0.0,0.0));
            CHECK(solve((81*z)==z) == complex<double>(0.0,0.0));
            CHECK_THROWS(solve(5 == x*0));// error
}
