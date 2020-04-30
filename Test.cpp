//
// Created by sivannamma on 4/30/20.
//
#include "doctest.h"
#include "solver.hpp"

using namespace std;
using namespace solver;
TEST_CASE ("Test -1") {
    RealVariable x(0, 4, 5);
    RealVariable y(0, 2, 6);
    RealVariable z(1, 10, 25);
    RealVariable w(0, 12, -7);
    CHECK (solve((x + 5) == 20) == 2.5);
    CHECK (solve((x - 5 )== 40) == 10);
    CHECK (solve((x * 5) == 100) == 3.75);
    CHECK (solve((x - y) == 9) == 5);
    CHECK (solve((x + y) == 41) == 5);
    CHECK (solve((y * 15 )== 1000) == 30.3333);
    CHECK (solve((y + x ) -12 == 59) == 10);
    CHECK (solve((w - y )== 9) == 2.2);
    CHECK (solve(((w + x) - 5) == 9) == 1);
    CHECK (solve(((w + x) - y) == -1) == 0.5);
}


TEST_CASE ("Test 0") {
    RealVariable y;
    CHECK((solve((y ^ 2) == 49) == 7 || solve((y ^ 2) == 49) == -7));
    CHECK((solve((y ^ 2) == 64) == 8 || solve((y ^ 2) == 64) == -8));
    CHECK((solve((y ^ 2) == 1) == 1 || solve((y ^ 2) == 1) == -1));


}
TEST_CASE ("Test 1") {
    RealVariable x(0, 4, 5);
    RealVariable y(0, 2, 6);
    RealVariable z(1, 10, 25);
    RealVariable w(0, 12, -7);
    CHECK (solve((x + 5) == 20) == 2.5);
    CHECK (solve((x - 5 )== 40) == 10);
    CHECK (solve((x * 5) == 100) == 3.75);
    CHECK (solve((x - y) == 9) == 5);
    CHECK (solve((x + y) == 41) == 5);
    CHECK (solve((y * 15 )== 1000) == 30.3333);
    CHECK (solve((y + x ) -12 == 59) == 10);
    CHECK (solve((w - y )== 9) == 2.2);
    CHECK (solve(((w + x) - 5) == 9) == 1);
    CHECK (solve(((w + x) - y) == -1) == 0.5);
}


TEST_CASE ("Test 2") {
    RealVariable y;
    CHECK((solve((y ^ 2) == 49) == 7 || solve((y ^ 2) == 49) == -7));
    CHECK((solve((y ^ 2) == 64) == 8 || solve((y ^ 2) == 64) == -8));
    CHECK((solve((y ^ 2) == 1) == 1 || solve((y ^ 2) == 1) == -1));


}
TEST_CASE ("Test 3") {
    RealVariable y;
    CHECK(solve(y - 10 == 10) == 20);
    CHECK(solve(-10 + y == 10) == 20);
    y.getC() = 0;
    y.getB() = 2;
            CHECK(solve(y - 10 == 20) == 15);
            CHECK(solve(-10 + y == 20) == 15);
}
TEST_CASE ("Test 4") {
    RealVariable x(0, 4, 5);
    RealVariable y(0, 2, 6);
    RealVariable z(1, 10, 25);
    RealVariable w(0, 12, -7);
    CHECK (solve((x + 5) == 20) == 2.5);
    CHECK (solve((x - 5 )== 40) == 10);
    CHECK (solve((x * 5) == 100) == 3.75);
    CHECK (solve((x - y) == 9) == 5);
    CHECK (solve((x + y) == 41) == 5);
    CHECK (solve((y * 15 )== 1000) == 30.3333);
    CHECK (solve((y + x ) -12 == 59) == 10);
    CHECK (solve((w - y )== 9) == 2.2);
    CHECK (solve(((w + x) - 5) == 9) == 1);
    CHECK (solve(((w + x) - y) == -1) == 0.5);
}

TEST_CASE("Test 5")
{
    RealVariable x(0, 4, 5);
    RealVariable y(0, 2, 6);
    RealVariable z(1, 10, 25);
    RealVariable w(0, 12, -7);
    CHECK (solve((x + 5) == 20) == 2.5);
    CHECK (solve((x - 5 )== 40) == 10);
    CHECK (solve((x * 5) == 100) == 3.75);
    CHECK (solve((x - y) == 9) == 5);
    CHECK (solve((x + y) == 41) == 5);
    CHECK (solve((y * 15 )== 1000) == 30.3333);
    CHECK (solve((y + x ) -12 == 59) == 10);
    CHECK (solve((w - y )== 9) == 2.2);
    CHECK (solve(((w + x) - 5) == 9) == 1);
    CHECK (solve(((w + x) - y) == -1) == 0.5);
}
TEST_CASE ("Test 6") {

    RealVariable x(0, 4, 5);
    RealVariable y(0, 2, 6);
    RealVariable z(1, 10, 25);
    RealVariable w(0, 12, -7);
    CHECK (solve((x + 5) == 20) == 2.5);
    CHECK (solve((x - 5 )== 40) == 10);
    CHECK (solve((x * 5) == 100) == 3.75);
    CHECK (solve((x - y) == 9) == 5);
    CHECK (solve((x + y) == 41) == 5);
    CHECK (solve((y * 15 )== 1000) == 30.3333);
    CHECK (solve((y + x ) -12 == 59) == 10);
    CHECK (solve((w - y )== 9) == 2.2);
    CHECK (solve(((w + x) - 5) == 9) == 1);
    CHECK (solve(((w + x) - y) == -1) == 0.5);
}

