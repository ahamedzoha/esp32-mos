/*
 ESP32 DEVKIT V1 - Mongoose OS
 DHT22 sensor measures are sent to console.
 DHT22 data pin is connnected to GPIO0.
 Publishes weather data to the appropriate topic.
 
 See: 
 - https://mongoose-os.com/docs/quickstart/develop-in-js.md
 - https://mongoose-os.com/docs/mos/api/drivers/dht.md
 - https://mongoose-os.com/docs/mos/api/net/mqtt.md
*/

load('api_config.js');
load('api_dht.js');
load('api_timer.js');
load('api_mqtt.js');

// Telemetry topic must have this name:
let topic = '/devices/' + Cfg.get('device.id') + '/events';

let pin = 4;
let dht = DHT.create(pin, DHT.DHT22);

Timer.set(60000, true, function() { // timer period is in ms
  let msg = JSON.stringify({temperature: dht.getTemp(), humidity: dht.getHumidity()});
  // Publish message with a QoS 1
  // MQTT.pub() returns 1 in case of success, 0 otherwise.
  let ok = MQTT.pub(topic, msg, 1); 
  print(ok, msg);
}, null);