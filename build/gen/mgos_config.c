/* clang-format off */
/*
 * Generated file - do not edit.
 * Command: /data/fwbuild-volumes/2.14.0/apps/app1/esp32/build_contexts/build_ctx_753129166/deps/modules/mongoose-os/tools/mgos_gen_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/data/fwbuild-volumes/2.14.0/apps/app1/esp32/build_contexts/build_ctx_753129166/build/gen/ /data/fwbuild-volumes/2.14.0/apps/app1/esp32/build_contexts/build_ctx_753129166/deps/modules/mongoose-os/src/mgos_debug_udp_config.yaml /data/fwbuild-volumes/2.14.0/apps/app1/esp32/build_contexts/build_ctx_753129166/deps/modules/mongoose-os/platforms/esp32/src/esp32_sys_config.yaml /data/fwbuild-volumes/2.14.0/apps/app1/esp32/build_contexts/build_ctx_753129166/build/gen/mos_conf_schema.yml
 */

#include "mgos_config.h"

#include <stddef.h>

#include "mgos_config_util.h"

const struct mgos_conf_entry mgos_config_schema_[411] = {
  {.type = CONF_TYPE_OBJECT, .key = "", .offset = 0, .num_desc = 410},
  {.type = CONF_TYPE_OBJECT, .key = "debug", .offset = offsetof(struct mgos_config, debug), .num_desc = 10},
  {.type = CONF_TYPE_STRING, .key = "udp_log_addr", .offset = offsetof(struct mgos_config, debug.udp_log_addr)},
  {.type = CONF_TYPE_INT, .key = "mbedtls_level", .offset = offsetof(struct mgos_config, debug.mbedtls_level)},
  {.type = CONF_TYPE_INT, .key = "level", .offset = offsetof(struct mgos_config, debug.level)},
  {.type = CONF_TYPE_STRING, .key = "file_level", .offset = offsetof(struct mgos_config, debug.file_level)},
  {.type = CONF_TYPE_INT, .key = "stdout_uart", .offset = offsetof(struct mgos_config, debug.stdout_uart)},
  {.type = CONF_TYPE_INT, .key = "stderr_uart", .offset = offsetof(struct mgos_config, debug.stderr_uart)},
  {.type = CONF_TYPE_INT, .key = "factory_reset_gpio", .offset = offsetof(struct mgos_config, debug.factory_reset_gpio)},
  {.type = CONF_TYPE_STRING, .key = "mg_mgr_hexdump_file", .offset = offsetof(struct mgos_config, debug.mg_mgr_hexdump_file)},
  {.type = CONF_TYPE_STRING, .key = "stdout_topic", .offset = offsetof(struct mgos_config, debug.stdout_topic)},
  {.type = CONF_TYPE_STRING, .key = "stderr_topic", .offset = offsetof(struct mgos_config, debug.stderr_topic)},
  {.type = CONF_TYPE_OBJECT, .key = "sys", .offset = offsetof(struct mgos_config, sys), .num_desc = 16},
  {.type = CONF_TYPE_INT, .key = "esp32_adc_vref", .offset = offsetof(struct mgos_config, sys.esp32_adc_vref)},
  {.type = CONF_TYPE_INT, .key = "esp32_adc_width", .offset = offsetof(struct mgos_config, sys.esp32_adc_width)},
  {.type = CONF_TYPE_OBJECT, .key = "atca", .offset = offsetof(struct mgos_config, sys.atca), .num_desc = 4},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, sys.atca.enable)},
  {.type = CONF_TYPE_INT, .key = "i2c_bus", .offset = offsetof(struct mgos_config, sys.atca.i2c_bus)},
  {.type = CONF_TYPE_INT, .key = "i2c_addr", .offset = offsetof(struct mgos_config, sys.atca.i2c_addr)},
  {.type = CONF_TYPE_INT, .key = "ecdh_slots_mask", .offset = offsetof(struct mgos_config, sys.atca.ecdh_slots_mask)},
  {.type = CONF_TYPE_STRING, .key = "tz_spec", .offset = offsetof(struct mgos_config, sys.tz_spec)},
  {.type = CONF_TYPE_INT, .key = "wdt_timeout", .offset = offsetof(struct mgos_config, sys.wdt_timeout)},
  {.type = CONF_TYPE_STRING, .key = "pref_ota_lib", .offset = offsetof(struct mgos_config, sys.pref_ota_lib)},
  {.type = CONF_TYPE_OBJECT, .key = "mount", .offset = offsetof(struct mgos_config, sys.mount), .num_desc = 5},
  {.type = CONF_TYPE_STRING, .key = "path", .offset = offsetof(struct mgos_config, sys.mount.path)},
  {.type = CONF_TYPE_STRING, .key = "dev_type", .offset = offsetof(struct mgos_config, sys.mount.dev_type)},
  {.type = CONF_TYPE_STRING, .key = "dev_opts", .offset = offsetof(struct mgos_config, sys.mount.dev_opts)},
  {.type = CONF_TYPE_STRING, .key = "fs_type", .offset = offsetof(struct mgos_config, sys.mount.fs_type)},
  {.type = CONF_TYPE_STRING, .key = "fs_opts", .offset = offsetof(struct mgos_config, sys.mount.fs_opts)},
  {.type = CONF_TYPE_OBJECT, .key = "i2c", .offset = offsetof(struct mgos_config, i2c), .num_desc = 6},
  {.type = CONF_TYPE_INT, .key = "unit_no", .offset = offsetof(struct mgos_config, i2c.unit_no)},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, i2c.enable)},
  {.type = CONF_TYPE_INT, .key = "freq", .offset = offsetof(struct mgos_config, i2c.freq)},
  {.type = CONF_TYPE_BOOL, .key = "debug", .offset = offsetof(struct mgos_config, i2c.debug)},
  {.type = CONF_TYPE_INT, .key = "sda_gpio", .offset = offsetof(struct mgos_config, i2c.sda_gpio)},
  {.type = CONF_TYPE_INT, .key = "scl_gpio", .offset = offsetof(struct mgos_config, i2c.scl_gpio)},
  {.type = CONF_TYPE_OBJECT, .key = "i2c1", .offset = offsetof(struct mgos_config, i2c1), .num_desc = 6},
  {.type = CONF_TYPE_INT, .key = "unit_no", .offset = offsetof(struct mgos_config, i2c1.unit_no)},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, i2c1.enable)},
  {.type = CONF_TYPE_INT, .key = "freq", .offset = offsetof(struct mgos_config, i2c1.freq)},
  {.type = CONF_TYPE_BOOL, .key = "debug", .offset = offsetof(struct mgos_config, i2c1.debug)},
  {.type = CONF_TYPE_INT, .key = "sda_gpio", .offset = offsetof(struct mgos_config, i2c1.sda_gpio)},
  {.type = CONF_TYPE_INT, .key = "scl_gpio", .offset = offsetof(struct mgos_config, i2c1.scl_gpio)},
  {.type = CONF_TYPE_OBJECT, .key = "device", .offset = offsetof(struct mgos_config, device), .num_desc = 3},
  {.type = CONF_TYPE_STRING, .key = "id", .offset = offsetof(struct mgos_config, device.id)},
  {.type = CONF_TYPE_STRING, .key = "license", .offset = offsetof(struct mgos_config, device.license)},
  {.type = CONF_TYPE_STRING, .key = "mac", .offset = offsetof(struct mgos_config, device.mac)},
  {.type = CONF_TYPE_STRING, .key = "conf_acl", .offset = offsetof(struct mgos_config, conf_acl)},
  {.type = CONF_TYPE_OBJECT, .key = "mqtt", .offset = offsetof(struct mgos_config, mqtt), .num_desc = 21},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mqtt.enable)},
  {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, mqtt.server)},
  {.type = CONF_TYPE_STRING, .key = "client_id", .offset = offsetof(struct mgos_config, mqtt.client_id)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, mqtt.user)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, mqtt.pass)},
  {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_min", .offset = offsetof(struct mgos_config, mqtt.reconnect_timeout_min)},
  {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_max", .offset = offsetof(struct mgos_config, mqtt.reconnect_timeout_max)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, mqtt.ssl_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, mqtt.ssl_key)},
  {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, mqtt.ssl_ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cipher_suites", .offset = offsetof(struct mgos_config, mqtt.ssl_cipher_suites)},
  {.type = CONF_TYPE_STRING, .key = "ssl_psk_identity", .offset = offsetof(struct mgos_config, mqtt.ssl_psk_identity)},
  {.type = CONF_TYPE_STRING, .key = "ssl_psk_key", .offset = offsetof(struct mgos_config, mqtt.ssl_psk_key)},
  {.type = CONF_TYPE_BOOL, .key = "clean_session", .offset = offsetof(struct mgos_config, mqtt.clean_session)},
  {.type = CONF_TYPE_INT, .key = "keep_alive", .offset = offsetof(struct mgos_config, mqtt.keep_alive)},
  {.type = CONF_TYPE_STRING, .key = "will_topic", .offset = offsetof(struct mgos_config, mqtt.will_topic)},
  {.type = CONF_TYPE_STRING, .key = "will_message", .offset = offsetof(struct mgos_config, mqtt.will_message)},
  {.type = CONF_TYPE_INT, .key = "max_qos", .offset = offsetof(struct mgos_config, mqtt.max_qos)},
  {.type = CONF_TYPE_INT, .key = "recv_mbuf_limit", .offset = offsetof(struct mgos_config, mqtt.recv_mbuf_limit)},
  {.type = CONF_TYPE_BOOL, .key = "require_time", .offset = offsetof(struct mgos_config, mqtt.require_time)},
  {.type = CONF_TYPE_BOOL, .key = "cloud_events", .offset = offsetof(struct mgos_config, mqtt.cloud_events)},
  {.type = CONF_TYPE_OBJECT, .key = "mqtt1", .offset = offsetof(struct mgos_config, mqtt1), .num_desc = 21},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mqtt1.enable)},
  {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, mqtt1.server)},
  {.type = CONF_TYPE_STRING, .key = "client_id", .offset = offsetof(struct mgos_config, mqtt1.client_id)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, mqtt1.user)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, mqtt1.pass)},
  {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_min", .offset = offsetof(struct mgos_config, mqtt1.reconnect_timeout_min)},
  {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_max", .offset = offsetof(struct mgos_config, mqtt1.reconnect_timeout_max)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, mqtt1.ssl_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, mqtt1.ssl_key)},
  {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, mqtt1.ssl_ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cipher_suites", .offset = offsetof(struct mgos_config, mqtt1.ssl_cipher_suites)},
  {.type = CONF_TYPE_STRING, .key = "ssl_psk_identity", .offset = offsetof(struct mgos_config, mqtt1.ssl_psk_identity)},
  {.type = CONF_TYPE_STRING, .key = "ssl_psk_key", .offset = offsetof(struct mgos_config, mqtt1.ssl_psk_key)},
  {.type = CONF_TYPE_BOOL, .key = "clean_session", .offset = offsetof(struct mgos_config, mqtt1.clean_session)},
  {.type = CONF_TYPE_INT, .key = "keep_alive", .offset = offsetof(struct mgos_config, mqtt1.keep_alive)},
  {.type = CONF_TYPE_STRING, .key = "will_topic", .offset = offsetof(struct mgos_config, mqtt1.will_topic)},
  {.type = CONF_TYPE_STRING, .key = "will_message", .offset = offsetof(struct mgos_config, mqtt1.will_message)},
  {.type = CONF_TYPE_INT, .key = "max_qos", .offset = offsetof(struct mgos_config, mqtt1.max_qos)},
  {.type = CONF_TYPE_INT, .key = "recv_mbuf_limit", .offset = offsetof(struct mgos_config, mqtt1.recv_mbuf_limit)},
  {.type = CONF_TYPE_BOOL, .key = "require_time", .offset = offsetof(struct mgos_config, mqtt1.require_time)},
  {.type = CONF_TYPE_BOOL, .key = "cloud_events", .offset = offsetof(struct mgos_config, mqtt1.cloud_events)},
  {.type = CONF_TYPE_OBJECT, .key = "shadow", .offset = offsetof(struct mgos_config, shadow), .num_desc = 4},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, shadow.enable)},
  {.type = CONF_TYPE_STRING, .key = "lib", .offset = offsetof(struct mgos_config, shadow.lib)},
  {.type = CONF_TYPE_BOOL, .key = "ota_enable", .offset = offsetof(struct mgos_config, shadow.ota_enable)},
  {.type = CONF_TYPE_BOOL, .key = "autocommit", .offset = offsetof(struct mgos_config, shadow.autocommit)},
  {.type = CONF_TYPE_OBJECT, .key = "aws", .offset = offsetof(struct mgos_config, aws), .num_desc = 5},
  {.type = CONF_TYPE_STRING, .key = "thing_name", .offset = offsetof(struct mgos_config, aws.thing_name)},
  {.type = CONF_TYPE_OBJECT, .key = "greengrass", .offset = offsetof(struct mgos_config, aws.greengrass), .num_desc = 3},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, aws.greengrass.enable)},
  {.type = CONF_TYPE_INT, .key = "reconnect_timeout_min", .offset = offsetof(struct mgos_config, aws.greengrass.reconnect_timeout_min)},
  {.type = CONF_TYPE_INT, .key = "reconnect_timeout_max", .offset = offsetof(struct mgos_config, aws.greengrass.reconnect_timeout_max)},
  {.type = CONF_TYPE_OBJECT, .key = "sntp", .offset = offsetof(struct mgos_config, sntp), .num_desc = 5},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, sntp.enable)},
  {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, sntp.server)},
  {.type = CONF_TYPE_INT, .key = "retry_min", .offset = offsetof(struct mgos_config, sntp.retry_min)},
  {.type = CONF_TYPE_INT, .key = "retry_max", .offset = offsetof(struct mgos_config, sntp.retry_max)},
  {.type = CONF_TYPE_INT, .key = "update_interval", .offset = offsetof(struct mgos_config, sntp.update_interval)},
  {.type = CONF_TYPE_OBJECT, .key = "azure", .offset = offsetof(struct mgos_config, azure), .num_desc = 9},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, azure.enable)},
  {.type = CONF_TYPE_STRING, .key = "cs", .offset = offsetof(struct mgos_config, azure.cs)},
  {.type = CONF_TYPE_INT, .key = "token_ttl", .offset = offsetof(struct mgos_config, azure.token_ttl)},
  {.type = CONF_TYPE_STRING, .key = "host_name", .offset = offsetof(struct mgos_config, azure.host_name)},
  {.type = CONF_TYPE_STRING, .key = "device_id", .offset = offsetof(struct mgos_config, azure.device_id)},
  {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, azure.cert)},
  {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, azure.key)},
  {.type = CONF_TYPE_BOOL, .key = "enable_cm", .offset = offsetof(struct mgos_config, azure.enable_cm)},
  {.type = CONF_TYPE_BOOL, .key = "enable_dm", .offset = offsetof(struct mgos_config, azure.enable_dm)},
  {.type = CONF_TYPE_OBJECT, .key = "bt", .offset = offsetof(struct mgos_config, bt), .num_desc = 14},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, bt.enable)},
  {.type = CONF_TYPE_STRING, .key = "dev_name", .offset = offsetof(struct mgos_config, bt.dev_name)},
  {.type = CONF_TYPE_BOOL, .key = "adv_enable", .offset = offsetof(struct mgos_config, bt.adv_enable)},
  {.type = CONF_TYPE_STRING, .key = "scan_rsp_data_hex", .offset = offsetof(struct mgos_config, bt.scan_rsp_data_hex)},
  {.type = CONF_TYPE_BOOL, .key = "keep_enabled", .offset = offsetof(struct mgos_config, bt.keep_enabled)},
  {.type = CONF_TYPE_BOOL, .key = "allow_pairing", .offset = offsetof(struct mgos_config, bt.allow_pairing)},
  {.type = CONF_TYPE_INT, .key = "max_paired_devices", .offset = offsetof(struct mgos_config, bt.max_paired_devices)},
  {.type = CONF_TYPE_BOOL, .key = "random_address", .offset = offsetof(struct mgos_config, bt.random_address)},
  {.type = CONF_TYPE_INT, .key = "gatt_mtu", .offset = offsetof(struct mgos_config, bt.gatt_mtu)},
  {.type = CONF_TYPE_OBJECT, .key = "gatts", .offset = offsetof(struct mgos_config, bt.gatts), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "min_sec_level", .offset = offsetof(struct mgos_config, bt.gatts.min_sec_level)},
  {.type = CONF_TYPE_BOOL, .key = "require_pairing", .offset = offsetof(struct mgos_config, bt.gatts.require_pairing)},
  {.type = CONF_TYPE_BOOL, .key = "debug_svc_enable", .offset = offsetof(struct mgos_config, bt.debug_svc_enable)},
  {.type = CONF_TYPE_INT, .key = "debug_svc_sec_level", .offset = offsetof(struct mgos_config, bt.debug_svc_sec_level)},
  {.type = CONF_TYPE_OBJECT, .key = "update", .offset = offsetof(struct mgos_config, update), .num_desc = 9},
  {.type = CONF_TYPE_INT, .key = "timeout", .offset = offsetof(struct mgos_config, update.timeout)},
  {.type = CONF_TYPE_INT, .key = "commit_timeout", .offset = offsetof(struct mgos_config, update.commit_timeout)},
  {.type = CONF_TYPE_STRING, .key = "url", .offset = offsetof(struct mgos_config, update.url)},
  {.type = CONF_TYPE_INT, .key = "interval", .offset = offsetof(struct mgos_config, update.interval)},
  {.type = CONF_TYPE_STRING, .key = "extra_http_headers", .offset = offsetof(struct mgos_config, update.extra_http_headers)},
  {.type = CONF_TYPE_STRING, .key = "ssl_ca_file", .offset = offsetof(struct mgos_config, update.ssl_ca_file)},
  {.type = CONF_TYPE_STRING, .key = "ssl_client_cert_file", .offset = offsetof(struct mgos_config, update.ssl_client_cert_file)},
  {.type = CONF_TYPE_STRING, .key = "ssl_server_name", .offset = offsetof(struct mgos_config, update.ssl_server_name)},
  {.type = CONF_TYPE_BOOL, .key = "enable_post", .offset = offsetof(struct mgos_config, update.enable_post)},
  {.type = CONF_TYPE_OBJECT, .key = "rpc", .offset = offsetof(struct mgos_config, rpc), .num_desc = 36},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.enable)},
  {.type = CONF_TYPE_INT, .key = "max_frame_size", .offset = offsetof(struct mgos_config, rpc.max_frame_size)},
  {.type = CONF_TYPE_INT, .key = "max_queue_length", .offset = offsetof(struct mgos_config, rpc.max_queue_length)},
  {.type = CONF_TYPE_INT, .key = "default_out_channel_idle_close_timeout", .offset = offsetof(struct mgos_config, rpc.default_out_channel_idle_close_timeout)},
  {.type = CONF_TYPE_STRING, .key = "acl_file", .offset = offsetof(struct mgos_config, rpc.acl_file)},
  {.type = CONF_TYPE_STRING, .key = "auth_domain", .offset = offsetof(struct mgos_config, rpc.auth_domain)},
  {.type = CONF_TYPE_STRING, .key = "auth_file", .offset = offsetof(struct mgos_config, rpc.auth_file)},
  {.type = CONF_TYPE_OBJECT, .key = "ws", .offset = offsetof(struct mgos_config, rpc.ws), .num_desc = 8},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.ws.enable)},
  {.type = CONF_TYPE_STRING, .key = "server_address", .offset = offsetof(struct mgos_config, rpc.ws.server_address)},
  {.type = CONF_TYPE_INT, .key = "reconnect_interval_min", .offset = offsetof(struct mgos_config, rpc.ws.reconnect_interval_min)},
  {.type = CONF_TYPE_INT, .key = "reconnect_interval_max", .offset = offsetof(struct mgos_config, rpc.ws.reconnect_interval_max)},
  {.type = CONF_TYPE_STRING, .key = "ssl_server_name", .offset = offsetof(struct mgos_config, rpc.ws.ssl_server_name)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, rpc.ws.ssl_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, rpc.ws.ssl_key)},
  {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, rpc.ws.ssl_ca_cert)},
  {.type = CONF_TYPE_OBJECT, .key = "azure", .offset = offsetof(struct mgos_config, rpc.azure), .num_desc = 1},
  {.type = CONF_TYPE_BOOL, .key = "enable_dm", .offset = offsetof(struct mgos_config, rpc.azure.enable_dm)},
  {.type = CONF_TYPE_OBJECT, .key = "gatts", .offset = offsetof(struct mgos_config, rpc.gatts), .num_desc = 3},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.gatts.enable)},
  {.type = CONF_TYPE_INT, .key = "sec_level", .offset = offsetof(struct mgos_config, rpc.gatts.sec_level)},
  {.type = CONF_TYPE_INT, .key = "max_frame_size", .offset = offsetof(struct mgos_config, rpc.gatts.max_frame_size)},
  {.type = CONF_TYPE_OBJECT, .key = "gcp", .offset = offsetof(struct mgos_config, rpc.gcp), .num_desc = 2},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.gcp.enable)},
  {.type = CONF_TYPE_STRING, .key = "subfolder", .offset = offsetof(struct mgos_config, rpc.gcp.subfolder)},
  {.type = CONF_TYPE_OBJECT, .key = "mqtt", .offset = offsetof(struct mgos_config, rpc.mqtt), .num_desc = 5},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.mqtt.enable)},
  {.type = CONF_TYPE_STRING, .key = "pub_topic", .offset = offsetof(struct mgos_config, rpc.mqtt.pub_topic)},
  {.type = CONF_TYPE_STRING, .key = "sub_topic", .offset = offsetof(struct mgos_config, rpc.mqtt.sub_topic)},
  {.type = CONF_TYPE_BOOL, .key = "sub_wc", .offset = offsetof(struct mgos_config, rpc.mqtt.sub_wc)},
  {.type = CONF_TYPE_INT, .key = "qos", .offset = offsetof(struct mgos_config, rpc.mqtt.qos)},
  {.type = CONF_TYPE_OBJECT, .key = "uart", .offset = offsetof(struct mgos_config, rpc.uart), .num_desc = 4},
  {.type = CONF_TYPE_INT, .key = "uart_no", .offset = offsetof(struct mgos_config, rpc.uart.uart_no)},
  {.type = CONF_TYPE_INT, .key = "baud_rate", .offset = offsetof(struct mgos_config, rpc.uart.baud_rate)},
  {.type = CONF_TYPE_INT, .key = "fc_type", .offset = offsetof(struct mgos_config, rpc.uart.fc_type)},
  {.type = CONF_TYPE_STRING, .key = "dst", .offset = offsetof(struct mgos_config, rpc.uart.dst)},
  {.type = CONF_TYPE_OBJECT, .key = "dash", .offset = offsetof(struct mgos_config, dash), .num_desc = 7},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, dash.enable)},
  {.type = CONF_TYPE_STRING, .key = "token", .offset = offsetof(struct mgos_config, dash.token)},
  {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, dash.server)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, dash.ssl_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, dash.ssl_key)},
  {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, dash.ssl_ca_cert)},
  {.type = CONF_TYPE_BOOL, .key = "send_logs", .offset = offsetof(struct mgos_config, dash.send_logs)},
  {.type = CONF_TYPE_OBJECT, .key = "http", .offset = offsetof(struct mgos_config, http), .num_desc = 10},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, http.enable)},
  {.type = CONF_TYPE_STRING, .key = "listen_addr", .offset = offsetof(struct mgos_config, http.listen_addr)},
  {.type = CONF_TYPE_STRING, .key = "document_root", .offset = offsetof(struct mgos_config, http.document_root)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, http.ssl_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, http.ssl_key)},
  {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, http.ssl_ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "upload_acl", .offset = offsetof(struct mgos_config, http.upload_acl)},
  {.type = CONF_TYPE_STRING, .key = "hidden_files", .offset = offsetof(struct mgos_config, http.hidden_files)},
  {.type = CONF_TYPE_STRING, .key = "auth_domain", .offset = offsetof(struct mgos_config, http.auth_domain)},
  {.type = CONF_TYPE_STRING, .key = "auth_file", .offset = offsetof(struct mgos_config, http.auth_file)},
  {.type = CONF_TYPE_OBJECT, .key = "dns_sd", .offset = offsetof(struct mgos_config, dns_sd), .num_desc = 4},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, dns_sd.enable)},
  {.type = CONF_TYPE_STRING, .key = "host_name", .offset = offsetof(struct mgos_config, dns_sd.host_name)},
  {.type = CONF_TYPE_STRING, .key = "txt", .offset = offsetof(struct mgos_config, dns_sd.txt)},
  {.type = CONF_TYPE_INT, .key = "ttl", .offset = offsetof(struct mgos_config, dns_sd.ttl)},
  {.type = CONF_TYPE_OBJECT, .key = "eth", .offset = offsetof(struct mgos_config, eth), .num_desc = 9},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, eth.enable)},
  {.type = CONF_TYPE_INT, .key = "phy_addr", .offset = offsetof(struct mgos_config, eth.phy_addr)},
  {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, eth.ip)},
  {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, eth.netmask)},
  {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, eth.gw)},
  {.type = CONF_TYPE_INT, .key = "clk_mode", .offset = offsetof(struct mgos_config, eth.clk_mode)},
  {.type = CONF_TYPE_INT, .key = "mdc_gpio", .offset = offsetof(struct mgos_config, eth.mdc_gpio)},
  {.type = CONF_TYPE_INT, .key = "mdio_gpio", .offset = offsetof(struct mgos_config, eth.mdio_gpio)},
  {.type = CONF_TYPE_INT, .key = "phy_pwr_gpio", .offset = offsetof(struct mgos_config, eth.phy_pwr_gpio)},
  {.type = CONF_TYPE_OBJECT, .key = "devtab", .offset = offsetof(struct mgos_config, devtab), .num_desc = 20},
  {.type = CONF_TYPE_OBJECT, .key = "dev0", .offset = offsetof(struct mgos_config, devtab.dev0), .num_desc = 3},
  {.type = CONF_TYPE_STRING, .key = "name", .offset = offsetof(struct mgos_config, devtab.dev0.name)},
  {.type = CONF_TYPE_STRING, .key = "type", .offset = offsetof(struct mgos_config, devtab.dev0.type)},
  {.type = CONF_TYPE_STRING, .key = "opts", .offset = offsetof(struct mgos_config, devtab.dev0.opts)},
  {.type = CONF_TYPE_OBJECT, .key = "dev1", .offset = offsetof(struct mgos_config, devtab.dev1), .num_desc = 3},
  {.type = CONF_TYPE_STRING, .key = "name", .offset = offsetof(struct mgos_config, devtab.dev1.name)},
  {.type = CONF_TYPE_STRING, .key = "type", .offset = offsetof(struct mgos_config, devtab.dev1.type)},
  {.type = CONF_TYPE_STRING, .key = "opts", .offset = offsetof(struct mgos_config, devtab.dev1.opts)},
  {.type = CONF_TYPE_OBJECT, .key = "dev2", .offset = offsetof(struct mgos_config, devtab.dev2), .num_desc = 3},
  {.type = CONF_TYPE_STRING, .key = "name", .offset = offsetof(struct mgos_config, devtab.dev2.name)},
  {.type = CONF_TYPE_STRING, .key = "type", .offset = offsetof(struct mgos_config, devtab.dev2.type)},
  {.type = CONF_TYPE_STRING, .key = "opts", .offset = offsetof(struct mgos_config, devtab.dev2.opts)},
  {.type = CONF_TYPE_OBJECT, .key = "dev3", .offset = offsetof(struct mgos_config, devtab.dev3), .num_desc = 3},
  {.type = CONF_TYPE_STRING, .key = "name", .offset = offsetof(struct mgos_config, devtab.dev3.name)},
  {.type = CONF_TYPE_STRING, .key = "type", .offset = offsetof(struct mgos_config, devtab.dev3.type)},
  {.type = CONF_TYPE_STRING, .key = "opts", .offset = offsetof(struct mgos_config, devtab.dev3.opts)},
  {.type = CONF_TYPE_OBJECT, .key = "dev4", .offset = offsetof(struct mgos_config, devtab.dev4), .num_desc = 3},
  {.type = CONF_TYPE_STRING, .key = "name", .offset = offsetof(struct mgos_config, devtab.dev4.name)},
  {.type = CONF_TYPE_STRING, .key = "type", .offset = offsetof(struct mgos_config, devtab.dev4.type)},
  {.type = CONF_TYPE_STRING, .key = "opts", .offset = offsetof(struct mgos_config, devtab.dev4.opts)},
  {.type = CONF_TYPE_OBJECT, .key = "fstab", .offset = offsetof(struct mgos_config, fstab), .num_desc = 24},
  {.type = CONF_TYPE_OBJECT, .key = "fs0", .offset = offsetof(struct mgos_config, fstab.fs0), .num_desc = 7},
  {.type = CONF_TYPE_STRING, .key = "dev", .offset = offsetof(struct mgos_config, fstab.fs0.dev)},
  {.type = CONF_TYPE_STRING, .key = "type", .offset = offsetof(struct mgos_config, fstab.fs0.type)},
  {.type = CONF_TYPE_STRING, .key = "opts", .offset = offsetof(struct mgos_config, fstab.fs0.opts)},
  {.type = CONF_TYPE_STRING, .key = "path", .offset = offsetof(struct mgos_config, fstab.fs0.path)},
  {.type = CONF_TYPE_BOOL, .key = "create", .offset = offsetof(struct mgos_config, fstab.fs0.create)},
  {.type = CONF_TYPE_BOOL, .key = "optional", .offset = offsetof(struct mgos_config, fstab.fs0.optional)},
  {.type = CONF_TYPE_BOOL, .key = "created", .offset = offsetof(struct mgos_config, fstab.fs0.created)},
  {.type = CONF_TYPE_OBJECT, .key = "fs1", .offset = offsetof(struct mgos_config, fstab.fs1), .num_desc = 7},
  {.type = CONF_TYPE_STRING, .key = "dev", .offset = offsetof(struct mgos_config, fstab.fs1.dev)},
  {.type = CONF_TYPE_STRING, .key = "type", .offset = offsetof(struct mgos_config, fstab.fs1.type)},
  {.type = CONF_TYPE_STRING, .key = "opts", .offset = offsetof(struct mgos_config, fstab.fs1.opts)},
  {.type = CONF_TYPE_STRING, .key = "path", .offset = offsetof(struct mgos_config, fstab.fs1.path)},
  {.type = CONF_TYPE_BOOL, .key = "create", .offset = offsetof(struct mgos_config, fstab.fs1.create)},
  {.type = CONF_TYPE_BOOL, .key = "optional", .offset = offsetof(struct mgos_config, fstab.fs1.optional)},
  {.type = CONF_TYPE_BOOL, .key = "created", .offset = offsetof(struct mgos_config, fstab.fs1.created)},
  {.type = CONF_TYPE_OBJECT, .key = "fs2", .offset = offsetof(struct mgos_config, fstab.fs2), .num_desc = 7},
  {.type = CONF_TYPE_STRING, .key = "dev", .offset = offsetof(struct mgos_config, fstab.fs2.dev)},
  {.type = CONF_TYPE_STRING, .key = "type", .offset = offsetof(struct mgos_config, fstab.fs2.type)},
  {.type = CONF_TYPE_STRING, .key = "opts", .offset = offsetof(struct mgos_config, fstab.fs2.opts)},
  {.type = CONF_TYPE_STRING, .key = "path", .offset = offsetof(struct mgos_config, fstab.fs2.path)},
  {.type = CONF_TYPE_BOOL, .key = "create", .offset = offsetof(struct mgos_config, fstab.fs2.create)},
  {.type = CONF_TYPE_BOOL, .key = "optional", .offset = offsetof(struct mgos_config, fstab.fs2.optional)},
  {.type = CONF_TYPE_BOOL, .key = "created", .offset = offsetof(struct mgos_config, fstab.fs2.created)},
  {.type = CONF_TYPE_OBJECT, .key = "gcp", .offset = offsetof(struct mgos_config, gcp), .num_desc = 10},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, gcp.enable)},
  {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, gcp.server)},
  {.type = CONF_TYPE_STRING, .key = "project", .offset = offsetof(struct mgos_config, gcp.project)},
  {.type = CONF_TYPE_STRING, .key = "region", .offset = offsetof(struct mgos_config, gcp.region)},
  {.type = CONF_TYPE_STRING, .key = "registry", .offset = offsetof(struct mgos_config, gcp.registry)},
  {.type = CONF_TYPE_STRING, .key = "device", .offset = offsetof(struct mgos_config, gcp.device)},
  {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, gcp.key)},
  {.type = CONF_TYPE_INT, .key = "token_ttl", .offset = offsetof(struct mgos_config, gcp.token_ttl)},
  {.type = CONF_TYPE_BOOL, .key = "enable_config", .offset = offsetof(struct mgos_config, gcp.enable_config)},
  {.type = CONF_TYPE_BOOL, .key = "enable_commands", .offset = offsetof(struct mgos_config, gcp.enable_commands)},
  {.type = CONF_TYPE_OBJECT, .key = "pppos", .offset = offsetof(struct mgos_config, pppos), .num_desc = 24},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, pppos.enable)},
  {.type = CONF_TYPE_INT, .key = "uart_no", .offset = offsetof(struct mgos_config, pppos.uart_no)},
  {.type = CONF_TYPE_INT, .key = "baud_rate", .offset = offsetof(struct mgos_config, pppos.baud_rate)},
  {.type = CONF_TYPE_INT, .key = "start_baud_rate", .offset = offsetof(struct mgos_config, pppos.start_baud_rate)},
  {.type = CONF_TYPE_BOOL, .key = "fc_enable", .offset = offsetof(struct mgos_config, pppos.fc_enable)},
  {.type = CONF_TYPE_BOOL, .key = "start_fc_enable", .offset = offsetof(struct mgos_config, pppos.start_fc_enable)},
  {.type = CONF_TYPE_INT, .key = "rx_gpio", .offset = offsetof(struct mgos_config, pppos.rx_gpio)},
  {.type = CONF_TYPE_INT, .key = "tx_gpio", .offset = offsetof(struct mgos_config, pppos.tx_gpio)},
  {.type = CONF_TYPE_INT, .key = "cts_gpio", .offset = offsetof(struct mgos_config, pppos.cts_gpio)},
  {.type = CONF_TYPE_INT, .key = "rts_gpio", .offset = offsetof(struct mgos_config, pppos.rts_gpio)},
  {.type = CONF_TYPE_INT, .key = "dtr_gpio", .offset = offsetof(struct mgos_config, pppos.dtr_gpio)},
  {.type = CONF_TYPE_INT, .key = "dtr_act", .offset = offsetof(struct mgos_config, pppos.dtr_act)},
  {.type = CONF_TYPE_STRING, .key = "apn", .offset = offsetof(struct mgos_config, pppos.apn)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, pppos.user)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, pppos.pass)},
  {.type = CONF_TYPE_BOOL, .key = "connect_on_startup", .offset = offsetof(struct mgos_config, pppos.connect_on_startup)},
  {.type = CONF_TYPE_INT, .key = "rst_gpio", .offset = offsetof(struct mgos_config, pppos.rst_gpio)},
  {.type = CONF_TYPE_INT, .key = "rst_act", .offset = offsetof(struct mgos_config, pppos.rst_act)},
  {.type = CONF_TYPE_INT, .key = "rst_hold_ms", .offset = offsetof(struct mgos_config, pppos.rst_hold_ms)},
  {.type = CONF_TYPE_INT, .key = "rst_wait_ms", .offset = offsetof(struct mgos_config, pppos.rst_wait_ms)},
  {.type = CONF_TYPE_INT, .key = "rst_mode", .offset = offsetof(struct mgos_config, pppos.rst_mode)},
  {.type = CONF_TYPE_INT, .key = "echo_interval", .offset = offsetof(struct mgos_config, pppos.echo_interval)},
  {.type = CONF_TYPE_INT, .key = "echo_fails", .offset = offsetof(struct mgos_config, pppos.echo_fails)},
  {.type = CONF_TYPE_BOOL, .key = "hexdump_enable", .offset = offsetof(struct mgos_config, pppos.hexdump_enable)},
  {.type = CONF_TYPE_OBJECT, .key = "provision", .offset = offsetof(struct mgos_config, provision), .num_desc = 10},
  {.type = CONF_TYPE_OBJECT, .key = "btn", .offset = offsetof(struct mgos_config, provision.btn), .num_desc = 3},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, provision.btn.pin)},
  {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, provision.btn.pull_up)},
  {.type = CONF_TYPE_INT, .key = "hold_ms", .offset = offsetof(struct mgos_config, provision.btn.hold_ms)},
  {.type = CONF_TYPE_OBJECT, .key = "led", .offset = offsetof(struct mgos_config, provision.led), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, provision.led.pin)},
  {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, provision.led.active_high)},
  {.type = CONF_TYPE_INT, .key = "stable_state", .offset = offsetof(struct mgos_config, provision.stable_state)},
  {.type = CONF_TYPE_INT, .key = "timeout", .offset = offsetof(struct mgos_config, provision.timeout)},
  {.type = CONF_TYPE_INT, .key = "max_state", .offset = offsetof(struct mgos_config, provision.max_state)},
  {.type = CONF_TYPE_OBJECT, .key = "wifi", .offset = offsetof(struct mgos_config, wifi), .num_desc = 63},
  {.type = CONF_TYPE_OBJECT, .key = "ap", .offset = offsetof(struct mgos_config, wifi.ap), .num_desc = 16},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.ap.enable)},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.ap.ssid)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.ap.pass)},
  {.type = CONF_TYPE_BOOL, .key = "hidden", .offset = offsetof(struct mgos_config, wifi.ap.hidden)},
  {.type = CONF_TYPE_INT, .key = "channel", .offset = offsetof(struct mgos_config, wifi.ap.channel)},
  {.type = CONF_TYPE_INT, .key = "max_connections", .offset = offsetof(struct mgos_config, wifi.ap.max_connections)},
  {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.ap.ip)},
  {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.ap.netmask)},
  {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.ap.gw)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_start", .offset = offsetof(struct mgos_config, wifi.ap.dhcp_start)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_end", .offset = offsetof(struct mgos_config, wifi.ap.dhcp_end)},
  {.type = CONF_TYPE_INT, .key = "trigger_on_gpio", .offset = offsetof(struct mgos_config, wifi.ap.trigger_on_gpio)},
  {.type = CONF_TYPE_INT, .key = "disable_after", .offset = offsetof(struct mgos_config, wifi.ap.disable_after)},
  {.type = CONF_TYPE_STRING, .key = "hostname", .offset = offsetof(struct mgos_config, wifi.ap.hostname)},
  {.type = CONF_TYPE_BOOL, .key = "keep_enabled", .offset = offsetof(struct mgos_config, wifi.ap.keep_enabled)},
  {.type = CONF_TYPE_BOOL, .key = "bandwidth_20mhz", .offset = offsetof(struct mgos_config, wifi.ap.bandwidth_20mhz)},
  {.type = CONF_TYPE_OBJECT, .key = "sta", .offset = offsetof(struct mgos_config, wifi.sta), .num_desc = 13},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta.enable)},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta.ssid)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta.pass)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta.user)},
  {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta.anon_identity)},
  {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta.cert)},
  {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta.key)},
  {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta.ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta.ip)},
  {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta.netmask)},
  {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta.gw)},
  {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta.nameserver)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta.dhcp_hostname)},
  {.type = CONF_TYPE_OBJECT, .key = "sta1", .offset = offsetof(struct mgos_config, wifi.sta1), .num_desc = 13},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta1.enable)},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta1.ssid)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta1.pass)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta1.user)},
  {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta1.anon_identity)},
  {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta1.cert)},
  {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta1.key)},
  {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta1.ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta1.ip)},
  {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta1.netmask)},
  {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta1.gw)},
  {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta1.nameserver)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta1.dhcp_hostname)},
  {.type = CONF_TYPE_OBJECT, .key = "sta2", .offset = offsetof(struct mgos_config, wifi.sta2), .num_desc = 13},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta2.enable)},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta2.ssid)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta2.pass)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta2.user)},
  {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta2.anon_identity)},
  {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta2.cert)},
  {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta2.key)},
  {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta2.ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta2.ip)},
  {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta2.netmask)},
  {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta2.gw)},
  {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta2.nameserver)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta2.dhcp_hostname)},
  {.type = CONF_TYPE_INT, .key = "sta_cfg_idx", .offset = offsetof(struct mgos_config, wifi.sta_cfg_idx)},
  {.type = CONF_TYPE_INT, .key = "sta_connect_timeout", .offset = offsetof(struct mgos_config, wifi.sta_connect_timeout)},
  {.type = CONF_TYPE_INT, .key = "sta_ps_mode", .offset = offsetof(struct mgos_config, wifi.sta_ps_mode)},
  {.type = CONF_TYPE_BOOL, .key = "sta_all_chan_scan", .offset = offsetof(struct mgos_config, wifi.sta_all_chan_scan)},
  {.type = CONF_TYPE_OBJECT, .key = "spi", .offset = offsetof(struct mgos_config, spi), .num_desc = 9},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, spi.enable)},
  {.type = CONF_TYPE_BOOL, .key = "debug", .offset = offsetof(struct mgos_config, spi.debug)},
  {.type = CONF_TYPE_INT, .key = "unit_no", .offset = offsetof(struct mgos_config, spi.unit_no)},
  {.type = CONF_TYPE_INT, .key = "miso_gpio", .offset = offsetof(struct mgos_config, spi.miso_gpio)},
  {.type = CONF_TYPE_INT, .key = "mosi_gpio", .offset = offsetof(struct mgos_config, spi.mosi_gpio)},
  {.type = CONF_TYPE_INT, .key = "sclk_gpio", .offset = offsetof(struct mgos_config, spi.sclk_gpio)},
  {.type = CONF_TYPE_INT, .key = "cs0_gpio", .offset = offsetof(struct mgos_config, spi.cs0_gpio)},
  {.type = CONF_TYPE_INT, .key = "cs1_gpio", .offset = offsetof(struct mgos_config, spi.cs1_gpio)},
  {.type = CONF_TYPE_INT, .key = "cs2_gpio", .offset = offsetof(struct mgos_config, spi.cs2_gpio)},
  {.type = CONF_TYPE_OBJECT, .key = "watson", .offset = offsetof(struct mgos_config, watson), .num_desc = 7},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, watson.enable)},
  {.type = CONF_TYPE_STRING, .key = "host_name", .offset = offsetof(struct mgos_config, watson.host_name)},
  {.type = CONF_TYPE_STRING, .key = "client_id", .offset = offsetof(struct mgos_config, watson.client_id)},
  {.type = CONF_TYPE_STRING, .key = "token", .offset = offsetof(struct mgos_config, watson.token)},
  {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, watson.cert)},
  {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, watson.key)},
  {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, watson.ca_cert)},
  {.type = CONF_TYPE_OBJECT, .key = "mjs", .offset = offsetof(struct mgos_config, mjs), .num_desc = 1},
  {.type = CONF_TYPE_BOOL, .key = "generate_jsc", .offset = offsetof(struct mgos_config, mjs.generate_jsc)},
  {.type = CONF_TYPE_OBJECT, .key = "board", .offset = offsetof(struct mgos_config, board), .num_desc = 18},
  {.type = CONF_TYPE_OBJECT, .key = "led1", .offset = offsetof(struct mgos_config, board.led1), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.led1.pin)},
  {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, board.led1.active_high)},
  {.type = CONF_TYPE_OBJECT, .key = "led2", .offset = offsetof(struct mgos_config, board.led2), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.led2.pin)},
  {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, board.led2.active_high)},
  {.type = CONF_TYPE_OBJECT, .key = "led3", .offset = offsetof(struct mgos_config, board.led3), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.led3.pin)},
  {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, board.led3.active_high)},
  {.type = CONF_TYPE_OBJECT, .key = "btn1", .offset = offsetof(struct mgos_config, board.btn1), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.btn1.pin)},
  {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, board.btn1.pull_up)},
  {.type = CONF_TYPE_OBJECT, .key = "btn2", .offset = offsetof(struct mgos_config, board.btn2), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.btn2.pin)},
  {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, board.btn2.pull_up)},
  {.type = CONF_TYPE_OBJECT, .key = "btn3", .offset = offsetof(struct mgos_config, board.btn3), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.btn3.pin)},
  {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, board.btn3.pull_up)},
};

