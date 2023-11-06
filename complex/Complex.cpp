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
// setReal
// EunHo Lee
// Set real part of Complex object
// Parameters: none
// Return value: None
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
// Lam Do
// Returns Imaginary part of Complex object
// Parameters: none
// Return value: Imaginary as float
//========================================================
 float Complex::getImag( void ) const{

    return this->b;
 }


//========================================================
// assignment operator
// EunHo Lee
// Parameters:
// Complex reference to object
// Return value:
// Currnet object
//========================================================
Complex Complex::operator=( const Complex &c ){
    //Complex result_complex;
    this->a = c.a;
    this->b = c.b;

    return *this;
}

//========================================================
// addition operators
// addition with Complex object
// Lam Do 
// Parameters:
//  Complex reference to object
// Return value:
//  New Rational Object
//========================================================
Complex Complex::operator+(const Complex &c ) const{
    Complex result_complex;
    result_complex.a = a + c.a;
    result_complex.b = b + c.b;
    return result_complex;
}

//========================================================
// addition with float
// This function returns the addition of a complex number and a float
// EunHo Lee
// Parameters:
//  float f
// Return value:
//  New Rational Object
//========================================================
Complex Complex::operator+(float f ) const{
    Complex result_complex;
    result_complex.a = a + f;
    result_complex.b = b;
    return result_complex;
}

//========================================================
// addition with int
// Bach Nguyen
// Parameters:
//  int i
// Return value: 
//  New Complex object
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
//  New Complex object
//========================================================
Complex Complex::operator-(const Complex &c ) const{
    Complex result_complex;
    result_complex.a = a - c.a;
    result_complex.b = b - c.b;
    return result_complex;
}

//========================================================
// subtraction with float
// Bach Nguyen
// Parameters:
//  float f
// Return value: 
//  New Complex object
//========================================================
Complex Complex::operator-(float f ) const{
    Complex result_complex;
    result_complex.a = a - f; 
    result_complex.b = b;

    return result_complex;
}


//========================================================
// subtraction with int
// Bach Nguyen
// Parameters:
//  int i
// Return value: 
//  New Complex object
//========================================================
Complex Complex::operator-(int i ) const{
    Complex result_complex;

    result_complex.a = a - i; 
    result_complex.b = b;

    return result_complex;
}

//========================================================
// multiplication operators
// multiplication with Complex object
// Lam Do 
// Parameters:
//  Complex reference to c
// Return value: 
//  New Complex object
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
//  float f
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
// multiplication with int
// This function returns the product of the complex number and int
// EunHo Lee
// Parameters:
//  int i
// Return value:
//  New Complex object
//========================================================
Complex Complex::operator*(int i ) const{
    Complex result_complex;
    result_complex.a = a * i;
    result_complex.b = b * i;
    return result_complex;
}


//========================================================
// division with Complex object
// Bach Nguyen
// Parameters:
//  Complex reference to c
// Return value: 
//  New Rational object
//========================================================
Complex Complex::operator/(const Complex &c ) const{
    Complex result_complex;

    result_complex.a = (a * c.a + b * c.b) / (c.a * c.a + c.b * c.b);
    result_complex.b = (b * c.a - a * c.b) / (c.a * c.a + c.b * c.b);

    return result_complex;
}

//========================================================
// division with float
// Lam Do
// Parameters:
//  Complex reference to c
// Return value: 
//  New Rational object
//========================================================
Complex Complex::operator/(float f ) const{
    Complex result_complex;
    result_complex.a = a / f;
    result_complex.b = b / f;
    return result_complex;
}

//========================================================
// division with int
// Lam Do
// Parameters:
//  int i
// Return value: 
//  New Rational object
//========================================================
Complex Complex::operator/(int i ) const{
    Complex result_complex;
    result_complex.a = a / i;
    result_complex.b = b / i;
    return result_complex;
}



//========================================================
// exponentiation
// EunHo Lee
// This function will return the exponential number of the complex number
// Parameters:
// int power value
// Return value: 
// New Rational object
//========================================================
Complex Complex::operator^( int p ) const{
    Complex result_complex(1,0);
    if(p== 0){
        return result_complex;
    }


    
    result_complex.a = this->a;
    result_complex.b = this->b;


    for(int i = 1; i < std::abs(p); i++){
        result_complex = result_complex* (*this);
    }


    if(p<0){
        float denominator = pow(result_complex.a, 2) + pow(result_complex.b, 2);
        result_complex.a = result_complex.a / denominator;
        result_complex.b = -1*result_complex.b / denominator;
    }


    return result_complex;
}


//========================================================
// operator~
// EunHo Lee
// This function return the conjugate of the complex number
// Parameters:
// None
// Return value: 
// New Rational object
//========================================================
Complex Complex::operator~( void ) const{
    Complex result_complex;
    result_complex.a = a;
    result_complex.b = -1*b;

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
    string a_str= "";
    string b_str = "";

    //without imaginary, only parse values to a
    if (s[s.size()-1] != 'i')
    {
        c.a = stof(s.substr(s.size()-1));
        c.b = 0;
        return in;
    }

    //with imaginary, traverse backwards
    for (int i = s.size()-2; i >= 0; i--)
    {
        //look for digit right before + and - then add everything before that to a
        if (s[i+1] == '+' || s[i+1] == '-')
        {
            if (s[i] != '+' && s[i] != '-')
                {
                    a_str = s.substr(0,i+1);
                    break;
                }
        }
        b_str = s[i] + b_str;

        //if there's nothing before add or minus sign, set a to 0
        if (i == 0)
            a_str = "0";
    }

    //remove plus signs
    if (a_str.find('+') != string::npos) 
        a_str.erase(a_str.find('+'),1);
    if (b_str.find('+') != string::npos)   
        b_str.erase(b_str.find('+'),1);

    //convert string to float
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
    else if (c.a == 0)
        out << c.b << "i";
    else if (c.b < 0)
        out << c.a << c.b << "i";
    else 
        out << c.a << "+" << c.b << "i";
    return out;
}

