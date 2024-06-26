﻿#include "tasks.h"

/*	Task X. Rectangular World 3 [прямоугольный мир]
 *
 *	В прямоугольном мире есть свинья, которая раскормлена до размеров
 *	ПАРАЛЛЕЛЕПИПЕДА с габаритами X, Y, Z.
 *	Определите, можно ли ПОХИТИТЬ данную свинью, разместив её
 *	в багажнике фургона c размерами A, B, C.
 *
 *	Предварительные условия:
 *	1) размеры габаритов свиньи и багажника фургона - числа натуральные
*	и могут вводится в любом порядке;
 *	2) стенки багажника фургона имеют нулевую толщину;
 *	3) свинья не может "выглядывать" из фургона, она должна помещаться
 *	в нём полностью - это же ПОХИЩЕНИЕ!
 *	4) чтобы попытаться вместить свинью в багажник, её можно поворачивать
*	на 90 градусов во все стороны;
 *	5) объёмы свиньи и багажника фургона не могут служить надёжным
 *	критерием для их сравнения!
 *  6) не забудьте про "защиту от дурака": если данные некорректны,
 *	то нужно возвратить false.
 *
 *	Формат входных данных [input]
 *	На вход функция принимает шесть целых чисел типа int:
 *	X, Y, Z (габариты свиньи) и A, B, C (габариты багажника фургона).
 *
 *	Формат выходных данных [output]
 *	Функция должна возвратить результат в виде булевского типа данных
*	согласно условию задачи.
 *
 *	[ input 1]: 4 6 5 6 5 6
 *	[output 1]: true
 *
 *	[ input 2]: 3 5 5 2 3 4
 *	[output 2]: false
 *
 *	[ input 3]: 0 5 5 2 3 4
 *	[output 3]: false
 *
 *	[ input 4]: 3 -5 5 2 3 4
 *	[output 4]: false
 */

bool taskX(int x, int y, int z, int a, int b, int c) {
	int t;

	if (x > y) { t = x; x = y; y = t; }
	if (y > z) { t = y; y = z; z = t; }
	if (x > y) { t = x; x = y; y = t; }

	if (a > b) { t = a; a = b; b = t; }
	if (b > c) { t = b; b = c; c = t; }
	if (a > b) { t = a; a = b; b = t; }

	return a >= x && b >= y && c >= z;
}