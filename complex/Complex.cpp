//========================================================
// put all group names here
// Complex.cpp
// November 2023
// This file contains the class methods for the
// Complex number class.
//========================================================

#include "Complex.h"
#include <string.h>
#include <iostream>
#include <cmath>
using namespace std;




//comment 
//========================================================
// setReal access method
// 
// 
//========================================================
void Complex::setReal( float r ){

    this->a = r;
    return;
}


//========================================================
// getReal access method
// Lam Do
// Returns real part of Complex object
// Parameters: none
// Return value: real as float
//========================================================
float Complex::getReal( void )const{


    return a;
}

//========================================================
// setImag
// Bach Nguyen
// Sets the imaginary part of the complex number
// Parameters:
//  float r
// Return value: none
//========================================================
void Complex::setImag( float r){
    b = r;
}

//========================================================
// getImag
//========================================================
 float Complex::getImag( void ) const{

    return this->b;
 }

//========================================================
// assignment operator
//========================================================
Complex Complex::operator=( const Complex &c ){
    //Complex result_complex;
    this->a = c.a;
    this->b = c.b;

    return *this;
}

//========================================================
// addition operators
// Lam Do 
// Parameters:
//  float f
// Return value:
//  New Rational Object
//========================================================
Complex Complex::operator+(const Complex &c ) const{
    Complex result_complex;
    result_complex.a = a + c.a;
    result_complex.b = c.b;
    return result_complex;
}


Complex Complex::operator+(float f ) const{
    Complex result_complex;
    result_complex.a = a + f;
    result_complex.b = b;
    return result_complex;
}

//========================================================
// addition with int
// addition with Complex object
// Bach Nguyen
// Parameters:
//  Complex reference to c
// Return value: 
// New Complex object
//========================================================
Complex Complex::operator+(int i ) const{
    Complex result_complex;
    
    result_complex.a = a + i; 
    result_complex.b = b;

    return result_complex;
}
//========================================================
// subtraction operators
// subtraction with Complex object
// Lam Do 
// Parameters:
//  Complex reference to c
// Return value: 
// New Complex object
//========================================================
Complex Complex::operator-(const Complex &c ) const{
    Complex result_complex;
    result_complex.a = a + c.a;
    result_complex.b = b + c.b;
    return result_complex;
}

//========================================================
// subtraction with float
// subtraction with Complex object
// Bach Nguyen
// Parameters:
//  Complex reference to c
// Return value: 
// New Complex object
//========================================================
Complex Complex::operator-(float f ) const{
    Complex result_complex;
    result_complex.a = a - f; 
    result_complex.b = b;

    return result_complex;
}


//========================================================
// subtraction with int
// subtraction with Complex object
// Bach Nguyen
// Parameters:
//  Complex reference to c
// Return value: 
// New Complex object
//========================================================
Complex Complex::operator-(int i ) const{
    Complex result_complex;

    result_complex.a = a - i; 
    result_complex.b = b;

    return result_complex;
}

//========================================================
// multiplication operators
//-----------------------------
// multiplication with Complex object
// Lam Do 
// Parameters:
//  Complex reference to c
// Return value: 
// New Complex object
//-----------------------------
// multiplication with int
//========================================================
Complex Complex::operator*(const Complex &c ) const{
    Complex result_complex;
    result_complex.a = a * c.a - b * c.b;
    result_complex.b = a * c.b + b * c.a;
    return result_complex;
}

//========================================================
// multiplication with float
// Bach Nguyen
// Parameters:
//  Complex reference to c
// Return value:
//  New Complex object
//========================================================
Complex Complex::operator*(float f ) const{
    Complex result_complex;

    result_complex.a = a * f;
    result_complex.b = b * f;

    return result_complex;
}


//========================================================

//========================================================
Complex Complex::operator*(int i ) const{
    Complex result_complex;
    result_complex.a = a * i;
    result_complex.b = b * i;
    return result_complex;
}


//========================================================
// division with Complex
// division with Complex object
// Bach Nguyen
// Parameters:
//  Complex reference to c
// Return value: 
// New Rational object
//========================================================
Complex Complex::operator/(const Complex &c ) const{
    Complex result_complex;

    result_complex.a = (a * c.a + b * c.b) / (c.a * c.a + c.b * c.b);
    result_complex.b = (b * c.a - a * c.b) / (c.a * c.a + c.b * c.b);

    return result_complex;
}

//========================================================
// division with float
// division with Complex object
// Lam Do
// Parameters:
//  Complex reference to c
// Return value: 
// New Rational object
//========================================================
Complex Complex::operator/(float f ) const{
    Complex result_complex;
    result_complex.a = a / f;
    result_complex.b = b / f;
    return result_complex;
}

//========================================================
// division with int
// division with Complex object
// Lam Do
// Parameters:
//  Complex reference to c
// Return value: 
// New Rational object
//========================================================
Complex Complex::operator/(int i ) const{
    Complex result_complex;
    result_complex.a = a / i;
    result_complex.b = b / i;
    return result_complex;
}



//========================================================
// exponentiation
//========================================================
Complex Complex::operator^( int p ) const{
    Complex result_complex;
    // result_complex.a = ;
    // result_complex.b = b / i;

    return result_complex;
}

//========================================================
// operator~
//========================================================
Complex Complex::operator~( void ) const{
    Complex result_complex;


    return result_complex;
}

//========================================================
// abs
// Bach Nguyen
// Returns the distance from the origin to the complex
// number on a complex plane
// Parameters:
//  None
// Return value:
//  Distance from the origin to the complex number on a
//  complex plane as a float
//========================================================
float Complex::abs( void )const{
    float distance;
    distance = sqrt(a*a + b*b);
    return distance;
}

//========================================================
// equality operator
// Lam Do 
// Returns true if calling object == parameter,
// false otherwise
//========================================================
bool   Complex::operator==( const Complex &c ) const{
    return a == c.a && b == c.b;
}

//========================================================
// inequality operator
// Bach Nguyen
// Returns true if calling object != parameter,
// false otherwise
//========================================================
bool   Complex::operator!=( const Complex &c ) const{
    return a!=c.a || b!=c.b;
}

//========================================================
// overload >> for cin
// Lam Do 
// Parameters:
// 	istream reference (current "istream stack")
//  Complex 		  ( thing to parse from the istream )
// Return value:
//  new istream reference (with our object removed)
//========================================================
istream & operator>> ( istream &in, Complex &c ){
    string s;
    in >> s;
    int spot_plus = s.find('+');
    int spot_i = s.find('i');
    string a_str = s.substr(0,spot_plus);
    string b_str = s.substr(spot_plus+1,spot_i);

    c.a = stof(a_str);
    c.b = stof(b_str);
    return in;
}


//========================================================
// overload << for cout
// Bach Nguyen
// Overload the ostream << operator so we can use cout
// to print our Complex object
// Parameters:
//  ostream reference (current "ostream stack")
//  Complex           (thing to add to the ostream)
// Return value:
//  new ostream reference (with our object added)
//========================================================
ostream & operator<< ( ostream &out, const Complex c ){
    if (c.b == 0)
        out << c.a;
    else 
        out << c.a << "+" << c.b << "i";
    return out;
}

