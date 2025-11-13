#include <WiFi.h>

const char* SSID = "NTNU-IOT";
const char* PASS = "";

void setup() {
  Serial.begin(115200);
  delay(1000);

  WiFi.mode(WIFI_STA);           // Station mode
  WiFi.setAutoReconnect(true);   // Auto-reconnect on drops
  WiFi.persistent(false);        // Don't write creds to flash unless you want to

  Serial.printf("Connecting to %s", SSID);
  WiFi.begin(SSID, PASS);

  // Optional: set static IP (uncomment and edit)
  // IPAddress local(192,168,1,42), gateway(192,168,1,1), subnet(255,255,255,0), dns(1,1,1,1);
  // WiFi.config(local, gateway, subnet, dns);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print('.');
  }
  Serial.println("\nConnected!");
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // Example: ensure we reconnect if AP went away for a while
  static uint32_t t = 0;
  if (millis() - t > 3000) {
    t = millis();
    wl_status_t s = WiFi.status();
    if (s != WL_CONNECTED) {
      Serial.printf("WiFi status %d; reconnecting...\n", s);
      WiFi.reconnect();
    }
  }
}


