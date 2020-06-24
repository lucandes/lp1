#ifndef APP_H
#define APP_H

#include "diary.h"
#include <string>
#include <iostream>

struct App {
	Diary diary;

	App(const std::string &filename);
	int run(int argc, char *argv[]);
	int check_action(const std::string &action, int argc, char *argv[]);
	void add();
	void add(const std::string &message);
	void list_messages();
	int show_usage(const std::string &program_name);
};

#endif 