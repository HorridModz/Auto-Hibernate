/*
AutoHibernate - simple script to automatically hibernate PC (without asking) at a specified time

1. Change hibernate hour and minute (military time)
2. Compile to exe with command: cd C:/Users/zachy/Downloads ; g++ -o AutoHibernate.exe AutoHibernate.cpp -mwindows -lPowrprof
3. Create shortcut to exe (C:/Users/zachy/Downloads/AutoHibernate.exe)
4. Enable run on startup by copying shortcut (C:\Users\zachy\Downloads\AutoHibernate.exe.lnk) to Startup folder (C:\Users\zachy\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup)
*/

#include <chrono>
#include <windows.h>
#include <powrprof.h>

int hibernate_hour = 23; // Military Time
int hibernate_minute = 00;

int main() {
	int hour;
	int minute;
	while (true) {
		do {
			Sleep(60000);
			auto now = std::chrono::system_clock::now();
			std::time_t current_time = std::chrono::system_clock::to_time_t(now);
			std::tm* time_info = std::localtime(&current_time);
			hour = time_info->tm_hour;
			minute = time_info->tm_min;
		} while (!(hour == hibernate_hour && minute == hibernate_minute));
		SetSuspendState(TRUE, FALSE, FALSE);
	}
	return 1;
}