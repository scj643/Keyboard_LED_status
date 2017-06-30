#include <X11/Xlib.h>
#include <iostream>
#include <unistd.h>
#include "json.hpp"
#include "led.h"

using json = nlohmann::json;
using std::string;
using std::cout;
using std::endl;


string tojson(string item, bool state)
{
	json out;
	out["full_text"] = item;
	if (state)
	{
		out["color"] = "#00ff00";
	}
	else
	{
		out["color"] = "#ff0000";
	}
	return out.dump();
}
int main()
{
    cout << "{\"version\":1}" << endl << "[[]," << endl;
    const string num = "NUM";
    while (true)
    {

    	cout << "[" << tojson(num, is_numlock_activated()) << "]," << endl;
    	usleep(100000);
    }
}
/*
int main()
{
	cout << "Hello world";
	while (true)
	{
		cout << "Caps lock state: " << is_numlock_activated() << endl;
		usleep(1000211);
	}
}
*/