TEST_CASE ("Test 7") {
    RealVariable y;
    CHECK(solve(y - 10 == 10) == 20);
    CHECK(solve(-10 + y == 10) == 20);
    y.getC() = 0;
    y.getB() = 2;
            CHECK(solve(y - 10 == 20) == 15);
            CHECK(solve(-10 + y == 20) == 15);
}
TEST_CASE ("Test 8") {

    RealVariable x(0, 4, 5);
    RealVariable y(0, 2, 6);
    RealVariable z(1, 10, 25);
    RealVariable w(0, 12, -7);
    CHECK (solve((x + 5) == 20) == 2.5);
    CHECK (solve((x - 5 )== 40) == 10);
    CHECK (solve((x * 5) == 100) == 3.75);
    CHECK (solve((x - y) == 9) == 5);
    CHECK (solve((x + y) == 41) == 5);
    CHECK (solve((y * 15 )== 1000) == 30.3333);
    CHECK (solve((y + x ) -12 == 59) == 10);
    CHECK (solve((w - y )== 9) == 2.2);
    CHECK (solve(((w + x) - 5) == 9) == 1);
    CHECK (solve(((w + x) - y) == -1) == 0.5);
}
TEST_CASE ("Test 9") {

    RealVariable x(0, 4, 5);
    RealVariable y(0, 2, 6);
    RealVariable z(1, 10, 25);
    RealVariable w(0, 12, -7);
    CHECK (solve((x + 5) == 20) == 2.5);
    CHECK (solve((x - 5 )== 40) == 10);
    CHECK (solve((x * 5) == 100) == 3.75);
    CHECK (solve((x - y) == 9) == 5);
    CHECK (solve((x + y) == 41) == 5);
    CHECK (solve((y * 15 )== 1000) == 30.3333);
    CHECK (solve((y + x ) -12 == 59) == 10);
    CHECK (solve((w - y )== 9) == 2.2);
    CHECK (solve(((w + x) - 5) == 9) == 1);
    CHECK (solve(((w + x) - y) == -1) == 0.5);
}
TEST_CASE ("Test 10") {

    RealVariable x(0, 4, 5);
    RealVariable y(0, 2, 6);
    RealVariable z(1, 10, 25);
    RealVariable w(0, 12, -7);
    CHECK (solve((x + 5) == 20) == 2.5);
    CHECK (solve((x - 5 )== 40) == 10);
    CHECK (solve((x * 5) == 100) == 3.75);
    CHECK (solve((x - y) == 9) == 5);
    CHECK (solve((x + y) == 41) == 5);
    CHECK (solve((y * 15 )== 1000) == 30.3333);
    CHECK (solve((y + x ) -12 == 59) == 10);
    CHECK (solve((w - y )== 9) == 2.2);
    CHECK (solve(((w + x) - 5) == 9) == 1);
    CHECK (solve(((w + x) - y) == -1) == 0.5);
}
TEST_CASE ("Test 10") {

    RealVariable x(0, 4, 5);
    RealVariable y(0, 2, 6);
    RealVariable z(1, 10, 25);
    RealVariable w(0, 12, -7);
    CHECK (solve((x + 5) == 20) == 2.5);
    CHECK (solve((x - 5 )== 40) == 10);
    CHECK (solve((x * 5) == 100) == 3.75);
    CHECK (solve((x - y) == 9) == 5);
    CHECK (solve((x + y) == 41) == 5);
    CHECK (solve((y * 15 )== 1000) == 30.3333);
    CHECK (solve((y + x ) -12 == 59) == 10);
    CHECK (solve((w - y )== 9) == 2.2);
    CHECK (solve(((w + x) - 5) == 9) == 1);
    CHECK (solve(((w + x) - y) == -1) == 0.5);
}
TEST_CASE ("Test 10") {

    RealVariable x(0, 4, 5);
    RealVariable y(0, 2, 6);
    RealVariable z(1, 10, 25);
    RealVariable w(0, 12, -7);
    CHECK (solve((x + 5) == 20) == 2.5);
    CHECK (solve((x - 5 )== 40) == 10);
    CHECK (solve((x * 5) == 100) == 3.75);
    CHECK (solve((x - y) == 9) == 5);
    CHECK (solve((x + y) == 41) == 5);
    CHECK (solve((y * 15 )== 1000) == 30.3333);
    CHECK (solve((y + x ) -12 == 59) == 10);
    CHECK (solve((w - y )== 9) == 2.2);
    CHECK (solve(((w + x) - 5) == 9) == 1);
    CHECK (solve(((w + x) - y) == -1) == 0.5);
}
TEST_CASE ("Test 10") {

    RealVariable x(0, 4, 5);
    RealVariable y(0, 2, 6);
    RealVariable z(1, 10, 25);
    RealVariable w(0, 12, -7);
    CHECK (solve((x + 5) == 20) == 2.5);
    CHECK (solve((x - 5 )== 40) == 10);
    CHECK (solve((x * 5) == 100) == 3.75);
    CHECK (solve((x - y) == 9) == 5);
    CHECK (solve((x + y) == 41) == 5);
    CHECK (solve((y * 15 )== 1000) == 30.3333);
    CHECK (solve((y + x ) -12 == 59) == 10);
    CHECK (solve((w - y )== 9) == 2.2);
    CHECK (solve(((w + x) - 5) == 9) == 1);
    CHECK (solve(((w + x) - y) == -1) == 0.5);
}
TEST_CASE ("Test 10") {

    RealVariable x(0, 4, 5);
    RealVariable y(0, 2, 6);
    RealVariable z(1, 10, 25);
    RealVariable w(0, 12, -7);
    CHECK (solve((x + 5) == 20) == 2.5);
    CHECK (solve((x - 5 )== 40) == 10);
    CHECK (solve((x * 5) == 100) == 3.75);
    CHECK (solve((x - y) == 9) == 5);
    CHECK (solve((x + y) == 41) == 5);
    CHECK (solve((y * 15 )== 1000) == 30.3333);
    CHECK (solve((y + x ) -12 == 59) == 10);
    CHECK (solve((w - y )== 9) == 2.2);
    CHECK (solve(((w + x) - 5) == 9) == 1);
    CHECK (solve(((w + x) - y) == -1) == 0.5);
}
TEST_CASE ("Test 10") {

    RealVariable x(0, 4, 5);
    RealVariable y(0, 2, 6);
    RealVariable z(1, 10, 25);
    RealVariable w(0, 12, -7);
    CHECK (solve((x + 5) == 20) == 2.5);
    CHECK (solve((x - 5 )== 40) == 10);
    CHECK (solve((x * 5) == 100) == 3.75);
    CHECK (solve((x - y) == 9) == 5);
    CHECK (solve((x + y) == 41) == 5);
    CHECK (solve((y * 15 )== 1000) == 30.3333);
    CHECK (solve((y + x ) -12 == 59) == 10);
    CHECK (solve((w - y )== 9) == 2.2);
    CHECK (solve(((w + x) - 5) == 9) == 1);
    CHECK (solve(((w + x) - y) == -1) == 0.5);
}
TEST_CASE ("Test 10") {

    RealVariable x(0, 4, 5);
    RealVariable y(0, 2, 6);
    RealVariable z(1, 10, 25);
    RealVariable w(0, 12, -7);
    CHECK (solve((x + 5) == 20) == 2.5);
    CHECK (solve((x - 5 )== 40) == 10);
    CHECK (solve((x * 5) == 100) == 3.75);
    CHECK (solve((x - y) == 9) == 5);
    CHECK (solve((x + y) == 41) == 5);
    CHECK (solve((y * 15 )== 1000) == 30.3333);
    CHECK (solve((y + x ) -12 == 59) == 10);
    CHECK (solve((w - y )== 9) == 2.2);
    CHECK (solve(((w + x) - 5) == 9) == 1);
    CHECK (solve(((w + x) - y) == -1) == 0.5);
}
TEST_CASE ("Test 10") {

    RealVariable x(0, 4, 5);
    RealVariable y(0, 2, 6);
    RealVariable z(1, 10, 25);
    RealVariable w(0, 12, -7);
    CHECK (solve((x + 5) == 20) == 2.5);
    CHECK (solve((x - 5 )== 40) == 10);
    CHECK (solve((x * 5) == 100) == 3.75);
    CHECK (solve((x - y) == 9) == 5);
    CHECK (solve((x + y) == 41) == 5);
    CHECK (solve((y * 15 )== 1000) == 30.3333);
    CHECK (solve((y + x ) -12 == 59) == 10);
    CHECK (solve((w - y )== 9) == 2.2);
    CHECK (solve(((w + x) - 5) == 9) == 1);
    CHECK (solve(((w + x) - y) == -1) == 0.5);
}