const struct mgos_conf_entry *mgos_config_schema() {
  return mgos_config_schema_;
}

/* Global instance */
struct mgos_config mgos_sys_config;
const struct mgos_config mgos_config_defaults = {
  .debug.udp_log_addr = NULL,
  .debug.mbedtls_level = 1,
  .debug.level = 2,
  .debug.file_level = NULL,
  .debug.stdout_uart = 0,
  .debug.stderr_uart = 0,
  .debug.factory_reset_gpio = -1,
  .debug.mg_mgr_hexdump_file = NULL,
  .debug.stdout_topic = NULL,
  .debug.stderr_topic = NULL,
  .sys.esp32_adc_vref = 0,
  .sys.esp32_adc_width = 3,
  .sys.atca.enable = 0,
  .sys.atca.i2c_bus = 0,
  .sys.atca.i2c_addr = 96,
  .sys.atca.ecdh_slots_mask = 12,
  .sys.tz_spec = NULL,
  .sys.wdt_timeout = 30,
  .sys.pref_ota_lib = NULL,
  .sys.mount.path = NULL,
  .sys.mount.dev_type = NULL,
  .sys.mount.dev_opts = NULL,
  .sys.mount.fs_type = NULL,
  .sys.mount.fs_opts = NULL,
  .i2c.unit_no = 0,
  .i2c.enable = 1,
  .i2c.freq = 100000,
  .i2c.debug = 0,
  .i2c.sda_gpio = 32,
  .i2c.scl_gpio = 33,
  .i2c1.unit_no = 1,
  .i2c1.enable = 0,
  .i2c1.freq = 100000,
  .i2c1.debug = 0,
  .i2c1.sda_gpio = 22,
  .i2c1.scl_gpio = 23,
  .device.id = "esp32_??????",
  .device.license = NULL,
  .device.mac = NULL,
  .conf_acl = "*",
  .mqtt.enable = 0,
  .mqtt.server = "iot.eclipse.org:1883",
  .mqtt.client_id = NULL,
  .mqtt.user = NULL,
  .mqtt.pass = NULL,
  .mqtt.reconnect_timeout_min = 2.0,
  .mqtt.reconnect_timeout_max = 60.0,
  .mqtt.ssl_cert = NULL,
  .mqtt.ssl_key = NULL,
  .mqtt.ssl_ca_cert = NULL,
  .mqtt.ssl_cipher_suites = NULL,
  .mqtt.ssl_psk_identity = NULL,
  .mqtt.ssl_psk_key = NULL,
  .mqtt.clean_session = 1,
  .mqtt.keep_alive = 60,
  .mqtt.will_topic = NULL,
  .mqtt.will_message = NULL,
  .mqtt.max_qos = 2,
  .mqtt.recv_mbuf_limit = 8192,
  .mqtt.require_time = 0,
  .mqtt.cloud_events = 1,
  .mqtt1.enable = 0,
  .mqtt1.server = "iot.eclipse.org:1883",
  .mqtt1.client_id = NULL,
  .mqtt1.user = NULL,
  .mqtt1.pass = NULL,
  .mqtt1.reconnect_timeout_min = 2.0,
  .mqtt1.reconnect_timeout_max = 60.0,
  .mqtt1.ssl_cert = NULL,
  .mqtt1.ssl_key = NULL,
  .mqtt1.ssl_ca_cert = NULL,
  .mqtt1.ssl_cipher_suites = NULL,
  .mqtt1.ssl_psk_identity = NULL,
  .mqtt1.ssl_psk_key = NULL,
  .mqtt1.clean_session = 1,
  .mqtt1.keep_alive = 60,
  .mqtt1.will_topic = NULL,
  .mqtt1.will_message = NULL,
  .mqtt1.max_qos = 2,
  .mqtt1.recv_mbuf_limit = 8192,
  .mqtt1.require_time = 0,
  .mqtt1.cloud_events = 1,
  .shadow.enable = 1,
  .shadow.lib = NULL,
  .shadow.ota_enable = 1,
  .shadow.autocommit = 0,
  .aws.thing_name = NULL,
  .aws.greengrass.enable = 0,
  .aws.greengrass.reconnect_timeout_min = 2,
  .aws.greengrass.reconnect_timeout_max = 60,
  .sntp.enable = 1,
  .sntp.server = "time.google.com",
  .sntp.retry_min = 1,
  .sntp.retry_max = 30,
  .sntp.update_interval = 7200,
  .azure.enable = 0,
  .azure.cs = NULL,
  .azure.token_ttl = 3600,
  .azure.host_name = NULL,
  .azure.device_id = NULL,
  .azure.cert = NULL,
  .azure.key = NULL,
  .azure.enable_cm = 1,
  .azure.enable_dm = 1,
  .bt.enable = 1,
  .bt.dev_name = NULL,
  .bt.adv_enable = 1,
  .bt.scan_rsp_data_hex = NULL,
  .bt.keep_enabled = 0,
  .bt.allow_pairing = 1,
  .bt.max_paired_devices = -1,
  .bt.random_address = 1,
  .bt.gatt_mtu = 500,
  .bt.gatts.min_sec_level = 0,
  .bt.gatts.require_pairing = 0,
  .bt.debug_svc_enable = 1,
  .bt.debug_svc_sec_level = 0,
  .update.timeout = 600,
  .update.commit_timeout = 0,
  .update.url = NULL,
  .update.interval = 0,
  .update.extra_http_headers = NULL,
  .update.ssl_ca_file = "ca.pem",
  .update.ssl_client_cert_file = NULL,
  .update.ssl_server_name = NULL,
  .update.enable_post = 1,
  .rpc.enable = 1,
  .rpc.max_frame_size = 4096,
  .rpc.max_queue_length = 25,
  .rpc.default_out_channel_idle_close_timeout = 10,
  .rpc.acl_file = NULL,
  .rpc.auth_domain = NULL,
  .rpc.auth_file = NULL,
  .rpc.ws.enable = 1,
  .rpc.ws.server_address = NULL,
  .rpc.ws.reconnect_interval_min = 1,
  .rpc.ws.reconnect_interval_max = 60,
  .rpc.ws.ssl_server_name = NULL,
  .rpc.ws.ssl_cert = NULL,
  .rpc.ws.ssl_key = NULL,
  .rpc.ws.ssl_ca_cert = NULL,
  .rpc.azure.enable_dm = 1,
  .rpc.gatts.enable = 1,
  .rpc.gatts.sec_level = 0,
  .rpc.gatts.max_frame_size = 4096,
  .rpc.gcp.enable = 1,
  .rpc.gcp.subfolder = "rpc",
  .rpc.mqtt.enable = 1,
  .rpc.mqtt.pub_topic = "%.*s/rpc",
  .rpc.mqtt.sub_topic = "%.*s/rpc",
  .rpc.mqtt.sub_wc = 1,
  .rpc.mqtt.qos = 1,
  .rpc.uart.uart_no = 0,
  .rpc.uart.baud_rate = 115200,
  .rpc.uart.fc_type = 2,
  .rpc.uart.dst = NULL,
  .dash.enable = 0,
  .dash.token = NULL,
  .dash.server = "wss://mdash.net/api/v2/rpc",
  .dash.ssl_cert = NULL,
  .dash.ssl_key = NULL,
  .dash.ssl_ca_cert = "ca.pem",
  .dash.send_logs = 0,
  .http.enable = 1,
  .http.listen_addr = "80",
  .http.document_root = "/",
  .http.ssl_cert = NULL,
  .http.ssl_key = NULL,
  .http.ssl_ca_cert = NULL,
  .http.upload_acl = "*",
  .http.hidden_files = NULL,
  .http.auth_domain = NULL,
  .http.auth_file = NULL,
  .dns_sd.enable = 0,
  .dns_sd.host_name = "mOS-esp32-??????",
  .dns_sd.txt = NULL,
  .dns_sd.ttl = 120,
  .eth.enable = 0,
  .eth.phy_addr = 0,
  .eth.ip = NULL,
  .eth.netmask = NULL,
  .eth.gw = NULL,
  .eth.clk_mode = 0,
  .eth.mdc_gpio = 23,
  .eth.mdio_gpio = 18,
  .eth.phy_pwr_gpio = -1,
  .devtab.dev0.name = NULL,
  .devtab.dev0.type = NULL,
  .devtab.dev0.opts = NULL,
  .devtab.dev1.name = NULL,
  .devtab.dev1.type = NULL,
  .devtab.dev1.opts = NULL,
  .devtab.dev2.name = NULL,
  .devtab.dev2.type = NULL,
  .devtab.dev2.opts = NULL,
  .devtab.dev3.name = NULL,
  .devtab.dev3.type = NULL,
  .devtab.dev3.opts = NULL,
  .devtab.dev4.name = NULL,
  .devtab.dev4.type = NULL,
  .devtab.dev4.opts = NULL,
  .fstab.fs0.dev = NULL,
  .fstab.fs0.type = NULL,
  .fstab.fs0.opts = NULL,
  .fstab.fs0.path = NULL,
  .fstab.fs0.create = 0,
  .fstab.fs0.optional = 0,
  .fstab.fs0.created = 0,
  .fstab.fs1.dev = NULL,
  .fstab.fs1.type = NULL,
  .fstab.fs1.opts = NULL,
  .fstab.fs1.path = NULL,
  .fstab.fs1.create = 0,
  .fstab.fs1.optional = 0,
  .fstab.fs1.created = 0,
  .fstab.fs2.dev = NULL,
  .fstab.fs2.type = NULL,
  .fstab.fs2.opts = NULL,
  .fstab.fs2.path = NULL,
  .fstab.fs2.create = 0,
  .fstab.fs2.optional = 0,
  .fstab.fs2.created = 0,
  .gcp.enable = 0,
  .gcp.server = "mqtt.googleapis.com",
  .gcp.project = NULL,
  .gcp.region = NULL,
  .gcp.registry = NULL,
  .gcp.device = NULL,
  .gcp.key = NULL,
  .gcp.token_ttl = 3600,
  .gcp.enable_config = 0,
  .gcp.enable_commands = 1,
  .pppos.enable = 0,
  .pppos.uart_no = 1,
  .pppos.baud_rate = 115200,
  .pppos.start_baud_rate = 115200,
  .pppos.fc_enable = 0,
  .pppos.start_fc_enable = 0,
  .pppos.rx_gpio = -1,
  .pppos.tx_gpio = -1,
  .pppos.cts_gpio = -1,
  .pppos.rts_gpio = -1,
  .pppos.dtr_gpio = -1,
  .pppos.dtr_act = 0,
  .pppos.apn = NULL,
  .pppos.user = NULL,
  .pppos.pass = NULL,
  .pppos.connect_on_startup = 1,
  .pppos.rst_gpio = -1,
  .pppos.rst_act = 0,
  .pppos.rst_hold_ms = 100,
  .pppos.rst_wait_ms = 5000,
  .pppos.rst_mode = 0,
  .pppos.echo_interval = 10,
  .pppos.echo_fails = 3,
  .pppos.hexdump_enable = 0,
  .provision.btn.pin = 0,
  .provision.btn.pull_up = 1,
  .provision.btn.hold_ms = 0,
  .provision.led.pin = -1,
  .provision.led.active_high = 1,
  .provision.stable_state = 3,
  .provision.timeout = 300,
  .provision.max_state = 0,
  .wifi.ap.enable = 1,
  .wifi.ap.ssid = "Mongoose_??????",
  .wifi.ap.pass = "Mongoose",
  .wifi.ap.hidden = 0,
  .wifi.ap.channel = 6,
  .wifi.ap.max_connections = 10,
  .wifi.ap.ip = "192.168.4.1",
  .wifi.ap.netmask = "255.255.255.0",
  .wifi.ap.gw = "192.168.4.1",
  .wifi.ap.dhcp_start = "192.168.4.2",
  .wifi.ap.dhcp_end = "192.168.4.100",
  .wifi.ap.trigger_on_gpio = -1,
  .wifi.ap.disable_after = 0,
  .wifi.ap.hostname = NULL,
  .wifi.ap.keep_enabled = 1,
  .wifi.ap.bandwidth_20mhz = 0,
  .wifi.sta.enable = 0,
  .wifi.sta.ssid = NULL,
  .wifi.sta.pass = NULL,
  .wifi.sta.user = NULL,
  .wifi.sta.anon_identity = NULL,
  .wifi.sta.cert = NULL,
  .wifi.sta.key = NULL,
  .wifi.sta.ca_cert = NULL,
  .wifi.sta.ip = NULL,
  .wifi.sta.netmask = NULL,
  .wifi.sta.gw = NULL,
  .wifi.sta.nameserver = NULL,
  .wifi.sta.dhcp_hostname = NULL,
  .wifi.sta1.enable = 0,
  .wifi.sta1.ssid = NULL,
  .wifi.sta1.pass = NULL,
  .wifi.sta1.user = NULL,
  .wifi.sta1.anon_identity = NULL,
  .wifi.sta1.cert = NULL,
  .wifi.sta1.key = NULL,
  .wifi.sta1.ca_cert = NULL,
  .wifi.sta1.ip = NULL,
  .wifi.sta1.netmask = NULL,
  .wifi.sta1.gw = NULL,
  .wifi.sta1.nameserver = NULL,
  .wifi.sta1.dhcp_hostname = NULL,
  .wifi.sta2.enable = 0,
  .wifi.sta2.ssid = NULL,
  .wifi.sta2.pass = NULL,
  .wifi.sta2.user = NULL,
  .wifi.sta2.anon_identity = NULL,
  .wifi.sta2.cert = NULL,
  .wifi.sta2.key = NULL,
  .wifi.sta2.ca_cert = NULL,
  .wifi.sta2.ip = NULL,
  .wifi.sta2.netmask = NULL,
  .wifi.sta2.gw = NULL,
  .wifi.sta2.nameserver = NULL,
  .wifi.sta2.dhcp_hostname = NULL,
  .wifi.sta_cfg_idx = 0,
  .wifi.sta_connect_timeout = 30,
  .wifi.sta_ps_mode = 0,
  .wifi.sta_all_chan_scan = 0,
  .spi.enable = 0,
  .spi.debug = 0,
  .spi.unit_no = 3,
  .spi.miso_gpio = 19,
  .spi.mosi_gpio = 23,
  .spi.sclk_gpio = 18,
  .spi.cs0_gpio = 5,
  .spi.cs1_gpio = -1,
  .spi.cs2_gpio = -1,
  .watson.enable = 0,
  .watson.host_name = NULL,
  .watson.client_id = NULL,
  .watson.token = NULL,
  .watson.cert = NULL,
  .watson.key = NULL,
  .watson.ca_cert = NULL,
  .mjs.generate_jsc = 1,
  .board.led1.pin = 13,
  .board.led1.active_high = 1,
  .board.led2.pin = -1,
  .board.led2.active_high = 1,
  .board.led3.pin = -1,
  .board.led3.active_high = 1,
  .board.btn1.pin = 0,
  .board.btn1.pull_up = 1,
  .board.btn2.pin = -1,
  .board.btn2.pull_up = 0,
  .board.btn3.pin = -1,
  .board.btn3.pull_up = 0,
};

