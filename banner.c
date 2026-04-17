/*
- grab_banner() → después de conectar, envía string vacío o HTTP GET
- recv() con timeout para capturar respuesta
- Detectar servicio por puerto:
    - 21  → FTP
    - 22  → SSH
    - 80  → HTTP → enviar "GET / HTTP/1.0\r\n\r\n"
    - 443 → HTTPS
    - 3306 → MySQL
- Limpiar banner: quitar \r\n, caracteres raros
- Devuelve char* con el banner limpio
*/