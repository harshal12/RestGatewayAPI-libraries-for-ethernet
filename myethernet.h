int ethernet_open_from_server(char* IPv4_adderess,int port_no);//It returns socket fd if successfull else -1
int ethernet_send_to_client(int eth_fd,char* buffer,int buffer_len,int*client_soc_fd); 
int ethernet_recv_from_client(int eth_fd,char* buffer,int buffer_len, int *client_soc_fd);//It returns How many bytes are successfully received
int ethernet_close(int eth_fd);//It returns 0 if  successful
int ethernet_open_from_client(char* IPv4_adderess,int port_no);
int ethernet_send_to_server(int eth_fd,char* buffer,int buffer_len);
int ethernet_recv_from_server(int eth_fd,char* buffer,int buffer_len);