/* debug */
#define MGOS_CONFIG_HAVE_DEBUG
#define MGOS_SYS_CONFIG_HAVE_DEBUG
const struct mgos_config_debug * mgos_config_get_debug(struct mgos_config *cfg) {
  return &cfg->debug;
}

/* debug.udp_log_addr */
#define MGOS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
#define MGOS_SYS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
const char * mgos_config_get_debug_udp_log_addr(struct mgos_config *cfg) {
  return cfg->debug.udp_log_addr;
}
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->debug.udp_log_addr, v);
}

/* debug.mbedtls_level */
#define MGOS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
int mgos_config_get_debug_mbedtls_level(struct mgos_config *cfg) {
  return cfg->debug.mbedtls_level;
}
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int v) {
  cfg->debug.mbedtls_level = v;
}

/* debug.level */
#define MGOS_CONFIG_HAVE_DEBUG_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_LEVEL
int mgos_config_get_debug_level(struct mgos_config *cfg) {
  return cfg->debug.level;
}
void mgos_config_set_debug_level(struct mgos_config *cfg, int v) {
  cfg->debug.level = v;
}

/* debug.file_level */
#define MGOS_CONFIG_HAVE_DEBUG_FILE_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FILE_LEVEL
const char * mgos_config_get_debug_file_level(struct mgos_config *cfg) {
  return cfg->debug.file_level;
}
void mgos_config_set_debug_file_level(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->debug.file_level, v);
}

/* debug.stdout_uart */
#define MGOS_CONFIG_HAVE_DEBUG_STDOUT_UART
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDOUT_UART
int mgos_config_get_debug_stdout_uart(struct mgos_config *cfg) {
  return cfg->debug.stdout_uart;
}
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int v) {
  cfg->debug.stdout_uart = v;
}

/* debug.stderr_uart */
#define MGOS_CONFIG_HAVE_DEBUG_STDERR_UART
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDERR_UART
int mgos_config_get_debug_stderr_uart(struct mgos_config *cfg) {
  return cfg->debug.stderr_uart;
}
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int v) {
  cfg->debug.stderr_uart = v;
}

/* debug.factory_reset_gpio */
#define MGOS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
int mgos_config_get_debug_factory_reset_gpio(struct mgos_config *cfg) {
  return cfg->debug.factory_reset_gpio;
}
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int v) {
  cfg->debug.factory_reset_gpio = v;
}

/* debug.mg_mgr_hexdump_file */
#define MGOS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
const char * mgos_config_get_debug_mg_mgr_hexdump_file(struct mgos_config *cfg) {
  return cfg->debug.mg_mgr_hexdump_file;
}
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->debug.mg_mgr_hexdump_file, v);
}

/* debug.stdout_topic */
#define MGOS_CONFIG_HAVE_DEBUG_STDOUT_TOPIC
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDOUT_TOPIC
const char * mgos_config_get_debug_stdout_topic(struct mgos_config *cfg) {
  return cfg->debug.stdout_topic;
}
void mgos_config_set_debug_stdout_topic(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->debug.stdout_topic, v);
}

/* debug.stderr_topic */
#define MGOS_CONFIG_HAVE_DEBUG_STDERR_TOPIC
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDERR_TOPIC
const char * mgos_config_get_debug_stderr_topic(struct mgos_config *cfg) {
  return cfg->debug.stderr_topic;
}
void mgos_config_set_debug_stderr_topic(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->debug.stderr_topic, v);
}

/* sys */
#define MGOS_CONFIG_HAVE_SYS
#define MGOS_SYS_CONFIG_HAVE_SYS
const struct mgos_config_sys * mgos_config_get_sys(struct mgos_config *cfg) {
  return &cfg->sys;
}

/* sys.esp32_adc_vref */
#define MGOS_CONFIG_HAVE_SYS_ESP32_ADC_VREF
#define MGOS_SYS_CONFIG_HAVE_SYS_ESP32_ADC_VREF
int mgos_config_get_sys_esp32_adc_vref(struct mgos_config *cfg) {
  return cfg->sys.esp32_adc_vref;
}
void mgos_config_set_sys_esp32_adc_vref(struct mgos_config *cfg, int v) {
  cfg->sys.esp32_adc_vref = v;
}

/* sys.esp32_adc_width */
#define MGOS_CONFIG_HAVE_SYS_ESP32_ADC_WIDTH
#define MGOS_SYS_CONFIG_HAVE_SYS_ESP32_ADC_WIDTH
int mgos_config_get_sys_esp32_adc_width(struct mgos_config *cfg) {
  return cfg->sys.esp32_adc_width;
}
void mgos_config_set_sys_esp32_adc_width(struct mgos_config *cfg, int v) {
  cfg->sys.esp32_adc_width = v;
}

/* sys.atca */
#define MGOS_CONFIG_HAVE_SYS_ATCA
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA
const struct mgos_config_sys_atca * mgos_config_get_sys_atca(struct mgos_config *cfg) {
  return &cfg->sys.atca;
}

/* sys.atca.enable */
#define MGOS_CONFIG_HAVE_SYS_ATCA_ENABLE
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_ENABLE
int mgos_config_get_sys_atca_enable(struct mgos_config *cfg) {
  return cfg->sys.atca.enable;
}
void mgos_config_set_sys_atca_enable(struct mgos_config *cfg, int v) {
  cfg->sys.atca.enable = v;
}

/* sys.atca.i2c_bus */
#define MGOS_CONFIG_HAVE_SYS_ATCA_I2C_BUS
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_I2C_BUS
int mgos_config_get_sys_atca_i2c_bus(struct mgos_config *cfg) {
  return cfg->sys.atca.i2c_bus;
}
void mgos_config_set_sys_atca_i2c_bus(struct mgos_config *cfg, int v) {
  cfg->sys.atca.i2c_bus = v;
}

/* sys.atca.i2c_addr */
#define MGOS_CONFIG_HAVE_SYS_ATCA_I2C_ADDR
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_I2C_ADDR
int mgos_config_get_sys_atca_i2c_addr(struct mgos_config *cfg) {
  return cfg->sys.atca.i2c_addr;
}
void mgos_config_set_sys_atca_i2c_addr(struct mgos_config *cfg, int v) {
  cfg->sys.atca.i2c_addr = v;
}

/* sys.atca.ecdh_slots_mask */
#define MGOS_CONFIG_HAVE_SYS_ATCA_ECDH_SLOTS_MASK
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_ECDH_SLOTS_MASK
int mgos_config_get_sys_atca_ecdh_slots_mask(struct mgos_config *cfg) {
  return cfg->sys.atca.ecdh_slots_mask;
}
void mgos_config_set_sys_atca_ecdh_slots_mask(struct mgos_config *cfg, int v) {
  cfg->sys.atca.ecdh_slots_mask = v;
}

/* sys.tz_spec */
#define MGOS_CONFIG_HAVE_SYS_TZ_SPEC
#define MGOS_SYS_CONFIG_HAVE_SYS_TZ_SPEC
const char * mgos_config_get_sys_tz_spec(struct mgos_config *cfg) {
  return cfg->sys.tz_spec;
}
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->sys.tz_spec, v);
}

/* sys.wdt_timeout */
#define MGOS_CONFIG_HAVE_SYS_WDT_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_SYS_WDT_TIMEOUT
int mgos_config_get_sys_wdt_timeout(struct mgos_config *cfg) {
  return cfg->sys.wdt_timeout;
}
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int v) {
  cfg->sys.wdt_timeout = v;
}

/* sys.pref_ota_lib */
#define MGOS_CONFIG_HAVE_SYS_PREF_OTA_LIB
#define MGOS_SYS_CONFIG_HAVE_SYS_PREF_OTA_LIB
const char * mgos_config_get_sys_pref_ota_lib(struct mgos_config *cfg) {
  return cfg->sys.pref_ota_lib;
}
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->sys.pref_ota_lib, v);
}

/* sys.mount */
#define MGOS_CONFIG_HAVE_SYS_MOUNT
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT
const struct mgos_config_sys_mount * mgos_config_get_sys_mount(struct mgos_config *cfg) {
  return &cfg->sys.mount;
}

/* sys.mount.path */
#define MGOS_CONFIG_HAVE_SYS_MOUNT_PATH
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT_PATH
const char * mgos_config_get_sys_mount_path(struct mgos_config *cfg) {
  return cfg->sys.mount.path;
}
void mgos_config_set_sys_mount_path(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->sys.mount.path, v);
}

/* sys.mount.dev_type */
#define MGOS_CONFIG_HAVE_SYS_MOUNT_DEV_TYPE
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT_DEV_TYPE
const char * mgos_config_get_sys_mount_dev_type(struct mgos_config *cfg) {
  return cfg->sys.mount.dev_type;
}
void mgos_config_set_sys_mount_dev_type(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->sys.mount.dev_type, v);
}

/* sys.mount.dev_opts */
#define MGOS_CONFIG_HAVE_SYS_MOUNT_DEV_OPTS
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT_DEV_OPTS
const char * mgos_config_get_sys_mount_dev_opts(struct mgos_config *cfg) {
  return cfg->sys.mount.dev_opts;
}
void mgos_config_set_sys_mount_dev_opts(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->sys.mount.dev_opts, v);
}

/* sys.mount.fs_type */
#define MGOS_CONFIG_HAVE_SYS_MOUNT_FS_TYPE
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT_FS_TYPE
const char * mgos_config_get_sys_mount_fs_type(struct mgos_config *cfg) {
  return cfg->sys.mount.fs_type;
}
void mgos_config_set_sys_mount_fs_type(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->sys.mount.fs_type, v);
}

/* sys.mount.fs_opts */
#define MGOS_CONFIG_HAVE_SYS_MOUNT_FS_OPTS
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT_FS_OPTS
const char * mgos_config_get_sys_mount_fs_opts(struct mgos_config *cfg) {
  return cfg->sys.mount.fs_opts;
}
void mgos_config_set_sys_mount_fs_opts(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->sys.mount.fs_opts, v);
}

/* i2c */
#define MGOS_CONFIG_HAVE_I2C
#define MGOS_SYS_CONFIG_HAVE_I2C
const struct mgos_config_i2c * mgos_config_get_i2c(struct mgos_config *cfg) {
  return &cfg->i2c;
}

/* i2c.unit_no */
#define MGOS_CONFIG_HAVE_I2C_UNIT_NO
#define MGOS_SYS_CONFIG_HAVE_I2C_UNIT_NO
int mgos_config_get_i2c_unit_no(struct mgos_config *cfg) {
  return cfg->i2c.unit_no;
}
void mgos_config_set_i2c_unit_no(struct mgos_config *cfg, int v) {
  cfg->i2c.unit_no = v;
}

/* i2c.enable */
#define MGOS_CONFIG_HAVE_I2C_ENABLE
#define MGOS_SYS_CONFIG_HAVE_I2C_ENABLE
int mgos_config_get_i2c_enable(struct mgos_config *cfg) {
  return cfg->i2c.enable;
}
void mgos_config_set_i2c_enable(struct mgos_config *cfg, int v) {
  cfg->i2c.enable = v;
}

/* i2c.freq */
#define MGOS_CONFIG_HAVE_I2C_FREQ
#define MGOS_SYS_CONFIG_HAVE_I2C_FREQ
int mgos_config_get_i2c_freq(struct mgos_config *cfg) {
  return cfg->i2c.freq;
}
void mgos_config_set_i2c_freq(struct mgos_config *cfg, int v) {
  cfg->i2c.freq = v;
}

/* i2c.debug */
#define MGOS_CONFIG_HAVE_I2C_DEBUG
#define MGOS_SYS_CONFIG_HAVE_I2C_DEBUG
int mgos_config_get_i2c_debug(struct mgos_config *cfg) {
  return cfg->i2c.debug;
}
void mgos_config_set_i2c_debug(struct mgos_config *cfg, int v) {
  cfg->i2c.debug = v;
}

/* i2c.sda_gpio */
#define MGOS_CONFIG_HAVE_I2C_SDA_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C_SDA_GPIO
int mgos_config_get_i2c_sda_gpio(struct mgos_config *cfg) {
  return cfg->i2c.sda_gpio;
}
void mgos_config_set_i2c_sda_gpio(struct mgos_config *cfg, int v) {
  cfg->i2c.sda_gpio = v;
}

/* i2c.scl_gpio */
#define MGOS_CONFIG_HAVE_I2C_SCL_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C_SCL_GPIO
int mgos_config_get_i2c_scl_gpio(struct mgos_config *cfg) {
  return cfg->i2c.scl_gpio;
}
void mgos_config_set_i2c_scl_gpio(struct mgos_config *cfg, int v) {
  cfg->i2c.scl_gpio = v;
}

/* i2c1 */
#define MGOS_CONFIG_HAVE_I2C1
#define MGOS_SYS_CONFIG_HAVE_I2C1
const struct mgos_config_i2c * mgos_config_get_i2c1(struct mgos_config *cfg) {
  return &cfg->i2c1;
}

/* i2c1.unit_no */
#define MGOS_CONFIG_HAVE_I2C1_UNIT_NO
#define MGOS_SYS_CONFIG_HAVE_I2C1_UNIT_NO
int mgos_config_get_i2c1_unit_no(struct mgos_config *cfg) {
  return cfg->i2c1.unit_no;
}
void mgos_config_set_i2c1_unit_no(struct mgos_config *cfg, int v) {
  cfg->i2c1.unit_no = v;
}

/* i2c1.enable */
#define MGOS_CONFIG_HAVE_I2C1_ENABLE
#define MGOS_SYS_CONFIG_HAVE_I2C1_ENABLE
int mgos_config_get_i2c1_enable(struct mgos_config *cfg) {
  return cfg->i2c1.enable;
}
void mgos_config_set_i2c1_enable(struct mgos_config *cfg, int v) {
  cfg->i2c1.enable = v;
}

/* i2c1.freq */
#define MGOS_CONFIG_HAVE_I2C1_FREQ
#define MGOS_SYS_CONFIG_HAVE_I2C1_FREQ
int mgos_config_get_i2c1_freq(struct mgos_config *cfg) {
  return cfg->i2c1.freq;
}
void mgos_config_set_i2c1_freq(struct mgos_config *cfg, int v) {
  cfg->i2c1.freq = v;
}

/* i2c1.debug */
#define MGOS_CONFIG_HAVE_I2C1_DEBUG
#define MGOS_SYS_CONFIG_HAVE_I2C1_DEBUG
int mgos_config_get_i2c1_debug(struct mgos_config *cfg) {
  return cfg->i2c1.debug;
}
void mgos_config_set_i2c1_debug(struct mgos_config *cfg, int v) {
  cfg->i2c1.debug = v;
}

/* i2c1.sda_gpio */
#define MGOS_CONFIG_HAVE_I2C1_SDA_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C1_SDA_GPIO
int mgos_config_get_i2c1_sda_gpio(struct mgos_config *cfg) {
  return cfg->i2c1.sda_gpio;
}
void mgos_config_set_i2c1_sda_gpio(struct mgos_config *cfg, int v) {
  cfg->i2c1.sda_gpio = v;
}

/* i2c1.scl_gpio */
#define MGOS_CONFIG_HAVE_I2C1_SCL_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C1_SCL_GPIO
int mgos_config_get_i2c1_scl_gpio(struct mgos_config *cfg) {
  return cfg->i2c1.scl_gpio;
}
void mgos_config_set_i2c1_scl_gpio(struct mgos_config *cfg, int v) {
  cfg->i2c1.scl_gpio = v;
}

/* device */
#define MGOS_CONFIG_HAVE_DEVICE
#define MGOS_SYS_CONFIG_HAVE_DEVICE
const struct mgos_config_device * mgos_config_get_device(struct mgos_config *cfg) {
  return &cfg->device;
}

/* device.id */
#define MGOS_CONFIG_HAVE_DEVICE_ID
#define MGOS_SYS_CONFIG_HAVE_DEVICE_ID
const char * mgos_config_get_device_id(struct mgos_config *cfg) {
  return cfg->device.id;
}
void mgos_config_set_device_id(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->device.id, v);
}

/* device.license */
#define MGOS_CONFIG_HAVE_DEVICE_LICENSE
#define MGOS_SYS_CONFIG_HAVE_DEVICE_LICENSE
const char * mgos_config_get_device_license(struct mgos_config *cfg) {
  return cfg->device.license;
}
void mgos_config_set_device_license(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->device.license, v);
}

/* device.mac */
#define MGOS_CONFIG_HAVE_DEVICE_MAC
#define MGOS_SYS_CONFIG_HAVE_DEVICE_MAC
const char * mgos_config_get_device_mac(struct mgos_config *cfg) {
  return cfg->device.mac;
}
void mgos_config_set_device_mac(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->device.mac, v);
}

/* conf_acl */
#define MGOS_CONFIG_HAVE_CONF_ACL
#define MGOS_SYS_CONFIG_HAVE_CONF_ACL
const char * mgos_config_get_conf_acl(struct mgos_config *cfg) {
  return cfg->conf_acl;
}
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->conf_acl, v);
}

/* mqtt */
#define MGOS_CONFIG_HAVE_MQTT
#define MGOS_SYS_CONFIG_HAVE_MQTT
const struct mgos_config_mqtt * mgos_config_get_mqtt(struct mgos_config *cfg) {
  return &cfg->mqtt;
}

/* mqtt.enable */
#define MGOS_CONFIG_HAVE_MQTT_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MQTT_ENABLE
int mgos_config_get_mqtt_enable(struct mgos_config *cfg) {
  return cfg->mqtt.enable;
}
void mgos_config_set_mqtt_enable(struct mgos_config *cfg, int v) {
  cfg->mqtt.enable = v;
}

/* mqtt.server */
#define MGOS_CONFIG_HAVE_MQTT_SERVER
#define MGOS_SYS_CONFIG_HAVE_MQTT_SERVER
const char * mgos_config_get_mqtt_server(struct mgos_config *cfg) {
  return cfg->mqtt.server;
}
void mgos_config_set_mqtt_server(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.server, v);
}

/* mqtt.client_id */
#define MGOS_CONFIG_HAVE_MQTT_CLIENT_ID
#define MGOS_SYS_CONFIG_HAVE_MQTT_CLIENT_ID
const char * mgos_config_get_mqtt_client_id(struct mgos_config *cfg) {
  return cfg->mqtt.client_id;
}
void mgos_config_set_mqtt_client_id(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.client_id, v);
}

/* mqtt.user */
#define MGOS_CONFIG_HAVE_MQTT_USER
#define MGOS_SYS_CONFIG_HAVE_MQTT_USER
const char * mgos_config_get_mqtt_user(struct mgos_config *cfg) {
  return cfg->mqtt.user;
}
void mgos_config_set_mqtt_user(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.user, v);
}

/* mqtt.pass */
#define MGOS_CONFIG_HAVE_MQTT_PASS
#define MGOS_SYS_CONFIG_HAVE_MQTT_PASS
const char * mgos_config_get_mqtt_pass(struct mgos_config *cfg) {
  return cfg->mqtt.pass;
}
void mgos_config_set_mqtt_pass(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.pass, v);
}

/* mqtt.reconnect_timeout_min */
#define MGOS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MIN
#define MGOS_SYS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MIN
double mgos_config_get_mqtt_reconnect_timeout_min(struct mgos_config *cfg) {
  return cfg->mqtt.reconnect_timeout_min;
}
void mgos_config_set_mqtt_reconnect_timeout_min(struct mgos_config *cfg, double v) {
  cfg->mqtt.reconnect_timeout_min = v;
}

/* mqtt.reconnect_timeout_max */
#define MGOS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MAX
#define MGOS_SYS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MAX
double mgos_config_get_mqtt_reconnect_timeout_max(struct mgos_config *cfg) {
  return cfg->mqtt.reconnect_timeout_max;
}
void mgos_config_set_mqtt_reconnect_timeout_max(struct mgos_config *cfg, double v) {
  cfg->mqtt.reconnect_timeout_max = v;
}

/* mqtt.ssl_cert */
#define MGOS_CONFIG_HAVE_MQTT_SSL_CERT
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_CERT
const char * mgos_config_get_mqtt_ssl_cert(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_cert;
}
void mgos_config_set_mqtt_ssl_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.ssl_cert, v);
}

/* mqtt.ssl_key */
#define MGOS_CONFIG_HAVE_MQTT_SSL_KEY
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_KEY
const char * mgos_config_get_mqtt_ssl_key(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_key;
}
void mgos_config_set_mqtt_ssl_key(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.ssl_key, v);
}

/* mqtt.ssl_ca_cert */
#define MGOS_CONFIG_HAVE_MQTT_SSL_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_CA_CERT
const char * mgos_config_get_mqtt_ssl_ca_cert(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_ca_cert;
}
void mgos_config_set_mqtt_ssl_ca_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.ssl_ca_cert, v);
}

/* mqtt.ssl_cipher_suites */
#define MGOS_CONFIG_HAVE_MQTT_SSL_CIPHER_SUITES
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_CIPHER_SUITES
const char * mgos_config_get_mqtt_ssl_cipher_suites(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_cipher_suites;
}
void mgos_config_set_mqtt_ssl_cipher_suites(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.ssl_cipher_suites, v);
}

