#include "httpConnect.h"

int main() {
	HttpConnect* conn = new HttpConnect();
	conn->getData("127.0.0.1", "/anno/testServletParam", "name=����");
	//conn->postData("127.0.0.1", "/anno/testRequestBody", "username=����&age=12");

	system("pause");
	return 0;
}