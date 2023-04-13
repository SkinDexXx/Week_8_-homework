
#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
void outHorizontalLine(int inCount, char symbol, int time) {
	for (int i = 0; i < inCount; i++) {
		cout << symbol;
		Sleep(time);
	}
}
void outVerticalLine(int inCount, char symbol,int time) {
	for (int i = 0; i < inCount; i++) {
		cout << "\t" << symbol << endl;
		Sleep(time);
	}
}
void outKubik(int kub) {
	switch (kub)
	{
	case 1: {
		cout << "\t" << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
		cout << "\t" << (char)186 << "       " << (char)186 << endl;
		cout << "\t" << (char)186 << "   o   " << (char)186 << endl;
		cout << "\t" << (char)186 << "       " << (char)186 << endl;
		cout << "\t" << (char)200 << (char)205 << (char)205 << (char)205 <<(char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
		break;
		}
	case 2: {
		cout << "\t" << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
		cout << "\t" << (char)186 << " o     " << (char)186 << endl;
		cout << "\t" << (char)186 << "       " << (char)186 << endl;
		cout << "\t" << (char)186 << "     o " << (char)186 << endl;
		cout << "\t" << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
		break;
	}
	case 3: {
		cout << "\t" << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
		cout << "\t" << (char)186 << " o     " << (char)186 << endl;
		cout << "\t" << (char)186 << "   o   " << (char)186 << endl;
		cout << "\t" << (char)186 << "     o " << (char)186 << endl;
		cout << "\t" << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
		break;
	}
	case 4: {
		cout << "\t" << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
		cout << "\t" << (char)186 << " o   o " << (char)186 << endl;
		cout << "\t" << (char)186 << "       " << (char)186 << endl;
		cout << "\t" << (char)186 << " o   o " << (char)186 << endl;
		cout << "\t" << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
		break;
	}
	case 5: {
		cout << "\t" << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
		cout << "\t" << (char)186 << " o   o " << (char)186 << endl;
		cout << "\t" << (char)186 << "   o   " << (char)186 << endl;
		cout << "\t" << (char)186 << " o   o " << (char)186 << endl;
		cout << "\t" << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
		break;
	}
	case 6: {
		cout << "\t" << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
		cout << "\t" << (char)186 << " o o o " << (char)186 << endl;
		cout << "\t" << (char)186 << "       " << (char)186 << endl;
		cout << "\t" << (char)186 << " o o o " << (char)186 << endl;
		cout << "\t" << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
		break;
	}
		 
	}
}
int main()
{
	setlocale(LC_ALL, "Ukrainian");
//  /*Task 1 Nаписати програму, яка виводить на екран
//	лінію заданим символом, вертикальну або горизонтальну, причому лінія може виводитися швидко, нормально
//	і повільно. Спілкування з користувачем організувати через меню.*/
//	int countChar, time;
//	char inChar, menu;
//	
//	while (menu == 'v' || menu == 'V' || menu == 'h' || menu == 'H')
//	do{
//		cout << "Введiть символ: "; cin >> inChar;
//		cout << "Введiть кiлькiсть символiв: "; cin >> countChar;
//		cout << "Виберiть як виводити символ - горизонтально чи вертикально " << endl;
//		cout << "v - вертикально\t h - горизонтально" << endl; cin >> menu;
//		cout << "Введiть швидкiсть в тисячних долях секунди: "; cin >> time;
//		if (menu == 'v' || menu == 'V')
//		{
//			outVerticalLine(countChar, inChar,time);
//		}
//		if (menu == 'h' || menu == 'H')
//		{
//			cout << "\n\n\n";
//			outHorizontalLine(countChar, inChar, time);
//		}
//	} while (1);
//

	/*Task 2 Написати гру «Кубики». Користувач і комп'ютер по черзі кидають 2 кубики. Переможець той, у кого
	за результатами 3х кидків сума більше. Передбачити красивий інтерфейс гри.*/
	srand(time(NULL));
	int kub1, kub2, compSum = 0, playerSum = 0, player, comp, raund = 0;
	
	do {
		++raund;
		cout << "\n\nRaund - " << raund;
		cout << "\n\nPlayer: \n";
		system("pause");
		kub1 = rand() % 6 + 1;
		outKubik(kub1);
		kub2 = rand() % 6 + 1;
		outKubik(kub2);
		playerSum += kub1 + kub2;
		cout << "Computer: \n";
		kub1 = rand() % 6 + 1;
		outKubik(kub1);
		kub2 = rand() % 6 + 1;
		outKubik(kub2);
		compSum += kub1 + kub2;
		system("pause");
	} while (raund != 3);
	cout << "Score: \nPlayer - " << playerSum << "\nComputer - " << compSum << endl;
	playerSum > compSum ? cout << "\n\nWin player!!!\n\n" : playerSum < compSum ? cout << "\n\nWin computer!!!\n\n" : cout << "\n\nDraw!\n\n";
}