/* mqtt.ssl_psk_identity */
#define MGOS_CONFIG_HAVE_MQTT_SSL_PSK_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_PSK_IDENTITY
const char * mgos_config_get_mqtt_ssl_psk_identity(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_psk_identity;
}
void mgos_config_set_mqtt_ssl_psk_identity(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.ssl_psk_identity, v);
}

/* mqtt.ssl_psk_key */
#define MGOS_CONFIG_HAVE_MQTT_SSL_PSK_KEY
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_PSK_KEY
const char * mgos_config_get_mqtt_ssl_psk_key(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_psk_key;
}
void mgos_config_set_mqtt_ssl_psk_key(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.ssl_psk_key, v);
}

/* mqtt.clean_session */
#define MGOS_CONFIG_HAVE_MQTT_CLEAN_SESSION
#define MGOS_SYS_CONFIG_HAVE_MQTT_CLEAN_SESSION
int mgos_config_get_mqtt_clean_session(struct mgos_config *cfg) {
  return cfg->mqtt.clean_session;
}
void mgos_config_set_mqtt_clean_session(struct mgos_config *cfg, int v) {
  cfg->mqtt.clean_session = v;
}

/* mqtt.keep_alive */
#define MGOS_CONFIG_HAVE_MQTT_KEEP_ALIVE
#define MGOS_SYS_CONFIG_HAVE_MQTT_KEEP_ALIVE
int mgos_config_get_mqtt_keep_alive(struct mgos_config *cfg) {
  return cfg->mqtt.keep_alive;
}
void mgos_config_set_mqtt_keep_alive(struct mgos_config *cfg, int v) {
  cfg->mqtt.keep_alive = v;
}

/* mqtt.will_topic */
#define MGOS_CONFIG_HAVE_MQTT_WILL_TOPIC
#define MGOS_SYS_CONFIG_HAVE_MQTT_WILL_TOPIC
const char * mgos_config_get_mqtt_will_topic(struct mgos_config *cfg) {
  return cfg->mqtt.will_topic;
}
void mgos_config_set_mqtt_will_topic(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.will_topic, v);
}

/* mqtt.will_message */
#define MGOS_CONFIG_HAVE_MQTT_WILL_MESSAGE
#define MGOS_SYS_CONFIG_HAVE_MQTT_WILL_MESSAGE
const char * mgos_config_get_mqtt_will_message(struct mgos_config *cfg) {
  return cfg->mqtt.will_message;
}
void mgos_config_set_mqtt_will_message(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt.will_message, v);
}

/* mqtt.max_qos */
#define MGOS_CONFIG_HAVE_MQTT_MAX_QOS
#define MGOS_SYS_CONFIG_HAVE_MQTT_MAX_QOS
int mgos_config_get_mqtt_max_qos(struct mgos_config *cfg) {
  return cfg->mqtt.max_qos;
}
void mgos_config_set_mqtt_max_qos(struct mgos_config *cfg, int v) {
  cfg->mqtt.max_qos = v;
}

/* mqtt.recv_mbuf_limit */
#define MGOS_CONFIG_HAVE_MQTT_RECV_MBUF_LIMIT
#define MGOS_SYS_CONFIG_HAVE_MQTT_RECV_MBUF_LIMIT
int mgos_config_get_mqtt_recv_mbuf_limit(struct mgos_config *cfg) {
  return cfg->mqtt.recv_mbuf_limit;
}
void mgos_config_set_mqtt_recv_mbuf_limit(struct mgos_config *cfg, int v) {
  cfg->mqtt.recv_mbuf_limit = v;
}

/* mqtt.require_time */
#define MGOS_CONFIG_HAVE_MQTT_REQUIRE_TIME
#define MGOS_SYS_CONFIG_HAVE_MQTT_REQUIRE_TIME
int mgos_config_get_mqtt_require_time(struct mgos_config *cfg) {
  return cfg->mqtt.require_time;
}
void mgos_config_set_mqtt_require_time(struct mgos_config *cfg, int v) {
  cfg->mqtt.require_time = v;
}

/* mqtt.cloud_events */
#define MGOS_CONFIG_HAVE_MQTT_CLOUD_EVENTS
#define MGOS_SYS_CONFIG_HAVE_MQTT_CLOUD_EVENTS
int mgos_config_get_mqtt_cloud_events(struct mgos_config *cfg) {
  return cfg->mqtt.cloud_events;
}
void mgos_config_set_mqtt_cloud_events(struct mgos_config *cfg, int v) {
  cfg->mqtt.cloud_events = v;
}

/* mqtt1 */
#define MGOS_CONFIG_HAVE_MQTT1
#define MGOS_SYS_CONFIG_HAVE_MQTT1
const struct mgos_config_mqtt * mgos_config_get_mqtt1(struct mgos_config *cfg) {
  return &cfg->mqtt1;
}

/* mqtt1.enable */
#define MGOS_CONFIG_HAVE_MQTT1_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MQTT1_ENABLE
int mgos_config_get_mqtt1_enable(struct mgos_config *cfg) {
  return cfg->mqtt1.enable;
}
void mgos_config_set_mqtt1_enable(struct mgos_config *cfg, int v) {
  cfg->mqtt1.enable = v;
}

/* mqtt1.server */
#define MGOS_CONFIG_HAVE_MQTT1_SERVER
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SERVER
const char * mgos_config_get_mqtt1_server(struct mgos_config *cfg) {
  return cfg->mqtt1.server;
}
void mgos_config_set_mqtt1_server(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.server, v);
}

/* mqtt1.client_id */
#define MGOS_CONFIG_HAVE_MQTT1_CLIENT_ID
#define MGOS_SYS_CONFIG_HAVE_MQTT1_CLIENT_ID
const char * mgos_config_get_mqtt1_client_id(struct mgos_config *cfg) {
  return cfg->mqtt1.client_id;
}
void mgos_config_set_mqtt1_client_id(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.client_id, v);
}

/* mqtt1.user */
#define MGOS_CONFIG_HAVE_MQTT1_USER
#define MGOS_SYS_CONFIG_HAVE_MQTT1_USER
const char * mgos_config_get_mqtt1_user(struct mgos_config *cfg) {
  return cfg->mqtt1.user;
}
void mgos_config_set_mqtt1_user(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.user, v);
}

/* mqtt1.pass */
#define MGOS_CONFIG_HAVE_MQTT1_PASS
#define MGOS_SYS_CONFIG_HAVE_MQTT1_PASS
const char * mgos_config_get_mqtt1_pass(struct mgos_config *cfg) {
  return cfg->mqtt1.pass;
}
void mgos_config_set_mqtt1_pass(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.pass, v);
}

/* mqtt1.reconnect_timeout_min */
#define MGOS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MIN
#define MGOS_SYS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MIN
double mgos_config_get_mqtt1_reconnect_timeout_min(struct mgos_config *cfg) {
  return cfg->mqtt1.reconnect_timeout_min;
}
void mgos_config_set_mqtt1_reconnect_timeout_min(struct mgos_config *cfg, double v) {
  cfg->mqtt1.reconnect_timeout_min = v;
}

/* mqtt1.reconnect_timeout_max */
#define MGOS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MAX
#define MGOS_SYS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MAX
double mgos_config_get_mqtt1_reconnect_timeout_max(struct mgos_config *cfg) {
  return cfg->mqtt1.reconnect_timeout_max;
}
void mgos_config_set_mqtt1_reconnect_timeout_max(struct mgos_config *cfg, double v) {
  cfg->mqtt1.reconnect_timeout_max = v;
}

/* mqtt1.ssl_cert */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_CERT
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_CERT
const char * mgos_config_get_mqtt1_ssl_cert(struct mgos_config *cfg) {
  return cfg->mqtt1.ssl_cert;
}
void mgos_config_set_mqtt1_ssl_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.ssl_cert, v);
}

/* mqtt1.ssl_key */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_KEY
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_KEY
const char * mgos_config_get_mqtt1_ssl_key(struct mgos_config *cfg) {
  return cfg->mqtt1.ssl_key;
}
void mgos_config_set_mqtt1_ssl_key(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.ssl_key, v);
}

/* mqtt1.ssl_ca_cert */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_CA_CERT
const char * mgos_config_get_mqtt1_ssl_ca_cert(struct mgos_config *cfg) {
  return cfg->mqtt1.ssl_ca_cert;
}
void mgos_config_set_mqtt1_ssl_ca_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.ssl_ca_cert, v);
}

/* mqtt1.ssl_cipher_suites */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_CIPHER_SUITES
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_CIPHER_SUITES
const char * mgos_config_get_mqtt1_ssl_cipher_suites(struct mgos_config *cfg) {
  return cfg->mqtt1.ssl_cipher_suites;
}
void mgos_config_set_mqtt1_ssl_cipher_suites(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.ssl_cipher_suites, v);
}

/* mqtt1.ssl_psk_identity */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_PSK_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_PSK_IDENTITY
const char * mgos_config_get_mqtt1_ssl_psk_identity(struct mgos_config *cfg) {
  return cfg->mqtt1.ssl_psk_identity;
}
void mgos_config_set_mqtt1_ssl_psk_identity(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.ssl_psk_identity, v);
}

/* mqtt1.ssl_psk_key */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_PSK_KEY
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_PSK_KEY
const char * mgos_config_get_mqtt1_ssl_psk_key(struct mgos_config *cfg) {
  return cfg->mqtt1.ssl_psk_key;
}
void mgos_config_set_mqtt1_ssl_psk_key(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.ssl_psk_key, v);
}

/* mqtt1.clean_session */
#define MGOS_CONFIG_HAVE_MQTT1_CLEAN_SESSION
#define MGOS_SYS_CONFIG_HAVE_MQTT1_CLEAN_SESSION
int mgos_config_get_mqtt1_clean_session(struct mgos_config *cfg) {
  return cfg->mqtt1.clean_session;
}
void mgos_config_set_mqtt1_clean_session(struct mgos_config *cfg, int v) {
  cfg->mqtt1.clean_session = v;
}

/* mqtt1.keep_alive */
#define MGOS_CONFIG_HAVE_MQTT1_KEEP_ALIVE
#define MGOS_SYS_CONFIG_HAVE_MQTT1_KEEP_ALIVE
int mgos_config_get_mqtt1_keep_alive(struct mgos_config *cfg) {
  return cfg->mqtt1.keep_alive;
}
void mgos_config_set_mqtt1_keep_alive(struct mgos_config *cfg, int v) {
  cfg->mqtt1.keep_alive = v;
}

/* mqtt1.will_topic */
#define MGOS_CONFIG_HAVE_MQTT1_WILL_TOPIC
#define MGOS_SYS_CONFIG_HAVE_MQTT1_WILL_TOPIC
const char * mgos_config_get_mqtt1_will_topic(struct mgos_config *cfg) {
  return cfg->mqtt1.will_topic;
}
void mgos_config_set_mqtt1_will_topic(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.will_topic, v);
}

/* mqtt1.will_message */
#define MGOS_CONFIG_HAVE_MQTT1_WILL_MESSAGE
#define MGOS_SYS_CONFIG_HAVE_MQTT1_WILL_MESSAGE
const char * mgos_config_get_mqtt1_will_message(struct mgos_config *cfg) {
  return cfg->mqtt1.will_message;
}
void mgos_config_set_mqtt1_will_message(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->mqtt1.will_message, v);
}

/* mqtt1.max_qos */
#define MGOS_CONFIG_HAVE_MQTT1_MAX_QOS
#define MGOS_SYS_CONFIG_HAVE_MQTT1_MAX_QOS
int mgos_config_get_mqtt1_max_qos(struct mgos_config *cfg) {
  return cfg->mqtt1.max_qos;
}
void mgos_config_set_mqtt1_max_qos(struct mgos_config *cfg, int v) {
  cfg->mqtt1.max_qos = v;
}

/* mqtt1.recv_mbuf_limit */
#define MGOS_CONFIG_HAVE_MQTT1_RECV_MBUF_LIMIT
#define MGOS_SYS_CONFIG_HAVE_MQTT1_RECV_MBUF_LIMIT
int mgos_config_get_mqtt1_recv_mbuf_limit(struct mgos_config *cfg) {
  return cfg->mqtt1.recv_mbuf_limit;
}
void mgos_config_set_mqtt1_recv_mbuf_limit(struct mgos_config *cfg, int v) {
  cfg->mqtt1.recv_mbuf_limit = v;
}

/* mqtt1.require_time */
#define MGOS_CONFIG_HAVE_MQTT1_REQUIRE_TIME
#define MGOS_SYS_CONFIG_HAVE_MQTT1_REQUIRE_TIME
int mgos_config_get_mqtt1_require_time(struct mgos_config *cfg) {
  return cfg->mqtt1.require_time;
}
void mgos_config_set_mqtt1_require_time(struct mgos_config *cfg, int v) {
  cfg->mqtt1.require_time = v;
}

/* mqtt1.cloud_events */
#define MGOS_CONFIG_HAVE_MQTT1_CLOUD_EVENTS
#define MGOS_SYS_CONFIG_HAVE_MQTT1_CLOUD_EVENTS
int mgos_config_get_mqtt1_cloud_events(struct mgos_config *cfg) {
  return cfg->mqtt1.cloud_events;
}
void mgos_config_set_mqtt1_cloud_events(struct mgos_config *cfg, int v) {
  cfg->mqtt1.cloud_events = v;
}

/* shadow */
#define MGOS_CONFIG_HAVE_SHADOW
#define MGOS_SYS_CONFIG_HAVE_SHADOW
const struct mgos_config_shadow * mgos_config_get_shadow(struct mgos_config *cfg) {
  return &cfg->shadow;
}

/* shadow.enable */
#define MGOS_CONFIG_HAVE_SHADOW_ENABLE
#define MGOS_SYS_CONFIG_HAVE_SHADOW_ENABLE
int mgos_config_get_shadow_enable(struct mgos_config *cfg) {
  return cfg->shadow.enable;
}
void mgos_config_set_shadow_enable(struct mgos_config *cfg, int v) {
  cfg->shadow.enable = v;
}

/* shadow.lib */
#define MGOS_CONFIG_HAVE_SHADOW_LIB
#define MGOS_SYS_CONFIG_HAVE_SHADOW_LIB
const char * mgos_config_get_shadow_lib(struct mgos_config *cfg) {
  return cfg->shadow.lib;
}
void mgos_config_set_shadow_lib(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->shadow.lib, v);
}

/* shadow.ota_enable */
#define MGOS_CONFIG_HAVE_SHADOW_OTA_ENABLE
#define MGOS_SYS_CONFIG_HAVE_SHADOW_OTA_ENABLE
int mgos_config_get_shadow_ota_enable(struct mgos_config *cfg) {
  return cfg->shadow.ota_enable;
}
void mgos_config_set_shadow_ota_enable(struct mgos_config *cfg, int v) {
  cfg->shadow.ota_enable = v;
}

/* shadow.autocommit */
#define MGOS_CONFIG_HAVE_SHADOW_AUTOCOMMIT
#define MGOS_SYS_CONFIG_HAVE_SHADOW_AUTOCOMMIT
int mgos_config_get_shadow_autocommit(struct mgos_config *cfg) {
  return cfg->shadow.autocommit;
}
void mgos_config_set_shadow_autocommit(struct mgos_config *cfg, int v) {
  cfg->shadow.autocommit = v;
}

/* aws */
#define MGOS_CONFIG_HAVE_AWS
#define MGOS_SYS_CONFIG_HAVE_AWS
const struct mgos_config_aws * mgos_config_get_aws(struct mgos_config *cfg) {
  return &cfg->aws;
}

/* aws.thing_name */
#define MGOS_CONFIG_HAVE_AWS_THING_NAME
#define MGOS_SYS_CONFIG_HAVE_AWS_THING_NAME
const char * mgos_config_get_aws_thing_name(struct mgos_config *cfg) {
  return cfg->aws.thing_name;
}
void mgos_config_set_aws_thing_name(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->aws.thing_name, v);
}

/* aws.greengrass */
#define MGOS_CONFIG_HAVE_AWS_GREENGRASS
#define MGOS_SYS_CONFIG_HAVE_AWS_GREENGRASS
const struct mgos_config_aws_greengrass * mgos_config_get_aws_greengrass(struct mgos_config *cfg) {
  return &cfg->aws.greengrass;
}

/* aws.greengrass.enable */
#define MGOS_CONFIG_HAVE_AWS_GREENGRASS_ENABLE
#define MGOS_SYS_CONFIG_HAVE_AWS_GREENGRASS_ENABLE
int mgos_config_get_aws_greengrass_enable(struct mgos_config *cfg) {
  return cfg->aws.greengrass.enable;
}
void mgos_config_set_aws_greengrass_enable(struct mgos_config *cfg, int v) {
  cfg->aws.greengrass.enable = v;
}

/* aws.greengrass.reconnect_timeout_min */
#define MGOS_CONFIG_HAVE_AWS_GREENGRASS_RECONNECT_TIMEOUT_MIN
#define MGOS_SYS_CONFIG_HAVE_AWS_GREENGRASS_RECONNECT_TIMEOUT_MIN
int mgos_config_get_aws_greengrass_reconnect_timeout_min(struct mgos_config *cfg) {
  return cfg->aws.greengrass.reconnect_timeout_min;
}
void mgos_config_set_aws_greengrass_reconnect_timeout_min(struct mgos_config *cfg, int v) {
  cfg->aws.greengrass.reconnect_timeout_min = v;
}

/* aws.greengrass.reconnect_timeout_max */
#define MGOS_CONFIG_HAVE_AWS_GREENGRASS_RECONNECT_TIMEOUT_MAX
#define MGOS_SYS_CONFIG_HAVE_AWS_GREENGRASS_RECONNECT_TIMEOUT_MAX
int mgos_config_get_aws_greengrass_reconnect_timeout_max(struct mgos_config *cfg) {
  return cfg->aws.greengrass.reconnect_timeout_max;
}
void mgos_config_set_aws_greengrass_reconnect_timeout_max(struct mgos_config *cfg, int v) {
  cfg->aws.greengrass.reconnect_timeout_max = v;
}

/* sntp */
#define MGOS_CONFIG_HAVE_SNTP
#define MGOS_SYS_CONFIG_HAVE_SNTP
const struct mgos_config_sntp * mgos_config_get_sntp(struct mgos_config *cfg) {
  return &cfg->sntp;
}

/* sntp.enable */
#define MGOS_CONFIG_HAVE_SNTP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_SNTP_ENABLE
int mgos_config_get_sntp_enable(struct mgos_config *cfg) {
  return cfg->sntp.enable;
}
void mgos_config_set_sntp_enable(struct mgos_config *cfg, int v) {
  cfg->sntp.enable = v;
}

/* sntp.server */
#define MGOS_CONFIG_HAVE_SNTP_SERVER
#define MGOS_SYS_CONFIG_HAVE_SNTP_SERVER
const char * mgos_config_get_sntp_server(struct mgos_config *cfg) {
  return cfg->sntp.server;
}
void mgos_config_set_sntp_server(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->sntp.server, v);
}

/* sntp.retry_min */
#define MGOS_CONFIG_HAVE_SNTP_RETRY_MIN
#define MGOS_SYS_CONFIG_HAVE_SNTP_RETRY_MIN
int mgos_config_get_sntp_retry_min(struct mgos_config *cfg) {
  return cfg->sntp.retry_min;
}
void mgos_config_set_sntp_retry_min(struct mgos_config *cfg, int v) {
  cfg->sntp.retry_min = v;
}

/* sntp.retry_max */
#define MGOS_CONFIG_HAVE_SNTP_RETRY_MAX
#define MGOS_SYS_CONFIG_HAVE_SNTP_RETRY_MAX
int mgos_config_get_sntp_retry_max(struct mgos_config *cfg) {
  return cfg->sntp.retry_max;
}
void mgos_config_set_sntp_retry_max(struct mgos_config *cfg, int v) {
  cfg->sntp.retry_max = v;
}

/* sntp.update_interval */
#define MGOS_CONFIG_HAVE_SNTP_UPDATE_INTERVAL
#define MGOS_SYS_CONFIG_HAVE_SNTP_UPDATE_INTERVAL
int mgos_config_get_sntp_update_interval(struct mgos_config *cfg) {
  return cfg->sntp.update_interval;
}
void mgos_config_set_sntp_update_interval(struct mgos_config *cfg, int v) {
  cfg->sntp.update_interval = v;
}

/* azure */
#define MGOS_CONFIG_HAVE_AZURE
#define MGOS_SYS_CONFIG_HAVE_AZURE
const struct mgos_config_azure * mgos_config_get_azure(struct mgos_config *cfg) {
  return &cfg->azure;
}

/* azure.enable */
#define MGOS_CONFIG_HAVE_AZURE_ENABLE
#define MGOS_SYS_CONFIG_HAVE_AZURE_ENABLE
int mgos_config_get_azure_enable(struct mgos_config *cfg) {
  return cfg->azure.enable;
}
void mgos_config_set_azure_enable(struct mgos_config *cfg, int v) {
  cfg->azure.enable = v;
}

/* azure.cs */
#define MGOS_CONFIG_HAVE_AZURE_CS
#define MGOS_SYS_CONFIG_HAVE_AZURE_CS
const char * mgos_config_get_azure_cs(struct mgos_config *cfg) {
  return cfg->azure.cs;
}
void mgos_config_set_azure_cs(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->azure.cs, v);
}

/* azure.token_ttl */
#define MGOS_CONFIG_HAVE_AZURE_TOKEN_TTL
#define MGOS_SYS_CONFIG_HAVE_AZURE_TOKEN_TTL
int mgos_config_get_azure_token_ttl(struct mgos_config *cfg) {
  return cfg->azure.token_ttl;
}
void mgos_config_set_azure_token_ttl(struct mgos_config *cfg, int v) {
  cfg->azure.token_ttl = v;
}

/* azure.host_name */
#define MGOS_CONFIG_HAVE_AZURE_HOST_NAME
#define MGOS_SYS_CONFIG_HAVE_AZURE_HOST_NAME
const char * mgos_config_get_azure_host_name(struct mgos_config *cfg) {
  return cfg->azure.host_name;
}
void mgos_config_set_azure_host_name(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->azure.host_name, v);
}

/* azure.device_id */
#define MGOS_CONFIG_HAVE_AZURE_DEVICE_ID
#define MGOS_SYS_CONFIG_HAVE_AZURE_DEVICE_ID
const char * mgos_config_get_azure_device_id(struct mgos_config *cfg) {
  return cfg->azure.device_id;
}
void mgos_config_set_azure_device_id(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->azure.device_id, v);
}

/* azure.cert */
#define MGOS_CONFIG_HAVE_AZURE_CERT
#define MGOS_SYS_CONFIG_HAVE_AZURE_CERT
const char * mgos_config_get_azure_cert(struct mgos_config *cfg) {
  return cfg->azure.cert;
}
void mgos_config_set_azure_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->azure.cert, v);
}

/* azure.key */
#define MGOS_CONFIG_HAVE_AZURE_KEY
#define MGOS_SYS_CONFIG_HAVE_AZURE_KEY
const char * mgos_config_get_azure_key(struct mgos_config *cfg) {
  return cfg->azure.key;
}
void mgos_config_set_azure_key(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->azure.key, v);
}

/* azure.enable_cm */
#define MGOS_CONFIG_HAVE_AZURE_ENABLE_CM
#define MGOS_SYS_CONFIG_HAVE_AZURE_ENABLE_CM
int mgos_config_get_azure_enable_cm(struct mgos_config *cfg) {
  return cfg->azure.enable_cm;
}
void mgos_config_set_azure_enable_cm(struct mgos_config *cfg, int v) {
  cfg->azure.enable_cm = v;
}

/* azure.enable_dm */
#define MGOS_CONFIG_HAVE_AZURE_ENABLE_DM
#define MGOS_SYS_CONFIG_HAVE_AZURE_ENABLE_DM
int mgos_config_get_azure_enable_dm(struct mgos_config *cfg) {
  return cfg->azure.enable_dm;
}
void mgos_config_set_azure_enable_dm(struct mgos_config *cfg, int v) {
  cfg->azure.enable_dm = v;
}

/* bt */
#define MGOS_CONFIG_HAVE_BT
#define MGOS_SYS_CONFIG_HAVE_BT
const struct mgos_config_bt * mgos_config_get_bt(struct mgos_config *cfg) {
  return &cfg->bt;
}

/* bt.enable */
#define MGOS_CONFIG_HAVE_BT_ENABLE
#define MGOS_SYS_CONFIG_HAVE_BT_ENABLE
int mgos_config_get_bt_enable(struct mgos_config *cfg) {
  return cfg->bt.enable;
}
void mgos_config_set_bt_enable(struct mgos_config *cfg, int v) {
  cfg->bt.enable = v;
}

/* bt.dev_name */
#define MGOS_CONFIG_HAVE_BT_DEV_NAME
#define MGOS_SYS_CONFIG_HAVE_BT_DEV_NAME
const char * mgos_config_get_bt_dev_name(struct mgos_config *cfg) {
  return cfg->bt.dev_name;
}
void mgos_config_set_bt_dev_name(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->bt.dev_name, v);
}

/* bt.adv_enable */
#define MGOS_CONFIG_HAVE_BT_ADV_ENABLE
#define MGOS_SYS_CONFIG_HAVE_BT_ADV_ENABLE
int mgos_config_get_bt_adv_enable(struct mgos_config *cfg) {
  return cfg->bt.adv_enable;
}
void mgos_config_set_bt_adv_enable(struct mgos_config *cfg, int v) {
  cfg->bt.adv_enable = v;
}

/* bt.scan_rsp_data_hex */
#define MGOS_CONFIG_HAVE_BT_SCAN_RSP_DATA_HEX
#define MGOS_SYS_CONFIG_HAVE_BT_SCAN_RSP_DATA_HEX
const char * mgos_config_get_bt_scan_rsp_data_hex(struct mgos_config *cfg) {
  return cfg->bt.scan_rsp_data_hex;
}
void mgos_config_set_bt_scan_rsp_data_hex(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->bt.scan_rsp_data_hex, v);
}

/* bt.keep_enabled */
#define MGOS_CONFIG_HAVE_BT_KEEP_ENABLED
#define MGOS_SYS_CONFIG_HAVE_BT_KEEP_ENABLED
int mgos_config_get_bt_keep_enabled(struct mgos_config *cfg) {
  return cfg->bt.keep_enabled;
}
void mgos_config_set_bt_keep_enabled(struct mgos_config *cfg, int v) {
  cfg->bt.keep_enabled = v;
}

/* bt.allow_pairing */
#define MGOS_CONFIG_HAVE_BT_ALLOW_PAIRING
#define MGOS_SYS_CONFIG_HAVE_BT_ALLOW_PAIRING
int mgos_config_get_bt_allow_pairing(struct mgos_config *cfg) {
  return cfg->bt.allow_pairing;
}
void mgos_config_set_bt_allow_pairing(struct mgos_config *cfg, int v) {
  cfg->bt.allow_pairing = v;
}

