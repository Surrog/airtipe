/*!
 * \file	main.cpp
 * \brief	
 * \author	Bertran Pierre - bertra_b@epitech.eu
 * \version	0.1
 * \date	07/07/2010 19:49:17
 */

#include	<iostream>
#include	"Server.h"

int		main()
{
	Server	server(22255, 16);
	std::cout << "[STARTING] Server started on 127.0.0.1 22255" << std::endl;

	if (server.init())
	{
		std::cout << "[NOTICE] server listening" << std::endl;
		server.run();
	}
	return (0);
}