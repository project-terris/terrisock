//
// Created by bensoer on 26/04/16.
//

#include <iostream>
#include <SocketAddress.h>
#include <tcp/TCPSocket.h>


using namespace std;
using namespace terrisock;

int main(){

    TCPSocket * socket = new TCPSocket();

    SocketAddress * address = new SocketAddress("localhost", 8001);

    socket->connect(*address);


    return 0;

}