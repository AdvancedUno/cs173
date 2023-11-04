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
//========================================================
void Complex::setImag( float r){

  
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
// New Rational object
//-----------------------------
// multiplication with float
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
    //result_complex.a = a * c.a - b * c.b;
    //result_complex.b = a * c.b + b * c.a;
    return result_complex;
}


//========================================================
// division with Complex object
// Lam Do 
// Parameters:
//  Complex reference to c
// Return value: 
// New Rational object
//-----------------------------
// division with int
//========================================================
Complex Complex::operator/(const Complex &c ) const{
    Complex result_complex;

    return result_complex;
}

//========================================================

//========================================================
Complex Complex::operator/(float f ) const{
    Complex result_complex;
    result_complex.a = a / f;
    result_complex.b = b / f;
    return result_complex;
}

//========================================================

//========================================================
Complex Complex::operator/(int i ) const{
    Complex result_complex;

    return result_complex;
}



//========================================================
// exponentiation
//========================================================
Complex Complex::operator^( int p ) const{
    Complex result_complex;


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
//========================================================
float Complex::abs( void )const{


    return 1.0;
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
//========================================================
bool   Complex::operator!=( const Complex &c ) const{


    return true;
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
//========================================================
ostream & operator<< ( ostream &out, const Complex c ){
    if (c.b == 0)
        out << c.a;
    else 
        out << c.a << "+" << c.b << "i";
    return out;
}

