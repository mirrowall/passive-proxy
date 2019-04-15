#include <stdio.h>
#include <pthread.h>

#include "proxy_engine.h"

pthread_t connect_thread = 0;

int _start_heartbeat_work() {

    return 0;
}

int start_connection(const char *ipaddr, short port, const char *ids) {
    pthread_create(&connect_thread, NULL, _connect_work(), url)
    return 0;
}


int close_connection() {
    return 0;
}
