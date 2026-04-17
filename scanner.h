#ifndef SCANNER_H
#define SCANNER_H

struct result_t
{
    char ip[16];
    int open;
    int port;
    char banner[256];
};

int scan_port(const char* ip,int port,int timeout_ms);
void scan_target(const char* ip, int ports[],struct result_t results[], int timeout_ms);
void sacn_all(char* ips[],int nums_ips,int ports[],int num_ports, int timeout_ms);

#endif //SCANNER_H