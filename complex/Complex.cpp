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

//========================================================
// setReal access method
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
    Complex result_complex;

    return result_complex;
}

//========================================================
// addition operators
//-----------------------------
// addition with Complex object
//-----------------------------
// addition with float
// Lam Do 
// Parameters:
//  float f
// Return value:
//  New Rational Object
//-----------------------------
// addition with int
//========================================================
Complex Complex::operator+(const Complex &c ) const{
    Complex result_complex;

    return result_complex;
}


Complex Complex::operator+(float f ) const{
    Complex result_complex;
    result_complex.a = a + f;
    result_complex.b = b;
    return result_complex;
}

Complex Complex::operator+(int i ) const{
    Complex result_complex;
    
    result_complex.a = a + i; 
    result_complex.b = b;

    return result_complex;
}
//========================================================
// subtraction operators
//-----------------------------
// subtraction with Complex object
// Lam Do 
// Parameters:
//  Complex reference to c
// Return value: 
// New Rational object
//-----------------------------
// subtraction with float
//-----------------------------
// addition with int
//========================================================
Complex Complex::operator-(const Complex &c ) const{
    Complex result_complex;
    result_complex.a = a + c.a;
    result_complex.b = b + c.b;
    return result_complex;
}


Complex Complex::operator-(float f ) const{
    Complex result_complex;

    return result_complex;
}


Complex Complex::operator-(int i ) const{
    Complex result_complex;

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


Complex Complex::operator*(float f ) const{
    Complex result_complex;

    return result_complex;
}


Complex Complex::operator*(int i ) const{
    Complex result_complex;

    return result_complex;
}


//========================================================
// division operators
//-----------------------------
// division with Complex object
//-----------------------------
// division with float
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


Complex Complex::operator/(float f ) const{
    Complex result_complex;
    result_complex.a = a / f;
    result_complex.b = b / f;
    return result_complex;
}


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
//========================================================
istream & operator>> ( istream &in, Complex &c ){

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

