/*
- Struct result_t { char ip[16]; int port; int open; char banner[256]; }
- scan_port() → intenta conectar a ip:puerto
    #ifdef _WIN32
        - socket() con SOCKET type
        - connect() con timeout via select()
        - closesocket()
    #else
        - socket() con int
        - fcntl() para non-blocking
        - connect() + select() para timeout
        - close()
    #endif
- scan_target() → recorre todos los puertos de un target
- scan_all() → recorre todos los targets
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <windows.h>
#pragma comment(lib, "ws2_32.lib")
typedef SOCKET socket_t;
#define CLOSE_SOCKET closesocket
#define SET_SOCKOPT_OPT(a) (char*)&(a)
#include "scanner.h"


int scan_port(const char* ip, int port, int timeout_ms) {
    
}

void scan_target(const char* ip, int ports[], int num_ports, struct result_t results[], int timeout_ms) {
    
}

void scan_all(char* ips[], int num_ips, int ports[], int num_ports, int timeout_ms) {
    
}   