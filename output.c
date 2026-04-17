/*
- Struct scan_results_t { result_t *results; int count; }
- output_print() → imprime en terminal con colores:
    #ifdef _WIN32
        - SetConsoleTextAttribute()
    #else
        - ANSI escape codes \033[32m verde, \033[31m rojo
    #endif
- output_save_txt() → guarda resultados en .txt
- output_save_csv() → guarda en .csv: ip,puerto,servicio,banner
- Puerto abierto → verde, cerrado → nada, error → rojo
*/
