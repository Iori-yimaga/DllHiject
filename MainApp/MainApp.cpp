// MainApp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <windows.h>

int main() {
	typedef void (*MyFunc)(void);
	MyFunc foo = NULL;
	HMODULE hdll = LoadLibraryA("MainDll.dll");
	if (hdll != NULL) {
		foo = (MyFunc)GetProcAddress(hdll, "MyFunc");
	}
	if (foo != NULL) {
		(*foo)();
	}
	system("pause");
	return 0;
}