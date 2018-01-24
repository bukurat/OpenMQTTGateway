#ifndef _PROTOTYPES_
#define _PROTOTYPES_

void trc(String msg);
void revert_hex_data(char * in, char * out, int l);
void extract_char(char * token_char, char * subset, int start ,int l, boolean reverse, boolean isNumber);
void receivingMQTT(char * topicOri, char * datacallback);
int getMin();
void storeValue(long MQTTvalue);
void setup_ethernet();
boolean isAduplicate(long value);
void setupRF();
void setup_wifi();
void setupIR();
void setupBT();
boolean RFtoMQTT();
boolean IRtoMQTT();
boolean BTtoMQTT();
void MQTTtoRF(char * topicOri, char * datacallback);
void MQTTtoIR(char * topicOri, char * datacallback);

#endif //_PROTOTYPES_
