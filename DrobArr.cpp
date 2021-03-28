
#define _CRT_SECURE_NO_WARNINGS

#include "DrobArr.h"

void QuickSort(Drob* Arr1, UINT from, UINT to)
{
	UINT i, j;
	Drob x, temp;
	if (from >= to)
		return;
	i = from;
	j = to;
	x = Arr1[(from + to) / 2];
	while (i <= j) {
		while (Arr1[i] < x) i++;
		while (Arr1[j] > x) j--;
		if (i <= j) {
			temp = Arr1[i];
			Arr1[i] = Arr1[j];
			Arr1[j] = temp;
			i++;
			j--;
		}
	}
	QuickSort(Arr1, from, j);
	QuickSort(Arr1, i, to);
}

DrobArr::DrobArr()
{
	Len = 0; 
	Arr = 0; 
};
DrobArr::DrobArr(UINT k)
{
	Len = k; 
	Arr = new Drob[k];
};
DrobArr::~DrobArr() {
	if (Arr)   
		delete[] Arr;
};
//------------------------
void DrobArr::SetSize(UINT k) {
	Drob* ArrOld = Arr;
	UINT LenOld = Len;
	UINT min = Len;
	Drob* ArrNew = new Drob[k];
	if (k < Len)
		min = k;
	Len = k;
	for (UINT i = 0; i < min; i++) {
		ArrNew[i] = ArrOld[i];
	}
	Arr = ArrNew;
	
};
UINT DrobArr::GetSize() 
{ 
	return Len; 
};
//------------------------
void DrobArr::Copy(DrobArr& Arr2, UINT begin, UINT end)
{
	if (this == &Arr2)
		return;
	if (end >= Arr2.Len)
		end = Arr2.Len - 1;
	if (end <= begin)
		return;
	Len = end - begin + 1; 
	if (Arr) 
	{
		delete[] Arr;
		Arr = 0;
	}
	Arr = new Drob[Len]; 
	for (UINT i = begin, j = 0; i <= end; i++, j++)
		Arr[j].SetDrob(Arr2.Arr[i].GetChis(), Arr2.Arr[i].GetZnam());
} ;
void DrobArr::Sort() {
	QuickSort(Arr, 0, Len);
};
void DrobArr::Clear() {
	for (UINT i = 0; i < Len; i++)
		Arr[i] = Drob();
}
//------------------------
Drob& DrobArr::operator[](UINT i)
{
	if (i < Len && i>=0)
		return Arr[i];
	return Drob(0,1);
}
bool DrobArr::operator==(DrobArr& Arr1)
{
	UINT size = Len;
	UINT i = 0;
	while (Arr1[i] == Arr[i] && i < size) { ++i; };
	if (++i == size)
		return true;
	return false;
}
DrobArr& DrobArr::operator=(DrobArr Arr1)
{
	if (this == &Arr1) 
		return *this;
	if (Len != Arr1.Len)
	{
		Len = Arr1.Len;
		if (Arr) 
		{   
			delete[] Arr;
			Arr = 0;
		} 
		Arr = new Drob[Len]; 
	}
	for (UINT i = 0; i < Len; i++) 
		Arr[i] = Arr1.Arr[i];
	return *this;
}
//------------------------