#include <cstdlib>
#include <iostream>

#include "client.h"

const std::string SERVER_IP = "127.0.0.1";  // localhost

int main() {
    const char* SERVER_PORT = std::getenv("SERVER_PORT");
    Client::Client cl(SERVER_IP, atoi(SERVER_PORT));
    cl.SendMessage("START");
    cl.SendMessage("Hello, Server!");
    cl.SendMessage("I don't want to be friends anymore");
    cl.SendMessage("STOP");
    return 0;
}