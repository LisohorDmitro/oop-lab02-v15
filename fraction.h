#pragma once
#include <string>

class Fraction {
    long whole_ = 0;
    unsigned short fraction_ = 0;
public:
    enum { SCALE = 10000 };
    void Init(long whole, unsigned short fraction);
    void Read();
    void Display() const;
    std::string toString() const;
    long long scaled() const;
    static Fraction FromScaled(long long units);
    Fraction add(const Fraction& b) const;
    Fraction sub(const Fraction& b) const;
    Fraction mul(const Fraction& b) const;
    bool equal(const Fraction& b) const;
    bool less(const Fraction& b) const;
    bool greater(const Fraction& b) const;
};