/* bt.max_paired_devices */
#define MGOS_CONFIG_HAVE_BT_MAX_PAIRED_DEVICES
#define MGOS_SYS_CONFIG_HAVE_BT_MAX_PAIRED_DEVICES
int mgos_config_get_bt_max_paired_devices(struct mgos_config *cfg) {
  return cfg->bt.max_paired_devices;
}
void mgos_config_set_bt_max_paired_devices(struct mgos_config *cfg, int v) {
  cfg->bt.max_paired_devices = v;
}

/* bt.random_address */
#define MGOS_CONFIG_HAVE_BT_RANDOM_ADDRESS
#define MGOS_SYS_CONFIG_HAVE_BT_RANDOM_ADDRESS
int mgos_config_get_bt_random_address(struct mgos_config *cfg) {
  return cfg->bt.random_address;
}
void mgos_config_set_bt_random_address(struct mgos_config *cfg, int v) {
  cfg->bt.random_address = v;
}

/* bt.gatt_mtu */
#define MGOS_CONFIG_HAVE_BT_GATT_MTU
#define MGOS_SYS_CONFIG_HAVE_BT_GATT_MTU
int mgos_config_get_bt_gatt_mtu(struct mgos_config *cfg) {
  return cfg->bt.gatt_mtu;
}
void mgos_config_set_bt_gatt_mtu(struct mgos_config *cfg, int v) {
  cfg->bt.gatt_mtu = v;
}

/* bt.gatts */
#define MGOS_CONFIG_HAVE_BT_GATTS
#define MGOS_SYS_CONFIG_HAVE_BT_GATTS
const struct mgos_config_bt_gatts * mgos_config_get_bt_gatts(struct mgos_config *cfg) {
  return &cfg->bt.gatts;
}

/* bt.gatts.min_sec_level */
#define MGOS_CONFIG_HAVE_BT_GATTS_MIN_SEC_LEVEL
#define MGOS_SYS_CONFIG_HAVE_BT_GATTS_MIN_SEC_LEVEL
int mgos_config_get_bt_gatts_min_sec_level(struct mgos_config *cfg) {
  return cfg->bt.gatts.min_sec_level;
}
void mgos_config_set_bt_gatts_min_sec_level(struct mgos_config *cfg, int v) {
  cfg->bt.gatts.min_sec_level = v;
}

/* bt.gatts.require_pairing */
#define MGOS_CONFIG_HAVE_BT_GATTS_REQUIRE_PAIRING
#define MGOS_SYS_CONFIG_HAVE_BT_GATTS_REQUIRE_PAIRING
int mgos_config_get_bt_gatts_require_pairing(struct mgos_config *cfg) {
  return cfg->bt.gatts.require_pairing;
}
void mgos_config_set_bt_gatts_require_pairing(struct mgos_config *cfg, int v) {
  cfg->bt.gatts.require_pairing = v;
}

/* bt.debug_svc_enable */
#define MGOS_CONFIG_HAVE_BT_DEBUG_SVC_ENABLE
#define MGOS_SYS_CONFIG_HAVE_BT_DEBUG_SVC_ENABLE
int mgos_config_get_bt_debug_svc_enable(struct mgos_config *cfg) {
  return cfg->bt.debug_svc_enable;
}
void mgos_config_set_bt_debug_svc_enable(struct mgos_config *cfg, int v) {
  cfg->bt.debug_svc_enable = v;
}

/* bt.debug_svc_sec_level */
#define MGOS_CONFIG_HAVE_BT_DEBUG_SVC_SEC_LEVEL
#define MGOS_SYS_CONFIG_HAVE_BT_DEBUG_SVC_SEC_LEVEL
int mgos_config_get_bt_debug_svc_sec_level(struct mgos_config *cfg) {
  return cfg->bt.debug_svc_sec_level;
}
void mgos_config_set_bt_debug_svc_sec_level(struct mgos_config *cfg, int v) {
  cfg->bt.debug_svc_sec_level = v;
}

/* update */
#define MGOS_CONFIG_HAVE_UPDATE
#define MGOS_SYS_CONFIG_HAVE_UPDATE
const struct mgos_config_update * mgos_config_get_update(struct mgos_config *cfg) {
  return &cfg->update;
}

/* update.timeout */
#define MGOS_CONFIG_HAVE_UPDATE_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_UPDATE_TIMEOUT
int mgos_config_get_update_timeout(struct mgos_config *cfg) {
  return cfg->update.timeout;
}
void mgos_config_set_update_timeout(struct mgos_config *cfg, int v) {
  cfg->update.timeout = v;
}

/* update.commit_timeout */
#define MGOS_CONFIG_HAVE_UPDATE_COMMIT_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_UPDATE_COMMIT_TIMEOUT
int mgos_config_get_update_commit_timeout(struct mgos_config *cfg) {
  return cfg->update.commit_timeout;
}
void mgos_config_set_update_commit_timeout(struct mgos_config *cfg, int v) {
  cfg->update.commit_timeout = v;
}

/* update.url */
#define MGOS_CONFIG_HAVE_UPDATE_URL
#define MGOS_SYS_CONFIG_HAVE_UPDATE_URL
const char * mgos_config_get_update_url(struct mgos_config *cfg) {
  return cfg->update.url;
}
void mgos_config_set_update_url(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->update.url, v);
}

/* update.interval */
#define MGOS_CONFIG_HAVE_UPDATE_INTERVAL
#define MGOS_SYS_CONFIG_HAVE_UPDATE_INTERVAL
int mgos_config_get_update_interval(struct mgos_config *cfg) {
  return cfg->update.interval;
}
void mgos_config_set_update_interval(struct mgos_config *cfg, int v) {
  cfg->update.interval = v;
}

/* update.extra_http_headers */
#define MGOS_CONFIG_HAVE_UPDATE_EXTRA_HTTP_HEADERS
#define MGOS_SYS_CONFIG_HAVE_UPDATE_EXTRA_HTTP_HEADERS
const char * mgos_config_get_update_extra_http_headers(struct mgos_config *cfg) {
  return cfg->update.extra_http_headers;
}
void mgos_config_set_update_extra_http_headers(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->update.extra_http_headers, v);
}

/* update.ssl_ca_file */
#define MGOS_CONFIG_HAVE_UPDATE_SSL_CA_FILE
#define MGOS_SYS_CONFIG_HAVE_UPDATE_SSL_CA_FILE
const char * mgos_config_get_update_ssl_ca_file(struct mgos_config *cfg) {
  return cfg->update.ssl_ca_file;
}
void mgos_config_set_update_ssl_ca_file(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->update.ssl_ca_file, v);
}

/* update.ssl_client_cert_file */
#define MGOS_CONFIG_HAVE_UPDATE_SSL_CLIENT_CERT_FILE
#define MGOS_SYS_CONFIG_HAVE_UPDATE_SSL_CLIENT_CERT_FILE
const char * mgos_config_get_update_ssl_client_cert_file(struct mgos_config *cfg) {
  return cfg->update.ssl_client_cert_file;
}
void mgos_config_set_update_ssl_client_cert_file(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->update.ssl_client_cert_file, v);
}

/* update.ssl_server_name */
#define MGOS_CONFIG_HAVE_UPDATE_SSL_SERVER_NAME
#define MGOS_SYS_CONFIG_HAVE_UPDATE_SSL_SERVER_NAME
const char * mgos_config_get_update_ssl_server_name(struct mgos_config *cfg) {
  return cfg->update.ssl_server_name;
}
void mgos_config_set_update_ssl_server_name(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->update.ssl_server_name, v);
}

/* update.enable_post */
#define MGOS_CONFIG_HAVE_UPDATE_ENABLE_POST
#define MGOS_SYS_CONFIG_HAVE_UPDATE_ENABLE_POST
int mgos_config_get_update_enable_post(struct mgos_config *cfg) {
  return cfg->update.enable_post;
}
void mgos_config_set_update_enable_post(struct mgos_config *cfg, int v) {
  cfg->update.enable_post = v;
}

/* rpc */
#define MGOS_CONFIG_HAVE_RPC
#define MGOS_SYS_CONFIG_HAVE_RPC
const struct mgos_config_rpc * mgos_config_get_rpc(struct mgos_config *cfg) {
  return &cfg->rpc;
}

/* rpc.enable */
#define MGOS_CONFIG_HAVE_RPC_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_ENABLE
int mgos_config_get_rpc_enable(struct mgos_config *cfg) {
  return cfg->rpc.enable;
}
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int v) {
  cfg->rpc.enable = v;
}

/* rpc.max_frame_size */
#define MGOS_CONFIG_HAVE_RPC_MAX_FRAME_SIZE
#define MGOS_SYS_CONFIG_HAVE_RPC_MAX_FRAME_SIZE
int mgos_config_get_rpc_max_frame_size(struct mgos_config *cfg) {
  return cfg->rpc.max_frame_size;
}
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int v) {
  cfg->rpc.max_frame_size = v;
}

/* rpc.max_queue_length */
#define MGOS_CONFIG_HAVE_RPC_MAX_QUEUE_LENGTH
#define MGOS_SYS_CONFIG_HAVE_RPC_MAX_QUEUE_LENGTH
int mgos_config_get_rpc_max_queue_length(struct mgos_config *cfg) {
  return cfg->rpc.max_queue_length;
}
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int v) {
  cfg->rpc.max_queue_length = v;
}

/* rpc.default_out_channel_idle_close_timeout */
#define MGOS_CONFIG_HAVE_RPC_DEFAULT_OUT_CHANNEL_IDLE_CLOSE_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_RPC_DEFAULT_OUT_CHANNEL_IDLE_CLOSE_TIMEOUT
int mgos_config_get_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg) {
  return cfg->rpc.default_out_channel_idle_close_timeout;
}
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int v) {
  cfg->rpc.default_out_channel_idle_close_timeout = v;
}

/* rpc.acl_file */
#define MGOS_CONFIG_HAVE_RPC_ACL_FILE
#define MGOS_SYS_CONFIG_HAVE_RPC_ACL_FILE
const char * mgos_config_get_rpc_acl_file(struct mgos_config *cfg) {
  return cfg->rpc.acl_file;
}
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->rpc.acl_file, v);
}

/* rpc.auth_domain */
#define MGOS_CONFIG_HAVE_RPC_AUTH_DOMAIN
#define MGOS_SYS_CONFIG_HAVE_RPC_AUTH_DOMAIN
const char * mgos_config_get_rpc_auth_domain(struct mgos_config *cfg) {
  return cfg->rpc.auth_domain;
}
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->rpc.auth_domain, v);
}

/* rpc.auth_file */
#define MGOS_CONFIG_HAVE_RPC_AUTH_FILE
#define MGOS_SYS_CONFIG_HAVE_RPC_AUTH_FILE
const char * mgos_config_get_rpc_auth_file(struct mgos_config *cfg) {
  return cfg->rpc.auth_file;
}
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->rpc.auth_file, v);
}

/* rpc.ws */
#define MGOS_CONFIG_HAVE_RPC_WS
#define MGOS_SYS_CONFIG_HAVE_RPC_WS
const struct mgos_config_rpc_ws * mgos_config_get_rpc_ws(struct mgos_config *cfg) {
  return &cfg->rpc.ws;
}

/* rpc.ws.enable */
#define MGOS_CONFIG_HAVE_RPC_WS_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_ENABLE
int mgos_config_get_rpc_ws_enable(struct mgos_config *cfg) {
  return cfg->rpc.ws.enable;
}
void mgos_config_set_rpc_ws_enable(struct mgos_config *cfg, int v) {
  cfg->rpc.ws.enable = v;
}

/* rpc.ws.server_address */
#define MGOS_CONFIG_HAVE_RPC_WS_SERVER_ADDRESS
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_SERVER_ADDRESS
const char * mgos_config_get_rpc_ws_server_address(struct mgos_config *cfg) {
  return cfg->rpc.ws.server_address;
}
void mgos_config_set_rpc_ws_server_address(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->rpc.ws.server_address, v);
}

/* rpc.ws.reconnect_interval_min */
#define MGOS_CONFIG_HAVE_RPC_WS_RECONNECT_INTERVAL_MIN
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_RECONNECT_INTERVAL_MIN
int mgos_config_get_rpc_ws_reconnect_interval_min(struct mgos_config *cfg) {
  return cfg->rpc.ws.reconnect_interval_min;
}
void mgos_config_set_rpc_ws_reconnect_interval_min(struct mgos_config *cfg, int v) {
  cfg->rpc.ws.reconnect_interval_min = v;
}

/* rpc.ws.reconnect_interval_max */
#define MGOS_CONFIG_HAVE_RPC_WS_RECONNECT_INTERVAL_MAX
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_RECONNECT_INTERVAL_MAX
int mgos_config_get_rpc_ws_reconnect_interval_max(struct mgos_config *cfg) {
  return cfg->rpc.ws.reconnect_interval_max;
}
void mgos_config_set_rpc_ws_reconnect_interval_max(struct mgos_config *cfg, int v) {
  cfg->rpc.ws.reconnect_interval_max = v;
}

/* rpc.ws.ssl_server_name */
#define MGOS_CONFIG_HAVE_RPC_WS_SSL_SERVER_NAME
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_SSL_SERVER_NAME
const char * mgos_config_get_rpc_ws_ssl_server_name(struct mgos_config *cfg) {
  return cfg->rpc.ws.ssl_server_name;
}
void mgos_config_set_rpc_ws_ssl_server_name(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->rpc.ws.ssl_server_name, v);
}

/* rpc.ws.ssl_cert */
#define MGOS_CONFIG_HAVE_RPC_WS_SSL_CERT
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_SSL_CERT
const char * mgos_config_get_rpc_ws_ssl_cert(struct mgos_config *cfg) {
  return cfg->rpc.ws.ssl_cert;
}
void mgos_config_set_rpc_ws_ssl_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->rpc.ws.ssl_cert, v);
}

/* rpc.ws.ssl_key */
#define MGOS_CONFIG_HAVE_RPC_WS_SSL_KEY
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_SSL_KEY
const char * mgos_config_get_rpc_ws_ssl_key(struct mgos_config *cfg) {
  return cfg->rpc.ws.ssl_key;
}
void mgos_config_set_rpc_ws_ssl_key(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->rpc.ws.ssl_key, v);
}

/* rpc.ws.ssl_ca_cert */
#define MGOS_CONFIG_HAVE_RPC_WS_SSL_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_SSL_CA_CERT
const char * mgos_config_get_rpc_ws_ssl_ca_cert(struct mgos_config *cfg) {
  return cfg->rpc.ws.ssl_ca_cert;
}
void mgos_config_set_rpc_ws_ssl_ca_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->rpc.ws.ssl_ca_cert, v);
}

/* rpc.azure */
#define MGOS_CONFIG_HAVE_RPC_AZURE
#define MGOS_SYS_CONFIG_HAVE_RPC_AZURE
const struct mgos_config_rpc_azure * mgos_config_get_rpc_azure(struct mgos_config *cfg) {
  return &cfg->rpc.azure;
}

/* rpc.azure.enable_dm */
#define MGOS_CONFIG_HAVE_RPC_AZURE_ENABLE_DM
#define MGOS_SYS_CONFIG_HAVE_RPC_AZURE_ENABLE_DM
int mgos_config_get_rpc_azure_enable_dm(struct mgos_config *cfg) {
  return cfg->rpc.azure.enable_dm;
}
void mgos_config_set_rpc_azure_enable_dm(struct mgos_config *cfg, int v) {
  cfg->rpc.azure.enable_dm = v;
}

/* rpc.gatts */
#define MGOS_CONFIG_HAVE_RPC_GATTS
#define MGOS_SYS_CONFIG_HAVE_RPC_GATTS
const struct mgos_config_rpc_gatts * mgos_config_get_rpc_gatts(struct mgos_config *cfg) {
  return &cfg->rpc.gatts;
}

/* rpc.gatts.enable */
#define MGOS_CONFIG_HAVE_RPC_GATTS_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_GATTS_ENABLE
int mgos_config_get_rpc_gatts_enable(struct mgos_config *cfg) {
  return cfg->rpc.gatts.enable;
}
void mgos_config_set_rpc_gatts_enable(struct mgos_config *cfg, int v) {
  cfg->rpc.gatts.enable = v;
}

/* rpc.gatts.sec_level */
#define MGOS_CONFIG_HAVE_RPC_GATTS_SEC_LEVEL
#define MGOS_SYS_CONFIG_HAVE_RPC_GATTS_SEC_LEVEL
int mgos_config_get_rpc_gatts_sec_level(struct mgos_config *cfg) {
  return cfg->rpc.gatts.sec_level;
}
void mgos_config_set_rpc_gatts_sec_level(struct mgos_config *cfg, int v) {
  cfg->rpc.gatts.sec_level = v;
}

/* rpc.gatts.max_frame_size */
#define MGOS_CONFIG_HAVE_RPC_GATTS_MAX_FRAME_SIZE
#define MGOS_SYS_CONFIG_HAVE_RPC_GATTS_MAX_FRAME_SIZE
int mgos_config_get_rpc_gatts_max_frame_size(struct mgos_config *cfg) {
  return cfg->rpc.gatts.max_frame_size;
}
void mgos_config_set_rpc_gatts_max_frame_size(struct mgos_config *cfg, int v) {
  cfg->rpc.gatts.max_frame_size = v;
}

/* rpc.gcp */
#define MGOS_CONFIG_HAVE_RPC_GCP
#define MGOS_SYS_CONFIG_HAVE_RPC_GCP
const struct mgos_config_rpc_gcp * mgos_config_get_rpc_gcp(struct mgos_config *cfg) {
  return &cfg->rpc.gcp;
}

/* rpc.gcp.enable */
#define MGOS_CONFIG_HAVE_RPC_GCP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_GCP_ENABLE
int mgos_config_get_rpc_gcp_enable(struct mgos_config *cfg) {
  return cfg->rpc.gcp.enable;
}
void mgos_config_set_rpc_gcp_enable(struct mgos_config *cfg, int v) {
  cfg->rpc.gcp.enable = v;
}

/* rpc.gcp.subfolder */
#define MGOS_CONFIG_HAVE_RPC_GCP_SUBFOLDER
#define MGOS_SYS_CONFIG_HAVE_RPC_GCP_SUBFOLDER
const char * mgos_config_get_rpc_gcp_subfolder(struct mgos_config *cfg) {
  return cfg->rpc.gcp.subfolder;
}
void mgos_config_set_rpc_gcp_subfolder(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->rpc.gcp.subfolder, v);
}

/* rpc.mqtt */
#define MGOS_CONFIG_HAVE_RPC_MQTT
#define MGOS_SYS_CONFIG_HAVE_RPC_MQTT
const struct mgos_config_rpc_mqtt * mgos_config_get_rpc_mqtt(struct mgos_config *cfg) {
  return &cfg->rpc.mqtt;
}

/* rpc.mqtt.enable */
#define MGOS_CONFIG_HAVE_RPC_MQTT_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_MQTT_ENABLE
int mgos_config_get_rpc_mqtt_enable(struct mgos_config *cfg) {
  return cfg->rpc.mqtt.enable;
}
void mgos_config_set_rpc_mqtt_enable(struct mgos_config *cfg, int v) {
  cfg->rpc.mqtt.enable = v;
}

/* rpc.mqtt.pub_topic */
#define MGOS_CONFIG_HAVE_RPC_MQTT_PUB_TOPIC
#define MGOS_SYS_CONFIG_HAVE_RPC_MQTT_PUB_TOPIC
const char * mgos_config_get_rpc_mqtt_pub_topic(struct mgos_config *cfg) {
  return cfg->rpc.mqtt.pub_topic;
}
void mgos_config_set_rpc_mqtt_pub_topic(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->rpc.mqtt.pub_topic, v);
}

/* rpc.mqtt.sub_topic */
#define MGOS_CONFIG_HAVE_RPC_MQTT_SUB_TOPIC
#define MGOS_SYS_CONFIG_HAVE_RPC_MQTT_SUB_TOPIC
const char * mgos_config_get_rpc_mqtt_sub_topic(struct mgos_config *cfg) {
  return cfg->rpc.mqtt.sub_topic;
}
void mgos_config_set_rpc_mqtt_sub_topic(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->rpc.mqtt.sub_topic, v);
}

/* rpc.mqtt.sub_wc */
#define MGOS_CONFIG_HAVE_RPC_MQTT_SUB_WC
#define MGOS_SYS_CONFIG_HAVE_RPC_MQTT_SUB_WC
int mgos_config_get_rpc_mqtt_sub_wc(struct mgos_config *cfg) {
  return cfg->rpc.mqtt.sub_wc;
}
void mgos_config_set_rpc_mqtt_sub_wc(struct mgos_config *cfg, int v) {
  cfg->rpc.mqtt.sub_wc = v;
}

/* rpc.mqtt.qos */
#define MGOS_CONFIG_HAVE_RPC_MQTT_QOS
#define MGOS_SYS_CONFIG_HAVE_RPC_MQTT_QOS
int mgos_config_get_rpc_mqtt_qos(struct mgos_config *cfg) {
  return cfg->rpc.mqtt.qos;
}
void mgos_config_set_rpc_mqtt_qos(struct mgos_config *cfg, int v) {
  cfg->rpc.mqtt.qos = v;
}

/* rpc.uart */
#define MGOS_CONFIG_HAVE_RPC_UART
#define MGOS_SYS_CONFIG_HAVE_RPC_UART
const struct mgos_config_rpc_uart * mgos_config_get_rpc_uart(struct mgos_config *cfg) {
  return &cfg->rpc.uart;
}

/* rpc.uart.uart_no */
#define MGOS_CONFIG_HAVE_RPC_UART_UART_NO
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_UART_NO
int mgos_config_get_rpc_uart_uart_no(struct mgos_config *cfg) {
  return cfg->rpc.uart.uart_no;
}
void mgos_config_set_rpc_uart_uart_no(struct mgos_config *cfg, int v) {
  cfg->rpc.uart.uart_no = v;
}

/* rpc.uart.baud_rate */
#define MGOS_CONFIG_HAVE_RPC_UART_BAUD_RATE
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_BAUD_RATE
int mgos_config_get_rpc_uart_baud_rate(struct mgos_config *cfg) {
  return cfg->rpc.uart.baud_rate;
}
void mgos_config_set_rpc_uart_baud_rate(struct mgos_config *cfg, int v) {
  cfg->rpc.uart.baud_rate = v;
}

/* rpc.uart.fc_type */
#define MGOS_CONFIG_HAVE_RPC_UART_FC_TYPE
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_FC_TYPE
int mgos_config_get_rpc_uart_fc_type(struct mgos_config *cfg) {
  return cfg->rpc.uart.fc_type;
}
void mgos_config_set_rpc_uart_fc_type(struct mgos_config *cfg, int v) {
  cfg->rpc.uart.fc_type = v;
}

/* rpc.uart.dst */
#define MGOS_CONFIG_HAVE_RPC_UART_DST
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_DST
const char * mgos_config_get_rpc_uart_dst(struct mgos_config *cfg) {
  return cfg->rpc.uart.dst;
}
void mgos_config_set_rpc_uart_dst(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->rpc.uart.dst, v);
}

/* dash */
#define MGOS_CONFIG_HAVE_DASH
#define MGOS_SYS_CONFIG_HAVE_DASH
const struct mgos_config_dash * mgos_config_get_dash(struct mgos_config *cfg) {
  return &cfg->dash;
}

/* dash.enable */
#define MGOS_CONFIG_HAVE_DASH_ENABLE
#define MGOS_SYS_CONFIG_HAVE_DASH_ENABLE
int mgos_config_get_dash_enable(struct mgos_config *cfg) {
  return cfg->dash.enable;
}
void mgos_config_set_dash_enable(struct mgos_config *cfg, int v) {
  cfg->dash.enable = v;
}

/* dash.token */
#define MGOS_CONFIG_HAVE_DASH_TOKEN
#define MGOS_SYS_CONFIG_HAVE_DASH_TOKEN
const char * mgos_config_get_dash_token(struct mgos_config *cfg) {
  return cfg->dash.token;
}
void mgos_config_set_dash_token(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->dash.token, v);
}

/* dash.server */
#define MGOS_CONFIG_HAVE_DASH_SERVER
#define MGOS_SYS_CONFIG_HAVE_DASH_SERVER
const char * mgos_config_get_dash_server(struct mgos_config *cfg) {
  return cfg->dash.server;
}
void mgos_config_set_dash_server(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->dash.server, v);
}

/* dash.ssl_cert */
#define MGOS_CONFIG_HAVE_DASH_SSL_CERT
#define MGOS_SYS_CONFIG_HAVE_DASH_SSL_CERT
const char * mgos_config_get_dash_ssl_cert(struct mgos_config *cfg) {
  return cfg->dash.ssl_cert;
}
void mgos_config_set_dash_ssl_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->dash.ssl_cert, v);
}

/* dash.ssl_key */
#define MGOS_CONFIG_HAVE_DASH_SSL_KEY
#define MGOS_SYS_CONFIG_HAVE_DASH_SSL_KEY
const char * mgos_config_get_dash_ssl_key(struct mgos_config *cfg) {
  return cfg->dash.ssl_key;
}
void mgos_config_set_dash_ssl_key(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->dash.ssl_key, v);
}

/* dash.ssl_ca_cert */
#define MGOS_CONFIG_HAVE_DASH_SSL_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_DASH_SSL_CA_CERT
const char * mgos_config_get_dash_ssl_ca_cert(struct mgos_config *cfg) {
  return cfg->dash.ssl_ca_cert;
}
void mgos_config_set_dash_ssl_ca_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->dash.ssl_ca_cert, v);
}

/* dash.send_logs */
#define MGOS_CONFIG_HAVE_DASH_SEND_LOGS
#define MGOS_SYS_CONFIG_HAVE_DASH_SEND_LOGS
int mgos_config_get_dash_send_logs(struct mgos_config *cfg) {
  return cfg->dash.send_logs;
}
void mgos_config_set_dash_send_logs(struct mgos_config *cfg, int v) {
  cfg->dash.send_logs = v;
}

/* http */
#define MGOS_CONFIG_HAVE_HTTP
#define MGOS_SYS_CONFIG_HAVE_HTTP
const struct mgos_config_http * mgos_config_get_http(struct mgos_config *cfg) {
  return &cfg->http;
}

/* http.enable */
#define MGOS_CONFIG_HAVE_HTTP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_HTTP_ENABLE
int mgos_config_get_http_enable(struct mgos_config *cfg) {
  return cfg->http.enable;
}
void mgos_config_set_http_enable(struct mgos_config *cfg, int v) {
  cfg->http.enable = v;
}

/* http.listen_addr */
#define MGOS_CONFIG_HAVE_HTTP_LISTEN_ADDR
#define MGOS_SYS_CONFIG_HAVE_HTTP_LISTEN_ADDR
const char * mgos_config_get_http_listen_addr(struct mgos_config *cfg) {
  return cfg->http.listen_addr;
}
void mgos_config_set_http_listen_addr(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->http.listen_addr, v);
}

