
#include <stdio.h>
#include <string.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0

void intro();
void room();
void frame();	//1. ����
void bed();		//2. ħ��
void fridge();	//3. �����
void safebox();	//4. �ݰ�
void closet();	//5. ����
void door();	//6. ���Թ�
void door_password();

int isBrokenFrame = FALSE;	//���� �ļտ���
int isBrokenBed = FALSE;	//ħ�� �ļտ���

int isFindMagnifyingGlass = FALSE;	//������ ���濩��
int isFindGoldKey = FALSE;		//�ݻ� ���� ȹ�� ����
int isFindSilverKey = FALSE; 	//���� ���� ȹ�� ����

int isOpenSafebox = FALSE;		//�ݰ� ���� ����

int main() {
	int menu;

	while(1) {
		printf("ROOM ESCAPE VER 1.0\n\n");
		printf("1. ����\n");
		printf("0. ����\n");
		printf(">> ");
		scanf("%d", &menu);

		switch(menu) {
			case 1:
				intro();
				room();
				break;
			case 0:
				return 0;
			default:
				printf("�Է� ����\n\n");
				break;
		}
	}

}

void intro() {
	system("cls");
	printf("\n\n");
	printf("���� ������ ���� �� �ȿ� �ִ� �� ����.\n");
	Sleep(1500);
	printf("���� �����... ������ ����� �� ���� �ʴ´�.\n\n");
	Sleep(2500);
	printf("����, ħ��, �����.. ��� ������ ������.\n");
	Sleep(1500);
	printf("��ü ���� �� ���⿡ ������ �� ���ϱ�?\n\n");
	Sleep(2500);
	printf("������ ������ �׷� �� ���� �ð��� ����.\n");
	Sleep(1500);
	printf("�� ���� ������ �Ѵ�.\n\n");
	Sleep(1500);
	system("pause");
}

void room() {
	int menu;

	while(1) {
		system("cls");
		printf("[����]\n\n");
		printf("�� �ȿ��� �� �� �ִ� �͵��� ã�ƺ���.\n\n");
		printf("1. ����    2. ħ��    3. �����\n");
		printf("4. �ݰ�    5. ����    6. ���Թ�\n");

		printf(">> ");
		scanf("%d", &menu);

		switch(menu) {
			case 1:
				if(isBrokenFrame) {
					printf("\n���ڸ� �μ����ȴ�. �� �̻� ã�� �� ����.\n");
					system("pause");
				} else {
					frame();
				}
				break;
			case 2:
				bed();
				break;
			case 3:
				fridge();
				break;
			case 4:
				safebox();
				break;
			case 5:
				closet();
				break;
			case 6:
				door();
				break;
			default:
				printf("\n# ERROR # �Է°� ����\n");
				system("pause");
		}
	}

}

void frame(){//1. ����
	int menu;

	while(1) {
		system("cls");
		printf("[����]-[����]\n\n");
		printf("���� ū ���ڰ� �ɷ��ִ�.\n\n");
		printf("1. ���ڸ� ���캻��\n");
		printf("2. ���ڸ� �μ���\n");
		printf("0. ���ư���\n");

		printf(">> ");
		scanf("%d", &menu);

		switch(menu) {
			case 1:
				if(isFindMagnifyingGlass) {
					printf("\n���� ��ܿ� ����ö����� ���ִ� �� ����.\n");
					printf("�ڿ� ���ڰ� �� �ִ°� ������.. �� ������ �ʴ´�.\n\n");
				} else {
					printf("\n���ڿ��� Ư���� ���� ������ �ʴ´�.\n\n");
				}
				break;
			case 2:
				isBrokenFrame = TRUE;
				printf("\n���ڸ� �μ����ȴ�.\n");
				printf("¥�����±���!\n\n");
				system("pause");
				return;
			case 0:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
				break;
		}
		system("pause");
	}
}

