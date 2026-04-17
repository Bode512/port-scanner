/*
#ifdef _WIN32
    - include <winsock2.h>, <ws2tcpip.h>
    - WSAStartup() / WSACleanup()
    - SOCKET type
#else
    - include <sys/socket.h>, <arpa/inet.h>
    - include <netinet/in.h>, <unistd.h>
    - int type para sockets
#endif
- Define: MAX_THREADS, TIMEOUT_MS, MAX_PORTS
*/
#ifndef PLATFORM_H
#define PLATFORM_H
#ifdef _WIN32
    #include <winsock2.h>
    #include <ws2tcpip.h>
    #define CLOSESOCKET closesocket
    typedef SOCKET socket_t;
#else
    #include <sys/socket.h>
    #include <arpa/inet.h>
    #include <netinet/in.h>
    #include <unistd.h>
    #define CLOSESOCKET close
    typedef int socket_t;
#endif
#define MAX_THREADS 100
#define TIMEOUT_MS 500
#define MAX_PORTS 65535
#endif /* PLATFORM_H */

