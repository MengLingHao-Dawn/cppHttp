#include "httpConnect.h"

int main() {
	HttpConnect* conn = new HttpConnect();
	conn->getData("127.0.0.1", "/anno/testServletParam", "name=込込");
	//conn->postData("127.0.0.1", "/anno/testRequestBody", "username=込込&age=12");

	system("pause");
	return 0;
}