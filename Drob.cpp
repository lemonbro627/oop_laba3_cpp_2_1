#define _CRT_SECURE_NO_WARNINGS

#include "Drob.h"

Drob::Drob() {
    chis = 0;
    znam = 1;
}
Drob::Drob(int i, int j) {
    if (j > 0) {
        chis = i;
        znam = j;
    }
}
void Drob::SetChis(int i) {
    chis = i;
}
void Drob::SetZnam(int i) {
    if (i > 0) {
        znam = i;
    }
}
void Drob::SetDrob(int i, int j) {
    if (j > 0) {
        chis = i;
        znam = j;
    }
}
int& Drob::GetChis() {
    return this->chis;
}
int& Drob::GetZnam() {
    return this->znam;
}

Drob& operator*(Drob& left, Drob& right) {
    return Drob(left.chis * right.chis, left.znam * right.znam);
} 
Drob& operator/(Drob& left, Drob& right) {
    return Drob(left.chis * right.znam, left.znam * right.chis);
}
Drob& operator+(Drob& left, Drob& right) {
    return Drob(left.chis * right.znam + left.znam * right.chis, left.znam * right.znam);
}
Drob& operator-(Drob& left, Drob& right) {
    return Drob(left.chis * right.znam - left.znam * right.chis, left.znam * right.znam);
}
Drob& Drob::operator=(Drob& right) {
    return right;
}
bool operator<(Drob& left, Drob& right) {
   return double(left.chis)/double(left.znam) < double(right.chis) / double(right.znam);
}
bool operator>(Drob& left, Drob& right) {
    return double(left.chis) / double(left.znam) > double(right.chis) / double(right.znam);
}
bool operator==(Drob& left, Drob& right) {
    return double(left.chis) / double(left.znam) == double(right.chis) / double(right.znam);
};
