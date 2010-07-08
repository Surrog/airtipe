/*
 * Client.hpp
 *
 *  Created on: Jul 5, 2010
 *      Author: Ayden
 */

#ifndef		__CLIENT_HPP__
# define		__CLIENT_HPP__

# include "Graphics.hpp"
# include "NetWork.hpp"
# include "TCPClient.hpp"

class			Client
{
public:
  	Graphics	Wind;
  	NetWork		Net;

public:
  Client();
  ~Client();
  void run();
};

#endif		/* __CLIENT_HPP__ */
