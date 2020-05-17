#include <iostream>
#include <cppStructures.hpp>

class TerminalHandler {
	std::string prompt;
	bool loop;
	std::string* askData(contactStore& cs); 
	void validateEmail(std::string) { };
	void validatePhone(std::string) { };
	void validateNoNum(std::string) { };
	void validateOnlyNum(std::string) { };
	void display(cppContact&) { };
	void displayFound(cppContact*) { };
public:
	TerminalHandler(bool b = true) : loop(b) {}
	void getCommand();
	void consoleAdd(contactStore& cs);
	void consoleEdit(contactStore& cs);
	void consoleDelete(contactStore& cs);
	void consoleSearch(contactStore& cs);
	void displayAll(contactStore& cs) { };
	bool getLoop() { return loop; }
	void setLoop(bool b) { loop = b; }
	std::string lastCommand() { return prompt; }
};
