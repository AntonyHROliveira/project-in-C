// Author: Your Name
// Date: 2023-10-01

// Bibliotecas padrão em C
#include<stdio.h>// Biblioteca padrão de entrada e saída
#include<stdlib.h>// Biblioteca padrão de alocação de memória
#include<string.h>// Biblioteca padrão de manipulação de strings
#include<math.h>// Biblioteca padrão de funções matemáticas
#include<stdbool.h>// Biblioteca padrão de tipos booleanos
#include<time.h>// Biblioteca padrão de manipulação de tempo
#include<ctype.h>// Biblioteca padrão de manipulação de caracteres
#include<limits.h>// Biblioteca padrão de limites de tipos
#include<assert.h>// Biblioteca padrão de asserções
#include<errno.h>// Biblioteca padrão de manipulação de erros
#include<locale.h>// Biblioteca padrão de localização
#include<signal.h>// Biblioteca padrão de manipulação de sinais
#include<setjmp.h>// Biblioteca padrão de manipulação de saltos
#include<unistd.h>// Biblioteca padrão de chamadas de sistema POSIX
#include<fcntl.h>// Biblioteca padrão de manipulação de arquivos
#include<sys/types.h>// Biblioteca padrão de tipos de sistema
#include<sys/stat.h>// Biblioteca padrão de manipulação de arquivos e diretórios
#include<dirent.h>// Biblioteca padrão de manipulação de diretórios
#include<sys/socket.h>// Biblioteca padrão de manipulação de sockets
#include<netinet/in.h>// Biblioteca padrão de manipulação de endereços de rede
#include<arpa/inet.h>// Biblioteca padrão de manipulação de endereços IP
#include<netdb.h>// Biblioteca padrão de manipulação de nomes de host
#include<sys/time.h>// Biblioteca padrão de manipulação de tempo
#include<sys/resource.h>// Biblioteca padrão de manipulação de recursos do sistema
#include<sys/wait.h>// Biblioteca padrão de manipulação de processos filhos
#include<sys/ipc.h>// Biblioteca padrão de manipulação de IPC
#include<sys/shm.h>// Biblioteca padrão de manipulação de memória compartilhada
#include<sys/msg.h>// Biblioteca padrão de manipulação de mensagens
#include<sys/sem.h>// Biblioteca padrão de manipulação de semáforos
#include<sys/utsname.h>// Biblioteca padrão de manipulação de informações do sistema
#include<sys/statvfs.h>// Biblioteca padrão de manipulação de informações de sistema de arquivos
#include<sys/sysinfo.h>// Biblioteca padrão de manipulação de informações do sistema
#include<sys/epoll.h>// Biblioteca padrão de manipulação de epoll
#include<sys/eventfd.h>// Biblioteca padrão de manipulação de eventos
#include<sys/timerfd.h>// Biblioteca padrão de manipulação de timers
#include<sys/signalfd.h>// Biblioteca padrão de manipulação de sinais
#include<sys/socket.h>// Biblioteca padrão de manipulação de sockets
#include<sys/un.h>// Biblioteca padrão de manipulação de sockets UNIX
#include<sys/select.h>// Biblioteca padrão de manipulação de seleção de sockets
#include<sys/poll.h>// Biblioteca padrão de manipulação de poll
#include<sys/inotify.h>// Biblioteca padrão de manipulação de inotify
#include<sys/vfs.h>// Biblioteca padrão de manipulação de sistema de arquivos
#include<sys/mman.h>// Biblioteca padrão de manipulação de memória mapeada
#include<sys/ioctl.h>// Biblioteca padrão de manipulação de IOCTL
#include<sys/ptrace.h>// Biblioteca padrão de manipulação de ptrace
#include<sys/user.h>// Biblioteca padrão de manipulação de informações de usuário
#include<sys/syscall.h>// Biblioteca padrão de manipulação de chamadas de sistema
#include<sys/auxv.h>// Biblioteca padrão de manipulação de informações auxiliares
#include<sys/capability.h>// Biblioteca padrão de manipulação de capacidades
#include<sys/param.h>// Biblioteca padrão de manipulação de parâmetros do sistema
#include<sys/dir.h>// Biblioteca padrão de manipulação de diretórios
#include<sys/mtio.h>// Biblioteca padrão de manipulação de fitas magnéticas
#include<sys/tty.h>// Biblioteca padrão de manipulação de terminais
#include<sys/termios.h>// Biblioteca padrão de manipulação de terminais
#include<sys/pty.h>// Biblioteca padrão de manipulação de pseudoterminais
#include<sys/termio.h>// Biblioteca padrão de manipulação de terminais