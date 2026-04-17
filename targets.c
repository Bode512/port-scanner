/*
- Struct target_t { char ip[16]; int *ports; int port_count; }
- parse_ip_range() → "192.168.1.1-255" → array de IPs
- parse_cidr() → "192.168.1.0/24" → array de IPs
- parse_ports() → "80,443,1-1024" → array de puertos
- inet_pton() para validar cada IP
- targets_free() → liberar memoria
*/