#include "tool.h"

int main() {
	//콘솔창 이름 변경
	SetConsoleTitle(
		TEXT("test console"));

	//콘솔창 크기 조절
	setWindowSize(50, 20);
	//system("mode con:cols=50 lines=20");

	//콘솔창 안에서 커서 이동
	gotoxy(20, 10);

	//콘솔창에서 커서 색 변경
	textColor(getColorBit(1, 1, 1, 1, 1) |
		getColorBit(0, 0, 0, 0, 0));

	printf("한예담");

	//Sleep(n000) -> n초동안 화면 유지
	Sleep(2000);

	//콘솔창 비우기
	clear();

	return 0;
}