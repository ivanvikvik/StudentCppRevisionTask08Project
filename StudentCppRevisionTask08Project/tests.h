#pragma once
#pragma once
#include "tasks.h"

#define RIGHT " - completed successfully. Well DONE!!!"
#define WRONG " - was not running successfully. ERROR!"

void testingTask01() {
	bool result = task01(7, 7, 7, 7) == 4
		&& task01(7, 7, 7, 8) == 3
		&& task01(7, 7, 8, 9) == 2
		&& task01(6, 7, 8, 9) == 0
		&& task01(-7, -7, -7, -7) == 4
		&& task01(7, 7, 8, 7) == 3
		&& task01(7, 8, 7, 7) == 3
		&& task01(8, 7, 7, 7) == 3
		&& task01(7, 8, 9, 7) == 2
		&& task01(7, 9, 8, 7) == 2
		&& task01(8, 9, 7, 7) == 2;

	cout << "Task 01 [The same Numbers]" << (result ? RIGHT : WRONG) << endl;
}