void bed() {//2. ħ��
	int menu;

	while(1) {
		system("cls");
		printf("[����]-[ħ��]\n\n");
		printf("�� �� ������ 1�ο� ħ�밡 ��ġ�Ǿ� �ִ�.\n\n");
		printf("1. ħ�� ���� ���캻��\n");
		printf("2. ħ�븦 ���캻��\n");
		printf("3. ������ ���캻��\n");
		printf("0. ���ư���\n");

		printf(">> ");
		scanf("%d", &menu);

		switch(menu) {
			case 1:
				if(isBrokenBed)  {
					printf("\nħ�밡 �μ����� �� �̻� ã�� �� ����.\n\n");
				} else {
					printf("\n��ο��� �ƹ��͵� ������ �ʴ´�.\n");
					printf("�������̶� ������ �����ٵ�..\n\n");
				}
				system("pause");
				break;
			case 2:
				if(isBrokenBed) {
					printf("\nħ�밡 �μ����� �� �̻� ã�� �� ����.\n\n");
				} else {
					system("cls");
					printf("[����]-[ħ��]-[ħ��]\n\n");
					printf("\n���� �����ִ� ���� ����� ���� �̻��� ���� ������ �ʴ´�.\n\n");
					printf("1. ħ�븦 �μ���.\n");
					printf("2. ħ�븦 ������ �д�.\n");
					printf(">> ");
					scanf("%d", &menu);

					switch(menu) {
						case 1:
							isBrokenBed = TRUE;	//ħ�� �μ���
							printf("\n# ħ�밡 ������� �����ȴ�. # \n\n");
							printf("1. ���ظ� ������.\n");
							printf("2. ������ �д�.\n");
							printf(">> ");
							scanf("%d", &menu);

							switch(menu) {
								case 1:
									printf("\n������ ���赵���� �ִ�. ħ�� ���� �����ΰ�?\n");
									printf("���� ��ܿ� ����ϰ� ���ڰ� �����ִ�.\n");
									printf("No.53-49-48-54 ��� �����ִ� �� ����. ��ǰ��ȣ�ΰ�?\n\n");
									break;
								case 2:
									printf("\nġ��� ������. �׳� ����.\n\n");
									break;
							default:
								printf("\n������ ���ߴ�. ���ư���.\n\n");
								break;
							}
							break;
						case 2:
							printf("\n���� ������ �ϴϱ� �������..\n\n");
							break;
						default:
							printf("\n������ ���ߴ�. ���ư���.\n\n");
							break;
					}
				}
				system("pause");
				break;
			case 3:
				system("cls");
				printf("[����]-[ħ��]-[����]\n\n");
				printf("\n���������� Ư���� ���� ������ �ʴ´�.\n\n");
				printf("1. ���� ���� ������\n");
				printf("2. ������ ������ �д�\n");
				printf(">> ");
				scanf("%d", &menu);

				switch(menu) {
					case 1:
						if(isFindGoldKey) {
							printf("\n����� �Ʊ� ã�Ҵ�. �ٸ� ���� ������ �ʴ´�.\n\n");
						} else {
							isFindGoldKey = TRUE;	//�ݻ� ���� ȹ��
							printf("\n���� �ӿ��� �ݻ� ���踦 ã�Ҵ�. �߿��� �ܼ��ΰ�?\n\n");
						}
						break;
					case 2:
						printf("\n���� ������ �ϴϱ� �������..\n\n");
						break;
					default:
						printf("\n������ ���ߴ�. ���ư���.\n\n");
						break;

				}
				system("pause");
				break;
			case 0:
				return;
			default:
				printf("# ERROR # �Է°� ����\n\n");
				system("pause");
		}
	}
}

