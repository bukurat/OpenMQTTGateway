void trc(String msg);
void revert_hex_data(char * in, char * out, int l);
void extract_char(char * token_char, char * subset, int start ,int l, boolean reverse, boolean isNumber);
void receivingMQTT(char * topicOri, char * datacallback);
int getMin();
void storeValue(long MQTTvalue);
