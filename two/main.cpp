﻿#include "two.h"
#include <iostream>
using namespace std;

int main()
{
	srand(time(0));
	int size = 0;
	cin >> size;
	int* mas = new int[size];
	randoms(mas, size);
	fun(mas, size)(mas, size);
	print(mas, size);
}