#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
namespace ariel{
    class Fraction{
        private:
            int numer;
            int denoom;

        public:
            Fraction(int a, int b): denoom(a),numer(b){
            }
            Fraction operator+(const Fraction  &other) const;
            Fraction operator-(Fraction const &other) const;
            Fraction operator*(Fraction const &other) const;
            Fraction operator/(Fraction const &other) const;
            Fraction& operator++();
            const Fraction operator++(int);
            Fraction& operator--();
            const Fraction operator--(int);
            Fraction& operator-();
            
            //friend fuction
            friend std::ostream& operator<<(std::ostream& output, const Fraction& c);
            friend std::istream& operator>>(std::istream& input, const Fraction& c);
            friend Fraction operator*(const float &d,Fraction &other);
            friend Fraction operator*(const Fraction &frac,const float &other);
            friend Fraction operator+(const float &d,const Fraction &other);
            friend Fraction operator+(const Fraction &frac,const float &other);
            friend Fraction operator-(const float &d,const Fraction  &other);
            friend Fraction operator-(const Fraction &frac,const float &other);
            friend Fraction operator/(const float &d,const Fraction &other);
            friend Fraction operator/(const Fraction &frac,const float &other);
            friend bool operator==(const Fraction& c1, const float& c2);
            friend bool operator==(const float& c2,const Fraction& c1);
            friend bool operator==(const Fraction& c2,const Fraction& c1);
            friend bool operator<=(const Fraction& c1, const float& c2);
            friend bool operator<=(const float& c2,const Fraction& c1);
            friend bool operator<=(const Fraction& c2,const Fraction& c1);
            friend bool operator>=(const Fraction& c1, const float& c2);
            friend bool operator>=(const float& c2,const Fraction& c1);
            friend bool operator>=(const Fraction& c2,const Fraction& c1);
            friend bool operator<(const Fraction& c1, const float& c2);
            friend bool operator<(const float& c2,const Fraction& c1);
            friend bool operator<(const Fraction& c2,const Fraction& c1);
            friend bool operator>(const Fraction& c1, const float& c2);
            friend bool operator>(const float& c2,const Fraction& c1);
            friend bool operator>(const Fraction& c2,const Fraction& c1);
                    
             

    };

}