void fridge(){//3. �����
	int menu;

	while(1) {
		system("cls");
		printf("[����]-[�����]\n\n");
		printf("�� ���� ���ƺ��̴� ����� �ϳ��� �ִ�.\n");
		printf("����� �ȿ��� ���� ��ǰ�� �ִ�.\n\n");
		printf("1. ������ ���캻��\n");
		printf("2. ���İ�Ƽ�� ���캻��\n");
		printf("3. ��ġ�� ���캻��\n");
		printf("4. �ݶ� ���캻��\n");
		printf("5. ������ ���캻��\n");
		printf("0. ���ư���\n");

		printf(">> ");
		scanf("%d", &menu);

		switch(menu) {
			case 1:
				printf("\n��������� 2020��? ��¥�� ���� ������.\n");
				printf("\n�̰� ������ ���ߵ��� �ɸ�����?\n\n");
				break;
			case 2:
				printf("\n������ ���� �ʴ�. ���� �� ������..\n\n");
				break;
			case 3:
				printf("\n����� �����Ǽ� �׷���? ��ġ�� �� ������.\n\n");
				break;
			case 4:
				printf("\nź���� �� �����ִ�. �ݶ�� ź���� �����ε�..\n\n");
				break;
			case 5:
				printf("\n���� ���� ��������!\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
				break;
		}
		system("pause");
	}
}

void safebox(){//4. �ݰ�
	int menu;

	while(1) {
		system("cls");
		printf("[����]-[�ݰ�]\n\n");
		printf("��û �ܴ��غ��̴� �ݰ��.\n\n");
		printf("1. �ݰ� ����\n");
		printf("2. �ݰ� �μ���\n");
		printf("3. �ݰ� ���캻��\n");
		printf("0. ���ư���\n");

		printf(">> ");
		scanf("%d", &menu);

		switch(menu) {
			case 1:
				if(isOpenSafebox) {
					printf("\n�ݰ�� �̹� ��� �ƹ��͵� ����.\n\n");
					break;
				}
				if(isFindGoldKey && isFindSilverKey) {
					isFindMagnifyingGlass = TRUE;	//������ ����
					isOpenSafebox = TRUE;	//�ݰ� ������
					printf("\n�ݰ� �ȿ��� �޸����� �����⸦ ã�Ҵ�.\n");
					printf("�޸������� ���� �۾��� ���� �����ִ�.\n\n");
					printf("'����ٴ� ���� ����� ����, ����ִٴ� ���� �Ǹ��͵� ����.\n");
					printf("�׹��̶� ���� ���� �����ϱ�..'\n\n");
					printf("���� ������...?\n\n");
				} else {
					printf("\n�ݰ� ���� ���� �ʿ��� ���踦 ���� ���� ���� �� ����.\n\n");
				}
				break;
			case 2:
				printf("\n���嵵 ���µ� �ݰ� �μ��ٰ�? ���� �ȵ�.\n\n");
				break;
			case 3:
				printf("\n�ݰ� ���� ������ �� ���� �ִ�. Ư���ϱ�..\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
				break;
		}
		system("pause");
	}
}

void closet(){//5. ����
	int menu;

	while(1) {
		system("cls");
		printf("[����]-[����]\n\n");
		printf("�� ������ ���� ä�� ������ ū �����̴�.\n\n");
		printf("1. ������ ���캻��\n");
		printf("2. û������ ���캻��\n");
		printf("3. ����� Ƽ�� ���캻��\n");
		printf("4. �ݹ����� ���캻��\n");
		printf("5. ������ �μ���\n");
		printf("0. ���ư���\n");

		printf(">> ");
		scanf("%d", &menu);

		switch(menu) {
			case 1:
				if(isFindSilverKey) {
					printf("\n���忡���� �� �̻� ã�� ���� ����.\n\n");
				} else {
					isFindSilverKey = TRUE;		//���� ���� ã��
					printf("\n���� ���� �ָӴϿ��� ���� ���踦 ã�Ҵ�.\n\n");
				}
				break;
			case 2:
				printf("\n�ƹ� �͵� ã�� �� ����.\n\n");
				break;
			case 3:
				printf("\nCYBERPUNK ��� ������ �ִ�. �ڿ� ���ڴ� �������� ������ �ʴ´�.\n\n");
				break;
			case 4:
				printf("\n�ƹ� �͵� ã�� �� ����.\n\n");
				break;
			case 5:
				printf("\n������ �ʹ� Ŀ�� ������ ������ �μ��� ���� �� ����.\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
				break;
		}
		system("pause");
	}
}

void door(){//6. ���Թ�
	int menu;

	while(1) {
		system("cls");
		printf("[����]-[���Թ�]\n\n");
		printf("�� ���� ���� �� �ִ� ������ ���� �� ����.\n");
		printf("�� �տ��� ���̿� � �۱͵� �����ִ�.\n\n");

		printf("1. ���̸� ���캻��\n");
		printf("2. ��й�ȣ�� �Է��Ѵ�\n");
		printf("0. ���ư���\n");

		printf(">> ");
		scanf("%d", &menu);

		switch(menu) {
			case 1:
				printf("\n���̿��� ���� ���� ���� �����ִ�. �ϱ��ΰ�?\n\n");
				printf("'CYBERPUNK�� ��� �;��µ� ���� ���ڶ� �� ���� ������.\n");
				printf("�׷��� ���� ��� ���� ���� ���� ��ó �ٴٿ��� �׹��� �ƴµ� �׸����� ���� ������ �ʴ´�.\n");
				printf("���� ��⵵ ���� ������ �ʰ�, ���� ���� ���� ��������.\n");
				printf("������ ���� ��⸦ �Ⱦ� �ܿ� ���� �ϳ��� ��Դµ�.. ��������� ���� �������ȴ�.\n");
				printf("��������� ���� ���� �� �߸������� ������ ������ ���.\n");
				printf("�� ���̷��� ���� ���� �ɱ�..?\n");
				printf("�׳డ ���� �����ϴ� ��ȭ�� �ٽ� ���鼭 ���� ������ �����߰ڴ�.'\n\n");
				break;
			case 2:
				door_password();
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
				break;
		}
		system("pause");
	}
}

void door_password() {
	char pass[5] = "5106", temp[5];

	system("cls");
	printf("\n\n      [ PASSWORD ]\n\n");
	printf(">> ");
	scanf("%s", &temp);

	if(!strcmp(pass, temp)) {
		system("cls");
		printf("\n\n���� ���������ߴ� ���� ������ �Ǿ���.\n\n");
		printf("���� ��� ��� �ӿ��� ���� ���� �� �� �𸣰ڴ�.\n");
		printf("� ����� ���� ���״��� �𸣰�����..\n");
		printf("���� �������� �ʰڴ�.\n\n");
		printf("# THE END #\n\n");
		system("pause");
		exit(0);
	} else {
		printf("\n\n# ERROR # PASSWORD FAIL\n\n");
		return;
	}
}

