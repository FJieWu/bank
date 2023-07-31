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
	label_1:cout << "请选择功能：1、开户 2、登录 3、销户 4、解冻 5、退出" << endl;
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
	cout << "请输入管理密码" << endl;
	string insertPassword = "";
	cin >> insertPassword;
	if (insertPassword == password) {
		cout << "请输入姓名" << endl;
	}
	else {
		cout << "密码输入有误" << endl;
	}
	return 0;
}

Admin::Admin()
{
	password = "123456";
}