/* http.document_root */
#define MGOS_CONFIG_HAVE_HTTP_DOCUMENT_ROOT
#define MGOS_SYS_CONFIG_HAVE_HTTP_DOCUMENT_ROOT
const char * mgos_config_get_http_document_root(struct mgos_config *cfg) {
  return cfg->http.document_root;
}
void mgos_config_set_http_document_root(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->http.document_root, v);
}

/* http.ssl_cert */
#define MGOS_CONFIG_HAVE_HTTP_SSL_CERT
#define MGOS_SYS_CONFIG_HAVE_HTTP_SSL_CERT
const char * mgos_config_get_http_ssl_cert(struct mgos_config *cfg) {
  return cfg->http.ssl_cert;
}
void mgos_config_set_http_ssl_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->http.ssl_cert, v);
}

/* http.ssl_key */
#define MGOS_CONFIG_HAVE_HTTP_SSL_KEY
#define MGOS_SYS_CONFIG_HAVE_HTTP_SSL_KEY
const char * mgos_config_get_http_ssl_key(struct mgos_config *cfg) {
  return cfg->http.ssl_key;
}
void mgos_config_set_http_ssl_key(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->http.ssl_key, v);
}

/* http.ssl_ca_cert */
#define MGOS_CONFIG_HAVE_HTTP_SSL_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_HTTP_SSL_CA_CERT
const char * mgos_config_get_http_ssl_ca_cert(struct mgos_config *cfg) {
  return cfg->http.ssl_ca_cert;
}
void mgos_config_set_http_ssl_ca_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->http.ssl_ca_cert, v);
}

/* http.upload_acl */
#define MGOS_CONFIG_HAVE_HTTP_UPLOAD_ACL
#define MGOS_SYS_CONFIG_HAVE_HTTP_UPLOAD_ACL
const char * mgos_config_get_http_upload_acl(struct mgos_config *cfg) {
  return cfg->http.upload_acl;
}
void mgos_config_set_http_upload_acl(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->http.upload_acl, v);
}

/* http.hidden_files */
#define MGOS_CONFIG_HAVE_HTTP_HIDDEN_FILES
#define MGOS_SYS_CONFIG_HAVE_HTTP_HIDDEN_FILES
const char * mgos_config_get_http_hidden_files(struct mgos_config *cfg) {
  return cfg->http.hidden_files;
}
void mgos_config_set_http_hidden_files(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->http.hidden_files, v);
}

/* http.auth_domain */
#define MGOS_CONFIG_HAVE_HTTP_AUTH_DOMAIN
#define MGOS_SYS_CONFIG_HAVE_HTTP_AUTH_DOMAIN
const char * mgos_config_get_http_auth_domain(struct mgos_config *cfg) {
  return cfg->http.auth_domain;
}
void mgos_config_set_http_auth_domain(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->http.auth_domain, v);
}

/* http.auth_file */
#define MGOS_CONFIG_HAVE_HTTP_AUTH_FILE
#define MGOS_SYS_CONFIG_HAVE_HTTP_AUTH_FILE
const char * mgos_config_get_http_auth_file(struct mgos_config *cfg) {
  return cfg->http.auth_file;
}
void mgos_config_set_http_auth_file(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->http.auth_file, v);
}

/* dns_sd */
#define MGOS_CONFIG_HAVE_DNS_SD
#define MGOS_SYS_CONFIG_HAVE_DNS_SD
const struct mgos_config_dns_sd * mgos_config_get_dns_sd(struct mgos_config *cfg) {
  return &cfg->dns_sd;
}

/* dns_sd.enable */
#define MGOS_CONFIG_HAVE_DNS_SD_ENABLE
#define MGOS_SYS_CONFIG_HAVE_DNS_SD_ENABLE
int mgos_config_get_dns_sd_enable(struct mgos_config *cfg) {
  return cfg->dns_sd.enable;
}
void mgos_config_set_dns_sd_enable(struct mgos_config *cfg, int v) {
  cfg->dns_sd.enable = v;
}

/* dns_sd.host_name */
#define MGOS_CONFIG_HAVE_DNS_SD_HOST_NAME
#define MGOS_SYS_CONFIG_HAVE_DNS_SD_HOST_NAME
const char * mgos_config_get_dns_sd_host_name(struct mgos_config *cfg) {
  return cfg->dns_sd.host_name;
}
void mgos_config_set_dns_sd_host_name(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->dns_sd.host_name, v);
}

/* dns_sd.txt */
#define MGOS_CONFIG_HAVE_DNS_SD_TXT
#define MGOS_SYS_CONFIG_HAVE_DNS_SD_TXT
const char * mgos_config_get_dns_sd_txt(struct mgos_config *cfg) {
  return cfg->dns_sd.txt;
}
void mgos_config_set_dns_sd_txt(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->dns_sd.txt, v);
}

/* dns_sd.ttl */
#define MGOS_CONFIG_HAVE_DNS_SD_TTL
#define MGOS_SYS_CONFIG_HAVE_DNS_SD_TTL
int mgos_config_get_dns_sd_ttl(struct mgos_config *cfg) {
  return cfg->dns_sd.ttl;
}
void mgos_config_set_dns_sd_ttl(struct mgos_config *cfg, int v) {
  cfg->dns_sd.ttl = v;
}

/* eth */
#define MGOS_CONFIG_HAVE_ETH
#define MGOS_SYS_CONFIG_HAVE_ETH
const struct mgos_config_eth * mgos_config_get_eth(struct mgos_config *cfg) {
  return &cfg->eth;
}

/* eth.enable */
#define MGOS_CONFIG_HAVE_ETH_ENABLE
#define MGOS_SYS_CONFIG_HAVE_ETH_ENABLE
int mgos_config_get_eth_enable(struct mgos_config *cfg) {
  return cfg->eth.enable;
}
void mgos_config_set_eth_enable(struct mgos_config *cfg, int v) {
  cfg->eth.enable = v;
}

/* eth.phy_addr */
#define MGOS_CONFIG_HAVE_ETH_PHY_ADDR
#define MGOS_SYS_CONFIG_HAVE_ETH_PHY_ADDR
int mgos_config_get_eth_phy_addr(struct mgos_config *cfg) {
  return cfg->eth.phy_addr;
}
void mgos_config_set_eth_phy_addr(struct mgos_config *cfg, int v) {
  cfg->eth.phy_addr = v;
}

/* eth.ip */
#define MGOS_CONFIG_HAVE_ETH_IP
#define MGOS_SYS_CONFIG_HAVE_ETH_IP
const char * mgos_config_get_eth_ip(struct mgos_config *cfg) {
  return cfg->eth.ip;
}
void mgos_config_set_eth_ip(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->eth.ip, v);
}

/* eth.netmask */
#define MGOS_CONFIG_HAVE_ETH_NETMASK
#define MGOS_SYS_CONFIG_HAVE_ETH_NETMASK
const char * mgos_config_get_eth_netmask(struct mgos_config *cfg) {
  return cfg->eth.netmask;
}
void mgos_config_set_eth_netmask(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->eth.netmask, v);
}

/* eth.gw */
#define MGOS_CONFIG_HAVE_ETH_GW
#define MGOS_SYS_CONFIG_HAVE_ETH_GW
const char * mgos_config_get_eth_gw(struct mgos_config *cfg) {
  return cfg->eth.gw;
}
void mgos_config_set_eth_gw(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->eth.gw, v);
}

/* eth.clk_mode */
#define MGOS_CONFIG_HAVE_ETH_CLK_MODE
#define MGOS_SYS_CONFIG_HAVE_ETH_CLK_MODE
int mgos_config_get_eth_clk_mode(struct mgos_config *cfg) {
  return cfg->eth.clk_mode;
}
void mgos_config_set_eth_clk_mode(struct mgos_config *cfg, int v) {
  cfg->eth.clk_mode = v;
}

/* eth.mdc_gpio */
#define MGOS_CONFIG_HAVE_ETH_MDC_GPIO
#define MGOS_SYS_CONFIG_HAVE_ETH_MDC_GPIO
int mgos_config_get_eth_mdc_gpio(struct mgos_config *cfg) {
  return cfg->eth.mdc_gpio;
}
void mgos_config_set_eth_mdc_gpio(struct mgos_config *cfg, int v) {
  cfg->eth.mdc_gpio = v;
}

/* eth.mdio_gpio */
#define MGOS_CONFIG_HAVE_ETH_MDIO_GPIO
#define MGOS_SYS_CONFIG_HAVE_ETH_MDIO_GPIO
int mgos_config_get_eth_mdio_gpio(struct mgos_config *cfg) {
  return cfg->eth.mdio_gpio;
}
void mgos_config_set_eth_mdio_gpio(struct mgos_config *cfg, int v) {
  cfg->eth.mdio_gpio = v;
}

/* eth.phy_pwr_gpio */
#define MGOS_CONFIG_HAVE_ETH_PHY_PWR_GPIO
#define MGOS_SYS_CONFIG_HAVE_ETH_PHY_PWR_GPIO
int mgos_config_get_eth_phy_pwr_gpio(struct mgos_config *cfg) {
  return cfg->eth.phy_pwr_gpio;
}
void mgos_config_set_eth_phy_pwr_gpio(struct mgos_config *cfg, int v) {
  cfg->eth.phy_pwr_gpio = v;
}

/* devtab */
#define MGOS_CONFIG_HAVE_DEVTAB
#define MGOS_SYS_CONFIG_HAVE_DEVTAB
const struct mgos_config_devtab * mgos_config_get_devtab(struct mgos_config *cfg) {
  return &cfg->devtab;
}

/* devtab.dev0 */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV0
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV0
const struct mgos_config_devtab_dev0 * mgos_config_get_devtab_dev0(struct mgos_config *cfg) {
  return &cfg->devtab.dev0;
}

/* devtab.dev0.name */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV0_NAME
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV0_NAME
const char * mgos_config_get_devtab_dev0_name(struct mgos_config *cfg) {
  return cfg->devtab.dev0.name;
}
void mgos_config_set_devtab_dev0_name(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->devtab.dev0.name, v);
}

/* devtab.dev0.type */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV0_TYPE
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV0_TYPE
const char * mgos_config_get_devtab_dev0_type(struct mgos_config *cfg) {
  return cfg->devtab.dev0.type;
}
void mgos_config_set_devtab_dev0_type(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->devtab.dev0.type, v);
}

/* devtab.dev0.opts */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV0_OPTS
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV0_OPTS
const char * mgos_config_get_devtab_dev0_opts(struct mgos_config *cfg) {
  return cfg->devtab.dev0.opts;
}
void mgos_config_set_devtab_dev0_opts(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->devtab.dev0.opts, v);
}

/* devtab.dev1 */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV1
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV1
const struct mgos_config_devtab_dev1 * mgos_config_get_devtab_dev1(struct mgos_config *cfg) {
  return &cfg->devtab.dev1;
}

/* devtab.dev1.name */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV1_NAME
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV1_NAME
const char * mgos_config_get_devtab_dev1_name(struct mgos_config *cfg) {
  return cfg->devtab.dev1.name;
}
void mgos_config_set_devtab_dev1_name(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->devtab.dev1.name, v);
}

/* devtab.dev1.type */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV1_TYPE
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV1_TYPE
const char * mgos_config_get_devtab_dev1_type(struct mgos_config *cfg) {
  return cfg->devtab.dev1.type;
}
void mgos_config_set_devtab_dev1_type(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->devtab.dev1.type, v);
}

/* devtab.dev1.opts */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV1_OPTS
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV1_OPTS
const char * mgos_config_get_devtab_dev1_opts(struct mgos_config *cfg) {
  return cfg->devtab.dev1.opts;
}
void mgos_config_set_devtab_dev1_opts(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->devtab.dev1.opts, v);
}

/* devtab.dev2 */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV2
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV2
const struct mgos_config_devtab_dev2 * mgos_config_get_devtab_dev2(struct mgos_config *cfg) {
  return &cfg->devtab.dev2;
}

/* devtab.dev2.name */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV2_NAME
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV2_NAME
const char * mgos_config_get_devtab_dev2_name(struct mgos_config *cfg) {
  return cfg->devtab.dev2.name;
}
void mgos_config_set_devtab_dev2_name(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->devtab.dev2.name, v);
}

/* devtab.dev2.type */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV2_TYPE
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV2_TYPE
const char * mgos_config_get_devtab_dev2_type(struct mgos_config *cfg) {
  return cfg->devtab.dev2.type;
}
void mgos_config_set_devtab_dev2_type(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->devtab.dev2.type, v);
}

/* devtab.dev2.opts */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV2_OPTS
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV2_OPTS
const char * mgos_config_get_devtab_dev2_opts(struct mgos_config *cfg) {
  return cfg->devtab.dev2.opts;
}
void mgos_config_set_devtab_dev2_opts(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->devtab.dev2.opts, v);
}

/* devtab.dev3 */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV3
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV3
const struct mgos_config_devtab_dev3 * mgos_config_get_devtab_dev3(struct mgos_config *cfg) {
  return &cfg->devtab.dev3;
}

/* devtab.dev3.name */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV3_NAME
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV3_NAME
const char * mgos_config_get_devtab_dev3_name(struct mgos_config *cfg) {
  return cfg->devtab.dev3.name;
}
void mgos_config_set_devtab_dev3_name(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->devtab.dev3.name, v);
}

/* devtab.dev3.type */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV3_TYPE
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV3_TYPE
const char * mgos_config_get_devtab_dev3_type(struct mgos_config *cfg) {
  return cfg->devtab.dev3.type;
}
void mgos_config_set_devtab_dev3_type(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->devtab.dev3.type, v);
}

/* devtab.dev3.opts */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV3_OPTS
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV3_OPTS
const char * mgos_config_get_devtab_dev3_opts(struct mgos_config *cfg) {
  return cfg->devtab.dev3.opts;
}
void mgos_config_set_devtab_dev3_opts(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->devtab.dev3.opts, v);
}

/* devtab.dev4 */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV4
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV4
const struct mgos_config_devtab_dev4 * mgos_config_get_devtab_dev4(struct mgos_config *cfg) {
  return &cfg->devtab.dev4;
}

/* devtab.dev4.name */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV4_NAME
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV4_NAME
const char * mgos_config_get_devtab_dev4_name(struct mgos_config *cfg) {
  return cfg->devtab.dev4.name;
}
void mgos_config_set_devtab_dev4_name(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->devtab.dev4.name, v);
}

/* devtab.dev4.type */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV4_TYPE
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV4_TYPE
const char * mgos_config_get_devtab_dev4_type(struct mgos_config *cfg) {
  return cfg->devtab.dev4.type;
}
void mgos_config_set_devtab_dev4_type(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->devtab.dev4.type, v);
}

/* devtab.dev4.opts */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV4_OPTS
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV4_OPTS
const char * mgos_config_get_devtab_dev4_opts(struct mgos_config *cfg) {
  return cfg->devtab.dev4.opts;
}
void mgos_config_set_devtab_dev4_opts(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->devtab.dev4.opts, v);
}

/* fstab */
#define MGOS_CONFIG_HAVE_FSTAB
#define MGOS_SYS_CONFIG_HAVE_FSTAB
const struct mgos_config_fstab * mgos_config_get_fstab(struct mgos_config *cfg) {
  return &cfg->fstab;
}

/* fstab.fs0 */
#define MGOS_CONFIG_HAVE_FSTAB_FS0
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS0
const struct mgos_config_fstab_fs0 * mgos_config_get_fstab_fs0(struct mgos_config *cfg) {
  return &cfg->fstab.fs0;
}

/* fstab.fs0.dev */
#define MGOS_CONFIG_HAVE_FSTAB_FS0_DEV
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS0_DEV
const char * mgos_config_get_fstab_fs0_dev(struct mgos_config *cfg) {
  return cfg->fstab.fs0.dev;
}
void mgos_config_set_fstab_fs0_dev(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->fstab.fs0.dev, v);
}

/* fstab.fs0.type */
#define MGOS_CONFIG_HAVE_FSTAB_FS0_TYPE
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS0_TYPE
const char * mgos_config_get_fstab_fs0_type(struct mgos_config *cfg) {
  return cfg->fstab.fs0.type;
}
void mgos_config_set_fstab_fs0_type(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->fstab.fs0.type, v);
}

/* fstab.fs0.opts */
#define MGOS_CONFIG_HAVE_FSTAB_FS0_OPTS
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS0_OPTS
const char * mgos_config_get_fstab_fs0_opts(struct mgos_config *cfg) {
  return cfg->fstab.fs0.opts;
}
void mgos_config_set_fstab_fs0_opts(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->fstab.fs0.opts, v);
}

/* fstab.fs0.path */
#define MGOS_CONFIG_HAVE_FSTAB_FS0_PATH
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS0_PATH
const char * mgos_config_get_fstab_fs0_path(struct mgos_config *cfg) {
  return cfg->fstab.fs0.path;
}
void mgos_config_set_fstab_fs0_path(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->fstab.fs0.path, v);
}

/* fstab.fs0.create */
#define MGOS_CONFIG_HAVE_FSTAB_FS0_CREATE
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS0_CREATE
int mgos_config_get_fstab_fs0_create(struct mgos_config *cfg) {
  return cfg->fstab.fs0.create;
}
void mgos_config_set_fstab_fs0_create(struct mgos_config *cfg, int v) {
  cfg->fstab.fs0.create = v;
}

/* fstab.fs0.optional */
#define MGOS_CONFIG_HAVE_FSTAB_FS0_OPTIONAL
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS0_OPTIONAL
int mgos_config_get_fstab_fs0_optional(struct mgos_config *cfg) {
  return cfg->fstab.fs0.optional;
}
void mgos_config_set_fstab_fs0_optional(struct mgos_config *cfg, int v) {
  cfg->fstab.fs0.optional = v;
}

/* fstab.fs0.created */
#define MGOS_CONFIG_HAVE_FSTAB_FS0_CREATED
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS0_CREATED
int mgos_config_get_fstab_fs0_created(struct mgos_config *cfg) {
  return cfg->fstab.fs0.created;
}
void mgos_config_set_fstab_fs0_created(struct mgos_config *cfg, int v) {
  cfg->fstab.fs0.created = v;
}

/* fstab.fs1 */
#define MGOS_CONFIG_HAVE_FSTAB_FS1
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS1
const struct mgos_config_fstab_fs1 * mgos_config_get_fstab_fs1(struct mgos_config *cfg) {
  return &cfg->fstab.fs1;
}

/* fstab.fs1.dev */
#define MGOS_CONFIG_HAVE_FSTAB_FS1_DEV
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS1_DEV
const char * mgos_config_get_fstab_fs1_dev(struct mgos_config *cfg) {
  return cfg->fstab.fs1.dev;
}
void mgos_config_set_fstab_fs1_dev(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->fstab.fs1.dev, v);
}

/* fstab.fs1.type */
#define MGOS_CONFIG_HAVE_FSTAB_FS1_TYPE
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS1_TYPE
const char * mgos_config_get_fstab_fs1_type(struct mgos_config *cfg) {
  return cfg->fstab.fs1.type;
}
void mgos_config_set_fstab_fs1_type(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->fstab.fs1.type, v);
}

/* fstab.fs1.opts */
#define MGOS_CONFIG_HAVE_FSTAB_FS1_OPTS
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS1_OPTS
const char * mgos_config_get_fstab_fs1_opts(struct mgos_config *cfg) {
  return cfg->fstab.fs1.opts;
}
void mgos_config_set_fstab_fs1_opts(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->fstab.fs1.opts, v);
}

/* fstab.fs1.path */
#define MGOS_CONFIG_HAVE_FSTAB_FS1_PATH
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS1_PATH
const char * mgos_config_get_fstab_fs1_path(struct mgos_config *cfg) {
  return cfg->fstab.fs1.path;
}
void mgos_config_set_fstab_fs1_path(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->fstab.fs1.path, v);
}

/* fstab.fs1.create */
#define MGOS_CONFIG_HAVE_FSTAB_FS1_CREATE
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS1_CREATE
int mgos_config_get_fstab_fs1_create(struct mgos_config *cfg) {
  return cfg->fstab.fs1.create;
}
void mgos_config_set_fstab_fs1_create(struct mgos_config *cfg, int v) {
  cfg->fstab.fs1.create = v;
}

/* fstab.fs1.optional */
#define MGOS_CONFIG_HAVE_FSTAB_FS1_OPTIONAL
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS1_OPTIONAL
int mgos_config_get_fstab_fs1_optional(struct mgos_config *cfg) {
  return cfg->fstab.fs1.optional;
}
void mgos_config_set_fstab_fs1_optional(struct mgos_config *cfg, int v) {
  cfg->fstab.fs1.optional = v;
}

/* fstab.fs1.created */
#define MGOS_CONFIG_HAVE_FSTAB_FS1_CREATED
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS1_CREATED
int mgos_config_get_fstab_fs1_created(struct mgos_config *cfg) {
  return cfg->fstab.fs1.created;
}
void mgos_config_set_fstab_fs1_created(struct mgos_config *cfg, int v) {
  cfg->fstab.fs1.created = v;
}

/* fstab.fs2 */
#define MGOS_CONFIG_HAVE_FSTAB_FS2
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS2
const struct mgos_config_fstab_fs2 * mgos_config_get_fstab_fs2(struct mgos_config *cfg) {
  return &cfg->fstab.fs2;
}

/* fstab.fs2.dev */
#define MGOS_CONFIG_HAVE_FSTAB_FS2_DEV
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS2_DEV
const char * mgos_config_get_fstab_fs2_dev(struct mgos_config *cfg) {
  return cfg->fstab.fs2.dev;
}
void mgos_config_set_fstab_fs2_dev(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->fstab.fs2.dev, v);
}

/* fstab.fs2.type */
#define MGOS_CONFIG_HAVE_FSTAB_FS2_TYPE
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS2_TYPE
const char * mgos_config_get_fstab_fs2_type(struct mgos_config *cfg) {
  return cfg->fstab.fs2.type;
}
void mgos_config_set_fstab_fs2_type(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->fstab.fs2.type, v);
}

/* fstab.fs2.opts */
#define MGOS_CONFIG_HAVE_FSTAB_FS2_OPTS
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS2_OPTS
const char * mgos_config_get_fstab_fs2_opts(struct mgos_config *cfg) {
  return cfg->fstab.fs2.opts;
}
void mgos_config_set_fstab_fs2_opts(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->fstab.fs2.opts, v);
}

/* fstab.fs2.path */
#define MGOS_CONFIG_HAVE_FSTAB_FS2_PATH
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS2_PATH
const char * mgos_config_get_fstab_fs2_path(struct mgos_config *cfg) {
  return cfg->fstab.fs2.path;
}
void mgos_config_set_fstab_fs2_path(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->fstab.fs2.path, v);
}

/* fstab.fs2.create */
#define MGOS_CONFIG_HAVE_FSTAB_FS2_CREATE
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS2_CREATE
int mgos_config_get_fstab_fs2_create(struct mgos_config *cfg) {
  return cfg->fstab.fs2.create;
}
void mgos_config_set_fstab_fs2_create(struct mgos_config *cfg, int v) {
  cfg->fstab.fs2.create = v;
}

/* fstab.fs2.optional */
#define MGOS_CONFIG_HAVE_FSTAB_FS2_OPTIONAL
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS2_OPTIONAL
int mgos_config_get_fstab_fs2_optional(struct mgos_config *cfg) {
  return cfg->fstab.fs2.optional;
}
void mgos_config_set_fstab_fs2_optional(struct mgos_config *cfg, int v) {
  cfg->fstab.fs2.optional = v;
}

/* fstab.fs2.created */
#define MGOS_CONFIG_HAVE_FSTAB_FS2_CREATED
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS2_CREATED
int mgos_config_get_fstab_fs2_created(struct mgos_config *cfg) {
  return cfg->fstab.fs2.created;
}
void mgos_config_set_fstab_fs2_created(struct mgos_config *cfg, int v) {
  cfg->fstab.fs2.created = v;
}

/* gcp */
#define MGOS_CONFIG_HAVE_GCP
#define MGOS_SYS_CONFIG_HAVE_GCP
const struct mgos_config_gcp * mgos_config_get_gcp(struct mgos_config *cfg) {
  return &cfg->gcp;
}

/* gcp.enable */
#define MGOS_CONFIG_HAVE_GCP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_GCP_ENABLE
int mgos_config_get_gcp_enable(struct mgos_config *cfg) {
  return cfg->gcp.enable;
}
void mgos_config_set_gcp_enable(struct mgos_config *cfg, int v) {
  cfg->gcp.enable = v;
}

/* gcp.server */
#define MGOS_CONFIG_HAVE_GCP_SERVER
#define MGOS_SYS_CONFIG_HAVE_GCP_SERVER
const char * mgos_config_get_gcp_server(struct mgos_config *cfg) {
  return cfg->gcp.server;
}
void mgos_config_set_gcp_server(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->gcp.server, v);
}

/* gcp.project */
#define MGOS_CONFIG_HAVE_GCP_PROJECT
#define MGOS_SYS_CONFIG_HAVE_GCP_PROJECT
const char * mgos_config_get_gcp_project(struct mgos_config *cfg) {
  return cfg->gcp.project;
}
void mgos_config_set_gcp_project(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->gcp.project, v);
}

/* gcp.region */
#define MGOS_CONFIG_HAVE_GCP_REGION
#define MGOS_SYS_CONFIG_HAVE_GCP_REGION
const char * mgos_config_get_gcp_region(struct mgos_config *cfg) {
  return cfg->gcp.region;
}
void mgos_config_set_gcp_region(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->gcp.region, v);
}

/* gcp.registry */
#define MGOS_CONFIG_HAVE_GCP_REGISTRY
#define MGOS_SYS_CONFIG_HAVE_GCP_REGISTRY
const char * mgos_config_get_gcp_registry(struct mgos_config *cfg) {
  return cfg->gcp.registry;
}
void mgos_config_set_gcp_registry(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->gcp.registry, v);
}

/* gcp.device */
#define MGOS_CONFIG_HAVE_GCP_DEVICE
#define MGOS_SYS_CONFIG_HAVE_GCP_DEVICE
const char * mgos_config_get_gcp_device(struct mgos_config *cfg) {
  return cfg->gcp.device;
}
void mgos_config_set_gcp_device(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->gcp.device, v);
}

/* gcp.key */
#define MGOS_CONFIG_HAVE_GCP_KEY
#define MGOS_SYS_CONFIG_HAVE_GCP_KEY
const char * mgos_config_get_gcp_key(struct mgos_config *cfg) {
  return cfg->gcp.key;
}
void mgos_config_set_gcp_key(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->gcp.key, v);
}

/* gcp.token_ttl */
#define MGOS_CONFIG_HAVE_GCP_TOKEN_TTL
#define MGOS_SYS_CONFIG_HAVE_GCP_TOKEN_TTL
int mgos_config_get_gcp_token_ttl(struct mgos_config *cfg) {
  return cfg->gcp.token_ttl;
}
void mgos_config_set_gcp_token_ttl(struct mgos_config *cfg, int v) {
  cfg->gcp.token_ttl = v;
}

