#pragma once
#include <iostream>
#include <winsock.h>
#include <sstream>

using namespace std;

class HttpConnect {
public:
	HttpConnect();
	~HttpConnect();
	void socketHttp(string host, string request);
	void postData(string host, string path, string post_content);
	void getData(string host, string path, string post_content);
};