
// Simulated main.c for compteur_cbu with HLW8112 support
#include "hlw8112_driver.h"

void setup() {
    hlw8112_init(P17, P16);  // RX=P17, TX=P16
    configure_led(P24);
    configure_button(P26);
    set_mqtt_interval(500);  // 500ms
    set_device_name("compteur_cbu");
}
