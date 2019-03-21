#include<stdio.h>
#define horizontal_Maxinum 9
#define vertical_Maxinum 9
#define ResetBreak 1
void theMultiplicationTableOperation(int MultiplicationTable[10][10]);
void theMultiplicationTableDisplay(int MultiplicationTable[10][10]);
int main(void) {
	int horizontallyIndex = 1;
	int verticalIndex = 1;
	int MultiplicationTable[10][10] = { 0 };

	theMultiplicationTableOperation(MultiplicationTable);
	theMultiplicationTableDisplay(MultiplicationTable);
	return 0;
}

void theMultiplicationTableOperation(int MultiplicationTable[10][10]) {

	int horizontallyIndex = 1;
	int verticalIndex = 1;

	do {
		do {
			MultiplicationTable[horizontallyIndex][verticalIndex] =
				horizontallyIndex * verticalIndex;
			verticalIndex++;
		} while (verticalIndex <= vertical_Maxinum);
		verticalIndex = ResetBreak;
		horizontallyIndex++;
	} while (horizontallyIndex <= horizontal_Maxinum);
}

void theMultiplicationTableDisplay(int MultiplicationTable[10][10]) {

	int horizontallyIndex = 1;
	int verticalIndex = 1;
	do {
		do {
			printf("%d ", MultiplicationTable[horizontallyIndex][verticalIndex]);
			verticalIndex++;
		} while (verticalIndex <= vertical_Maxinum);
		puts("\n");
		verticalIndex = ResetBreak;
		horizontallyIndex++;
	} while (horizontallyIndex <= horizontal_Maxinum);
}