/* gcp.enable_config */
#define MGOS_CONFIG_HAVE_GCP_ENABLE_CONFIG
#define MGOS_SYS_CONFIG_HAVE_GCP_ENABLE_CONFIG
int mgos_config_get_gcp_enable_config(struct mgos_config *cfg) {
  return cfg->gcp.enable_config;
}
void mgos_config_set_gcp_enable_config(struct mgos_config *cfg, int v) {
  cfg->gcp.enable_config = v;
}

/* gcp.enable_commands */
#define MGOS_CONFIG_HAVE_GCP_ENABLE_COMMANDS
#define MGOS_SYS_CONFIG_HAVE_GCP_ENABLE_COMMANDS
int mgos_config_get_gcp_enable_commands(struct mgos_config *cfg) {
  return cfg->gcp.enable_commands;
}
void mgos_config_set_gcp_enable_commands(struct mgos_config *cfg, int v) {
  cfg->gcp.enable_commands = v;
}

/* pppos */
#define MGOS_CONFIG_HAVE_PPPOS
#define MGOS_SYS_CONFIG_HAVE_PPPOS
const struct mgos_config_pppos * mgos_config_get_pppos(struct mgos_config *cfg) {
  return &cfg->pppos;
}

/* pppos.enable */
#define MGOS_CONFIG_HAVE_PPPOS_ENABLE
#define MGOS_SYS_CONFIG_HAVE_PPPOS_ENABLE
int mgos_config_get_pppos_enable(struct mgos_config *cfg) {
  return cfg->pppos.enable;
}
void mgos_config_set_pppos_enable(struct mgos_config *cfg, int v) {
  cfg->pppos.enable = v;
}

/* pppos.uart_no */
#define MGOS_CONFIG_HAVE_PPPOS_UART_NO
#define MGOS_SYS_CONFIG_HAVE_PPPOS_UART_NO
int mgos_config_get_pppos_uart_no(struct mgos_config *cfg) {
  return cfg->pppos.uart_no;
}
void mgos_config_set_pppos_uart_no(struct mgos_config *cfg, int v) {
  cfg->pppos.uart_no = v;
}

/* pppos.baud_rate */
#define MGOS_CONFIG_HAVE_PPPOS_BAUD_RATE
#define MGOS_SYS_CONFIG_HAVE_PPPOS_BAUD_RATE
int mgos_config_get_pppos_baud_rate(struct mgos_config *cfg) {
  return cfg->pppos.baud_rate;
}
void mgos_config_set_pppos_baud_rate(struct mgos_config *cfg, int v) {
  cfg->pppos.baud_rate = v;
}

/* pppos.start_baud_rate */
#define MGOS_CONFIG_HAVE_PPPOS_START_BAUD_RATE
#define MGOS_SYS_CONFIG_HAVE_PPPOS_START_BAUD_RATE
int mgos_config_get_pppos_start_baud_rate(struct mgos_config *cfg) {
  return cfg->pppos.start_baud_rate;
}
void mgos_config_set_pppos_start_baud_rate(struct mgos_config *cfg, int v) {
  cfg->pppos.start_baud_rate = v;
}

/* pppos.fc_enable */
#define MGOS_CONFIG_HAVE_PPPOS_FC_ENABLE
#define MGOS_SYS_CONFIG_HAVE_PPPOS_FC_ENABLE
int mgos_config_get_pppos_fc_enable(struct mgos_config *cfg) {
  return cfg->pppos.fc_enable;
}
void mgos_config_set_pppos_fc_enable(struct mgos_config *cfg, int v) {
  cfg->pppos.fc_enable = v;
}

/* pppos.start_fc_enable */
#define MGOS_CONFIG_HAVE_PPPOS_START_FC_ENABLE
#define MGOS_SYS_CONFIG_HAVE_PPPOS_START_FC_ENABLE
int mgos_config_get_pppos_start_fc_enable(struct mgos_config *cfg) {
  return cfg->pppos.start_fc_enable;
}
void mgos_config_set_pppos_start_fc_enable(struct mgos_config *cfg, int v) {
  cfg->pppos.start_fc_enable = v;
}

/* pppos.rx_gpio */
#define MGOS_CONFIG_HAVE_PPPOS_RX_GPIO
#define MGOS_SYS_CONFIG_HAVE_PPPOS_RX_GPIO
int mgos_config_get_pppos_rx_gpio(struct mgos_config *cfg) {
  return cfg->pppos.rx_gpio;
}
void mgos_config_set_pppos_rx_gpio(struct mgos_config *cfg, int v) {
  cfg->pppos.rx_gpio = v;
}

/* pppos.tx_gpio */
#define MGOS_CONFIG_HAVE_PPPOS_TX_GPIO
#define MGOS_SYS_CONFIG_HAVE_PPPOS_TX_GPIO
int mgos_config_get_pppos_tx_gpio(struct mgos_config *cfg) {
  return cfg->pppos.tx_gpio;
}
void mgos_config_set_pppos_tx_gpio(struct mgos_config *cfg, int v) {
  cfg->pppos.tx_gpio = v;
}

/* pppos.cts_gpio */
#define MGOS_CONFIG_HAVE_PPPOS_CTS_GPIO
#define MGOS_SYS_CONFIG_HAVE_PPPOS_CTS_GPIO
int mgos_config_get_pppos_cts_gpio(struct mgos_config *cfg) {
  return cfg->pppos.cts_gpio;
}
void mgos_config_set_pppos_cts_gpio(struct mgos_config *cfg, int v) {
  cfg->pppos.cts_gpio = v;
}

/* pppos.rts_gpio */
#define MGOS_CONFIG_HAVE_PPPOS_RTS_GPIO
#define MGOS_SYS_CONFIG_HAVE_PPPOS_RTS_GPIO
int mgos_config_get_pppos_rts_gpio(struct mgos_config *cfg) {
  return cfg->pppos.rts_gpio;
}
void mgos_config_set_pppos_rts_gpio(struct mgos_config *cfg, int v) {
  cfg->pppos.rts_gpio = v;
}

/* pppos.dtr_gpio */
#define MGOS_CONFIG_HAVE_PPPOS_DTR_GPIO
#define MGOS_SYS_CONFIG_HAVE_PPPOS_DTR_GPIO
int mgos_config_get_pppos_dtr_gpio(struct mgos_config *cfg) {
  return cfg->pppos.dtr_gpio;
}
void mgos_config_set_pppos_dtr_gpio(struct mgos_config *cfg, int v) {
  cfg->pppos.dtr_gpio = v;
}

/* pppos.dtr_act */
#define MGOS_CONFIG_HAVE_PPPOS_DTR_ACT
#define MGOS_SYS_CONFIG_HAVE_PPPOS_DTR_ACT
int mgos_config_get_pppos_dtr_act(struct mgos_config *cfg) {
  return cfg->pppos.dtr_act;
}
void mgos_config_set_pppos_dtr_act(struct mgos_config *cfg, int v) {
  cfg->pppos.dtr_act = v;
}

/* pppos.apn */
#define MGOS_CONFIG_HAVE_PPPOS_APN
#define MGOS_SYS_CONFIG_HAVE_PPPOS_APN
const char * mgos_config_get_pppos_apn(struct mgos_config *cfg) {
  return cfg->pppos.apn;
}
void mgos_config_set_pppos_apn(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->pppos.apn, v);
}

/* pppos.user */
#define MGOS_CONFIG_HAVE_PPPOS_USER
#define MGOS_SYS_CONFIG_HAVE_PPPOS_USER
const char * mgos_config_get_pppos_user(struct mgos_config *cfg) {
  return cfg->pppos.user;
}
void mgos_config_set_pppos_user(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->pppos.user, v);
}

/* pppos.pass */
#define MGOS_CONFIG_HAVE_PPPOS_PASS
#define MGOS_SYS_CONFIG_HAVE_PPPOS_PASS
const char * mgos_config_get_pppos_pass(struct mgos_config *cfg) {
  return cfg->pppos.pass;
}
void mgos_config_set_pppos_pass(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->pppos.pass, v);
}

/* pppos.connect_on_startup */
#define MGOS_CONFIG_HAVE_PPPOS_CONNECT_ON_STARTUP
#define MGOS_SYS_CONFIG_HAVE_PPPOS_CONNECT_ON_STARTUP
int mgos_config_get_pppos_connect_on_startup(struct mgos_config *cfg) {
  return cfg->pppos.connect_on_startup;
}
void mgos_config_set_pppos_connect_on_startup(struct mgos_config *cfg, int v) {
  cfg->pppos.connect_on_startup = v;
}

/* pppos.rst_gpio */
#define MGOS_CONFIG_HAVE_PPPOS_RST_GPIO
#define MGOS_SYS_CONFIG_HAVE_PPPOS_RST_GPIO
int mgos_config_get_pppos_rst_gpio(struct mgos_config *cfg) {
  return cfg->pppos.rst_gpio;
}
void mgos_config_set_pppos_rst_gpio(struct mgos_config *cfg, int v) {
  cfg->pppos.rst_gpio = v;
}

/* pppos.rst_act */
#define MGOS_CONFIG_HAVE_PPPOS_RST_ACT
#define MGOS_SYS_CONFIG_HAVE_PPPOS_RST_ACT
int mgos_config_get_pppos_rst_act(struct mgos_config *cfg) {
  return cfg->pppos.rst_act;
}
void mgos_config_set_pppos_rst_act(struct mgos_config *cfg, int v) {
  cfg->pppos.rst_act = v;
}

/* pppos.rst_hold_ms */
#define MGOS_CONFIG_HAVE_PPPOS_RST_HOLD_MS
#define MGOS_SYS_CONFIG_HAVE_PPPOS_RST_HOLD_MS
int mgos_config_get_pppos_rst_hold_ms(struct mgos_config *cfg) {
  return cfg->pppos.rst_hold_ms;
}
void mgos_config_set_pppos_rst_hold_ms(struct mgos_config *cfg, int v) {
  cfg->pppos.rst_hold_ms = v;
}

/* pppos.rst_wait_ms */
#define MGOS_CONFIG_HAVE_PPPOS_RST_WAIT_MS
#define MGOS_SYS_CONFIG_HAVE_PPPOS_RST_WAIT_MS
int mgos_config_get_pppos_rst_wait_ms(struct mgos_config *cfg) {
  return cfg->pppos.rst_wait_ms;
}
void mgos_config_set_pppos_rst_wait_ms(struct mgos_config *cfg, int v) {
  cfg->pppos.rst_wait_ms = v;
}

/* pppos.rst_mode */
#define MGOS_CONFIG_HAVE_PPPOS_RST_MODE
#define MGOS_SYS_CONFIG_HAVE_PPPOS_RST_MODE
int mgos_config_get_pppos_rst_mode(struct mgos_config *cfg) {
  return cfg->pppos.rst_mode;
}
void mgos_config_set_pppos_rst_mode(struct mgos_config *cfg, int v) {
  cfg->pppos.rst_mode = v;
}

/* pppos.echo_interval */
#define MGOS_CONFIG_HAVE_PPPOS_ECHO_INTERVAL
#define MGOS_SYS_CONFIG_HAVE_PPPOS_ECHO_INTERVAL
int mgos_config_get_pppos_echo_interval(struct mgos_config *cfg) {
  return cfg->pppos.echo_interval;
}
void mgos_config_set_pppos_echo_interval(struct mgos_config *cfg, int v) {
  cfg->pppos.echo_interval = v;
}

/* pppos.echo_fails */
#define MGOS_CONFIG_HAVE_PPPOS_ECHO_FAILS
#define MGOS_SYS_CONFIG_HAVE_PPPOS_ECHO_FAILS
int mgos_config_get_pppos_echo_fails(struct mgos_config *cfg) {
  return cfg->pppos.echo_fails;
}
void mgos_config_set_pppos_echo_fails(struct mgos_config *cfg, int v) {
  cfg->pppos.echo_fails = v;
}

/* pppos.hexdump_enable */
#define MGOS_CONFIG_HAVE_PPPOS_HEXDUMP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_PPPOS_HEXDUMP_ENABLE
int mgos_config_get_pppos_hexdump_enable(struct mgos_config *cfg) {
  return cfg->pppos.hexdump_enable;
}
void mgos_config_set_pppos_hexdump_enable(struct mgos_config *cfg, int v) {
  cfg->pppos.hexdump_enable = v;
}

/* provision */
#define MGOS_CONFIG_HAVE_PROVISION
#define MGOS_SYS_CONFIG_HAVE_PROVISION
const struct mgos_config_provision * mgos_config_get_provision(struct mgos_config *cfg) {
  return &cfg->provision;
}

/* provision.btn */
#define MGOS_CONFIG_HAVE_PROVISION_BTN
#define MGOS_SYS_CONFIG_HAVE_PROVISION_BTN
const struct mgos_config_provision_btn * mgos_config_get_provision_btn(struct mgos_config *cfg) {
  return &cfg->provision.btn;
}

/* provision.btn.pin */
#define MGOS_CONFIG_HAVE_PROVISION_BTN_PIN
#define MGOS_SYS_CONFIG_HAVE_PROVISION_BTN_PIN
int mgos_config_get_provision_btn_pin(struct mgos_config *cfg) {
  return cfg->provision.btn.pin;
}
void mgos_config_set_provision_btn_pin(struct mgos_config *cfg, int v) {
  cfg->provision.btn.pin = v;
}

/* provision.btn.pull_up */
#define MGOS_CONFIG_HAVE_PROVISION_BTN_PULL_UP
#define MGOS_SYS_CONFIG_HAVE_PROVISION_BTN_PULL_UP
int mgos_config_get_provision_btn_pull_up(struct mgos_config *cfg) {
  return cfg->provision.btn.pull_up;
}
void mgos_config_set_provision_btn_pull_up(struct mgos_config *cfg, int v) {
  cfg->provision.btn.pull_up = v;
}

/* provision.btn.hold_ms */
#define MGOS_CONFIG_HAVE_PROVISION_BTN_HOLD_MS
#define MGOS_SYS_CONFIG_HAVE_PROVISION_BTN_HOLD_MS
int mgos_config_get_provision_btn_hold_ms(struct mgos_config *cfg) {
  return cfg->provision.btn.hold_ms;
}
void mgos_config_set_provision_btn_hold_ms(struct mgos_config *cfg, int v) {
  cfg->provision.btn.hold_ms = v;
}

/* provision.led */
#define MGOS_CONFIG_HAVE_PROVISION_LED
#define MGOS_SYS_CONFIG_HAVE_PROVISION_LED
const struct mgos_config_provision_led * mgos_config_get_provision_led(struct mgos_config *cfg) {
  return &cfg->provision.led;
}

/* provision.led.pin */
#define MGOS_CONFIG_HAVE_PROVISION_LED_PIN
#define MGOS_SYS_CONFIG_HAVE_PROVISION_LED_PIN
int mgos_config_get_provision_led_pin(struct mgos_config *cfg) {
  return cfg->provision.led.pin;
}
void mgos_config_set_provision_led_pin(struct mgos_config *cfg, int v) {
  cfg->provision.led.pin = v;
}

/* provision.led.active_high */
#define MGOS_CONFIG_HAVE_PROVISION_LED_ACTIVE_HIGH
#define MGOS_SYS_CONFIG_HAVE_PROVISION_LED_ACTIVE_HIGH
int mgos_config_get_provision_led_active_high(struct mgos_config *cfg) {
  return cfg->provision.led.active_high;
}
void mgos_config_set_provision_led_active_high(struct mgos_config *cfg, int v) {
  cfg->provision.led.active_high = v;
}

/* provision.stable_state */
#define MGOS_CONFIG_HAVE_PROVISION_STABLE_STATE
#define MGOS_SYS_CONFIG_HAVE_PROVISION_STABLE_STATE
int mgos_config_get_provision_stable_state(struct mgos_config *cfg) {
  return cfg->provision.stable_state;
}
void mgos_config_set_provision_stable_state(struct mgos_config *cfg, int v) {
  cfg->provision.stable_state = v;
}

/* provision.timeout */
#define MGOS_CONFIG_HAVE_PROVISION_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_PROVISION_TIMEOUT
int mgos_config_get_provision_timeout(struct mgos_config *cfg) {
  return cfg->provision.timeout;
}
void mgos_config_set_provision_timeout(struct mgos_config *cfg, int v) {
  cfg->provision.timeout = v;
}

/* provision.max_state */
#define MGOS_CONFIG_HAVE_PROVISION_MAX_STATE
#define MGOS_SYS_CONFIG_HAVE_PROVISION_MAX_STATE
int mgos_config_get_provision_max_state(struct mgos_config *cfg) {
  return cfg->provision.max_state;
}
void mgos_config_set_provision_max_state(struct mgos_config *cfg, int v) {
  cfg->provision.max_state = v;
}

/* wifi */
#define MGOS_CONFIG_HAVE_WIFI
#define MGOS_SYS_CONFIG_HAVE_WIFI
const struct mgos_config_wifi * mgos_config_get_wifi(struct mgos_config *cfg) {
  return &cfg->wifi;
}

/* wifi.ap */
#define MGOS_CONFIG_HAVE_WIFI_AP
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP
const struct mgos_config_wifi_ap * mgos_config_get_wifi_ap(struct mgos_config *cfg) {
  return &cfg->wifi.ap;
}

/* wifi.ap.enable */
#define MGOS_CONFIG_HAVE_WIFI_AP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_ENABLE
int mgos_config_get_wifi_ap_enable(struct mgos_config *cfg) {
  return cfg->wifi.ap.enable;
}
void mgos_config_set_wifi_ap_enable(struct mgos_config *cfg, int v) {
  cfg->wifi.ap.enable = v;
}

/* wifi.ap.ssid */
#define MGOS_CONFIG_HAVE_WIFI_AP_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_SSID
const char * mgos_config_get_wifi_ap_ssid(struct mgos_config *cfg) {
  return cfg->wifi.ap.ssid;
}
void mgos_config_set_wifi_ap_ssid(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.ap.ssid, v);
}

/* wifi.ap.pass */
#define MGOS_CONFIG_HAVE_WIFI_AP_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_PASS
const char * mgos_config_get_wifi_ap_pass(struct mgos_config *cfg) {
  return cfg->wifi.ap.pass;
}
void mgos_config_set_wifi_ap_pass(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.ap.pass, v);
}

/* wifi.ap.hidden */
#define MGOS_CONFIG_HAVE_WIFI_AP_HIDDEN
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_HIDDEN
int mgos_config_get_wifi_ap_hidden(struct mgos_config *cfg) {
  return cfg->wifi.ap.hidden;
}
void mgos_config_set_wifi_ap_hidden(struct mgos_config *cfg, int v) {
  cfg->wifi.ap.hidden = v;
}

/* wifi.ap.channel */
#define MGOS_CONFIG_HAVE_WIFI_AP_CHANNEL
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_CHANNEL
int mgos_config_get_wifi_ap_channel(struct mgos_config *cfg) {
  return cfg->wifi.ap.channel;
}
void mgos_config_set_wifi_ap_channel(struct mgos_config *cfg, int v) {
  cfg->wifi.ap.channel = v;
}

/* wifi.ap.max_connections */
#define MGOS_CONFIG_HAVE_WIFI_AP_MAX_CONNECTIONS
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_MAX_CONNECTIONS
int mgos_config_get_wifi_ap_max_connections(struct mgos_config *cfg) {
  return cfg->wifi.ap.max_connections;
}
void mgos_config_set_wifi_ap_max_connections(struct mgos_config *cfg, int v) {
  cfg->wifi.ap.max_connections = v;
}

/* wifi.ap.ip */
#define MGOS_CONFIG_HAVE_WIFI_AP_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_IP
const char * mgos_config_get_wifi_ap_ip(struct mgos_config *cfg) {
  return cfg->wifi.ap.ip;
}
void mgos_config_set_wifi_ap_ip(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.ap.ip, v);
}

/* wifi.ap.netmask */
#define MGOS_CONFIG_HAVE_WIFI_AP_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_NETMASK
const char * mgos_config_get_wifi_ap_netmask(struct mgos_config *cfg) {
  return cfg->wifi.ap.netmask;
}
void mgos_config_set_wifi_ap_netmask(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.ap.netmask, v);
}

/* wifi.ap.gw */
#define MGOS_CONFIG_HAVE_WIFI_AP_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_GW
const char * mgos_config_get_wifi_ap_gw(struct mgos_config *cfg) {
  return cfg->wifi.ap.gw;
}
void mgos_config_set_wifi_ap_gw(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.ap.gw, v);
}

/* wifi.ap.dhcp_start */
#define MGOS_CONFIG_HAVE_WIFI_AP_DHCP_START
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_DHCP_START
const char * mgos_config_get_wifi_ap_dhcp_start(struct mgos_config *cfg) {
  return cfg->wifi.ap.dhcp_start;
}
void mgos_config_set_wifi_ap_dhcp_start(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.ap.dhcp_start, v);
}

/* wifi.ap.dhcp_end */
#define MGOS_CONFIG_HAVE_WIFI_AP_DHCP_END
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_DHCP_END
const char * mgos_config_get_wifi_ap_dhcp_end(struct mgos_config *cfg) {
  return cfg->wifi.ap.dhcp_end;
}
void mgos_config_set_wifi_ap_dhcp_end(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.ap.dhcp_end, v);
}

/* wifi.ap.trigger_on_gpio */
#define MGOS_CONFIG_HAVE_WIFI_AP_TRIGGER_ON_GPIO
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_TRIGGER_ON_GPIO
int mgos_config_get_wifi_ap_trigger_on_gpio(struct mgos_config *cfg) {
  return cfg->wifi.ap.trigger_on_gpio;
}
void mgos_config_set_wifi_ap_trigger_on_gpio(struct mgos_config *cfg, int v) {
  cfg->wifi.ap.trigger_on_gpio = v;
}

/* wifi.ap.disable_after */
#define MGOS_CONFIG_HAVE_WIFI_AP_DISABLE_AFTER
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_DISABLE_AFTER
int mgos_config_get_wifi_ap_disable_after(struct mgos_config *cfg) {
  return cfg->wifi.ap.disable_after;
}
void mgos_config_set_wifi_ap_disable_after(struct mgos_config *cfg, int v) {
  cfg->wifi.ap.disable_after = v;
}

/* wifi.ap.hostname */
#define MGOS_CONFIG_HAVE_WIFI_AP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_HOSTNAME
const char * mgos_config_get_wifi_ap_hostname(struct mgos_config *cfg) {
  return cfg->wifi.ap.hostname;
}
void mgos_config_set_wifi_ap_hostname(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.ap.hostname, v);
}

/* wifi.ap.keep_enabled */
#define MGOS_CONFIG_HAVE_WIFI_AP_KEEP_ENABLED
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_KEEP_ENABLED
int mgos_config_get_wifi_ap_keep_enabled(struct mgos_config *cfg) {
  return cfg->wifi.ap.keep_enabled;
}
void mgos_config_set_wifi_ap_keep_enabled(struct mgos_config *cfg, int v) {
  cfg->wifi.ap.keep_enabled = v;
}

/* wifi.ap.bandwidth_20mhz */
#define MGOS_CONFIG_HAVE_WIFI_AP_BANDWIDTH_20MHZ
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_BANDWIDTH_20MHZ
int mgos_config_get_wifi_ap_bandwidth_20mhz(struct mgos_config *cfg) {
  return cfg->wifi.ap.bandwidth_20mhz;
}
void mgos_config_set_wifi_ap_bandwidth_20mhz(struct mgos_config *cfg, int v) {
  cfg->wifi.ap.bandwidth_20mhz = v;
}

/* wifi.sta */
#define MGOS_CONFIG_HAVE_WIFI_STA
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA
const struct mgos_config_wifi_sta * mgos_config_get_wifi_sta(struct mgos_config *cfg) {
  return &cfg->wifi.sta;
}

/* wifi.sta.enable */
#define MGOS_CONFIG_HAVE_WIFI_STA_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_ENABLE
int mgos_config_get_wifi_sta_enable(struct mgos_config *cfg) {
  return cfg->wifi.sta.enable;
}
void mgos_config_set_wifi_sta_enable(struct mgos_config *cfg, int v) {
  cfg->wifi.sta.enable = v;
}

/* wifi.sta.ssid */
#define MGOS_CONFIG_HAVE_WIFI_STA_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_SSID
const char * mgos_config_get_wifi_sta_ssid(struct mgos_config *cfg) {
  return cfg->wifi.sta.ssid;
}
void mgos_config_set_wifi_sta_ssid(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.ssid, v);
}

/* wifi.sta.pass */
#define MGOS_CONFIG_HAVE_WIFI_STA_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_PASS
const char * mgos_config_get_wifi_sta_pass(struct mgos_config *cfg) {
  return cfg->wifi.sta.pass;
}
void mgos_config_set_wifi_sta_pass(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.pass, v);
}

/* wifi.sta.user */
#define MGOS_CONFIG_HAVE_WIFI_STA_USER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_USER
const char * mgos_config_get_wifi_sta_user(struct mgos_config *cfg) {
  return cfg->wifi.sta.user;
}
void mgos_config_set_wifi_sta_user(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.user, v);
}

/* wifi.sta.anon_identity */
#define MGOS_CONFIG_HAVE_WIFI_STA_ANON_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_ANON_IDENTITY
const char * mgos_config_get_wifi_sta_anon_identity(struct mgos_config *cfg) {
  return cfg->wifi.sta.anon_identity;
}
void mgos_config_set_wifi_sta_anon_identity(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.anon_identity, v);
}

/* wifi.sta.cert */
#define MGOS_CONFIG_HAVE_WIFI_STA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CERT
const char * mgos_config_get_wifi_sta_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta.cert;
}
void mgos_config_set_wifi_sta_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.cert, v);
}

/* wifi.sta.key */
#define MGOS_CONFIG_HAVE_WIFI_STA_KEY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_KEY
const char * mgos_config_get_wifi_sta_key(struct mgos_config *cfg) {
  return cfg->wifi.sta.key;
}
void mgos_config_set_wifi_sta_key(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.key, v);
}

/* wifi.sta.ca_cert */
#define MGOS_CONFIG_HAVE_WIFI_STA_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CA_CERT
const char * mgos_config_get_wifi_sta_ca_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta.ca_cert;
}
void mgos_config_set_wifi_sta_ca_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.ca_cert, v);
}

/* wifi.sta.ip */
#define MGOS_CONFIG_HAVE_WIFI_STA_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_IP
const char * mgos_config_get_wifi_sta_ip(struct mgos_config *cfg) {
  return cfg->wifi.sta.ip;
}
void mgos_config_set_wifi_sta_ip(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.ip, v);
}

