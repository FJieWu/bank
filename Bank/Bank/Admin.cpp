#include "Admin.h"



int Admin::ReadFile()
{
	streambuf *buf;
	ifstream fin;
	buf = cin.rdbuf();
	fin.open("./bank.txt", ios::in);
	cin.rdbuf(fin.rdbuf());
	cin >> userCount;
	cin >> startNum;

	cout << userCount << "  " << startNum << endl;
	fin.close();
	cin.rdbuf(buf);
	return 0;
}

//string Admin::password = "";

int Admin::ShowMain()
{
	int s;
	label_1:cout << "��ѡ���ܣ�1������ 2����¼ 3������ 4���ⶳ 5���˳�" << endl;
	cin >> s;

	cout << s << endl;
	switch (s)
    {
	case 1:
		Open();
		goto label_1;
	default:
		break;
	}
	return 0;
}

int Admin::Open()
{
	cout << "�������������" << endl;
	string insertPassword = "";
	cin >> insertPassword;
	if (insertPassword == password) {
		cout << "����������" << endl;
	}
	else {
		cout << "������������" << endl;
	}
	return 0;
}

Admin::Admin()
{
	password = "123456";
}
