#ifndef _dweetESP8266_h_
#define _dweetESP8266_h_

#include <ESP8266WiFi.h>

#define SERVER "dweet.io"
#define PORT 80

typedef struct Value {
  char *id;
  String value_id;
} Value;

class dweet {
   public:
      dweet();
      bool sendAll(char* thing_name);
      String getDweet(char* thing_name, char* key);
      String getTimeDweet(char* thing_name);
      void add(char *key, String value);
      bool wifiConnection(char *ssid, char *pass);
   
   private:
      //char* _thing_name;
      uint8_t maxValues;
      uint8_t currentValue;
      Value * val;
      float parseValue(String body);
      WiFiClient _client; 
};

#endif
