#include "tool.h"

int main() {
	//�ܼ�â �̸� ����
	SetConsoleTitle(
		TEXT("test console"));

	//�ܼ�â ũ�� ����
	setWindowSize(50, 20);
	//system("mode con:cols=50 lines=20");

	//�ܼ�â �ȿ��� Ŀ�� �̵�
	gotoxy(20, 10);

	//�ܼ�â���� Ŀ�� �� ����
	textColor(getColorBit(1, 1, 1, 1, 1) |
		getColorBit(0, 0, 0, 0, 0));

	printf("�ѿ���");

	//Sleep(n000) -> n�ʵ��� ȭ�� ����
	Sleep(2000);

	//�ܼ�â ����
	clear();

	return 0;
}