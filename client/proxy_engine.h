#ifndef PROXY_ENGINE_
#define PROXY_ENGINE_

/**
 * @brief start_connect_channel
 *          start server connection, to get task, this will be a long connection
 * @param url, the center config url, this will be fixed, so the client can
 * @return
 */
int start_connection(const char *ipaddr, short port, const char *ids);

/**
 * @brief close_connection
 * @return
 */
int close_connection();

#endif //PROXY_ENGINE_
