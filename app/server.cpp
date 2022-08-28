#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

int main()
{
    int socketServer;
    struct sockaddr_in saddr;
    struct sockaddr_in client;
    socklen_t len;
    int socketClient;

    /*make socket*/
    socketServer = socket(AF_INET, SOCK_STREAM, 0);

    /*configuration of socket*/
    saddr.sin_family=AF_INET;
    saddr.sin_port = htons(12345);
    saddr.sin_addr.s_addr = INADDR_ANY;
    bind(socketServer, (struct sockaddr *)&saddr, sizeof(saddr));
    listen(socketServer, 5);
    len = sizeof(client);
    socketClient = accept(socketServer, (struct sockaddr *)&client,&len);
    
    write(socketClient, "HELLO", 5);
    close(socketClient);
    close(socketServer);
    return 0;
}
