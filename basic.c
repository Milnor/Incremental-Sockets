#include <sys/socket.h>
#include <stdio.h>

int main()
{
    int listen_fd;
    listen_fd = socket(AF_INET, SOCK_STREAM, 0);

    bind(listen_fd, 
}
