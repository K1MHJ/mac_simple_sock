//#include "../include/shape.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>

int main() 
{
    int sock;
    sock = socket(AF_INET, SOCK_STREAM, 0);
    if(sock < 0){
        std::cout << "socket failed" <<std::endl;
        return 1;
    }
    return 0;
}
