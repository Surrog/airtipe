#ifdef		UNIX
# include	"network/CTCPServer_Unix.h"
#endif

#include	<iostream>

int		main()
{
	TCPServer	serv(22255);

	if (serv.init())
	{
		std::cout << "server opened" << std::endl;
		serv.run();
		serv.close();
		std::cout << "server closed" << std::endl;
	}
	return (0);
}