/* wifi.sta.netmask */
#define MGOS_CONFIG_HAVE_WIFI_STA_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_NETMASK
const char * mgos_config_get_wifi_sta_netmask(struct mgos_config *cfg) {
  return cfg->wifi.sta.netmask;
}
void mgos_config_set_wifi_sta_netmask(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.netmask, v);
}

/* wifi.sta.gw */
#define MGOS_CONFIG_HAVE_WIFI_STA_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_GW
const char * mgos_config_get_wifi_sta_gw(struct mgos_config *cfg) {
  return cfg->wifi.sta.gw;
}
void mgos_config_set_wifi_sta_gw(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.gw, v);
}

/* wifi.sta.nameserver */
#define MGOS_CONFIG_HAVE_WIFI_STA_NAMESERVER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_NAMESERVER
const char * mgos_config_get_wifi_sta_nameserver(struct mgos_config *cfg) {
  return cfg->wifi.sta.nameserver;
}
void mgos_config_set_wifi_sta_nameserver(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.nameserver, v);
}

/* wifi.sta.dhcp_hostname */
#define MGOS_CONFIG_HAVE_WIFI_STA_DHCP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_DHCP_HOSTNAME
const char * mgos_config_get_wifi_sta_dhcp_hostname(struct mgos_config *cfg) {
  return cfg->wifi.sta.dhcp_hostname;
}
void mgos_config_set_wifi_sta_dhcp_hostname(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta.dhcp_hostname, v);
}

/* wifi.sta1 */
#define MGOS_CONFIG_HAVE_WIFI_STA1
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1
const struct mgos_config_wifi_sta * mgos_config_get_wifi_sta1(struct mgos_config *cfg) {
  return &cfg->wifi.sta1;
}

/* wifi.sta1.enable */
#define MGOS_CONFIG_HAVE_WIFI_STA1_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_ENABLE
int mgos_config_get_wifi_sta1_enable(struct mgos_config *cfg) {
  return cfg->wifi.sta1.enable;
}
void mgos_config_set_wifi_sta1_enable(struct mgos_config *cfg, int v) {
  cfg->wifi.sta1.enable = v;
}

/* wifi.sta1.ssid */
#define MGOS_CONFIG_HAVE_WIFI_STA1_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_SSID
const char * mgos_config_get_wifi_sta1_ssid(struct mgos_config *cfg) {
  return cfg->wifi.sta1.ssid;
}
void mgos_config_set_wifi_sta1_ssid(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.ssid, v);
}

/* wifi.sta1.pass */
#define MGOS_CONFIG_HAVE_WIFI_STA1_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_PASS
const char * mgos_config_get_wifi_sta1_pass(struct mgos_config *cfg) {
  return cfg->wifi.sta1.pass;
}
void mgos_config_set_wifi_sta1_pass(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.pass, v);
}

/* wifi.sta1.user */
#define MGOS_CONFIG_HAVE_WIFI_STA1_USER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_USER
const char * mgos_config_get_wifi_sta1_user(struct mgos_config *cfg) {
  return cfg->wifi.sta1.user;
}
void mgos_config_set_wifi_sta1_user(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.user, v);
}

/* wifi.sta1.anon_identity */
#define MGOS_CONFIG_HAVE_WIFI_STA1_ANON_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_ANON_IDENTITY
const char * mgos_config_get_wifi_sta1_anon_identity(struct mgos_config *cfg) {
  return cfg->wifi.sta1.anon_identity;
}
void mgos_config_set_wifi_sta1_anon_identity(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.anon_identity, v);
}

/* wifi.sta1.cert */
#define MGOS_CONFIG_HAVE_WIFI_STA1_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_CERT
const char * mgos_config_get_wifi_sta1_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta1.cert;
}
void mgos_config_set_wifi_sta1_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.cert, v);
}

/* wifi.sta1.key */
#define MGOS_CONFIG_HAVE_WIFI_STA1_KEY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_KEY
const char * mgos_config_get_wifi_sta1_key(struct mgos_config *cfg) {
  return cfg->wifi.sta1.key;
}
void mgos_config_set_wifi_sta1_key(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.key, v);
}

/* wifi.sta1.ca_cert */
#define MGOS_CONFIG_HAVE_WIFI_STA1_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_CA_CERT
const char * mgos_config_get_wifi_sta1_ca_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta1.ca_cert;
}
void mgos_config_set_wifi_sta1_ca_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.ca_cert, v);
}

/* wifi.sta1.ip */
#define MGOS_CONFIG_HAVE_WIFI_STA1_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_IP
const char * mgos_config_get_wifi_sta1_ip(struct mgos_config *cfg) {
  return cfg->wifi.sta1.ip;
}
void mgos_config_set_wifi_sta1_ip(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.ip, v);
}

/* wifi.sta1.netmask */
#define MGOS_CONFIG_HAVE_WIFI_STA1_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_NETMASK
const char * mgos_config_get_wifi_sta1_netmask(struct mgos_config *cfg) {
  return cfg->wifi.sta1.netmask;
}
void mgos_config_set_wifi_sta1_netmask(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.netmask, v);
}

/* wifi.sta1.gw */
#define MGOS_CONFIG_HAVE_WIFI_STA1_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_GW
const char * mgos_config_get_wifi_sta1_gw(struct mgos_config *cfg) {
  return cfg->wifi.sta1.gw;
}
void mgos_config_set_wifi_sta1_gw(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.gw, v);
}

/* wifi.sta1.nameserver */
#define MGOS_CONFIG_HAVE_WIFI_STA1_NAMESERVER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_NAMESERVER
const char * mgos_config_get_wifi_sta1_nameserver(struct mgos_config *cfg) {
  return cfg->wifi.sta1.nameserver;
}
void mgos_config_set_wifi_sta1_nameserver(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.nameserver, v);
}

/* wifi.sta1.dhcp_hostname */
#define MGOS_CONFIG_HAVE_WIFI_STA1_DHCP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_DHCP_HOSTNAME
const char * mgos_config_get_wifi_sta1_dhcp_hostname(struct mgos_config *cfg) {
  return cfg->wifi.sta1.dhcp_hostname;
}
void mgos_config_set_wifi_sta1_dhcp_hostname(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta1.dhcp_hostname, v);
}

/* wifi.sta2 */
#define MGOS_CONFIG_HAVE_WIFI_STA2
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2
const struct mgos_config_wifi_sta * mgos_config_get_wifi_sta2(struct mgos_config *cfg) {
  return &cfg->wifi.sta2;
}

/* wifi.sta2.enable */
#define MGOS_CONFIG_HAVE_WIFI_STA2_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_ENABLE
int mgos_config_get_wifi_sta2_enable(struct mgos_config *cfg) {
  return cfg->wifi.sta2.enable;
}
void mgos_config_set_wifi_sta2_enable(struct mgos_config *cfg, int v) {
  cfg->wifi.sta2.enable = v;
}

/* wifi.sta2.ssid */
#define MGOS_CONFIG_HAVE_WIFI_STA2_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_SSID
const char * mgos_config_get_wifi_sta2_ssid(struct mgos_config *cfg) {
  return cfg->wifi.sta2.ssid;
}
void mgos_config_set_wifi_sta2_ssid(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.ssid, v);
}

/* wifi.sta2.pass */
#define MGOS_CONFIG_HAVE_WIFI_STA2_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_PASS
const char * mgos_config_get_wifi_sta2_pass(struct mgos_config *cfg) {
  return cfg->wifi.sta2.pass;
}
void mgos_config_set_wifi_sta2_pass(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.pass, v);
}

/* wifi.sta2.user */
#define MGOS_CONFIG_HAVE_WIFI_STA2_USER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_USER
const char * mgos_config_get_wifi_sta2_user(struct mgos_config *cfg) {
  return cfg->wifi.sta2.user;
}
void mgos_config_set_wifi_sta2_user(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.user, v);
}

/* wifi.sta2.anon_identity */
#define MGOS_CONFIG_HAVE_WIFI_STA2_ANON_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_ANON_IDENTITY
const char * mgos_config_get_wifi_sta2_anon_identity(struct mgos_config *cfg) {
  return cfg->wifi.sta2.anon_identity;
}
void mgos_config_set_wifi_sta2_anon_identity(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.anon_identity, v);
}

/* wifi.sta2.cert */
#define MGOS_CONFIG_HAVE_WIFI_STA2_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_CERT
const char * mgos_config_get_wifi_sta2_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta2.cert;
}
void mgos_config_set_wifi_sta2_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.cert, v);
}

/* wifi.sta2.key */
#define MGOS_CONFIG_HAVE_WIFI_STA2_KEY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_KEY
const char * mgos_config_get_wifi_sta2_key(struct mgos_config *cfg) {
  return cfg->wifi.sta2.key;
}
void mgos_config_set_wifi_sta2_key(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.key, v);
}

/* wifi.sta2.ca_cert */
#define MGOS_CONFIG_HAVE_WIFI_STA2_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_CA_CERT
const char * mgos_config_get_wifi_sta2_ca_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta2.ca_cert;
}
void mgos_config_set_wifi_sta2_ca_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.ca_cert, v);
}

/* wifi.sta2.ip */
#define MGOS_CONFIG_HAVE_WIFI_STA2_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_IP
const char * mgos_config_get_wifi_sta2_ip(struct mgos_config *cfg) {
  return cfg->wifi.sta2.ip;
}
void mgos_config_set_wifi_sta2_ip(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.ip, v);
}

/* wifi.sta2.netmask */
#define MGOS_CONFIG_HAVE_WIFI_STA2_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_NETMASK
const char * mgos_config_get_wifi_sta2_netmask(struct mgos_config *cfg) {
  return cfg->wifi.sta2.netmask;
}
void mgos_config_set_wifi_sta2_netmask(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.netmask, v);
}

/* wifi.sta2.gw */
#define MGOS_CONFIG_HAVE_WIFI_STA2_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_GW
const char * mgos_config_get_wifi_sta2_gw(struct mgos_config *cfg) {
  return cfg->wifi.sta2.gw;
}
void mgos_config_set_wifi_sta2_gw(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.gw, v);
}

/* wifi.sta2.nameserver */
#define MGOS_CONFIG_HAVE_WIFI_STA2_NAMESERVER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_NAMESERVER
const char * mgos_config_get_wifi_sta2_nameserver(struct mgos_config *cfg) {
  return cfg->wifi.sta2.nameserver;
}
void mgos_config_set_wifi_sta2_nameserver(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.nameserver, v);
}

/* wifi.sta2.dhcp_hostname */
#define MGOS_CONFIG_HAVE_WIFI_STA2_DHCP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_DHCP_HOSTNAME
const char * mgos_config_get_wifi_sta2_dhcp_hostname(struct mgos_config *cfg) {
  return cfg->wifi.sta2.dhcp_hostname;
}
void mgos_config_set_wifi_sta2_dhcp_hostname(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->wifi.sta2.dhcp_hostname, v);
}

/* wifi.sta_cfg_idx */
#define MGOS_CONFIG_HAVE_WIFI_STA_CFG_IDX
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CFG_IDX
int mgos_config_get_wifi_sta_cfg_idx(struct mgos_config *cfg) {
  return cfg->wifi.sta_cfg_idx;
}
void mgos_config_set_wifi_sta_cfg_idx(struct mgos_config *cfg, int v) {
  cfg->wifi.sta_cfg_idx = v;
}

/* wifi.sta_connect_timeout */
#define MGOS_CONFIG_HAVE_WIFI_STA_CONNECT_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CONNECT_TIMEOUT
int mgos_config_get_wifi_sta_connect_timeout(struct mgos_config *cfg) {
  return cfg->wifi.sta_connect_timeout;
}
void mgos_config_set_wifi_sta_connect_timeout(struct mgos_config *cfg, int v) {
  cfg->wifi.sta_connect_timeout = v;
}

/* wifi.sta_ps_mode */
#define MGOS_CONFIG_HAVE_WIFI_STA_PS_MODE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_PS_MODE
int mgos_config_get_wifi_sta_ps_mode(struct mgos_config *cfg) {
  return cfg->wifi.sta_ps_mode;
}
void mgos_config_set_wifi_sta_ps_mode(struct mgos_config *cfg, int v) {
  cfg->wifi.sta_ps_mode = v;
}

/* wifi.sta_all_chan_scan */
#define MGOS_CONFIG_HAVE_WIFI_STA_ALL_CHAN_SCAN
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_ALL_CHAN_SCAN
int mgos_config_get_wifi_sta_all_chan_scan(struct mgos_config *cfg) {
  return cfg->wifi.sta_all_chan_scan;
}
void mgos_config_set_wifi_sta_all_chan_scan(struct mgos_config *cfg, int v) {
  cfg->wifi.sta_all_chan_scan = v;
}

/* spi */
#define MGOS_CONFIG_HAVE_SPI
#define MGOS_SYS_CONFIG_HAVE_SPI
const struct mgos_config_spi * mgos_config_get_spi(struct mgos_config *cfg) {
  return &cfg->spi;
}

/* spi.enable */
#define MGOS_CONFIG_HAVE_SPI_ENABLE
#define MGOS_SYS_CONFIG_HAVE_SPI_ENABLE
int mgos_config_get_spi_enable(struct mgos_config *cfg) {
  return cfg->spi.enable;
}
void mgos_config_set_spi_enable(struct mgos_config *cfg, int v) {
  cfg->spi.enable = v;
}

/* spi.debug */
#define MGOS_CONFIG_HAVE_SPI_DEBUG
#define MGOS_SYS_CONFIG_HAVE_SPI_DEBUG
int mgos_config_get_spi_debug(struct mgos_config *cfg) {
  return cfg->spi.debug;
}
void mgos_config_set_spi_debug(struct mgos_config *cfg, int v) {
  cfg->spi.debug = v;
}

/* spi.unit_no */
#define MGOS_CONFIG_HAVE_SPI_UNIT_NO
#define MGOS_SYS_CONFIG_HAVE_SPI_UNIT_NO
int mgos_config_get_spi_unit_no(struct mgos_config *cfg) {
  return cfg->spi.unit_no;
}
void mgos_config_set_spi_unit_no(struct mgos_config *cfg, int v) {
  cfg->spi.unit_no = v;
}

/* spi.miso_gpio */
#define MGOS_CONFIG_HAVE_SPI_MISO_GPIO
#define MGOS_SYS_CONFIG_HAVE_SPI_MISO_GPIO
int mgos_config_get_spi_miso_gpio(struct mgos_config *cfg) {
  return cfg->spi.miso_gpio;
}
void mgos_config_set_spi_miso_gpio(struct mgos_config *cfg, int v) {
  cfg->spi.miso_gpio = v;
}

/* spi.mosi_gpio */
#define MGOS_CONFIG_HAVE_SPI_MOSI_GPIO
#define MGOS_SYS_CONFIG_HAVE_SPI_MOSI_GPIO
int mgos_config_get_spi_mosi_gpio(struct mgos_config *cfg) {
  return cfg->spi.mosi_gpio;
}
void mgos_config_set_spi_mosi_gpio(struct mgos_config *cfg, int v) {
  cfg->spi.mosi_gpio = v;
}

/* spi.sclk_gpio */
#define MGOS_CONFIG_HAVE_SPI_SCLK_GPIO
#define MGOS_SYS_CONFIG_HAVE_SPI_SCLK_GPIO
int mgos_config_get_spi_sclk_gpio(struct mgos_config *cfg) {
  return cfg->spi.sclk_gpio;
}
void mgos_config_set_spi_sclk_gpio(struct mgos_config *cfg, int v) {
  cfg->spi.sclk_gpio = v;
}

/* spi.cs0_gpio */
#define MGOS_CONFIG_HAVE_SPI_CS0_GPIO
#define MGOS_SYS_CONFIG_HAVE_SPI_CS0_GPIO
int mgos_config_get_spi_cs0_gpio(struct mgos_config *cfg) {
  return cfg->spi.cs0_gpio;
}
void mgos_config_set_spi_cs0_gpio(struct mgos_config *cfg, int v) {
  cfg->spi.cs0_gpio = v;
}

/* spi.cs1_gpio */
#define MGOS_CONFIG_HAVE_SPI_CS1_GPIO
#define MGOS_SYS_CONFIG_HAVE_SPI_CS1_GPIO
int mgos_config_get_spi_cs1_gpio(struct mgos_config *cfg) {
  return cfg->spi.cs1_gpio;
}
void mgos_config_set_spi_cs1_gpio(struct mgos_config *cfg, int v) {
  cfg->spi.cs1_gpio = v;
}

/* spi.cs2_gpio */
#define MGOS_CONFIG_HAVE_SPI_CS2_GPIO
#define MGOS_SYS_CONFIG_HAVE_SPI_CS2_GPIO
int mgos_config_get_spi_cs2_gpio(struct mgos_config *cfg) {
  return cfg->spi.cs2_gpio;
}
void mgos_config_set_spi_cs2_gpio(struct mgos_config *cfg, int v) {
  cfg->spi.cs2_gpio = v;
}

/* watson */
#define MGOS_CONFIG_HAVE_WATSON
#define MGOS_SYS_CONFIG_HAVE_WATSON
const struct mgos_config_watson * mgos_config_get_watson(struct mgos_config *cfg) {
  return &cfg->watson;
}

/* watson.enable */
#define MGOS_CONFIG_HAVE_WATSON_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WATSON_ENABLE
int mgos_config_get_watson_enable(struct mgos_config *cfg) {
  return cfg->watson.enable;
}
void mgos_config_set_watson_enable(struct mgos_config *cfg, int v) {
  cfg->watson.enable = v;
}

/* watson.host_name */
#define MGOS_CONFIG_HAVE_WATSON_HOST_NAME
#define MGOS_SYS_CONFIG_HAVE_WATSON_HOST_NAME
const char * mgos_config_get_watson_host_name(struct mgos_config *cfg) {
  return cfg->watson.host_name;
}
void mgos_config_set_watson_host_name(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->watson.host_name, v);
}

/* watson.client_id */
#define MGOS_CONFIG_HAVE_WATSON_CLIENT_ID
#define MGOS_SYS_CONFIG_HAVE_WATSON_CLIENT_ID
const char * mgos_config_get_watson_client_id(struct mgos_config *cfg) {
  return cfg->watson.client_id;
}
void mgos_config_set_watson_client_id(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->watson.client_id, v);
}

/* watson.token */
#define MGOS_CONFIG_HAVE_WATSON_TOKEN
#define MGOS_SYS_CONFIG_HAVE_WATSON_TOKEN
const char * mgos_config_get_watson_token(struct mgos_config *cfg) {
  return cfg->watson.token;
}
void mgos_config_set_watson_token(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->watson.token, v);
}

/* watson.cert */
#define MGOS_CONFIG_HAVE_WATSON_CERT
#define MGOS_SYS_CONFIG_HAVE_WATSON_CERT
const char * mgos_config_get_watson_cert(struct mgos_config *cfg) {
  return cfg->watson.cert;
}
void mgos_config_set_watson_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->watson.cert, v);
}

/* watson.key */
#define MGOS_CONFIG_HAVE_WATSON_KEY
#define MGOS_SYS_CONFIG_HAVE_WATSON_KEY
const char * mgos_config_get_watson_key(struct mgos_config *cfg) {
  return cfg->watson.key;
}
void mgos_config_set_watson_key(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->watson.key, v);
}

/* watson.ca_cert */
#define MGOS_CONFIG_HAVE_WATSON_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_WATSON_CA_CERT
const char * mgos_config_get_watson_ca_cert(struct mgos_config *cfg) {
  return cfg->watson.ca_cert;
}
void mgos_config_set_watson_ca_cert(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->watson.ca_cert, v);
}

/* mjs */
#define MGOS_CONFIG_HAVE_MJS
#define MGOS_SYS_CONFIG_HAVE_MJS
const struct mgos_config_mjs * mgos_config_get_mjs(struct mgos_config *cfg) {
  return &cfg->mjs;
}

/* mjs.generate_jsc */
#define MGOS_CONFIG_HAVE_MJS_GENERATE_JSC
#define MGOS_SYS_CONFIG_HAVE_MJS_GENERATE_JSC
int mgos_config_get_mjs_generate_jsc(struct mgos_config *cfg) {
  return cfg->mjs.generate_jsc;
}
void mgos_config_set_mjs_generate_jsc(struct mgos_config *cfg, int v) {
  cfg->mjs.generate_jsc = v;
}

/* board */
#define MGOS_CONFIG_HAVE_BOARD
#define MGOS_SYS_CONFIG_HAVE_BOARD
const struct mgos_config_board * mgos_config_get_board(struct mgos_config *cfg) {
  return &cfg->board;
}

/* board.led1 */
#define MGOS_CONFIG_HAVE_BOARD_LED1
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED1
const struct mgos_config_board_led1 * mgos_config_get_board_led1(struct mgos_config *cfg) {
  return &cfg->board.led1;
}

/* board.led1.pin */
#define MGOS_CONFIG_HAVE_BOARD_LED1_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED1_PIN
int mgos_config_get_board_led1_pin(struct mgos_config *cfg) {
  return cfg->board.led1.pin;
}
void mgos_config_set_board_led1_pin(struct mgos_config *cfg, int v) {
  cfg->board.led1.pin = v;
}

/* board.led1.active_high */
#define MGOS_CONFIG_HAVE_BOARD_LED1_ACTIVE_HIGH
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED1_ACTIVE_HIGH
int mgos_config_get_board_led1_active_high(struct mgos_config *cfg) {
  return cfg->board.led1.active_high;
}
void mgos_config_set_board_led1_active_high(struct mgos_config *cfg, int v) {
  cfg->board.led1.active_high = v;
}

/* board.led2 */
#define MGOS_CONFIG_HAVE_BOARD_LED2
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED2
const struct mgos_config_board_led2 * mgos_config_get_board_led2(struct mgos_config *cfg) {
  return &cfg->board.led2;
}

/* board.led2.pin */
#define MGOS_CONFIG_HAVE_BOARD_LED2_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED2_PIN
int mgos_config_get_board_led2_pin(struct mgos_config *cfg) {
  return cfg->board.led2.pin;
}
void mgos_config_set_board_led2_pin(struct mgos_config *cfg, int v) {
  cfg->board.led2.pin = v;
}

/* board.led2.active_high */
#define MGOS_CONFIG_HAVE_BOARD_LED2_ACTIVE_HIGH
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED2_ACTIVE_HIGH
int mgos_config_get_board_led2_active_high(struct mgos_config *cfg) {
  return cfg->board.led2.active_high;
}
void mgos_config_set_board_led2_active_high(struct mgos_config *cfg, int v) {
  cfg->board.led2.active_high = v;
}

/* board.led3 */
#define MGOS_CONFIG_HAVE_BOARD_LED3
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED3
const struct mgos_config_board_led3 * mgos_config_get_board_led3(struct mgos_config *cfg) {
  return &cfg->board.led3;
}

/* board.led3.pin */
#define MGOS_CONFIG_HAVE_BOARD_LED3_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED3_PIN
int mgos_config_get_board_led3_pin(struct mgos_config *cfg) {
  return cfg->board.led3.pin;
}
void mgos_config_set_board_led3_pin(struct mgos_config *cfg, int v) {
  cfg->board.led3.pin = v;
}

/* board.led3.active_high */
#define MGOS_CONFIG_HAVE_BOARD_LED3_ACTIVE_HIGH
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED3_ACTIVE_HIGH
int mgos_config_get_board_led3_active_high(struct mgos_config *cfg) {
  return cfg->board.led3.active_high;
}
void mgos_config_set_board_led3_active_high(struct mgos_config *cfg, int v) {
  cfg->board.led3.active_high = v;
}

/* board.btn1 */
#define MGOS_CONFIG_HAVE_BOARD_BTN1
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN1
const struct mgos_config_board_btn1 * mgos_config_get_board_btn1(struct mgos_config *cfg) {
  return &cfg->board.btn1;
}

/* board.btn1.pin */
#define MGOS_CONFIG_HAVE_BOARD_BTN1_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN1_PIN
int mgos_config_get_board_btn1_pin(struct mgos_config *cfg) {
  return cfg->board.btn1.pin;
}
void mgos_config_set_board_btn1_pin(struct mgos_config *cfg, int v) {
  cfg->board.btn1.pin = v;
}

/* board.btn1.pull_up */
#define MGOS_CONFIG_HAVE_BOARD_BTN1_PULL_UP
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN1_PULL_UP
int mgos_config_get_board_btn1_pull_up(struct mgos_config *cfg) {
  return cfg->board.btn1.pull_up;
}
void mgos_config_set_board_btn1_pull_up(struct mgos_config *cfg, int v) {
  cfg->board.btn1.pull_up = v;
}

/* board.btn2 */
#define MGOS_CONFIG_HAVE_BOARD_BTN2
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN2
const struct mgos_config_board_btn2 * mgos_config_get_board_btn2(struct mgos_config *cfg) {
  return &cfg->board.btn2;
}

/* board.btn2.pin */
#define MGOS_CONFIG_HAVE_BOARD_BTN2_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN2_PIN
int mgos_config_get_board_btn2_pin(struct mgos_config *cfg) {
  return cfg->board.btn2.pin;
}
void mgos_config_set_board_btn2_pin(struct mgos_config *cfg, int v) {
  cfg->board.btn2.pin = v;
}

/* board.btn2.pull_up */
#define MGOS_CONFIG_HAVE_BOARD_BTN2_PULL_UP
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN2_PULL_UP
int mgos_config_get_board_btn2_pull_up(struct mgos_config *cfg) {
  return cfg->board.btn2.pull_up;
}
void mgos_config_set_board_btn2_pull_up(struct mgos_config *cfg, int v) {
  cfg->board.btn2.pull_up = v;
}

/* board.btn3 */
#define MGOS_CONFIG_HAVE_BOARD_BTN3
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN3
const struct mgos_config_board_btn3 * mgos_config_get_board_btn3(struct mgos_config *cfg) {
  return &cfg->board.btn3;
}

/* board.btn3.pin */
#define MGOS_CONFIG_HAVE_BOARD_BTN3_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN3_PIN
int mgos_config_get_board_btn3_pin(struct mgos_config *cfg) {
  return cfg->board.btn3.pin;
}
void mgos_config_set_board_btn3_pin(struct mgos_config *cfg, int v) {
  cfg->board.btn3.pin = v;
}

/* board.btn3.pull_up */
#define MGOS_CONFIG_HAVE_BOARD_BTN3_PULL_UP
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN3_PULL_UP
int mgos_config_get_board_btn3_pull_up(struct mgos_config *cfg) {
  return cfg->board.btn3.pull_up;
}
void mgos_config_set_board_btn3_pull_up(struct mgos_config *cfg, int v) {
  cfg->board.btn3.pull_up = v;
}
bool mgos_sys_config_get(const struct mg_str key, struct mg_str *value) {
  return mgos_config_get(key, value, &mgos_sys_config, mgos_config_schema());
}
bool mgos_sys_config_set(const struct mg_str key, const struct mg_str value, bool free_strings) {
  return mgos_config_set(key, value, &mgos_sys_config, mgos_config_schema(), free_strings);
}
