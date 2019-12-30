/* clang-format off */
/*
 * Generated file - do not edit.
 * Command: /data/fwbuild-volumes/2.14.0/apps/app1/esp32/build_contexts/build_ctx_753129166/deps/modules/mongoose-os/tools/mgos_gen_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/data/fwbuild-volumes/2.14.0/apps/app1/esp32/build_contexts/build_ctx_753129166/build/gen/ /data/fwbuild-volumes/2.14.0/apps/app1/esp32/build_contexts/build_ctx_753129166/deps/modules/mongoose-os/src/mgos_debug_udp_config.yaml /data/fwbuild-volumes/2.14.0/apps/app1/esp32/build_contexts/build_ctx_753129166/deps/modules/mongoose-os/platforms/esp32/src/esp32_sys_config.yaml /data/fwbuild-volumes/2.14.0/apps/app1/esp32/build_contexts/build_ctx_753129166/build/gen/mos_conf_schema.yml
 */

#pragma once

#include <stdbool.h>
#include "common/mg_str.h"

#ifdef __cplusplus
extern "C" {
#endif

struct mgos_config_debug {
  const char * udp_log_addr;
  int mbedtls_level;
  int level;
  const char * file_level;
  int stdout_uart;
  int stderr_uart;
  int factory_reset_gpio;
  const char * mg_mgr_hexdump_file;
  const char * stdout_topic;
  const char * stderr_topic;
};

struct mgos_config_sys_atca {
  int enable;
  int i2c_bus;
  int i2c_addr;
  int ecdh_slots_mask;
};

struct mgos_config_sys_mount {
  const char * path;
  const char * dev_type;
  const char * dev_opts;
  const char * fs_type;
  const char * fs_opts;
};

struct mgos_config_sys {
  int esp32_adc_vref;
  int esp32_adc_width;
  struct mgos_config_sys_atca atca;
  const char * tz_spec;
  int wdt_timeout;
  const char * pref_ota_lib;
  struct mgos_config_sys_mount mount;
};

struct mgos_config_i2c {
  int unit_no;
  int enable;
  int freq;
  int debug;
  int sda_gpio;
  int scl_gpio;
};

struct mgos_config_device {
  const char * id;
  const char * license;
  const char * mac;
};

struct mgos_config_mqtt {
  int enable;
  const char * server;
  const char * client_id;
  const char * user;
  const char * pass;
  double reconnect_timeout_min;
  double reconnect_timeout_max;
  const char * ssl_cert;
  const char * ssl_key;
  const char * ssl_ca_cert;
  const char * ssl_cipher_suites;
  const char * ssl_psk_identity;
  const char * ssl_psk_key;
  int clean_session;
  int keep_alive;
  const char * will_topic;
  const char * will_message;
  int max_qos;
  int recv_mbuf_limit;
  int require_time;
  int cloud_events;
};

struct mgos_config_shadow {
  int enable;
  const char * lib;
  int ota_enable;
  int autocommit;
};

struct mgos_config_aws_greengrass {
  int enable;
  int reconnect_timeout_min;
  int reconnect_timeout_max;
};

struct mgos_config_aws {
  const char * thing_name;
  struct mgos_config_aws_greengrass greengrass;
};

struct mgos_config_sntp {
  int enable;
  const char * server;
  int retry_min;
  int retry_max;
  int update_interval;
};

struct mgos_config_azure {
  int enable;
  const char * cs;
  int token_ttl;
  const char * host_name;
  const char * device_id;
  const char * cert;
  const char * key;
  int enable_cm;
  int enable_dm;
};

struct mgos_config_bt_gatts {
  int min_sec_level;
  int require_pairing;
};

struct mgos_config_bt {
  int enable;
  const char * dev_name;
  int adv_enable;
  const char * scan_rsp_data_hex;
  int keep_enabled;
  int allow_pairing;
  int max_paired_devices;
  int random_address;
  int gatt_mtu;
  struct mgos_config_bt_gatts gatts;
  int debug_svc_enable;
  int debug_svc_sec_level;
};

struct mgos_config_update {
  int timeout;
  int commit_timeout;
  const char * url;
  int interval;
  const char * extra_http_headers;
  const char * ssl_ca_file;
  const char * ssl_client_cert_file;
  const char * ssl_server_name;
  int enable_post;
};

struct mgos_config_rpc_ws {
  int enable;
  const char * server_address;
  int reconnect_interval_min;
  int reconnect_interval_max;
  const char * ssl_server_name;
  const char * ssl_cert;
  const char * ssl_key;
  const char * ssl_ca_cert;
};

struct mgos_config_rpc_azure {
  int enable_dm;
};

struct mgos_config_rpc_gatts {
  int enable;
  int sec_level;
  int max_frame_size;
};

struct mgos_config_rpc_gcp {
  int enable;
  const char * subfolder;
};

struct mgos_config_rpc_mqtt {
  int enable;
  const char * pub_topic;
  const char * sub_topic;
  int sub_wc;
  int qos;
};

struct mgos_config_rpc_uart {
  int uart_no;
  int baud_rate;
  int fc_type;
  const char * dst;
};

struct mgos_config_rpc {
  int enable;
  int max_frame_size;
  int max_queue_length;
  int default_out_channel_idle_close_timeout;
  const char * acl_file;
  const char * auth_domain;
  const char * auth_file;
  struct mgos_config_rpc_ws ws;
  struct mgos_config_rpc_azure azure;
  struct mgos_config_rpc_gatts gatts;
  struct mgos_config_rpc_gcp gcp;
  struct mgos_config_rpc_mqtt mqtt;
  struct mgos_config_rpc_uart uart;
};

struct mgos_config_dash {
  int enable;
  const char * token;
  const char * server;
  const char * ssl_cert;
  const char * ssl_key;
  const char * ssl_ca_cert;
  int send_logs;
};

struct mgos_config_http {
  int enable;
  const char * listen_addr;
  const char * document_root;
  const char * ssl_cert;
  const char * ssl_key;
  const char * ssl_ca_cert;
  const char * upload_acl;
  const char * hidden_files;
  const char * auth_domain;
  const char * auth_file;
};

struct mgos_config_dns_sd {
  int enable;
  const char * host_name;
  const char * txt;
  int ttl;
};

struct mgos_config_eth {
  int enable;
  int phy_addr;
  const char * ip;
  const char * netmask;
  const char * gw;
  int clk_mode;
  int mdc_gpio;
  int mdio_gpio;
  int phy_pwr_gpio;
};

struct mgos_config_devtab_dev0 {
  const char * name;
  const char * type;
  const char * opts;
};

struct mgos_config_devtab_dev1 {
  const char * name;
  const char * type;
  const char * opts;
};

struct mgos_config_devtab_dev2 {
  const char * name;
  const char * type;
  const char * opts;
};

struct mgos_config_devtab_dev3 {
  const char * name;
  const char * type;
  const char * opts;
};

struct mgos_config_devtab_dev4 {
  const char * name;
  const char * type;
  const char * opts;
};

struct mgos_config_devtab {
  struct mgos_config_devtab_dev0 dev0;
  struct mgos_config_devtab_dev1 dev1;
  struct mgos_config_devtab_dev2 dev2;
  struct mgos_config_devtab_dev3 dev3;
  struct mgos_config_devtab_dev4 dev4;
};

struct mgos_config_fstab_fs0 {
  const char * dev;
  const char * type;
  const char * opts;
  const char * path;
  int create;
  int optional;
  int created;
};

struct mgos_config_fstab_fs1 {
  const char * dev;
  const char * type;
  const char * opts;
  const char * path;
  int create;
  int optional;
  int created;
};

struct mgos_config_fstab_fs2 {
  const char * dev;
  const char * type;
  const char * opts;
  const char * path;
  int create;
  int optional;
  int created;
};

struct mgos_config_fstab {
  struct mgos_config_fstab_fs0 fs0;
  struct mgos_config_fstab_fs1 fs1;
  struct mgos_config_fstab_fs2 fs2;
};

struct mgos_config_gcp {
  int enable;
  const char * server;
  const char * project;
  const char * region;
  const char * registry;
  const char * device;
  const char * key;
  int token_ttl;
  int enable_config;
  int enable_commands;
};

struct mgos_config_pppos {
  int enable;
  int uart_no;
  int baud_rate;
  int start_baud_rate;
  int fc_enable;
  int start_fc_enable;
  int rx_gpio;
  int tx_gpio;
  int cts_gpio;
  int rts_gpio;
  int dtr_gpio;
  int dtr_act;
  const char * apn;
  const char * user;
  const char * pass;
  int connect_on_startup;
  int rst_gpio;
  int rst_act;
  int rst_hold_ms;
  int rst_wait_ms;
  int rst_mode;
  int echo_interval;
  int echo_fails;
  int hexdump_enable;
};

struct mgos_config_provision_btn {
  int pin;
  int pull_up;
  int hold_ms;
};

struct mgos_config_provision_led {
  int pin;
  int active_high;
};

struct mgos_config_provision {
  struct mgos_config_provision_btn btn;
  struct mgos_config_provision_led led;
  int stable_state;
  int timeout;
  int max_state;
};

struct mgos_config_wifi_ap {
  int enable;
  const char * ssid;
  const char * pass;
  int hidden;
  int channel;
  int max_connections;
  const char * ip;
  const char * netmask;
  const char * gw;
  const char * dhcp_start;
  const char * dhcp_end;
  int trigger_on_gpio;
  int disable_after;
  const char * hostname;
  int keep_enabled;
  int bandwidth_20mhz;
};

struct mgos_config_wifi_sta {
  int enable;
  const char * ssid;
  const char * pass;
  const char * user;
  const char * anon_identity;
  const char * cert;
  const char * key;
  const char * ca_cert;
  const char * ip;
  const char * netmask;
  const char * gw;
  const char * nameserver;
  const char * dhcp_hostname;
};

struct mgos_config_wifi {
  struct mgos_config_wifi_ap ap;
  struct mgos_config_wifi_sta sta;
  struct mgos_config_wifi_sta sta1;
  struct mgos_config_wifi_sta sta2;
  int sta_cfg_idx;
  int sta_connect_timeout;
  int sta_ps_mode;
  int sta_all_chan_scan;
};

struct mgos_config_spi {
  int enable;
  int debug;
  int unit_no;
  int miso_gpio;
  int mosi_gpio;
  int sclk_gpio;
  int cs0_gpio;
  int cs1_gpio;
  int cs2_gpio;
};

struct mgos_config_watson {
  int enable;
  const char * host_name;
  const char * client_id;
  const char * token;
  const char * cert;
  const char * key;
  const char * ca_cert;
};

struct mgos_config_mjs {
  int generate_jsc;
};

struct mgos_config_board_led1 {
  int pin;
  int active_high;
};

struct mgos_config_board_led2 {
  int pin;
  int active_high;
};

struct mgos_config_board_led3 {
  int pin;
  int active_high;
};

struct mgos_config_board_btn1 {
  int pin;
  int pull_up;
};

struct mgos_config_board_btn2 {
  int pin;
  int pull_up;
};

struct mgos_config_board_btn3 {
  int pin;
  int pull_up;
};

struct mgos_config_board {
  struct mgos_config_board_led1 led1;
  struct mgos_config_board_led2 led2;
  struct mgos_config_board_led3 led3;
  struct mgos_config_board_btn1 btn1;
  struct mgos_config_board_btn2 btn2;
  struct mgos_config_board_btn3 btn3;
};

struct mgos_config {
  struct mgos_config_debug debug;
  struct mgos_config_sys sys;
  struct mgos_config_i2c i2c;
  struct mgos_config_i2c i2c1;
  struct mgos_config_device device;
  const char * conf_acl;
  struct mgos_config_mqtt mqtt;
  struct mgos_config_mqtt mqtt1;
  struct mgos_config_shadow shadow;
  struct mgos_config_aws aws;
  struct mgos_config_sntp sntp;
  struct mgos_config_azure azure;
  struct mgos_config_bt bt;
  struct mgos_config_update update;
  struct mgos_config_rpc rpc;
  struct mgos_config_dash dash;
  struct mgos_config_http http;
  struct mgos_config_dns_sd dns_sd;
  struct mgos_config_eth eth;
  struct mgos_config_devtab devtab;
  struct mgos_config_fstab fstab;
  struct mgos_config_gcp gcp;
  struct mgos_config_pppos pppos;
  struct mgos_config_provision provision;
  struct mgos_config_wifi wifi;
  struct mgos_config_spi spi;
  struct mgos_config_watson watson;
  struct mgos_config_mjs mjs;
  struct mgos_config_board board;
};


const struct mgos_conf_entry *mgos_config_schema();

extern struct mgos_config mgos_sys_config;
extern const struct mgos_config mgos_config_defaults;

/* debug */
#define MGOS_CONFIG_HAVE_DEBUG
#define MGOS_SYS_CONFIG_HAVE_DEBUG
const struct mgos_config_debug * mgos_config_get_debug(struct mgos_config *cfg);
static inline const struct mgos_config_debug * mgos_sys_config_get_debug(void) { return mgos_config_get_debug(&mgos_sys_config); }

/* debug.udp_log_addr */
#define MGOS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
#define MGOS_SYS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
const char * mgos_config_get_debug_udp_log_addr(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_debug_udp_log_addr(void) { return mgos_config_get_debug_udp_log_addr(&mgos_sys_config); }
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_udp_log_addr(const char * v) { mgos_config_set_debug_udp_log_addr(&mgos_sys_config, v); }

/* debug.mbedtls_level */
#define MGOS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
int mgos_config_get_debug_mbedtls_level(struct mgos_config *cfg);
static inline int mgos_sys_config_get_debug_mbedtls_level(void) { return mgos_config_get_debug_mbedtls_level(&mgos_sys_config); }
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_mbedtls_level(int v) { mgos_config_set_debug_mbedtls_level(&mgos_sys_config, v); }

/* debug.level */
#define MGOS_CONFIG_HAVE_DEBUG_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_LEVEL
int mgos_config_get_debug_level(struct mgos_config *cfg);
static inline int mgos_sys_config_get_debug_level(void) { return mgos_config_get_debug_level(&mgos_sys_config); }
void mgos_config_set_debug_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_level(int v) { mgos_config_set_debug_level(&mgos_sys_config, v); }

/* debug.file_level */
#define MGOS_CONFIG_HAVE_DEBUG_FILE_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FILE_LEVEL
const char * mgos_config_get_debug_file_level(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_debug_file_level(void) { return mgos_config_get_debug_file_level(&mgos_sys_config); }
void mgos_config_set_debug_file_level(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_file_level(const char * v) { mgos_config_set_debug_file_level(&mgos_sys_config, v); }

/* debug.stdout_uart */
#define MGOS_CONFIG_HAVE_DEBUG_STDOUT_UART
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDOUT_UART
int mgos_config_get_debug_stdout_uart(struct mgos_config *cfg);
static inline int mgos_sys_config_get_debug_stdout_uart(void) { return mgos_config_get_debug_stdout_uart(&mgos_sys_config); }
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_stdout_uart(int v) { mgos_config_set_debug_stdout_uart(&mgos_sys_config, v); }

/* debug.stderr_uart */
#define MGOS_CONFIG_HAVE_DEBUG_STDERR_UART
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDERR_UART
int mgos_config_get_debug_stderr_uart(struct mgos_config *cfg);
static inline int mgos_sys_config_get_debug_stderr_uart(void) { return mgos_config_get_debug_stderr_uart(&mgos_sys_config); }
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_stderr_uart(int v) { mgos_config_set_debug_stderr_uart(&mgos_sys_config, v); }

/* debug.factory_reset_gpio */
#define MGOS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
int mgos_config_get_debug_factory_reset_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_debug_factory_reset_gpio(void) { return mgos_config_get_debug_factory_reset_gpio(&mgos_sys_config); }
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_factory_reset_gpio(int v) { mgos_config_set_debug_factory_reset_gpio(&mgos_sys_config, v); }

/* debug.mg_mgr_hexdump_file */
#define MGOS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
const char * mgos_config_get_debug_mg_mgr_hexdump_file(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_debug_mg_mgr_hexdump_file(void) { return mgos_config_get_debug_mg_mgr_hexdump_file(&mgos_sys_config); }
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_mg_mgr_hexdump_file(const char * v) { mgos_config_set_debug_mg_mgr_hexdump_file(&mgos_sys_config, v); }

/* debug.stdout_topic */
#define MGOS_CONFIG_HAVE_DEBUG_STDOUT_TOPIC
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDOUT_TOPIC
const char * mgos_config_get_debug_stdout_topic(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_debug_stdout_topic(void) { return mgos_config_get_debug_stdout_topic(&mgos_sys_config); }
void mgos_config_set_debug_stdout_topic(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_stdout_topic(const char * v) { mgos_config_set_debug_stdout_topic(&mgos_sys_config, v); }

/* debug.stderr_topic */
#define MGOS_CONFIG_HAVE_DEBUG_STDERR_TOPIC
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDERR_TOPIC
const char * mgos_config_get_debug_stderr_topic(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_debug_stderr_topic(void) { return mgos_config_get_debug_stderr_topic(&mgos_sys_config); }
void mgos_config_set_debug_stderr_topic(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_stderr_topic(const char * v) { mgos_config_set_debug_stderr_topic(&mgos_sys_config, v); }

/* sys */
#define MGOS_CONFIG_HAVE_SYS
#define MGOS_SYS_CONFIG_HAVE_SYS
const struct mgos_config_sys * mgos_config_get_sys(struct mgos_config *cfg);
static inline const struct mgos_config_sys * mgos_sys_config_get_sys(void) { return mgos_config_get_sys(&mgos_sys_config); }

/* sys.esp32_adc_vref */
#define MGOS_CONFIG_HAVE_SYS_ESP32_ADC_VREF
#define MGOS_SYS_CONFIG_HAVE_SYS_ESP32_ADC_VREF
int mgos_config_get_sys_esp32_adc_vref(struct mgos_config *cfg);
static inline int mgos_sys_config_get_sys_esp32_adc_vref(void) { return mgos_config_get_sys_esp32_adc_vref(&mgos_sys_config); }
void mgos_config_set_sys_esp32_adc_vref(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_esp32_adc_vref(int v) { mgos_config_set_sys_esp32_adc_vref(&mgos_sys_config, v); }

/* sys.esp32_adc_width */
#define MGOS_CONFIG_HAVE_SYS_ESP32_ADC_WIDTH
#define MGOS_SYS_CONFIG_HAVE_SYS_ESP32_ADC_WIDTH
int mgos_config_get_sys_esp32_adc_width(struct mgos_config *cfg);
static inline int mgos_sys_config_get_sys_esp32_adc_width(void) { return mgos_config_get_sys_esp32_adc_width(&mgos_sys_config); }
void mgos_config_set_sys_esp32_adc_width(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_esp32_adc_width(int v) { mgos_config_set_sys_esp32_adc_width(&mgos_sys_config, v); }

/* sys.atca */
#define MGOS_CONFIG_HAVE_SYS_ATCA
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA
const struct mgos_config_sys_atca * mgos_config_get_sys_atca(struct mgos_config *cfg);
static inline const struct mgos_config_sys_atca * mgos_sys_config_get_sys_atca(void) { return mgos_config_get_sys_atca(&mgos_sys_config); }

/* sys.atca.enable */
#define MGOS_CONFIG_HAVE_SYS_ATCA_ENABLE
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_ENABLE
int mgos_config_get_sys_atca_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_sys_atca_enable(void) { return mgos_config_get_sys_atca_enable(&mgos_sys_config); }
void mgos_config_set_sys_atca_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_atca_enable(int v) { mgos_config_set_sys_atca_enable(&mgos_sys_config, v); }

/* sys.atca.i2c_bus */
#define MGOS_CONFIG_HAVE_SYS_ATCA_I2C_BUS
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_I2C_BUS
int mgos_config_get_sys_atca_i2c_bus(struct mgos_config *cfg);
static inline int mgos_sys_config_get_sys_atca_i2c_bus(void) { return mgos_config_get_sys_atca_i2c_bus(&mgos_sys_config); }
void mgos_config_set_sys_atca_i2c_bus(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_atca_i2c_bus(int v) { mgos_config_set_sys_atca_i2c_bus(&mgos_sys_config, v); }

/* sys.atca.i2c_addr */
#define MGOS_CONFIG_HAVE_SYS_ATCA_I2C_ADDR
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_I2C_ADDR
int mgos_config_get_sys_atca_i2c_addr(struct mgos_config *cfg);
static inline int mgos_sys_config_get_sys_atca_i2c_addr(void) { return mgos_config_get_sys_atca_i2c_addr(&mgos_sys_config); }
void mgos_config_set_sys_atca_i2c_addr(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_atca_i2c_addr(int v) { mgos_config_set_sys_atca_i2c_addr(&mgos_sys_config, v); }

/* sys.atca.ecdh_slots_mask */
#define MGOS_CONFIG_HAVE_SYS_ATCA_ECDH_SLOTS_MASK
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_ECDH_SLOTS_MASK
int mgos_config_get_sys_atca_ecdh_slots_mask(struct mgos_config *cfg);
static inline int mgos_sys_config_get_sys_atca_ecdh_slots_mask(void) { return mgos_config_get_sys_atca_ecdh_slots_mask(&mgos_sys_config); }
void mgos_config_set_sys_atca_ecdh_slots_mask(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_atca_ecdh_slots_mask(int v) { mgos_config_set_sys_atca_ecdh_slots_mask(&mgos_sys_config, v); }

/* sys.tz_spec */
#define MGOS_CONFIG_HAVE_SYS_TZ_SPEC
#define MGOS_SYS_CONFIG_HAVE_SYS_TZ_SPEC
const char * mgos_config_get_sys_tz_spec(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_sys_tz_spec(void) { return mgos_config_get_sys_tz_spec(&mgos_sys_config); }
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_sys_tz_spec(const char * v) { mgos_config_set_sys_tz_spec(&mgos_sys_config, v); }

/* sys.wdt_timeout */
#define MGOS_CONFIG_HAVE_SYS_WDT_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_SYS_WDT_TIMEOUT
int mgos_config_get_sys_wdt_timeout(struct mgos_config *cfg);
static inline int mgos_sys_config_get_sys_wdt_timeout(void) { return mgos_config_get_sys_wdt_timeout(&mgos_sys_config); }
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_wdt_timeout(int v) { mgos_config_set_sys_wdt_timeout(&mgos_sys_config, v); }

/* sys.pref_ota_lib */
#define MGOS_CONFIG_HAVE_SYS_PREF_OTA_LIB
#define MGOS_SYS_CONFIG_HAVE_SYS_PREF_OTA_LIB
const char * mgos_config_get_sys_pref_ota_lib(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_sys_pref_ota_lib(void) { return mgos_config_get_sys_pref_ota_lib(&mgos_sys_config); }
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_sys_pref_ota_lib(const char * v) { mgos_config_set_sys_pref_ota_lib(&mgos_sys_config, v); }

/* sys.mount */
#define MGOS_CONFIG_HAVE_SYS_MOUNT
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT
const struct mgos_config_sys_mount * mgos_config_get_sys_mount(struct mgos_config *cfg);
static inline const struct mgos_config_sys_mount * mgos_sys_config_get_sys_mount(void) { return mgos_config_get_sys_mount(&mgos_sys_config); }

/* sys.mount.path */
#define MGOS_CONFIG_HAVE_SYS_MOUNT_PATH
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT_PATH
const char * mgos_config_get_sys_mount_path(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_sys_mount_path(void) { return mgos_config_get_sys_mount_path(&mgos_sys_config); }
void mgos_config_set_sys_mount_path(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_sys_mount_path(const char * v) { mgos_config_set_sys_mount_path(&mgos_sys_config, v); }

/* sys.mount.dev_type */
#define MGOS_CONFIG_HAVE_SYS_MOUNT_DEV_TYPE
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT_DEV_TYPE
const char * mgos_config_get_sys_mount_dev_type(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_sys_mount_dev_type(void) { return mgos_config_get_sys_mount_dev_type(&mgos_sys_config); }
void mgos_config_set_sys_mount_dev_type(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_sys_mount_dev_type(const char * v) { mgos_config_set_sys_mount_dev_type(&mgos_sys_config, v); }

/* sys.mount.dev_opts */
#define MGOS_CONFIG_HAVE_SYS_MOUNT_DEV_OPTS
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT_DEV_OPTS
const char * mgos_config_get_sys_mount_dev_opts(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_sys_mount_dev_opts(void) { return mgos_config_get_sys_mount_dev_opts(&mgos_sys_config); }
void mgos_config_set_sys_mount_dev_opts(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_sys_mount_dev_opts(const char * v) { mgos_config_set_sys_mount_dev_opts(&mgos_sys_config, v); }

/* sys.mount.fs_type */
#define MGOS_CONFIG_HAVE_SYS_MOUNT_FS_TYPE
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT_FS_TYPE
const char * mgos_config_get_sys_mount_fs_type(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_sys_mount_fs_type(void) { return mgos_config_get_sys_mount_fs_type(&mgos_sys_config); }
void mgos_config_set_sys_mount_fs_type(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_sys_mount_fs_type(const char * v) { mgos_config_set_sys_mount_fs_type(&mgos_sys_config, v); }

/* sys.mount.fs_opts */
#define MGOS_CONFIG_HAVE_SYS_MOUNT_FS_OPTS
#define MGOS_SYS_CONFIG_HAVE_SYS_MOUNT_FS_OPTS
const char * mgos_config_get_sys_mount_fs_opts(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_sys_mount_fs_opts(void) { return mgos_config_get_sys_mount_fs_opts(&mgos_sys_config); }
void mgos_config_set_sys_mount_fs_opts(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_sys_mount_fs_opts(const char * v) { mgos_config_set_sys_mount_fs_opts(&mgos_sys_config, v); }

/* i2c */
#define MGOS_CONFIG_HAVE_I2C
#define MGOS_SYS_CONFIG_HAVE_I2C
const struct mgos_config_i2c * mgos_config_get_i2c(struct mgos_config *cfg);
static inline const struct mgos_config_i2c * mgos_sys_config_get_i2c(void) { return mgos_config_get_i2c(&mgos_sys_config); }

/* i2c.unit_no */
#define MGOS_CONFIG_HAVE_I2C_UNIT_NO
#define MGOS_SYS_CONFIG_HAVE_I2C_UNIT_NO
int mgos_config_get_i2c_unit_no(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c_unit_no(void) { return mgos_config_get_i2c_unit_no(&mgos_sys_config); }
void mgos_config_set_i2c_unit_no(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c_unit_no(int v) { mgos_config_set_i2c_unit_no(&mgos_sys_config, v); }

/* i2c.enable */
#define MGOS_CONFIG_HAVE_I2C_ENABLE
#define MGOS_SYS_CONFIG_HAVE_I2C_ENABLE
int mgos_config_get_i2c_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c_enable(void) { return mgos_config_get_i2c_enable(&mgos_sys_config); }
void mgos_config_set_i2c_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c_enable(int v) { mgos_config_set_i2c_enable(&mgos_sys_config, v); }

/* i2c.freq */
#define MGOS_CONFIG_HAVE_I2C_FREQ
#define MGOS_SYS_CONFIG_HAVE_I2C_FREQ
int mgos_config_get_i2c_freq(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c_freq(void) { return mgos_config_get_i2c_freq(&mgos_sys_config); }
void mgos_config_set_i2c_freq(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c_freq(int v) { mgos_config_set_i2c_freq(&mgos_sys_config, v); }

/* i2c.debug */
#define MGOS_CONFIG_HAVE_I2C_DEBUG
#define MGOS_SYS_CONFIG_HAVE_I2C_DEBUG
int mgos_config_get_i2c_debug(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c_debug(void) { return mgos_config_get_i2c_debug(&mgos_sys_config); }
void mgos_config_set_i2c_debug(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c_debug(int v) { mgos_config_set_i2c_debug(&mgos_sys_config, v); }

/* i2c.sda_gpio */
#define MGOS_CONFIG_HAVE_I2C_SDA_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C_SDA_GPIO
int mgos_config_get_i2c_sda_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c_sda_gpio(void) { return mgos_config_get_i2c_sda_gpio(&mgos_sys_config); }
void mgos_config_set_i2c_sda_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c_sda_gpio(int v) { mgos_config_set_i2c_sda_gpio(&mgos_sys_config, v); }

/* i2c.scl_gpio */
#define MGOS_CONFIG_HAVE_I2C_SCL_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C_SCL_GPIO
int mgos_config_get_i2c_scl_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c_scl_gpio(void) { return mgos_config_get_i2c_scl_gpio(&mgos_sys_config); }
void mgos_config_set_i2c_scl_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c_scl_gpio(int v) { mgos_config_set_i2c_scl_gpio(&mgos_sys_config, v); }

/* i2c1 */
#define MGOS_CONFIG_HAVE_I2C1
#define MGOS_SYS_CONFIG_HAVE_I2C1
const struct mgos_config_i2c * mgos_config_get_i2c1(struct mgos_config *cfg);
static inline const struct mgos_config_i2c * mgos_sys_config_get_i2c1(void) { return mgos_config_get_i2c1(&mgos_sys_config); }

/* i2c1.unit_no */
#define MGOS_CONFIG_HAVE_I2C1_UNIT_NO
#define MGOS_SYS_CONFIG_HAVE_I2C1_UNIT_NO
int mgos_config_get_i2c1_unit_no(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c1_unit_no(void) { return mgos_config_get_i2c1_unit_no(&mgos_sys_config); }
void mgos_config_set_i2c1_unit_no(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c1_unit_no(int v) { mgos_config_set_i2c1_unit_no(&mgos_sys_config, v); }

/* i2c1.enable */
#define MGOS_CONFIG_HAVE_I2C1_ENABLE
#define MGOS_SYS_CONFIG_HAVE_I2C1_ENABLE
int mgos_config_get_i2c1_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c1_enable(void) { return mgos_config_get_i2c1_enable(&mgos_sys_config); }
void mgos_config_set_i2c1_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c1_enable(int v) { mgos_config_set_i2c1_enable(&mgos_sys_config, v); }

/* i2c1.freq */
#define MGOS_CONFIG_HAVE_I2C1_FREQ
#define MGOS_SYS_CONFIG_HAVE_I2C1_FREQ
int mgos_config_get_i2c1_freq(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c1_freq(void) { return mgos_config_get_i2c1_freq(&mgos_sys_config); }
void mgos_config_set_i2c1_freq(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c1_freq(int v) { mgos_config_set_i2c1_freq(&mgos_sys_config, v); }

/* i2c1.debug */
#define MGOS_CONFIG_HAVE_I2C1_DEBUG
#define MGOS_SYS_CONFIG_HAVE_I2C1_DEBUG
int mgos_config_get_i2c1_debug(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c1_debug(void) { return mgos_config_get_i2c1_debug(&mgos_sys_config); }
void mgos_config_set_i2c1_debug(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c1_debug(int v) { mgos_config_set_i2c1_debug(&mgos_sys_config, v); }

/* i2c1.sda_gpio */
#define MGOS_CONFIG_HAVE_I2C1_SDA_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C1_SDA_GPIO
int mgos_config_get_i2c1_sda_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c1_sda_gpio(void) { return mgos_config_get_i2c1_sda_gpio(&mgos_sys_config); }
void mgos_config_set_i2c1_sda_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c1_sda_gpio(int v) { mgos_config_set_i2c1_sda_gpio(&mgos_sys_config, v); }

/* i2c1.scl_gpio */
#define MGOS_CONFIG_HAVE_I2C1_SCL_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C1_SCL_GPIO
int mgos_config_get_i2c1_scl_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_i2c1_scl_gpio(void) { return mgos_config_get_i2c1_scl_gpio(&mgos_sys_config); }
void mgos_config_set_i2c1_scl_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c1_scl_gpio(int v) { mgos_config_set_i2c1_scl_gpio(&mgos_sys_config, v); }

/* device */
#define MGOS_CONFIG_HAVE_DEVICE
#define MGOS_SYS_CONFIG_HAVE_DEVICE
const struct mgos_config_device * mgos_config_get_device(struct mgos_config *cfg);
static inline const struct mgos_config_device * mgos_sys_config_get_device(void) { return mgos_config_get_device(&mgos_sys_config); }

/* device.id */
#define MGOS_CONFIG_HAVE_DEVICE_ID
#define MGOS_SYS_CONFIG_HAVE_DEVICE_ID
const char * mgos_config_get_device_id(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_device_id(void) { return mgos_config_get_device_id(&mgos_sys_config); }
void mgos_config_set_device_id(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_id(const char * v) { mgos_config_set_device_id(&mgos_sys_config, v); }

/* device.license */
#define MGOS_CONFIG_HAVE_DEVICE_LICENSE
#define MGOS_SYS_CONFIG_HAVE_DEVICE_LICENSE
const char * mgos_config_get_device_license(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_device_license(void) { return mgos_config_get_device_license(&mgos_sys_config); }
void mgos_config_set_device_license(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_license(const char * v) { mgos_config_set_device_license(&mgos_sys_config, v); }

/* device.mac */
#define MGOS_CONFIG_HAVE_DEVICE_MAC
#define MGOS_SYS_CONFIG_HAVE_DEVICE_MAC
const char * mgos_config_get_device_mac(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_device_mac(void) { return mgos_config_get_device_mac(&mgos_sys_config); }
void mgos_config_set_device_mac(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_mac(const char * v) { mgos_config_set_device_mac(&mgos_sys_config, v); }

/* conf_acl */
#define MGOS_CONFIG_HAVE_CONF_ACL
#define MGOS_SYS_CONFIG_HAVE_CONF_ACL
const char * mgos_config_get_conf_acl(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_conf_acl(void) { return mgos_config_get_conf_acl(&mgos_sys_config); }
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_conf_acl(const char * v) { mgos_config_set_conf_acl(&mgos_sys_config, v); }

/* mqtt */
#define MGOS_CONFIG_HAVE_MQTT
#define MGOS_SYS_CONFIG_HAVE_MQTT
const struct mgos_config_mqtt * mgos_config_get_mqtt(struct mgos_config *cfg);
static inline const struct mgos_config_mqtt * mgos_sys_config_get_mqtt(void) { return mgos_config_get_mqtt(&mgos_sys_config); }

/* mqtt.enable */
#define MGOS_CONFIG_HAVE_MQTT_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MQTT_ENABLE
int mgos_config_get_mqtt_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_mqtt_enable(void) { return mgos_config_get_mqtt_enable(&mgos_sys_config); }
void mgos_config_set_mqtt_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_enable(int v) { mgos_config_set_mqtt_enable(&mgos_sys_config, v); }

/* mqtt.server */
#define MGOS_CONFIG_HAVE_MQTT_SERVER
#define MGOS_SYS_CONFIG_HAVE_MQTT_SERVER
const char * mgos_config_get_mqtt_server(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt_server(void) { return mgos_config_get_mqtt_server(&mgos_sys_config); }
void mgos_config_set_mqtt_server(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_server(const char * v) { mgos_config_set_mqtt_server(&mgos_sys_config, v); }

/* mqtt.client_id */
#define MGOS_CONFIG_HAVE_MQTT_CLIENT_ID
#define MGOS_SYS_CONFIG_HAVE_MQTT_CLIENT_ID
const char * mgos_config_get_mqtt_client_id(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt_client_id(void) { return mgos_config_get_mqtt_client_id(&mgos_sys_config); }
void mgos_config_set_mqtt_client_id(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_client_id(const char * v) { mgos_config_set_mqtt_client_id(&mgos_sys_config, v); }

/* mqtt.user */
#define MGOS_CONFIG_HAVE_MQTT_USER
#define MGOS_SYS_CONFIG_HAVE_MQTT_USER
const char * mgos_config_get_mqtt_user(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt_user(void) { return mgos_config_get_mqtt_user(&mgos_sys_config); }
void mgos_config_set_mqtt_user(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_user(const char * v) { mgos_config_set_mqtt_user(&mgos_sys_config, v); }

/* mqtt.pass */
#define MGOS_CONFIG_HAVE_MQTT_PASS
#define MGOS_SYS_CONFIG_HAVE_MQTT_PASS
const char * mgos_config_get_mqtt_pass(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt_pass(void) { return mgos_config_get_mqtt_pass(&mgos_sys_config); }
void mgos_config_set_mqtt_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_pass(const char * v) { mgos_config_set_mqtt_pass(&mgos_sys_config, v); }

/* mqtt.reconnect_timeout_min */
#define MGOS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MIN
#define MGOS_SYS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MIN
double mgos_config_get_mqtt_reconnect_timeout_min(struct mgos_config *cfg);
static inline double mgos_sys_config_get_mqtt_reconnect_timeout_min(void) { return mgos_config_get_mqtt_reconnect_timeout_min(&mgos_sys_config); }
void mgos_config_set_mqtt_reconnect_timeout_min(struct mgos_config *cfg, double v);
static inline void mgos_sys_config_set_mqtt_reconnect_timeout_min(double v) { mgos_config_set_mqtt_reconnect_timeout_min(&mgos_sys_config, v); }

/* mqtt.reconnect_timeout_max */
#define MGOS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MAX
#define MGOS_SYS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MAX
double mgos_config_get_mqtt_reconnect_timeout_max(struct mgos_config *cfg);
static inline double mgos_sys_config_get_mqtt_reconnect_timeout_max(void) { return mgos_config_get_mqtt_reconnect_timeout_max(&mgos_sys_config); }
void mgos_config_set_mqtt_reconnect_timeout_max(struct mgos_config *cfg, double v);
static inline void mgos_sys_config_set_mqtt_reconnect_timeout_max(double v) { mgos_config_set_mqtt_reconnect_timeout_max(&mgos_sys_config, v); }

/* mqtt.ssl_cert */
#define MGOS_CONFIG_HAVE_MQTT_SSL_CERT
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_CERT
const char * mgos_config_get_mqtt_ssl_cert(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt_ssl_cert(void) { return mgos_config_get_mqtt_ssl_cert(&mgos_sys_config); }
void mgos_config_set_mqtt_ssl_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_ssl_cert(const char * v) { mgos_config_set_mqtt_ssl_cert(&mgos_sys_config, v); }

/* mqtt.ssl_key */
#define MGOS_CONFIG_HAVE_MQTT_SSL_KEY
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_KEY
const char * mgos_config_get_mqtt_ssl_key(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt_ssl_key(void) { return mgos_config_get_mqtt_ssl_key(&mgos_sys_config); }
void mgos_config_set_mqtt_ssl_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_ssl_key(const char * v) { mgos_config_set_mqtt_ssl_key(&mgos_sys_config, v); }

/* mqtt.ssl_ca_cert */
#define MGOS_CONFIG_HAVE_MQTT_SSL_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_CA_CERT
const char * mgos_config_get_mqtt_ssl_ca_cert(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt_ssl_ca_cert(void) { return mgos_config_get_mqtt_ssl_ca_cert(&mgos_sys_config); }
void mgos_config_set_mqtt_ssl_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_ssl_ca_cert(const char * v) { mgos_config_set_mqtt_ssl_ca_cert(&mgos_sys_config, v); }

/* mqtt.ssl_cipher_suites */
#define MGOS_CONFIG_HAVE_MQTT_SSL_CIPHER_SUITES
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_CIPHER_SUITES
const char * mgos_config_get_mqtt_ssl_cipher_suites(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt_ssl_cipher_suites(void) { return mgos_config_get_mqtt_ssl_cipher_suites(&mgos_sys_config); }
void mgos_config_set_mqtt_ssl_cipher_suites(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_ssl_cipher_suites(const char * v) { mgos_config_set_mqtt_ssl_cipher_suites(&mgos_sys_config, v); }

/* mqtt.ssl_psk_identity */
#define MGOS_CONFIG_HAVE_MQTT_SSL_PSK_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_PSK_IDENTITY
const char * mgos_config_get_mqtt_ssl_psk_identity(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt_ssl_psk_identity(void) { return mgos_config_get_mqtt_ssl_psk_identity(&mgos_sys_config); }
void mgos_config_set_mqtt_ssl_psk_identity(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_ssl_psk_identity(const char * v) { mgos_config_set_mqtt_ssl_psk_identity(&mgos_sys_config, v); }

/* mqtt.ssl_psk_key */
#define MGOS_CONFIG_HAVE_MQTT_SSL_PSK_KEY
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_PSK_KEY
const char * mgos_config_get_mqtt_ssl_psk_key(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt_ssl_psk_key(void) { return mgos_config_get_mqtt_ssl_psk_key(&mgos_sys_config); }
void mgos_config_set_mqtt_ssl_psk_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_ssl_psk_key(const char * v) { mgos_config_set_mqtt_ssl_psk_key(&mgos_sys_config, v); }

/* mqtt.clean_session */
#define MGOS_CONFIG_HAVE_MQTT_CLEAN_SESSION
#define MGOS_SYS_CONFIG_HAVE_MQTT_CLEAN_SESSION
int mgos_config_get_mqtt_clean_session(struct mgos_config *cfg);
static inline int mgos_sys_config_get_mqtt_clean_session(void) { return mgos_config_get_mqtt_clean_session(&mgos_sys_config); }
void mgos_config_set_mqtt_clean_session(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_clean_session(int v) { mgos_config_set_mqtt_clean_session(&mgos_sys_config, v); }

/* mqtt.keep_alive */
#define MGOS_CONFIG_HAVE_MQTT_KEEP_ALIVE
#define MGOS_SYS_CONFIG_HAVE_MQTT_KEEP_ALIVE
int mgos_config_get_mqtt_keep_alive(struct mgos_config *cfg);
static inline int mgos_sys_config_get_mqtt_keep_alive(void) { return mgos_config_get_mqtt_keep_alive(&mgos_sys_config); }
void mgos_config_set_mqtt_keep_alive(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_keep_alive(int v) { mgos_config_set_mqtt_keep_alive(&mgos_sys_config, v); }

/* mqtt.will_topic */
#define MGOS_CONFIG_HAVE_MQTT_WILL_TOPIC
#define MGOS_SYS_CONFIG_HAVE_MQTT_WILL_TOPIC
const char * mgos_config_get_mqtt_will_topic(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt_will_topic(void) { return mgos_config_get_mqtt_will_topic(&mgos_sys_config); }
void mgos_config_set_mqtt_will_topic(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_will_topic(const char * v) { mgos_config_set_mqtt_will_topic(&mgos_sys_config, v); }

/* mqtt.will_message */
#define MGOS_CONFIG_HAVE_MQTT_WILL_MESSAGE
#define MGOS_SYS_CONFIG_HAVE_MQTT_WILL_MESSAGE
const char * mgos_config_get_mqtt_will_message(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt_will_message(void) { return mgos_config_get_mqtt_will_message(&mgos_sys_config); }
void mgos_config_set_mqtt_will_message(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_will_message(const char * v) { mgos_config_set_mqtt_will_message(&mgos_sys_config, v); }

/* mqtt.max_qos */
#define MGOS_CONFIG_HAVE_MQTT_MAX_QOS
#define MGOS_SYS_CONFIG_HAVE_MQTT_MAX_QOS
int mgos_config_get_mqtt_max_qos(struct mgos_config *cfg);
static inline int mgos_sys_config_get_mqtt_max_qos(void) { return mgos_config_get_mqtt_max_qos(&mgos_sys_config); }
void mgos_config_set_mqtt_max_qos(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_max_qos(int v) { mgos_config_set_mqtt_max_qos(&mgos_sys_config, v); }

/* mqtt.recv_mbuf_limit */
#define MGOS_CONFIG_HAVE_MQTT_RECV_MBUF_LIMIT
#define MGOS_SYS_CONFIG_HAVE_MQTT_RECV_MBUF_LIMIT
int mgos_config_get_mqtt_recv_mbuf_limit(struct mgos_config *cfg);
static inline int mgos_sys_config_get_mqtt_recv_mbuf_limit(void) { return mgos_config_get_mqtt_recv_mbuf_limit(&mgos_sys_config); }
void mgos_config_set_mqtt_recv_mbuf_limit(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_recv_mbuf_limit(int v) { mgos_config_set_mqtt_recv_mbuf_limit(&mgos_sys_config, v); }

/* mqtt.require_time */
#define MGOS_CONFIG_HAVE_MQTT_REQUIRE_TIME
#define MGOS_SYS_CONFIG_HAVE_MQTT_REQUIRE_TIME
int mgos_config_get_mqtt_require_time(struct mgos_config *cfg);
static inline int mgos_sys_config_get_mqtt_require_time(void) { return mgos_config_get_mqtt_require_time(&mgos_sys_config); }
void mgos_config_set_mqtt_require_time(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_require_time(int v) { mgos_config_set_mqtt_require_time(&mgos_sys_config, v); }

/* mqtt.cloud_events */
#define MGOS_CONFIG_HAVE_MQTT_CLOUD_EVENTS
#define MGOS_SYS_CONFIG_HAVE_MQTT_CLOUD_EVENTS
int mgos_config_get_mqtt_cloud_events(struct mgos_config *cfg);
static inline int mgos_sys_config_get_mqtt_cloud_events(void) { return mgos_config_get_mqtt_cloud_events(&mgos_sys_config); }
void mgos_config_set_mqtt_cloud_events(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_cloud_events(int v) { mgos_config_set_mqtt_cloud_events(&mgos_sys_config, v); }

/* mqtt1 */
#define MGOS_CONFIG_HAVE_MQTT1
#define MGOS_SYS_CONFIG_HAVE_MQTT1
const struct mgos_config_mqtt * mgos_config_get_mqtt1(struct mgos_config *cfg);
static inline const struct mgos_config_mqtt * mgos_sys_config_get_mqtt1(void) { return mgos_config_get_mqtt1(&mgos_sys_config); }

/* mqtt1.enable */
#define MGOS_CONFIG_HAVE_MQTT1_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MQTT1_ENABLE
int mgos_config_get_mqtt1_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_mqtt1_enable(void) { return mgos_config_get_mqtt1_enable(&mgos_sys_config); }
void mgos_config_set_mqtt1_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_enable(int v) { mgos_config_set_mqtt1_enable(&mgos_sys_config, v); }

/* mqtt1.server */
#define MGOS_CONFIG_HAVE_MQTT1_SERVER
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SERVER
const char * mgos_config_get_mqtt1_server(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt1_server(void) { return mgos_config_get_mqtt1_server(&mgos_sys_config); }
void mgos_config_set_mqtt1_server(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_server(const char * v) { mgos_config_set_mqtt1_server(&mgos_sys_config, v); }

/* mqtt1.client_id */
#define MGOS_CONFIG_HAVE_MQTT1_CLIENT_ID
#define MGOS_SYS_CONFIG_HAVE_MQTT1_CLIENT_ID
const char * mgos_config_get_mqtt1_client_id(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt1_client_id(void) { return mgos_config_get_mqtt1_client_id(&mgos_sys_config); }
void mgos_config_set_mqtt1_client_id(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_client_id(const char * v) { mgos_config_set_mqtt1_client_id(&mgos_sys_config, v); }

/* mqtt1.user */
#define MGOS_CONFIG_HAVE_MQTT1_USER
#define MGOS_SYS_CONFIG_HAVE_MQTT1_USER
const char * mgos_config_get_mqtt1_user(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt1_user(void) { return mgos_config_get_mqtt1_user(&mgos_sys_config); }
void mgos_config_set_mqtt1_user(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_user(const char * v) { mgos_config_set_mqtt1_user(&mgos_sys_config, v); }

/* mqtt1.pass */
#define MGOS_CONFIG_HAVE_MQTT1_PASS
#define MGOS_SYS_CONFIG_HAVE_MQTT1_PASS
const char * mgos_config_get_mqtt1_pass(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt1_pass(void) { return mgos_config_get_mqtt1_pass(&mgos_sys_config); }
void mgos_config_set_mqtt1_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_pass(const char * v) { mgos_config_set_mqtt1_pass(&mgos_sys_config, v); }

/* mqtt1.reconnect_timeout_min */
#define MGOS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MIN
#define MGOS_SYS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MIN
double mgos_config_get_mqtt1_reconnect_timeout_min(struct mgos_config *cfg);
static inline double mgos_sys_config_get_mqtt1_reconnect_timeout_min(void) { return mgos_config_get_mqtt1_reconnect_timeout_min(&mgos_sys_config); }
void mgos_config_set_mqtt1_reconnect_timeout_min(struct mgos_config *cfg, double v);
static inline void mgos_sys_config_set_mqtt1_reconnect_timeout_min(double v) { mgos_config_set_mqtt1_reconnect_timeout_min(&mgos_sys_config, v); }

/* mqtt1.reconnect_timeout_max */
#define MGOS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MAX
#define MGOS_SYS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MAX
double mgos_config_get_mqtt1_reconnect_timeout_max(struct mgos_config *cfg);
static inline double mgos_sys_config_get_mqtt1_reconnect_timeout_max(void) { return mgos_config_get_mqtt1_reconnect_timeout_max(&mgos_sys_config); }
void mgos_config_set_mqtt1_reconnect_timeout_max(struct mgos_config *cfg, double v);
static inline void mgos_sys_config_set_mqtt1_reconnect_timeout_max(double v) { mgos_config_set_mqtt1_reconnect_timeout_max(&mgos_sys_config, v); }

/* mqtt1.ssl_cert */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_CERT
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_CERT
const char * mgos_config_get_mqtt1_ssl_cert(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt1_ssl_cert(void) { return mgos_config_get_mqtt1_ssl_cert(&mgos_sys_config); }
void mgos_config_set_mqtt1_ssl_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_ssl_cert(const char * v) { mgos_config_set_mqtt1_ssl_cert(&mgos_sys_config, v); }

/* mqtt1.ssl_key */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_KEY
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_KEY
const char * mgos_config_get_mqtt1_ssl_key(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt1_ssl_key(void) { return mgos_config_get_mqtt1_ssl_key(&mgos_sys_config); }
void mgos_config_set_mqtt1_ssl_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_ssl_key(const char * v) { mgos_config_set_mqtt1_ssl_key(&mgos_sys_config, v); }

/* mqtt1.ssl_ca_cert */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_CA_CERT
const char * mgos_config_get_mqtt1_ssl_ca_cert(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt1_ssl_ca_cert(void) { return mgos_config_get_mqtt1_ssl_ca_cert(&mgos_sys_config); }
void mgos_config_set_mqtt1_ssl_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_ssl_ca_cert(const char * v) { mgos_config_set_mqtt1_ssl_ca_cert(&mgos_sys_config, v); }

/* mqtt1.ssl_cipher_suites */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_CIPHER_SUITES
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_CIPHER_SUITES
const char * mgos_config_get_mqtt1_ssl_cipher_suites(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt1_ssl_cipher_suites(void) { return mgos_config_get_mqtt1_ssl_cipher_suites(&mgos_sys_config); }
void mgos_config_set_mqtt1_ssl_cipher_suites(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_ssl_cipher_suites(const char * v) { mgos_config_set_mqtt1_ssl_cipher_suites(&mgos_sys_config, v); }

/* mqtt1.ssl_psk_identity */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_PSK_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_PSK_IDENTITY
const char * mgos_config_get_mqtt1_ssl_psk_identity(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt1_ssl_psk_identity(void) { return mgos_config_get_mqtt1_ssl_psk_identity(&mgos_sys_config); }
void mgos_config_set_mqtt1_ssl_psk_identity(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_ssl_psk_identity(const char * v) { mgos_config_set_mqtt1_ssl_psk_identity(&mgos_sys_config, v); }

/* mqtt1.ssl_psk_key */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_PSK_KEY
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_PSK_KEY
const char * mgos_config_get_mqtt1_ssl_psk_key(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt1_ssl_psk_key(void) { return mgos_config_get_mqtt1_ssl_psk_key(&mgos_sys_config); }
void mgos_config_set_mqtt1_ssl_psk_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_ssl_psk_key(const char * v) { mgos_config_set_mqtt1_ssl_psk_key(&mgos_sys_config, v); }

/* mqtt1.clean_session */
#define MGOS_CONFIG_HAVE_MQTT1_CLEAN_SESSION
#define MGOS_SYS_CONFIG_HAVE_MQTT1_CLEAN_SESSION
int mgos_config_get_mqtt1_clean_session(struct mgos_config *cfg);
static inline int mgos_sys_config_get_mqtt1_clean_session(void) { return mgos_config_get_mqtt1_clean_session(&mgos_sys_config); }
void mgos_config_set_mqtt1_clean_session(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_clean_session(int v) { mgos_config_set_mqtt1_clean_session(&mgos_sys_config, v); }

/* mqtt1.keep_alive */
#define MGOS_CONFIG_HAVE_MQTT1_KEEP_ALIVE
#define MGOS_SYS_CONFIG_HAVE_MQTT1_KEEP_ALIVE
int mgos_config_get_mqtt1_keep_alive(struct mgos_config *cfg);
static inline int mgos_sys_config_get_mqtt1_keep_alive(void) { return mgos_config_get_mqtt1_keep_alive(&mgos_sys_config); }
void mgos_config_set_mqtt1_keep_alive(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_keep_alive(int v) { mgos_config_set_mqtt1_keep_alive(&mgos_sys_config, v); }

/* mqtt1.will_topic */
#define MGOS_CONFIG_HAVE_MQTT1_WILL_TOPIC
#define MGOS_SYS_CONFIG_HAVE_MQTT1_WILL_TOPIC
const char * mgos_config_get_mqtt1_will_topic(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt1_will_topic(void) { return mgos_config_get_mqtt1_will_topic(&mgos_sys_config); }
void mgos_config_set_mqtt1_will_topic(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_will_topic(const char * v) { mgos_config_set_mqtt1_will_topic(&mgos_sys_config, v); }

/* mqtt1.will_message */
#define MGOS_CONFIG_HAVE_MQTT1_WILL_MESSAGE
#define MGOS_SYS_CONFIG_HAVE_MQTT1_WILL_MESSAGE
const char * mgos_config_get_mqtt1_will_message(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_mqtt1_will_message(void) { return mgos_config_get_mqtt1_will_message(&mgos_sys_config); }
void mgos_config_set_mqtt1_will_message(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_will_message(const char * v) { mgos_config_set_mqtt1_will_message(&mgos_sys_config, v); }

/* mqtt1.max_qos */
#define MGOS_CONFIG_HAVE_MQTT1_MAX_QOS
#define MGOS_SYS_CONFIG_HAVE_MQTT1_MAX_QOS
int mgos_config_get_mqtt1_max_qos(struct mgos_config *cfg);
static inline int mgos_sys_config_get_mqtt1_max_qos(void) { return mgos_config_get_mqtt1_max_qos(&mgos_sys_config); }
void mgos_config_set_mqtt1_max_qos(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_max_qos(int v) { mgos_config_set_mqtt1_max_qos(&mgos_sys_config, v); }

/* mqtt1.recv_mbuf_limit */
#define MGOS_CONFIG_HAVE_MQTT1_RECV_MBUF_LIMIT
#define MGOS_SYS_CONFIG_HAVE_MQTT1_RECV_MBUF_LIMIT
int mgos_config_get_mqtt1_recv_mbuf_limit(struct mgos_config *cfg);
static inline int mgos_sys_config_get_mqtt1_recv_mbuf_limit(void) { return mgos_config_get_mqtt1_recv_mbuf_limit(&mgos_sys_config); }
void mgos_config_set_mqtt1_recv_mbuf_limit(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_recv_mbuf_limit(int v) { mgos_config_set_mqtt1_recv_mbuf_limit(&mgos_sys_config, v); }

/* mqtt1.require_time */
#define MGOS_CONFIG_HAVE_MQTT1_REQUIRE_TIME
#define MGOS_SYS_CONFIG_HAVE_MQTT1_REQUIRE_TIME
int mgos_config_get_mqtt1_require_time(struct mgos_config *cfg);
static inline int mgos_sys_config_get_mqtt1_require_time(void) { return mgos_config_get_mqtt1_require_time(&mgos_sys_config); }
void mgos_config_set_mqtt1_require_time(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_require_time(int v) { mgos_config_set_mqtt1_require_time(&mgos_sys_config, v); }

/* mqtt1.cloud_events */
#define MGOS_CONFIG_HAVE_MQTT1_CLOUD_EVENTS
#define MGOS_SYS_CONFIG_HAVE_MQTT1_CLOUD_EVENTS
int mgos_config_get_mqtt1_cloud_events(struct mgos_config *cfg);
static inline int mgos_sys_config_get_mqtt1_cloud_events(void) { return mgos_config_get_mqtt1_cloud_events(&mgos_sys_config); }
void mgos_config_set_mqtt1_cloud_events(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_cloud_events(int v) { mgos_config_set_mqtt1_cloud_events(&mgos_sys_config, v); }

/* shadow */
#define MGOS_CONFIG_HAVE_SHADOW
#define MGOS_SYS_CONFIG_HAVE_SHADOW
const struct mgos_config_shadow * mgos_config_get_shadow(struct mgos_config *cfg);
static inline const struct mgos_config_shadow * mgos_sys_config_get_shadow(void) { return mgos_config_get_shadow(&mgos_sys_config); }

/* shadow.enable */
#define MGOS_CONFIG_HAVE_SHADOW_ENABLE
#define MGOS_SYS_CONFIG_HAVE_SHADOW_ENABLE
int mgos_config_get_shadow_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_shadow_enable(void) { return mgos_config_get_shadow_enable(&mgos_sys_config); }
void mgos_config_set_shadow_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_shadow_enable(int v) { mgos_config_set_shadow_enable(&mgos_sys_config, v); }

/* shadow.lib */
#define MGOS_CONFIG_HAVE_SHADOW_LIB
#define MGOS_SYS_CONFIG_HAVE_SHADOW_LIB
const char * mgos_config_get_shadow_lib(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_shadow_lib(void) { return mgos_config_get_shadow_lib(&mgos_sys_config); }
void mgos_config_set_shadow_lib(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_shadow_lib(const char * v) { mgos_config_set_shadow_lib(&mgos_sys_config, v); }

/* shadow.ota_enable */
#define MGOS_CONFIG_HAVE_SHADOW_OTA_ENABLE
#define MGOS_SYS_CONFIG_HAVE_SHADOW_OTA_ENABLE
int mgos_config_get_shadow_ota_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_shadow_ota_enable(void) { return mgos_config_get_shadow_ota_enable(&mgos_sys_config); }
void mgos_config_set_shadow_ota_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_shadow_ota_enable(int v) { mgos_config_set_shadow_ota_enable(&mgos_sys_config, v); }

/* shadow.autocommit */
#define MGOS_CONFIG_HAVE_SHADOW_AUTOCOMMIT
#define MGOS_SYS_CONFIG_HAVE_SHADOW_AUTOCOMMIT
int mgos_config_get_shadow_autocommit(struct mgos_config *cfg);
static inline int mgos_sys_config_get_shadow_autocommit(void) { return mgos_config_get_shadow_autocommit(&mgos_sys_config); }
void mgos_config_set_shadow_autocommit(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_shadow_autocommit(int v) { mgos_config_set_shadow_autocommit(&mgos_sys_config, v); }

/* aws */
#define MGOS_CONFIG_HAVE_AWS
#define MGOS_SYS_CONFIG_HAVE_AWS
const struct mgos_config_aws * mgos_config_get_aws(struct mgos_config *cfg);
static inline const struct mgos_config_aws * mgos_sys_config_get_aws(void) { return mgos_config_get_aws(&mgos_sys_config); }

/* aws.thing_name */
#define MGOS_CONFIG_HAVE_AWS_THING_NAME
#define MGOS_SYS_CONFIG_HAVE_AWS_THING_NAME
const char * mgos_config_get_aws_thing_name(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_aws_thing_name(void) { return mgos_config_get_aws_thing_name(&mgos_sys_config); }
void mgos_config_set_aws_thing_name(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_aws_thing_name(const char * v) { mgos_config_set_aws_thing_name(&mgos_sys_config, v); }

/* aws.greengrass */
#define MGOS_CONFIG_HAVE_AWS_GREENGRASS
#define MGOS_SYS_CONFIG_HAVE_AWS_GREENGRASS
const struct mgos_config_aws_greengrass * mgos_config_get_aws_greengrass(struct mgos_config *cfg);
static inline const struct mgos_config_aws_greengrass * mgos_sys_config_get_aws_greengrass(void) { return mgos_config_get_aws_greengrass(&mgos_sys_config); }

/* aws.greengrass.enable */
#define MGOS_CONFIG_HAVE_AWS_GREENGRASS_ENABLE
#define MGOS_SYS_CONFIG_HAVE_AWS_GREENGRASS_ENABLE
int mgos_config_get_aws_greengrass_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_aws_greengrass_enable(void) { return mgos_config_get_aws_greengrass_enable(&mgos_sys_config); }
void mgos_config_set_aws_greengrass_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_aws_greengrass_enable(int v) { mgos_config_set_aws_greengrass_enable(&mgos_sys_config, v); }

/* aws.greengrass.reconnect_timeout_min */
#define MGOS_CONFIG_HAVE_AWS_GREENGRASS_RECONNECT_TIMEOUT_MIN
#define MGOS_SYS_CONFIG_HAVE_AWS_GREENGRASS_RECONNECT_TIMEOUT_MIN
int mgos_config_get_aws_greengrass_reconnect_timeout_min(struct mgos_config *cfg);
static inline int mgos_sys_config_get_aws_greengrass_reconnect_timeout_min(void) { return mgos_config_get_aws_greengrass_reconnect_timeout_min(&mgos_sys_config); }
void mgos_config_set_aws_greengrass_reconnect_timeout_min(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_aws_greengrass_reconnect_timeout_min(int v) { mgos_config_set_aws_greengrass_reconnect_timeout_min(&mgos_sys_config, v); }

/* aws.greengrass.reconnect_timeout_max */
#define MGOS_CONFIG_HAVE_AWS_GREENGRASS_RECONNECT_TIMEOUT_MAX
#define MGOS_SYS_CONFIG_HAVE_AWS_GREENGRASS_RECONNECT_TIMEOUT_MAX
int mgos_config_get_aws_greengrass_reconnect_timeout_max(struct mgos_config *cfg);
static inline int mgos_sys_config_get_aws_greengrass_reconnect_timeout_max(void) { return mgos_config_get_aws_greengrass_reconnect_timeout_max(&mgos_sys_config); }
void mgos_config_set_aws_greengrass_reconnect_timeout_max(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_aws_greengrass_reconnect_timeout_max(int v) { mgos_config_set_aws_greengrass_reconnect_timeout_max(&mgos_sys_config, v); }

/* sntp */
#define MGOS_CONFIG_HAVE_SNTP
#define MGOS_SYS_CONFIG_HAVE_SNTP
const struct mgos_config_sntp * mgos_config_get_sntp(struct mgos_config *cfg);
static inline const struct mgos_config_sntp * mgos_sys_config_get_sntp(void) { return mgos_config_get_sntp(&mgos_sys_config); }

/* sntp.enable */
#define MGOS_CONFIG_HAVE_SNTP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_SNTP_ENABLE
int mgos_config_get_sntp_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_sntp_enable(void) { return mgos_config_get_sntp_enable(&mgos_sys_config); }
void mgos_config_set_sntp_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sntp_enable(int v) { mgos_config_set_sntp_enable(&mgos_sys_config, v); }

/* sntp.server */
#define MGOS_CONFIG_HAVE_SNTP_SERVER
#define MGOS_SYS_CONFIG_HAVE_SNTP_SERVER
const char * mgos_config_get_sntp_server(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_sntp_server(void) { return mgos_config_get_sntp_server(&mgos_sys_config); }
void mgos_config_set_sntp_server(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_sntp_server(const char * v) { mgos_config_set_sntp_server(&mgos_sys_config, v); }

/* sntp.retry_min */
#define MGOS_CONFIG_HAVE_SNTP_RETRY_MIN
#define MGOS_SYS_CONFIG_HAVE_SNTP_RETRY_MIN
int mgos_config_get_sntp_retry_min(struct mgos_config *cfg);
static inline int mgos_sys_config_get_sntp_retry_min(void) { return mgos_config_get_sntp_retry_min(&mgos_sys_config); }
void mgos_config_set_sntp_retry_min(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sntp_retry_min(int v) { mgos_config_set_sntp_retry_min(&mgos_sys_config, v); }

/* sntp.retry_max */
#define MGOS_CONFIG_HAVE_SNTP_RETRY_MAX
#define MGOS_SYS_CONFIG_HAVE_SNTP_RETRY_MAX
int mgos_config_get_sntp_retry_max(struct mgos_config *cfg);
static inline int mgos_sys_config_get_sntp_retry_max(void) { return mgos_config_get_sntp_retry_max(&mgos_sys_config); }
void mgos_config_set_sntp_retry_max(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sntp_retry_max(int v) { mgos_config_set_sntp_retry_max(&mgos_sys_config, v); }

/* sntp.update_interval */
#define MGOS_CONFIG_HAVE_SNTP_UPDATE_INTERVAL
#define MGOS_SYS_CONFIG_HAVE_SNTP_UPDATE_INTERVAL
int mgos_config_get_sntp_update_interval(struct mgos_config *cfg);
static inline int mgos_sys_config_get_sntp_update_interval(void) { return mgos_config_get_sntp_update_interval(&mgos_sys_config); }
void mgos_config_set_sntp_update_interval(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sntp_update_interval(int v) { mgos_config_set_sntp_update_interval(&mgos_sys_config, v); }

/* azure */
#define MGOS_CONFIG_HAVE_AZURE
#define MGOS_SYS_CONFIG_HAVE_AZURE
const struct mgos_config_azure * mgos_config_get_azure(struct mgos_config *cfg);
static inline const struct mgos_config_azure * mgos_sys_config_get_azure(void) { return mgos_config_get_azure(&mgos_sys_config); }

/* azure.enable */
#define MGOS_CONFIG_HAVE_AZURE_ENABLE
#define MGOS_SYS_CONFIG_HAVE_AZURE_ENABLE
int mgos_config_get_azure_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_azure_enable(void) { return mgos_config_get_azure_enable(&mgos_sys_config); }
void mgos_config_set_azure_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_azure_enable(int v) { mgos_config_set_azure_enable(&mgos_sys_config, v); }

/* azure.cs */
#define MGOS_CONFIG_HAVE_AZURE_CS
#define MGOS_SYS_CONFIG_HAVE_AZURE_CS
const char * mgos_config_get_azure_cs(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_azure_cs(void) { return mgos_config_get_azure_cs(&mgos_sys_config); }
void mgos_config_set_azure_cs(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_azure_cs(const char * v) { mgos_config_set_azure_cs(&mgos_sys_config, v); }

/* azure.token_ttl */
#define MGOS_CONFIG_HAVE_AZURE_TOKEN_TTL
#define MGOS_SYS_CONFIG_HAVE_AZURE_TOKEN_TTL
int mgos_config_get_azure_token_ttl(struct mgos_config *cfg);
static inline int mgos_sys_config_get_azure_token_ttl(void) { return mgos_config_get_azure_token_ttl(&mgos_sys_config); }
void mgos_config_set_azure_token_ttl(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_azure_token_ttl(int v) { mgos_config_set_azure_token_ttl(&mgos_sys_config, v); }

/* azure.host_name */
#define MGOS_CONFIG_HAVE_AZURE_HOST_NAME
#define MGOS_SYS_CONFIG_HAVE_AZURE_HOST_NAME
const char * mgos_config_get_azure_host_name(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_azure_host_name(void) { return mgos_config_get_azure_host_name(&mgos_sys_config); }
void mgos_config_set_azure_host_name(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_azure_host_name(const char * v) { mgos_config_set_azure_host_name(&mgos_sys_config, v); }

/* azure.device_id */
#define MGOS_CONFIG_HAVE_AZURE_DEVICE_ID
#define MGOS_SYS_CONFIG_HAVE_AZURE_DEVICE_ID
const char * mgos_config_get_azure_device_id(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_azure_device_id(void) { return mgos_config_get_azure_device_id(&mgos_sys_config); }
void mgos_config_set_azure_device_id(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_azure_device_id(const char * v) { mgos_config_set_azure_device_id(&mgos_sys_config, v); }

/* azure.cert */
#define MGOS_CONFIG_HAVE_AZURE_CERT
#define MGOS_SYS_CONFIG_HAVE_AZURE_CERT
const char * mgos_config_get_azure_cert(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_azure_cert(void) { return mgos_config_get_azure_cert(&mgos_sys_config); }
void mgos_config_set_azure_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_azure_cert(const char * v) { mgos_config_set_azure_cert(&mgos_sys_config, v); }

/* azure.key */
#define MGOS_CONFIG_HAVE_AZURE_KEY
#define MGOS_SYS_CONFIG_HAVE_AZURE_KEY
const char * mgos_config_get_azure_key(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_azure_key(void) { return mgos_config_get_azure_key(&mgos_sys_config); }
void mgos_config_set_azure_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_azure_key(const char * v) { mgos_config_set_azure_key(&mgos_sys_config, v); }

/* azure.enable_cm */
#define MGOS_CONFIG_HAVE_AZURE_ENABLE_CM
#define MGOS_SYS_CONFIG_HAVE_AZURE_ENABLE_CM
int mgos_config_get_azure_enable_cm(struct mgos_config *cfg);
static inline int mgos_sys_config_get_azure_enable_cm(void) { return mgos_config_get_azure_enable_cm(&mgos_sys_config); }
void mgos_config_set_azure_enable_cm(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_azure_enable_cm(int v) { mgos_config_set_azure_enable_cm(&mgos_sys_config, v); }

/* azure.enable_dm */
#define MGOS_CONFIG_HAVE_AZURE_ENABLE_DM
#define MGOS_SYS_CONFIG_HAVE_AZURE_ENABLE_DM
int mgos_config_get_azure_enable_dm(struct mgos_config *cfg);
static inline int mgos_sys_config_get_azure_enable_dm(void) { return mgos_config_get_azure_enable_dm(&mgos_sys_config); }
void mgos_config_set_azure_enable_dm(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_azure_enable_dm(int v) { mgos_config_set_azure_enable_dm(&mgos_sys_config, v); }

/* bt */
#define MGOS_CONFIG_HAVE_BT
#define MGOS_SYS_CONFIG_HAVE_BT
const struct mgos_config_bt * mgos_config_get_bt(struct mgos_config *cfg);
static inline const struct mgos_config_bt * mgos_sys_config_get_bt(void) { return mgos_config_get_bt(&mgos_sys_config); }

/* bt.enable */
#define MGOS_CONFIG_HAVE_BT_ENABLE
#define MGOS_SYS_CONFIG_HAVE_BT_ENABLE
int mgos_config_get_bt_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_bt_enable(void) { return mgos_config_get_bt_enable(&mgos_sys_config); }
void mgos_config_set_bt_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_bt_enable(int v) { mgos_config_set_bt_enable(&mgos_sys_config, v); }

/* bt.dev_name */
#define MGOS_CONFIG_HAVE_BT_DEV_NAME
#define MGOS_SYS_CONFIG_HAVE_BT_DEV_NAME
const char * mgos_config_get_bt_dev_name(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_bt_dev_name(void) { return mgos_config_get_bt_dev_name(&mgos_sys_config); }
void mgos_config_set_bt_dev_name(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_bt_dev_name(const char * v) { mgos_config_set_bt_dev_name(&mgos_sys_config, v); }

/* bt.adv_enable */
#define MGOS_CONFIG_HAVE_BT_ADV_ENABLE
#define MGOS_SYS_CONFIG_HAVE_BT_ADV_ENABLE
int mgos_config_get_bt_adv_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_bt_adv_enable(void) { return mgos_config_get_bt_adv_enable(&mgos_sys_config); }
void mgos_config_set_bt_adv_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_bt_adv_enable(int v) { mgos_config_set_bt_adv_enable(&mgos_sys_config, v); }

/* bt.scan_rsp_data_hex */
#define MGOS_CONFIG_HAVE_BT_SCAN_RSP_DATA_HEX
#define MGOS_SYS_CONFIG_HAVE_BT_SCAN_RSP_DATA_HEX
const char * mgos_config_get_bt_scan_rsp_data_hex(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_bt_scan_rsp_data_hex(void) { return mgos_config_get_bt_scan_rsp_data_hex(&mgos_sys_config); }
void mgos_config_set_bt_scan_rsp_data_hex(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_bt_scan_rsp_data_hex(const char * v) { mgos_config_set_bt_scan_rsp_data_hex(&mgos_sys_config, v); }

/* bt.keep_enabled */
#define MGOS_CONFIG_HAVE_BT_KEEP_ENABLED
#define MGOS_SYS_CONFIG_HAVE_BT_KEEP_ENABLED
int mgos_config_get_bt_keep_enabled(struct mgos_config *cfg);
static inline int mgos_sys_config_get_bt_keep_enabled(void) { return mgos_config_get_bt_keep_enabled(&mgos_sys_config); }
void mgos_config_set_bt_keep_enabled(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_bt_keep_enabled(int v) { mgos_config_set_bt_keep_enabled(&mgos_sys_config, v); }

/* bt.allow_pairing */
#define MGOS_CONFIG_HAVE_BT_ALLOW_PAIRING
#define MGOS_SYS_CONFIG_HAVE_BT_ALLOW_PAIRING
int mgos_config_get_bt_allow_pairing(struct mgos_config *cfg);
static inline int mgos_sys_config_get_bt_allow_pairing(void) { return mgos_config_get_bt_allow_pairing(&mgos_sys_config); }
void mgos_config_set_bt_allow_pairing(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_bt_allow_pairing(int v) { mgos_config_set_bt_allow_pairing(&mgos_sys_config, v); }

/* bt.max_paired_devices */
#define MGOS_CONFIG_HAVE_BT_MAX_PAIRED_DEVICES
#define MGOS_SYS_CONFIG_HAVE_BT_MAX_PAIRED_DEVICES
int mgos_config_get_bt_max_paired_devices(struct mgos_config *cfg);
static inline int mgos_sys_config_get_bt_max_paired_devices(void) { return mgos_config_get_bt_max_paired_devices(&mgos_sys_config); }
void mgos_config_set_bt_max_paired_devices(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_bt_max_paired_devices(int v) { mgos_config_set_bt_max_paired_devices(&mgos_sys_config, v); }

/* bt.random_address */
#define MGOS_CONFIG_HAVE_BT_RANDOM_ADDRESS
#define MGOS_SYS_CONFIG_HAVE_BT_RANDOM_ADDRESS
int mgos_config_get_bt_random_address(struct mgos_config *cfg);
static inline int mgos_sys_config_get_bt_random_address(void) { return mgos_config_get_bt_random_address(&mgos_sys_config); }
void mgos_config_set_bt_random_address(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_bt_random_address(int v) { mgos_config_set_bt_random_address(&mgos_sys_config, v); }

/* bt.gatt_mtu */
#define MGOS_CONFIG_HAVE_BT_GATT_MTU
#define MGOS_SYS_CONFIG_HAVE_BT_GATT_MTU
int mgos_config_get_bt_gatt_mtu(struct mgos_config *cfg);
static inline int mgos_sys_config_get_bt_gatt_mtu(void) { return mgos_config_get_bt_gatt_mtu(&mgos_sys_config); }
void mgos_config_set_bt_gatt_mtu(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_bt_gatt_mtu(int v) { mgos_config_set_bt_gatt_mtu(&mgos_sys_config, v); }

/* bt.gatts */
#define MGOS_CONFIG_HAVE_BT_GATTS
#define MGOS_SYS_CONFIG_HAVE_BT_GATTS
const struct mgos_config_bt_gatts * mgos_config_get_bt_gatts(struct mgos_config *cfg);
static inline const struct mgos_config_bt_gatts * mgos_sys_config_get_bt_gatts(void) { return mgos_config_get_bt_gatts(&mgos_sys_config); }

/* bt.gatts.min_sec_level */
#define MGOS_CONFIG_HAVE_BT_GATTS_MIN_SEC_LEVEL
#define MGOS_SYS_CONFIG_HAVE_BT_GATTS_MIN_SEC_LEVEL
int mgos_config_get_bt_gatts_min_sec_level(struct mgos_config *cfg);
static inline int mgos_sys_config_get_bt_gatts_min_sec_level(void) { return mgos_config_get_bt_gatts_min_sec_level(&mgos_sys_config); }
void mgos_config_set_bt_gatts_min_sec_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_bt_gatts_min_sec_level(int v) { mgos_config_set_bt_gatts_min_sec_level(&mgos_sys_config, v); }

/* bt.gatts.require_pairing */
#define MGOS_CONFIG_HAVE_BT_GATTS_REQUIRE_PAIRING
#define MGOS_SYS_CONFIG_HAVE_BT_GATTS_REQUIRE_PAIRING
int mgos_config_get_bt_gatts_require_pairing(struct mgos_config *cfg);
static inline int mgos_sys_config_get_bt_gatts_require_pairing(void) { return mgos_config_get_bt_gatts_require_pairing(&mgos_sys_config); }
void mgos_config_set_bt_gatts_require_pairing(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_bt_gatts_require_pairing(int v) { mgos_config_set_bt_gatts_require_pairing(&mgos_sys_config, v); }

/* bt.debug_svc_enable */
#define MGOS_CONFIG_HAVE_BT_DEBUG_SVC_ENABLE
#define MGOS_SYS_CONFIG_HAVE_BT_DEBUG_SVC_ENABLE
int mgos_config_get_bt_debug_svc_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_bt_debug_svc_enable(void) { return mgos_config_get_bt_debug_svc_enable(&mgos_sys_config); }
void mgos_config_set_bt_debug_svc_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_bt_debug_svc_enable(int v) { mgos_config_set_bt_debug_svc_enable(&mgos_sys_config, v); }

/* bt.debug_svc_sec_level */
#define MGOS_CONFIG_HAVE_BT_DEBUG_SVC_SEC_LEVEL
#define MGOS_SYS_CONFIG_HAVE_BT_DEBUG_SVC_SEC_LEVEL
int mgos_config_get_bt_debug_svc_sec_level(struct mgos_config *cfg);
static inline int mgos_sys_config_get_bt_debug_svc_sec_level(void) { return mgos_config_get_bt_debug_svc_sec_level(&mgos_sys_config); }
void mgos_config_set_bt_debug_svc_sec_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_bt_debug_svc_sec_level(int v) { mgos_config_set_bt_debug_svc_sec_level(&mgos_sys_config, v); }

/* update */
#define MGOS_CONFIG_HAVE_UPDATE
#define MGOS_SYS_CONFIG_HAVE_UPDATE
const struct mgos_config_update * mgos_config_get_update(struct mgos_config *cfg);
static inline const struct mgos_config_update * mgos_sys_config_get_update(void) { return mgos_config_get_update(&mgos_sys_config); }

/* update.timeout */
#define MGOS_CONFIG_HAVE_UPDATE_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_UPDATE_TIMEOUT
int mgos_config_get_update_timeout(struct mgos_config *cfg);
static inline int mgos_sys_config_get_update_timeout(void) { return mgos_config_get_update_timeout(&mgos_sys_config); }
void mgos_config_set_update_timeout(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_update_timeout(int v) { mgos_config_set_update_timeout(&mgos_sys_config, v); }

/* update.commit_timeout */
#define MGOS_CONFIG_HAVE_UPDATE_COMMIT_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_UPDATE_COMMIT_TIMEOUT
int mgos_config_get_update_commit_timeout(struct mgos_config *cfg);
static inline int mgos_sys_config_get_update_commit_timeout(void) { return mgos_config_get_update_commit_timeout(&mgos_sys_config); }
void mgos_config_set_update_commit_timeout(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_update_commit_timeout(int v) { mgos_config_set_update_commit_timeout(&mgos_sys_config, v); }

/* update.url */
#define MGOS_CONFIG_HAVE_UPDATE_URL
#define MGOS_SYS_CONFIG_HAVE_UPDATE_URL
const char * mgos_config_get_update_url(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_update_url(void) { return mgos_config_get_update_url(&mgos_sys_config); }
void mgos_config_set_update_url(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_update_url(const char * v) { mgos_config_set_update_url(&mgos_sys_config, v); }

/* update.interval */
#define MGOS_CONFIG_HAVE_UPDATE_INTERVAL
#define MGOS_SYS_CONFIG_HAVE_UPDATE_INTERVAL
int mgos_config_get_update_interval(struct mgos_config *cfg);
static inline int mgos_sys_config_get_update_interval(void) { return mgos_config_get_update_interval(&mgos_sys_config); }
void mgos_config_set_update_interval(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_update_interval(int v) { mgos_config_set_update_interval(&mgos_sys_config, v); }

/* update.extra_http_headers */
#define MGOS_CONFIG_HAVE_UPDATE_EXTRA_HTTP_HEADERS
#define MGOS_SYS_CONFIG_HAVE_UPDATE_EXTRA_HTTP_HEADERS
const char * mgos_config_get_update_extra_http_headers(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_update_extra_http_headers(void) { return mgos_config_get_update_extra_http_headers(&mgos_sys_config); }
void mgos_config_set_update_extra_http_headers(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_update_extra_http_headers(const char * v) { mgos_config_set_update_extra_http_headers(&mgos_sys_config, v); }

/* update.ssl_ca_file */
#define MGOS_CONFIG_HAVE_UPDATE_SSL_CA_FILE
#define MGOS_SYS_CONFIG_HAVE_UPDATE_SSL_CA_FILE
const char * mgos_config_get_update_ssl_ca_file(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_update_ssl_ca_file(void) { return mgos_config_get_update_ssl_ca_file(&mgos_sys_config); }
void mgos_config_set_update_ssl_ca_file(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_update_ssl_ca_file(const char * v) { mgos_config_set_update_ssl_ca_file(&mgos_sys_config, v); }

/* update.ssl_client_cert_file */
#define MGOS_CONFIG_HAVE_UPDATE_SSL_CLIENT_CERT_FILE
#define MGOS_SYS_CONFIG_HAVE_UPDATE_SSL_CLIENT_CERT_FILE
const char * mgos_config_get_update_ssl_client_cert_file(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_update_ssl_client_cert_file(void) { return mgos_config_get_update_ssl_client_cert_file(&mgos_sys_config); }
void mgos_config_set_update_ssl_client_cert_file(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_update_ssl_client_cert_file(const char * v) { mgos_config_set_update_ssl_client_cert_file(&mgos_sys_config, v); }

/* update.ssl_server_name */
#define MGOS_CONFIG_HAVE_UPDATE_SSL_SERVER_NAME
#define MGOS_SYS_CONFIG_HAVE_UPDATE_SSL_SERVER_NAME
const char * mgos_config_get_update_ssl_server_name(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_update_ssl_server_name(void) { return mgos_config_get_update_ssl_server_name(&mgos_sys_config); }
void mgos_config_set_update_ssl_server_name(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_update_ssl_server_name(const char * v) { mgos_config_set_update_ssl_server_name(&mgos_sys_config, v); }

/* update.enable_post */
#define MGOS_CONFIG_HAVE_UPDATE_ENABLE_POST
#define MGOS_SYS_CONFIG_HAVE_UPDATE_ENABLE_POST
int mgos_config_get_update_enable_post(struct mgos_config *cfg);
static inline int mgos_sys_config_get_update_enable_post(void) { return mgos_config_get_update_enable_post(&mgos_sys_config); }
void mgos_config_set_update_enable_post(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_update_enable_post(int v) { mgos_config_set_update_enable_post(&mgos_sys_config, v); }

/* rpc */
#define MGOS_CONFIG_HAVE_RPC
#define MGOS_SYS_CONFIG_HAVE_RPC
const struct mgos_config_rpc * mgos_config_get_rpc(struct mgos_config *cfg);
static inline const struct mgos_config_rpc * mgos_sys_config_get_rpc(void) { return mgos_config_get_rpc(&mgos_sys_config); }

/* rpc.enable */
#define MGOS_CONFIG_HAVE_RPC_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_ENABLE
int mgos_config_get_rpc_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_rpc_enable(void) { return mgos_config_get_rpc_enable(&mgos_sys_config); }
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_enable(int v) { mgos_config_set_rpc_enable(&mgos_sys_config, v); }

/* rpc.max_frame_size */
#define MGOS_CONFIG_HAVE_RPC_MAX_FRAME_SIZE
#define MGOS_SYS_CONFIG_HAVE_RPC_MAX_FRAME_SIZE
int mgos_config_get_rpc_max_frame_size(struct mgos_config *cfg);
static inline int mgos_sys_config_get_rpc_max_frame_size(void) { return mgos_config_get_rpc_max_frame_size(&mgos_sys_config); }
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_max_frame_size(int v) { mgos_config_set_rpc_max_frame_size(&mgos_sys_config, v); }

/* rpc.max_queue_length */
#define MGOS_CONFIG_HAVE_RPC_MAX_QUEUE_LENGTH
#define MGOS_SYS_CONFIG_HAVE_RPC_MAX_QUEUE_LENGTH
int mgos_config_get_rpc_max_queue_length(struct mgos_config *cfg);
static inline int mgos_sys_config_get_rpc_max_queue_length(void) { return mgos_config_get_rpc_max_queue_length(&mgos_sys_config); }
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_max_queue_length(int v) { mgos_config_set_rpc_max_queue_length(&mgos_sys_config, v); }

/* rpc.default_out_channel_idle_close_timeout */
#define MGOS_CONFIG_HAVE_RPC_DEFAULT_OUT_CHANNEL_IDLE_CLOSE_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_RPC_DEFAULT_OUT_CHANNEL_IDLE_CLOSE_TIMEOUT
int mgos_config_get_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg);
static inline int mgos_sys_config_get_rpc_default_out_channel_idle_close_timeout(void) { return mgos_config_get_rpc_default_out_channel_idle_close_timeout(&mgos_sys_config); }
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_default_out_channel_idle_close_timeout(int v) { mgos_config_set_rpc_default_out_channel_idle_close_timeout(&mgos_sys_config, v); }

/* rpc.acl_file */
#define MGOS_CONFIG_HAVE_RPC_ACL_FILE
#define MGOS_SYS_CONFIG_HAVE_RPC_ACL_FILE
const char * mgos_config_get_rpc_acl_file(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_rpc_acl_file(void) { return mgos_config_get_rpc_acl_file(&mgos_sys_config); }
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_acl_file(const char * v) { mgos_config_set_rpc_acl_file(&mgos_sys_config, v); }

/* rpc.auth_domain */
#define MGOS_CONFIG_HAVE_RPC_AUTH_DOMAIN
#define MGOS_SYS_CONFIG_HAVE_RPC_AUTH_DOMAIN
const char * mgos_config_get_rpc_auth_domain(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_rpc_auth_domain(void) { return mgos_config_get_rpc_auth_domain(&mgos_sys_config); }
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_auth_domain(const char * v) { mgos_config_set_rpc_auth_domain(&mgos_sys_config, v); }

/* rpc.auth_file */
#define MGOS_CONFIG_HAVE_RPC_AUTH_FILE
#define MGOS_SYS_CONFIG_HAVE_RPC_AUTH_FILE
const char * mgos_config_get_rpc_auth_file(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_rpc_auth_file(void) { return mgos_config_get_rpc_auth_file(&mgos_sys_config); }
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_auth_file(const char * v) { mgos_config_set_rpc_auth_file(&mgos_sys_config, v); }

/* rpc.ws */
#define MGOS_CONFIG_HAVE_RPC_WS
#define MGOS_SYS_CONFIG_HAVE_RPC_WS
const struct mgos_config_rpc_ws * mgos_config_get_rpc_ws(struct mgos_config *cfg);
static inline const struct mgos_config_rpc_ws * mgos_sys_config_get_rpc_ws(void) { return mgos_config_get_rpc_ws(&mgos_sys_config); }

/* rpc.ws.enable */
#define MGOS_CONFIG_HAVE_RPC_WS_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_ENABLE
int mgos_config_get_rpc_ws_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_rpc_ws_enable(void) { return mgos_config_get_rpc_ws_enable(&mgos_sys_config); }
void mgos_config_set_rpc_ws_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_ws_enable(int v) { mgos_config_set_rpc_ws_enable(&mgos_sys_config, v); }

/* rpc.ws.server_address */
#define MGOS_CONFIG_HAVE_RPC_WS_SERVER_ADDRESS
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_SERVER_ADDRESS
const char * mgos_config_get_rpc_ws_server_address(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_rpc_ws_server_address(void) { return mgos_config_get_rpc_ws_server_address(&mgos_sys_config); }
void mgos_config_set_rpc_ws_server_address(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_ws_server_address(const char * v) { mgos_config_set_rpc_ws_server_address(&mgos_sys_config, v); }

/* rpc.ws.reconnect_interval_min */
#define MGOS_CONFIG_HAVE_RPC_WS_RECONNECT_INTERVAL_MIN
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_RECONNECT_INTERVAL_MIN
int mgos_config_get_rpc_ws_reconnect_interval_min(struct mgos_config *cfg);
static inline int mgos_sys_config_get_rpc_ws_reconnect_interval_min(void) { return mgos_config_get_rpc_ws_reconnect_interval_min(&mgos_sys_config); }
void mgos_config_set_rpc_ws_reconnect_interval_min(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_ws_reconnect_interval_min(int v) { mgos_config_set_rpc_ws_reconnect_interval_min(&mgos_sys_config, v); }

/* rpc.ws.reconnect_interval_max */
#define MGOS_CONFIG_HAVE_RPC_WS_RECONNECT_INTERVAL_MAX
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_RECONNECT_INTERVAL_MAX
int mgos_config_get_rpc_ws_reconnect_interval_max(struct mgos_config *cfg);
static inline int mgos_sys_config_get_rpc_ws_reconnect_interval_max(void) { return mgos_config_get_rpc_ws_reconnect_interval_max(&mgos_sys_config); }
void mgos_config_set_rpc_ws_reconnect_interval_max(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_ws_reconnect_interval_max(int v) { mgos_config_set_rpc_ws_reconnect_interval_max(&mgos_sys_config, v); }

/* rpc.ws.ssl_server_name */
#define MGOS_CONFIG_HAVE_RPC_WS_SSL_SERVER_NAME
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_SSL_SERVER_NAME
const char * mgos_config_get_rpc_ws_ssl_server_name(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_rpc_ws_ssl_server_name(void) { return mgos_config_get_rpc_ws_ssl_server_name(&mgos_sys_config); }
void mgos_config_set_rpc_ws_ssl_server_name(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_ws_ssl_server_name(const char * v) { mgos_config_set_rpc_ws_ssl_server_name(&mgos_sys_config, v); }

/* rpc.ws.ssl_cert */
#define MGOS_CONFIG_HAVE_RPC_WS_SSL_CERT
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_SSL_CERT
const char * mgos_config_get_rpc_ws_ssl_cert(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_rpc_ws_ssl_cert(void) { return mgos_config_get_rpc_ws_ssl_cert(&mgos_sys_config); }
void mgos_config_set_rpc_ws_ssl_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_ws_ssl_cert(const char * v) { mgos_config_set_rpc_ws_ssl_cert(&mgos_sys_config, v); }

/* rpc.ws.ssl_key */
#define MGOS_CONFIG_HAVE_RPC_WS_SSL_KEY
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_SSL_KEY
const char * mgos_config_get_rpc_ws_ssl_key(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_rpc_ws_ssl_key(void) { return mgos_config_get_rpc_ws_ssl_key(&mgos_sys_config); }
void mgos_config_set_rpc_ws_ssl_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_ws_ssl_key(const char * v) { mgos_config_set_rpc_ws_ssl_key(&mgos_sys_config, v); }

/* rpc.ws.ssl_ca_cert */
#define MGOS_CONFIG_HAVE_RPC_WS_SSL_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_RPC_WS_SSL_CA_CERT
const char * mgos_config_get_rpc_ws_ssl_ca_cert(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_rpc_ws_ssl_ca_cert(void) { return mgos_config_get_rpc_ws_ssl_ca_cert(&mgos_sys_config); }
void mgos_config_set_rpc_ws_ssl_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_ws_ssl_ca_cert(const char * v) { mgos_config_set_rpc_ws_ssl_ca_cert(&mgos_sys_config, v); }

/* rpc.azure */
#define MGOS_CONFIG_HAVE_RPC_AZURE
#define MGOS_SYS_CONFIG_HAVE_RPC_AZURE
const struct mgos_config_rpc_azure * mgos_config_get_rpc_azure(struct mgos_config *cfg);
static inline const struct mgos_config_rpc_azure * mgos_sys_config_get_rpc_azure(void) { return mgos_config_get_rpc_azure(&mgos_sys_config); }

/* rpc.azure.enable_dm */
#define MGOS_CONFIG_HAVE_RPC_AZURE_ENABLE_DM
#define MGOS_SYS_CONFIG_HAVE_RPC_AZURE_ENABLE_DM
int mgos_config_get_rpc_azure_enable_dm(struct mgos_config *cfg);
static inline int mgos_sys_config_get_rpc_azure_enable_dm(void) { return mgos_config_get_rpc_azure_enable_dm(&mgos_sys_config); }
void mgos_config_set_rpc_azure_enable_dm(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_azure_enable_dm(int v) { mgos_config_set_rpc_azure_enable_dm(&mgos_sys_config, v); }

/* rpc.gatts */
#define MGOS_CONFIG_HAVE_RPC_GATTS
#define MGOS_SYS_CONFIG_HAVE_RPC_GATTS
const struct mgos_config_rpc_gatts * mgos_config_get_rpc_gatts(struct mgos_config *cfg);
static inline const struct mgos_config_rpc_gatts * mgos_sys_config_get_rpc_gatts(void) { return mgos_config_get_rpc_gatts(&mgos_sys_config); }

/* rpc.gatts.enable */
#define MGOS_CONFIG_HAVE_RPC_GATTS_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_GATTS_ENABLE
int mgos_config_get_rpc_gatts_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_rpc_gatts_enable(void) { return mgos_config_get_rpc_gatts_enable(&mgos_sys_config); }
void mgos_config_set_rpc_gatts_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_gatts_enable(int v) { mgos_config_set_rpc_gatts_enable(&mgos_sys_config, v); }

/* rpc.gatts.sec_level */
#define MGOS_CONFIG_HAVE_RPC_GATTS_SEC_LEVEL
#define MGOS_SYS_CONFIG_HAVE_RPC_GATTS_SEC_LEVEL
int mgos_config_get_rpc_gatts_sec_level(struct mgos_config *cfg);
static inline int mgos_sys_config_get_rpc_gatts_sec_level(void) { return mgos_config_get_rpc_gatts_sec_level(&mgos_sys_config); }
void mgos_config_set_rpc_gatts_sec_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_gatts_sec_level(int v) { mgos_config_set_rpc_gatts_sec_level(&mgos_sys_config, v); }

/* rpc.gatts.max_frame_size */
#define MGOS_CONFIG_HAVE_RPC_GATTS_MAX_FRAME_SIZE
#define MGOS_SYS_CONFIG_HAVE_RPC_GATTS_MAX_FRAME_SIZE
int mgos_config_get_rpc_gatts_max_frame_size(struct mgos_config *cfg);
static inline int mgos_sys_config_get_rpc_gatts_max_frame_size(void) { return mgos_config_get_rpc_gatts_max_frame_size(&mgos_sys_config); }
void mgos_config_set_rpc_gatts_max_frame_size(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_gatts_max_frame_size(int v) { mgos_config_set_rpc_gatts_max_frame_size(&mgos_sys_config, v); }

/* rpc.gcp */
#define MGOS_CONFIG_HAVE_RPC_GCP
#define MGOS_SYS_CONFIG_HAVE_RPC_GCP
const struct mgos_config_rpc_gcp * mgos_config_get_rpc_gcp(struct mgos_config *cfg);
static inline const struct mgos_config_rpc_gcp * mgos_sys_config_get_rpc_gcp(void) { return mgos_config_get_rpc_gcp(&mgos_sys_config); }

/* rpc.gcp.enable */
#define MGOS_CONFIG_HAVE_RPC_GCP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_GCP_ENABLE
int mgos_config_get_rpc_gcp_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_rpc_gcp_enable(void) { return mgos_config_get_rpc_gcp_enable(&mgos_sys_config); }
void mgos_config_set_rpc_gcp_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_gcp_enable(int v) { mgos_config_set_rpc_gcp_enable(&mgos_sys_config, v); }

/* rpc.gcp.subfolder */
#define MGOS_CONFIG_HAVE_RPC_GCP_SUBFOLDER
#define MGOS_SYS_CONFIG_HAVE_RPC_GCP_SUBFOLDER
const char * mgos_config_get_rpc_gcp_subfolder(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_rpc_gcp_subfolder(void) { return mgos_config_get_rpc_gcp_subfolder(&mgos_sys_config); }
void mgos_config_set_rpc_gcp_subfolder(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_gcp_subfolder(const char * v) { mgos_config_set_rpc_gcp_subfolder(&mgos_sys_config, v); }

/* rpc.mqtt */
#define MGOS_CONFIG_HAVE_RPC_MQTT
#define MGOS_SYS_CONFIG_HAVE_RPC_MQTT
const struct mgos_config_rpc_mqtt * mgos_config_get_rpc_mqtt(struct mgos_config *cfg);
static inline const struct mgos_config_rpc_mqtt * mgos_sys_config_get_rpc_mqtt(void) { return mgos_config_get_rpc_mqtt(&mgos_sys_config); }

/* rpc.mqtt.enable */
#define MGOS_CONFIG_HAVE_RPC_MQTT_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_MQTT_ENABLE
int mgos_config_get_rpc_mqtt_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_rpc_mqtt_enable(void) { return mgos_config_get_rpc_mqtt_enable(&mgos_sys_config); }
void mgos_config_set_rpc_mqtt_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_mqtt_enable(int v) { mgos_config_set_rpc_mqtt_enable(&mgos_sys_config, v); }

/* rpc.mqtt.pub_topic */
#define MGOS_CONFIG_HAVE_RPC_MQTT_PUB_TOPIC
#define MGOS_SYS_CONFIG_HAVE_RPC_MQTT_PUB_TOPIC
const char * mgos_config_get_rpc_mqtt_pub_topic(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_rpc_mqtt_pub_topic(void) { return mgos_config_get_rpc_mqtt_pub_topic(&mgos_sys_config); }
void mgos_config_set_rpc_mqtt_pub_topic(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_mqtt_pub_topic(const char * v) { mgos_config_set_rpc_mqtt_pub_topic(&mgos_sys_config, v); }

/* rpc.mqtt.sub_topic */
#define MGOS_CONFIG_HAVE_RPC_MQTT_SUB_TOPIC
#define MGOS_SYS_CONFIG_HAVE_RPC_MQTT_SUB_TOPIC
const char * mgos_config_get_rpc_mqtt_sub_topic(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_rpc_mqtt_sub_topic(void) { return mgos_config_get_rpc_mqtt_sub_topic(&mgos_sys_config); }
void mgos_config_set_rpc_mqtt_sub_topic(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_mqtt_sub_topic(const char * v) { mgos_config_set_rpc_mqtt_sub_topic(&mgos_sys_config, v); }

/* rpc.mqtt.sub_wc */
#define MGOS_CONFIG_HAVE_RPC_MQTT_SUB_WC
#define MGOS_SYS_CONFIG_HAVE_RPC_MQTT_SUB_WC
int mgos_config_get_rpc_mqtt_sub_wc(struct mgos_config *cfg);
static inline int mgos_sys_config_get_rpc_mqtt_sub_wc(void) { return mgos_config_get_rpc_mqtt_sub_wc(&mgos_sys_config); }
void mgos_config_set_rpc_mqtt_sub_wc(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_mqtt_sub_wc(int v) { mgos_config_set_rpc_mqtt_sub_wc(&mgos_sys_config, v); }

/* rpc.mqtt.qos */
#define MGOS_CONFIG_HAVE_RPC_MQTT_QOS
#define MGOS_SYS_CONFIG_HAVE_RPC_MQTT_QOS
int mgos_config_get_rpc_mqtt_qos(struct mgos_config *cfg);
static inline int mgos_sys_config_get_rpc_mqtt_qos(void) { return mgos_config_get_rpc_mqtt_qos(&mgos_sys_config); }
void mgos_config_set_rpc_mqtt_qos(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_mqtt_qos(int v) { mgos_config_set_rpc_mqtt_qos(&mgos_sys_config, v); }

/* rpc.uart */
#define MGOS_CONFIG_HAVE_RPC_UART
#define MGOS_SYS_CONFIG_HAVE_RPC_UART
const struct mgos_config_rpc_uart * mgos_config_get_rpc_uart(struct mgos_config *cfg);
static inline const struct mgos_config_rpc_uart * mgos_sys_config_get_rpc_uart(void) { return mgos_config_get_rpc_uart(&mgos_sys_config); }

/* rpc.uart.uart_no */
#define MGOS_CONFIG_HAVE_RPC_UART_UART_NO
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_UART_NO
int mgos_config_get_rpc_uart_uart_no(struct mgos_config *cfg);
static inline int mgos_sys_config_get_rpc_uart_uart_no(void) { return mgos_config_get_rpc_uart_uart_no(&mgos_sys_config); }
void mgos_config_set_rpc_uart_uart_no(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_uart_uart_no(int v) { mgos_config_set_rpc_uart_uart_no(&mgos_sys_config, v); }

/* rpc.uart.baud_rate */
#define MGOS_CONFIG_HAVE_RPC_UART_BAUD_RATE
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_BAUD_RATE
int mgos_config_get_rpc_uart_baud_rate(struct mgos_config *cfg);
static inline int mgos_sys_config_get_rpc_uart_baud_rate(void) { return mgos_config_get_rpc_uart_baud_rate(&mgos_sys_config); }
void mgos_config_set_rpc_uart_baud_rate(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_uart_baud_rate(int v) { mgos_config_set_rpc_uart_baud_rate(&mgos_sys_config, v); }

/* rpc.uart.fc_type */
#define MGOS_CONFIG_HAVE_RPC_UART_FC_TYPE
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_FC_TYPE
int mgos_config_get_rpc_uart_fc_type(struct mgos_config *cfg);
static inline int mgos_sys_config_get_rpc_uart_fc_type(void) { return mgos_config_get_rpc_uart_fc_type(&mgos_sys_config); }
void mgos_config_set_rpc_uart_fc_type(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_uart_fc_type(int v) { mgos_config_set_rpc_uart_fc_type(&mgos_sys_config, v); }

/* rpc.uart.dst */
#define MGOS_CONFIG_HAVE_RPC_UART_DST
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_DST
const char * mgos_config_get_rpc_uart_dst(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_rpc_uart_dst(void) { return mgos_config_get_rpc_uart_dst(&mgos_sys_config); }
void mgos_config_set_rpc_uart_dst(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_uart_dst(const char * v) { mgos_config_set_rpc_uart_dst(&mgos_sys_config, v); }

/* dash */
#define MGOS_CONFIG_HAVE_DASH
#define MGOS_SYS_CONFIG_HAVE_DASH
const struct mgos_config_dash * mgos_config_get_dash(struct mgos_config *cfg);
static inline const struct mgos_config_dash * mgos_sys_config_get_dash(void) { return mgos_config_get_dash(&mgos_sys_config); }

/* dash.enable */
#define MGOS_CONFIG_HAVE_DASH_ENABLE
#define MGOS_SYS_CONFIG_HAVE_DASH_ENABLE
int mgos_config_get_dash_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_dash_enable(void) { return mgos_config_get_dash_enable(&mgos_sys_config); }
void mgos_config_set_dash_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_dash_enable(int v) { mgos_config_set_dash_enable(&mgos_sys_config, v); }

/* dash.token */
#define MGOS_CONFIG_HAVE_DASH_TOKEN
#define MGOS_SYS_CONFIG_HAVE_DASH_TOKEN
const char * mgos_config_get_dash_token(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_dash_token(void) { return mgos_config_get_dash_token(&mgos_sys_config); }
void mgos_config_set_dash_token(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_dash_token(const char * v) { mgos_config_set_dash_token(&mgos_sys_config, v); }

/* dash.server */
#define MGOS_CONFIG_HAVE_DASH_SERVER
#define MGOS_SYS_CONFIG_HAVE_DASH_SERVER
const char * mgos_config_get_dash_server(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_dash_server(void) { return mgos_config_get_dash_server(&mgos_sys_config); }
void mgos_config_set_dash_server(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_dash_server(const char * v) { mgos_config_set_dash_server(&mgos_sys_config, v); }

/* dash.ssl_cert */
#define MGOS_CONFIG_HAVE_DASH_SSL_CERT
#define MGOS_SYS_CONFIG_HAVE_DASH_SSL_CERT
const char * mgos_config_get_dash_ssl_cert(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_dash_ssl_cert(void) { return mgos_config_get_dash_ssl_cert(&mgos_sys_config); }
void mgos_config_set_dash_ssl_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_dash_ssl_cert(const char * v) { mgos_config_set_dash_ssl_cert(&mgos_sys_config, v); }

/* dash.ssl_key */
#define MGOS_CONFIG_HAVE_DASH_SSL_KEY
#define MGOS_SYS_CONFIG_HAVE_DASH_SSL_KEY
const char * mgos_config_get_dash_ssl_key(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_dash_ssl_key(void) { return mgos_config_get_dash_ssl_key(&mgos_sys_config); }
void mgos_config_set_dash_ssl_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_dash_ssl_key(const char * v) { mgos_config_set_dash_ssl_key(&mgos_sys_config, v); }

/* dash.ssl_ca_cert */
#define MGOS_CONFIG_HAVE_DASH_SSL_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_DASH_SSL_CA_CERT
const char * mgos_config_get_dash_ssl_ca_cert(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_dash_ssl_ca_cert(void) { return mgos_config_get_dash_ssl_ca_cert(&mgos_sys_config); }
void mgos_config_set_dash_ssl_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_dash_ssl_ca_cert(const char * v) { mgos_config_set_dash_ssl_ca_cert(&mgos_sys_config, v); }

/* dash.send_logs */
#define MGOS_CONFIG_HAVE_DASH_SEND_LOGS
#define MGOS_SYS_CONFIG_HAVE_DASH_SEND_LOGS
int mgos_config_get_dash_send_logs(struct mgos_config *cfg);
static inline int mgos_sys_config_get_dash_send_logs(void) { return mgos_config_get_dash_send_logs(&mgos_sys_config); }
void mgos_config_set_dash_send_logs(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_dash_send_logs(int v) { mgos_config_set_dash_send_logs(&mgos_sys_config, v); }

/* http */
#define MGOS_CONFIG_HAVE_HTTP
#define MGOS_SYS_CONFIG_HAVE_HTTP
const struct mgos_config_http * mgos_config_get_http(struct mgos_config *cfg);
static inline const struct mgos_config_http * mgos_sys_config_get_http(void) { return mgos_config_get_http(&mgos_sys_config); }

/* http.enable */
#define MGOS_CONFIG_HAVE_HTTP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_HTTP_ENABLE
int mgos_config_get_http_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_http_enable(void) { return mgos_config_get_http_enable(&mgos_sys_config); }
void mgos_config_set_http_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_http_enable(int v) { mgos_config_set_http_enable(&mgos_sys_config, v); }

/* http.listen_addr */
#define MGOS_CONFIG_HAVE_HTTP_LISTEN_ADDR
#define MGOS_SYS_CONFIG_HAVE_HTTP_LISTEN_ADDR
const char * mgos_config_get_http_listen_addr(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_http_listen_addr(void) { return mgos_config_get_http_listen_addr(&mgos_sys_config); }
void mgos_config_set_http_listen_addr(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_http_listen_addr(const char * v) { mgos_config_set_http_listen_addr(&mgos_sys_config, v); }

/* http.document_root */
#define MGOS_CONFIG_HAVE_HTTP_DOCUMENT_ROOT
#define MGOS_SYS_CONFIG_HAVE_HTTP_DOCUMENT_ROOT
const char * mgos_config_get_http_document_root(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_http_document_root(void) { return mgos_config_get_http_document_root(&mgos_sys_config); }
void mgos_config_set_http_document_root(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_http_document_root(const char * v) { mgos_config_set_http_document_root(&mgos_sys_config, v); }

/* http.ssl_cert */
#define MGOS_CONFIG_HAVE_HTTP_SSL_CERT
#define MGOS_SYS_CONFIG_HAVE_HTTP_SSL_CERT
const char * mgos_config_get_http_ssl_cert(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_http_ssl_cert(void) { return mgos_config_get_http_ssl_cert(&mgos_sys_config); }
void mgos_config_set_http_ssl_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_http_ssl_cert(const char * v) { mgos_config_set_http_ssl_cert(&mgos_sys_config, v); }

/* http.ssl_key */
#define MGOS_CONFIG_HAVE_HTTP_SSL_KEY
#define MGOS_SYS_CONFIG_HAVE_HTTP_SSL_KEY
const char * mgos_config_get_http_ssl_key(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_http_ssl_key(void) { return mgos_config_get_http_ssl_key(&mgos_sys_config); }
void mgos_config_set_http_ssl_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_http_ssl_key(const char * v) { mgos_config_set_http_ssl_key(&mgos_sys_config, v); }

/* http.ssl_ca_cert */
#define MGOS_CONFIG_HAVE_HTTP_SSL_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_HTTP_SSL_CA_CERT
const char * mgos_config_get_http_ssl_ca_cert(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_http_ssl_ca_cert(void) { return mgos_config_get_http_ssl_ca_cert(&mgos_sys_config); }
void mgos_config_set_http_ssl_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_http_ssl_ca_cert(const char * v) { mgos_config_set_http_ssl_ca_cert(&mgos_sys_config, v); }

/* http.upload_acl */
#define MGOS_CONFIG_HAVE_HTTP_UPLOAD_ACL
#define MGOS_SYS_CONFIG_HAVE_HTTP_UPLOAD_ACL
const char * mgos_config_get_http_upload_acl(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_http_upload_acl(void) { return mgos_config_get_http_upload_acl(&mgos_sys_config); }
void mgos_config_set_http_upload_acl(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_http_upload_acl(const char * v) { mgos_config_set_http_upload_acl(&mgos_sys_config, v); }

/* http.hidden_files */
#define MGOS_CONFIG_HAVE_HTTP_HIDDEN_FILES
#define MGOS_SYS_CONFIG_HAVE_HTTP_HIDDEN_FILES
const char * mgos_config_get_http_hidden_files(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_http_hidden_files(void) { return mgos_config_get_http_hidden_files(&mgos_sys_config); }
void mgos_config_set_http_hidden_files(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_http_hidden_files(const char * v) { mgos_config_set_http_hidden_files(&mgos_sys_config, v); }

/* http.auth_domain */
#define MGOS_CONFIG_HAVE_HTTP_AUTH_DOMAIN
#define MGOS_SYS_CONFIG_HAVE_HTTP_AUTH_DOMAIN
const char * mgos_config_get_http_auth_domain(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_http_auth_domain(void) { return mgos_config_get_http_auth_domain(&mgos_sys_config); }
void mgos_config_set_http_auth_domain(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_http_auth_domain(const char * v) { mgos_config_set_http_auth_domain(&mgos_sys_config, v); }

/* http.auth_file */
#define MGOS_CONFIG_HAVE_HTTP_AUTH_FILE
#define MGOS_SYS_CONFIG_HAVE_HTTP_AUTH_FILE
const char * mgos_config_get_http_auth_file(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_http_auth_file(void) { return mgos_config_get_http_auth_file(&mgos_sys_config); }
void mgos_config_set_http_auth_file(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_http_auth_file(const char * v) { mgos_config_set_http_auth_file(&mgos_sys_config, v); }

/* dns_sd */
#define MGOS_CONFIG_HAVE_DNS_SD
#define MGOS_SYS_CONFIG_HAVE_DNS_SD
const struct mgos_config_dns_sd * mgos_config_get_dns_sd(struct mgos_config *cfg);
static inline const struct mgos_config_dns_sd * mgos_sys_config_get_dns_sd(void) { return mgos_config_get_dns_sd(&mgos_sys_config); }

/* dns_sd.enable */
#define MGOS_CONFIG_HAVE_DNS_SD_ENABLE
#define MGOS_SYS_CONFIG_HAVE_DNS_SD_ENABLE
int mgos_config_get_dns_sd_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_dns_sd_enable(void) { return mgos_config_get_dns_sd_enable(&mgos_sys_config); }
void mgos_config_set_dns_sd_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_dns_sd_enable(int v) { mgos_config_set_dns_sd_enable(&mgos_sys_config, v); }

/* dns_sd.host_name */
#define MGOS_CONFIG_HAVE_DNS_SD_HOST_NAME
#define MGOS_SYS_CONFIG_HAVE_DNS_SD_HOST_NAME
const char * mgos_config_get_dns_sd_host_name(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_dns_sd_host_name(void) { return mgos_config_get_dns_sd_host_name(&mgos_sys_config); }
void mgos_config_set_dns_sd_host_name(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_dns_sd_host_name(const char * v) { mgos_config_set_dns_sd_host_name(&mgos_sys_config, v); }

/* dns_sd.txt */
#define MGOS_CONFIG_HAVE_DNS_SD_TXT
#define MGOS_SYS_CONFIG_HAVE_DNS_SD_TXT
const char * mgos_config_get_dns_sd_txt(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_dns_sd_txt(void) { return mgos_config_get_dns_sd_txt(&mgos_sys_config); }
void mgos_config_set_dns_sd_txt(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_dns_sd_txt(const char * v) { mgos_config_set_dns_sd_txt(&mgos_sys_config, v); }

/* dns_sd.ttl */
#define MGOS_CONFIG_HAVE_DNS_SD_TTL
#define MGOS_SYS_CONFIG_HAVE_DNS_SD_TTL
int mgos_config_get_dns_sd_ttl(struct mgos_config *cfg);
static inline int mgos_sys_config_get_dns_sd_ttl(void) { return mgos_config_get_dns_sd_ttl(&mgos_sys_config); }
void mgos_config_set_dns_sd_ttl(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_dns_sd_ttl(int v) { mgos_config_set_dns_sd_ttl(&mgos_sys_config, v); }

/* eth */
#define MGOS_CONFIG_HAVE_ETH
#define MGOS_SYS_CONFIG_HAVE_ETH
const struct mgos_config_eth * mgos_config_get_eth(struct mgos_config *cfg);
static inline const struct mgos_config_eth * mgos_sys_config_get_eth(void) { return mgos_config_get_eth(&mgos_sys_config); }

/* eth.enable */
#define MGOS_CONFIG_HAVE_ETH_ENABLE
#define MGOS_SYS_CONFIG_HAVE_ETH_ENABLE
int mgos_config_get_eth_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_eth_enable(void) { return mgos_config_get_eth_enable(&mgos_sys_config); }
void mgos_config_set_eth_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_eth_enable(int v) { mgos_config_set_eth_enable(&mgos_sys_config, v); }

/* eth.phy_addr */
#define MGOS_CONFIG_HAVE_ETH_PHY_ADDR
#define MGOS_SYS_CONFIG_HAVE_ETH_PHY_ADDR
int mgos_config_get_eth_phy_addr(struct mgos_config *cfg);
static inline int mgos_sys_config_get_eth_phy_addr(void) { return mgos_config_get_eth_phy_addr(&mgos_sys_config); }
void mgos_config_set_eth_phy_addr(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_eth_phy_addr(int v) { mgos_config_set_eth_phy_addr(&mgos_sys_config, v); }

/* eth.ip */
#define MGOS_CONFIG_HAVE_ETH_IP
#define MGOS_SYS_CONFIG_HAVE_ETH_IP
const char * mgos_config_get_eth_ip(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_eth_ip(void) { return mgos_config_get_eth_ip(&mgos_sys_config); }
void mgos_config_set_eth_ip(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_eth_ip(const char * v) { mgos_config_set_eth_ip(&mgos_sys_config, v); }

/* eth.netmask */
#define MGOS_CONFIG_HAVE_ETH_NETMASK
#define MGOS_SYS_CONFIG_HAVE_ETH_NETMASK
const char * mgos_config_get_eth_netmask(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_eth_netmask(void) { return mgos_config_get_eth_netmask(&mgos_sys_config); }
void mgos_config_set_eth_netmask(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_eth_netmask(const char * v) { mgos_config_set_eth_netmask(&mgos_sys_config, v); }

/* eth.gw */
#define MGOS_CONFIG_HAVE_ETH_GW
#define MGOS_SYS_CONFIG_HAVE_ETH_GW
const char * mgos_config_get_eth_gw(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_eth_gw(void) { return mgos_config_get_eth_gw(&mgos_sys_config); }
void mgos_config_set_eth_gw(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_eth_gw(const char * v) { mgos_config_set_eth_gw(&mgos_sys_config, v); }

/* eth.clk_mode */
#define MGOS_CONFIG_HAVE_ETH_CLK_MODE
#define MGOS_SYS_CONFIG_HAVE_ETH_CLK_MODE
int mgos_config_get_eth_clk_mode(struct mgos_config *cfg);
static inline int mgos_sys_config_get_eth_clk_mode(void) { return mgos_config_get_eth_clk_mode(&mgos_sys_config); }
void mgos_config_set_eth_clk_mode(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_eth_clk_mode(int v) { mgos_config_set_eth_clk_mode(&mgos_sys_config, v); }

/* eth.mdc_gpio */
#define MGOS_CONFIG_HAVE_ETH_MDC_GPIO
#define MGOS_SYS_CONFIG_HAVE_ETH_MDC_GPIO
int mgos_config_get_eth_mdc_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_eth_mdc_gpio(void) { return mgos_config_get_eth_mdc_gpio(&mgos_sys_config); }
void mgos_config_set_eth_mdc_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_eth_mdc_gpio(int v) { mgos_config_set_eth_mdc_gpio(&mgos_sys_config, v); }

/* eth.mdio_gpio */
#define MGOS_CONFIG_HAVE_ETH_MDIO_GPIO
#define MGOS_SYS_CONFIG_HAVE_ETH_MDIO_GPIO
int mgos_config_get_eth_mdio_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_eth_mdio_gpio(void) { return mgos_config_get_eth_mdio_gpio(&mgos_sys_config); }
void mgos_config_set_eth_mdio_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_eth_mdio_gpio(int v) { mgos_config_set_eth_mdio_gpio(&mgos_sys_config, v); }

/* eth.phy_pwr_gpio */
#define MGOS_CONFIG_HAVE_ETH_PHY_PWR_GPIO
#define MGOS_SYS_CONFIG_HAVE_ETH_PHY_PWR_GPIO
int mgos_config_get_eth_phy_pwr_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_eth_phy_pwr_gpio(void) { return mgos_config_get_eth_phy_pwr_gpio(&mgos_sys_config); }
void mgos_config_set_eth_phy_pwr_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_eth_phy_pwr_gpio(int v) { mgos_config_set_eth_phy_pwr_gpio(&mgos_sys_config, v); }

/* devtab */
#define MGOS_CONFIG_HAVE_DEVTAB
#define MGOS_SYS_CONFIG_HAVE_DEVTAB
const struct mgos_config_devtab * mgos_config_get_devtab(struct mgos_config *cfg);
static inline const struct mgos_config_devtab * mgos_sys_config_get_devtab(void) { return mgos_config_get_devtab(&mgos_sys_config); }

/* devtab.dev0 */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV0
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV0
const struct mgos_config_devtab_dev0 * mgos_config_get_devtab_dev0(struct mgos_config *cfg);
static inline const struct mgos_config_devtab_dev0 * mgos_sys_config_get_devtab_dev0(void) { return mgos_config_get_devtab_dev0(&mgos_sys_config); }

/* devtab.dev0.name */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV0_NAME
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV0_NAME
const char * mgos_config_get_devtab_dev0_name(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_devtab_dev0_name(void) { return mgos_config_get_devtab_dev0_name(&mgos_sys_config); }
void mgos_config_set_devtab_dev0_name(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_devtab_dev0_name(const char * v) { mgos_config_set_devtab_dev0_name(&mgos_sys_config, v); }

/* devtab.dev0.type */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV0_TYPE
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV0_TYPE
const char * mgos_config_get_devtab_dev0_type(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_devtab_dev0_type(void) { return mgos_config_get_devtab_dev0_type(&mgos_sys_config); }
void mgos_config_set_devtab_dev0_type(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_devtab_dev0_type(const char * v) { mgos_config_set_devtab_dev0_type(&mgos_sys_config, v); }

/* devtab.dev0.opts */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV0_OPTS
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV0_OPTS
const char * mgos_config_get_devtab_dev0_opts(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_devtab_dev0_opts(void) { return mgos_config_get_devtab_dev0_opts(&mgos_sys_config); }
void mgos_config_set_devtab_dev0_opts(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_devtab_dev0_opts(const char * v) { mgos_config_set_devtab_dev0_opts(&mgos_sys_config, v); }

/* devtab.dev1 */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV1
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV1
const struct mgos_config_devtab_dev1 * mgos_config_get_devtab_dev1(struct mgos_config *cfg);
static inline const struct mgos_config_devtab_dev1 * mgos_sys_config_get_devtab_dev1(void) { return mgos_config_get_devtab_dev1(&mgos_sys_config); }

/* devtab.dev1.name */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV1_NAME
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV1_NAME
const char * mgos_config_get_devtab_dev1_name(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_devtab_dev1_name(void) { return mgos_config_get_devtab_dev1_name(&mgos_sys_config); }
void mgos_config_set_devtab_dev1_name(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_devtab_dev1_name(const char * v) { mgos_config_set_devtab_dev1_name(&mgos_sys_config, v); }

/* devtab.dev1.type */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV1_TYPE
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV1_TYPE
const char * mgos_config_get_devtab_dev1_type(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_devtab_dev1_type(void) { return mgos_config_get_devtab_dev1_type(&mgos_sys_config); }
void mgos_config_set_devtab_dev1_type(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_devtab_dev1_type(const char * v) { mgos_config_set_devtab_dev1_type(&mgos_sys_config, v); }

/* devtab.dev1.opts */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV1_OPTS
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV1_OPTS
const char * mgos_config_get_devtab_dev1_opts(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_devtab_dev1_opts(void) { return mgos_config_get_devtab_dev1_opts(&mgos_sys_config); }
void mgos_config_set_devtab_dev1_opts(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_devtab_dev1_opts(const char * v) { mgos_config_set_devtab_dev1_opts(&mgos_sys_config, v); }

/* devtab.dev2 */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV2
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV2
const struct mgos_config_devtab_dev2 * mgos_config_get_devtab_dev2(struct mgos_config *cfg);
static inline const struct mgos_config_devtab_dev2 * mgos_sys_config_get_devtab_dev2(void) { return mgos_config_get_devtab_dev2(&mgos_sys_config); }

/* devtab.dev2.name */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV2_NAME
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV2_NAME
const char * mgos_config_get_devtab_dev2_name(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_devtab_dev2_name(void) { return mgos_config_get_devtab_dev2_name(&mgos_sys_config); }
void mgos_config_set_devtab_dev2_name(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_devtab_dev2_name(const char * v) { mgos_config_set_devtab_dev2_name(&mgos_sys_config, v); }

/* devtab.dev2.type */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV2_TYPE
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV2_TYPE
const char * mgos_config_get_devtab_dev2_type(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_devtab_dev2_type(void) { return mgos_config_get_devtab_dev2_type(&mgos_sys_config); }
void mgos_config_set_devtab_dev2_type(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_devtab_dev2_type(const char * v) { mgos_config_set_devtab_dev2_type(&mgos_sys_config, v); }

/* devtab.dev2.opts */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV2_OPTS
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV2_OPTS
const char * mgos_config_get_devtab_dev2_opts(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_devtab_dev2_opts(void) { return mgos_config_get_devtab_dev2_opts(&mgos_sys_config); }
void mgos_config_set_devtab_dev2_opts(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_devtab_dev2_opts(const char * v) { mgos_config_set_devtab_dev2_opts(&mgos_sys_config, v); }

/* devtab.dev3 */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV3
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV3
const struct mgos_config_devtab_dev3 * mgos_config_get_devtab_dev3(struct mgos_config *cfg);
static inline const struct mgos_config_devtab_dev3 * mgos_sys_config_get_devtab_dev3(void) { return mgos_config_get_devtab_dev3(&mgos_sys_config); }

/* devtab.dev3.name */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV3_NAME
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV3_NAME
const char * mgos_config_get_devtab_dev3_name(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_devtab_dev3_name(void) { return mgos_config_get_devtab_dev3_name(&mgos_sys_config); }
void mgos_config_set_devtab_dev3_name(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_devtab_dev3_name(const char * v) { mgos_config_set_devtab_dev3_name(&mgos_sys_config, v); }

/* devtab.dev3.type */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV3_TYPE
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV3_TYPE
const char * mgos_config_get_devtab_dev3_type(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_devtab_dev3_type(void) { return mgos_config_get_devtab_dev3_type(&mgos_sys_config); }
void mgos_config_set_devtab_dev3_type(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_devtab_dev3_type(const char * v) { mgos_config_set_devtab_dev3_type(&mgos_sys_config, v); }

/* devtab.dev3.opts */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV3_OPTS
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV3_OPTS
const char * mgos_config_get_devtab_dev3_opts(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_devtab_dev3_opts(void) { return mgos_config_get_devtab_dev3_opts(&mgos_sys_config); }
void mgos_config_set_devtab_dev3_opts(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_devtab_dev3_opts(const char * v) { mgos_config_set_devtab_dev3_opts(&mgos_sys_config, v); }

/* devtab.dev4 */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV4
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV4
const struct mgos_config_devtab_dev4 * mgos_config_get_devtab_dev4(struct mgos_config *cfg);
static inline const struct mgos_config_devtab_dev4 * mgos_sys_config_get_devtab_dev4(void) { return mgos_config_get_devtab_dev4(&mgos_sys_config); }

/* devtab.dev4.name */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV4_NAME
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV4_NAME
const char * mgos_config_get_devtab_dev4_name(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_devtab_dev4_name(void) { return mgos_config_get_devtab_dev4_name(&mgos_sys_config); }
void mgos_config_set_devtab_dev4_name(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_devtab_dev4_name(const char * v) { mgos_config_set_devtab_dev4_name(&mgos_sys_config, v); }

/* devtab.dev4.type */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV4_TYPE
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV4_TYPE
const char * mgos_config_get_devtab_dev4_type(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_devtab_dev4_type(void) { return mgos_config_get_devtab_dev4_type(&mgos_sys_config); }
void mgos_config_set_devtab_dev4_type(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_devtab_dev4_type(const char * v) { mgos_config_set_devtab_dev4_type(&mgos_sys_config, v); }

/* devtab.dev4.opts */
#define MGOS_CONFIG_HAVE_DEVTAB_DEV4_OPTS
#define MGOS_SYS_CONFIG_HAVE_DEVTAB_DEV4_OPTS
const char * mgos_config_get_devtab_dev4_opts(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_devtab_dev4_opts(void) { return mgos_config_get_devtab_dev4_opts(&mgos_sys_config); }
void mgos_config_set_devtab_dev4_opts(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_devtab_dev4_opts(const char * v) { mgos_config_set_devtab_dev4_opts(&mgos_sys_config, v); }

/* fstab */
#define MGOS_CONFIG_HAVE_FSTAB
#define MGOS_SYS_CONFIG_HAVE_FSTAB
const struct mgos_config_fstab * mgos_config_get_fstab(struct mgos_config *cfg);
static inline const struct mgos_config_fstab * mgos_sys_config_get_fstab(void) { return mgos_config_get_fstab(&mgos_sys_config); }

/* fstab.fs0 */
#define MGOS_CONFIG_HAVE_FSTAB_FS0
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS0
const struct mgos_config_fstab_fs0 * mgos_config_get_fstab_fs0(struct mgos_config *cfg);
static inline const struct mgos_config_fstab_fs0 * mgos_sys_config_get_fstab_fs0(void) { return mgos_config_get_fstab_fs0(&mgos_sys_config); }

/* fstab.fs0.dev */
#define MGOS_CONFIG_HAVE_FSTAB_FS0_DEV
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS0_DEV
const char * mgos_config_get_fstab_fs0_dev(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_fstab_fs0_dev(void) { return mgos_config_get_fstab_fs0_dev(&mgos_sys_config); }
void mgos_config_set_fstab_fs0_dev(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_fstab_fs0_dev(const char * v) { mgos_config_set_fstab_fs0_dev(&mgos_sys_config, v); }

/* fstab.fs0.type */
#define MGOS_CONFIG_HAVE_FSTAB_FS0_TYPE
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS0_TYPE
const char * mgos_config_get_fstab_fs0_type(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_fstab_fs0_type(void) { return mgos_config_get_fstab_fs0_type(&mgos_sys_config); }
void mgos_config_set_fstab_fs0_type(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_fstab_fs0_type(const char * v) { mgos_config_set_fstab_fs0_type(&mgos_sys_config, v); }

/* fstab.fs0.opts */
#define MGOS_CONFIG_HAVE_FSTAB_FS0_OPTS
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS0_OPTS
const char * mgos_config_get_fstab_fs0_opts(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_fstab_fs0_opts(void) { return mgos_config_get_fstab_fs0_opts(&mgos_sys_config); }
void mgos_config_set_fstab_fs0_opts(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_fstab_fs0_opts(const char * v) { mgos_config_set_fstab_fs0_opts(&mgos_sys_config, v); }

/* fstab.fs0.path */
#define MGOS_CONFIG_HAVE_FSTAB_FS0_PATH
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS0_PATH
const char * mgos_config_get_fstab_fs0_path(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_fstab_fs0_path(void) { return mgos_config_get_fstab_fs0_path(&mgos_sys_config); }
void mgos_config_set_fstab_fs0_path(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_fstab_fs0_path(const char * v) { mgos_config_set_fstab_fs0_path(&mgos_sys_config, v); }

/* fstab.fs0.create */
#define MGOS_CONFIG_HAVE_FSTAB_FS0_CREATE
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS0_CREATE
int mgos_config_get_fstab_fs0_create(struct mgos_config *cfg);
static inline int mgos_sys_config_get_fstab_fs0_create(void) { return mgos_config_get_fstab_fs0_create(&mgos_sys_config); }
void mgos_config_set_fstab_fs0_create(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_fstab_fs0_create(int v) { mgos_config_set_fstab_fs0_create(&mgos_sys_config, v); }

/* fstab.fs0.optional */
#define MGOS_CONFIG_HAVE_FSTAB_FS0_OPTIONAL
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS0_OPTIONAL
int mgos_config_get_fstab_fs0_optional(struct mgos_config *cfg);
static inline int mgos_sys_config_get_fstab_fs0_optional(void) { return mgos_config_get_fstab_fs0_optional(&mgos_sys_config); }
void mgos_config_set_fstab_fs0_optional(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_fstab_fs0_optional(int v) { mgos_config_set_fstab_fs0_optional(&mgos_sys_config, v); }

/* fstab.fs0.created */
#define MGOS_CONFIG_HAVE_FSTAB_FS0_CREATED
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS0_CREATED
int mgos_config_get_fstab_fs0_created(struct mgos_config *cfg);
static inline int mgos_sys_config_get_fstab_fs0_created(void) { return mgos_config_get_fstab_fs0_created(&mgos_sys_config); }
void mgos_config_set_fstab_fs0_created(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_fstab_fs0_created(int v) { mgos_config_set_fstab_fs0_created(&mgos_sys_config, v); }

/* fstab.fs1 */
#define MGOS_CONFIG_HAVE_FSTAB_FS1
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS1
const struct mgos_config_fstab_fs1 * mgos_config_get_fstab_fs1(struct mgos_config *cfg);
static inline const struct mgos_config_fstab_fs1 * mgos_sys_config_get_fstab_fs1(void) { return mgos_config_get_fstab_fs1(&mgos_sys_config); }

/* fstab.fs1.dev */
#define MGOS_CONFIG_HAVE_FSTAB_FS1_DEV
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS1_DEV
const char * mgos_config_get_fstab_fs1_dev(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_fstab_fs1_dev(void) { return mgos_config_get_fstab_fs1_dev(&mgos_sys_config); }
void mgos_config_set_fstab_fs1_dev(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_fstab_fs1_dev(const char * v) { mgos_config_set_fstab_fs1_dev(&mgos_sys_config, v); }

/* fstab.fs1.type */
#define MGOS_CONFIG_HAVE_FSTAB_FS1_TYPE
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS1_TYPE
const char * mgos_config_get_fstab_fs1_type(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_fstab_fs1_type(void) { return mgos_config_get_fstab_fs1_type(&mgos_sys_config); }
void mgos_config_set_fstab_fs1_type(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_fstab_fs1_type(const char * v) { mgos_config_set_fstab_fs1_type(&mgos_sys_config, v); }

/* fstab.fs1.opts */
#define MGOS_CONFIG_HAVE_FSTAB_FS1_OPTS
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS1_OPTS
const char * mgos_config_get_fstab_fs1_opts(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_fstab_fs1_opts(void) { return mgos_config_get_fstab_fs1_opts(&mgos_sys_config); }
void mgos_config_set_fstab_fs1_opts(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_fstab_fs1_opts(const char * v) { mgos_config_set_fstab_fs1_opts(&mgos_sys_config, v); }

/* fstab.fs1.path */
#define MGOS_CONFIG_HAVE_FSTAB_FS1_PATH
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS1_PATH
const char * mgos_config_get_fstab_fs1_path(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_fstab_fs1_path(void) { return mgos_config_get_fstab_fs1_path(&mgos_sys_config); }
void mgos_config_set_fstab_fs1_path(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_fstab_fs1_path(const char * v) { mgos_config_set_fstab_fs1_path(&mgos_sys_config, v); }

/* fstab.fs1.create */
#define MGOS_CONFIG_HAVE_FSTAB_FS1_CREATE
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS1_CREATE
int mgos_config_get_fstab_fs1_create(struct mgos_config *cfg);
static inline int mgos_sys_config_get_fstab_fs1_create(void) { return mgos_config_get_fstab_fs1_create(&mgos_sys_config); }
void mgos_config_set_fstab_fs1_create(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_fstab_fs1_create(int v) { mgos_config_set_fstab_fs1_create(&mgos_sys_config, v); }

/* fstab.fs1.optional */
#define MGOS_CONFIG_HAVE_FSTAB_FS1_OPTIONAL
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS1_OPTIONAL
int mgos_config_get_fstab_fs1_optional(struct mgos_config *cfg);
static inline int mgos_sys_config_get_fstab_fs1_optional(void) { return mgos_config_get_fstab_fs1_optional(&mgos_sys_config); }
void mgos_config_set_fstab_fs1_optional(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_fstab_fs1_optional(int v) { mgos_config_set_fstab_fs1_optional(&mgos_sys_config, v); }

/* fstab.fs1.created */
#define MGOS_CONFIG_HAVE_FSTAB_FS1_CREATED
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS1_CREATED
int mgos_config_get_fstab_fs1_created(struct mgos_config *cfg);
static inline int mgos_sys_config_get_fstab_fs1_created(void) { return mgos_config_get_fstab_fs1_created(&mgos_sys_config); }
void mgos_config_set_fstab_fs1_created(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_fstab_fs1_created(int v) { mgos_config_set_fstab_fs1_created(&mgos_sys_config, v); }

/* fstab.fs2 */
#define MGOS_CONFIG_HAVE_FSTAB_FS2
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS2
const struct mgos_config_fstab_fs2 * mgos_config_get_fstab_fs2(struct mgos_config *cfg);
static inline const struct mgos_config_fstab_fs2 * mgos_sys_config_get_fstab_fs2(void) { return mgos_config_get_fstab_fs2(&mgos_sys_config); }

/* fstab.fs2.dev */
#define MGOS_CONFIG_HAVE_FSTAB_FS2_DEV
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS2_DEV
const char * mgos_config_get_fstab_fs2_dev(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_fstab_fs2_dev(void) { return mgos_config_get_fstab_fs2_dev(&mgos_sys_config); }
void mgos_config_set_fstab_fs2_dev(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_fstab_fs2_dev(const char * v) { mgos_config_set_fstab_fs2_dev(&mgos_sys_config, v); }

/* fstab.fs2.type */
#define MGOS_CONFIG_HAVE_FSTAB_FS2_TYPE
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS2_TYPE
const char * mgos_config_get_fstab_fs2_type(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_fstab_fs2_type(void) { return mgos_config_get_fstab_fs2_type(&mgos_sys_config); }
void mgos_config_set_fstab_fs2_type(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_fstab_fs2_type(const char * v) { mgos_config_set_fstab_fs2_type(&mgos_sys_config, v); }

/* fstab.fs2.opts */
#define MGOS_CONFIG_HAVE_FSTAB_FS2_OPTS
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS2_OPTS
const char * mgos_config_get_fstab_fs2_opts(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_fstab_fs2_opts(void) { return mgos_config_get_fstab_fs2_opts(&mgos_sys_config); }
void mgos_config_set_fstab_fs2_opts(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_fstab_fs2_opts(const char * v) { mgos_config_set_fstab_fs2_opts(&mgos_sys_config, v); }

/* fstab.fs2.path */
#define MGOS_CONFIG_HAVE_FSTAB_FS2_PATH
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS2_PATH
const char * mgos_config_get_fstab_fs2_path(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_fstab_fs2_path(void) { return mgos_config_get_fstab_fs2_path(&mgos_sys_config); }
void mgos_config_set_fstab_fs2_path(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_fstab_fs2_path(const char * v) { mgos_config_set_fstab_fs2_path(&mgos_sys_config, v); }

/* fstab.fs2.create */
#define MGOS_CONFIG_HAVE_FSTAB_FS2_CREATE
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS2_CREATE
int mgos_config_get_fstab_fs2_create(struct mgos_config *cfg);
static inline int mgos_sys_config_get_fstab_fs2_create(void) { return mgos_config_get_fstab_fs2_create(&mgos_sys_config); }
void mgos_config_set_fstab_fs2_create(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_fstab_fs2_create(int v) { mgos_config_set_fstab_fs2_create(&mgos_sys_config, v); }

/* fstab.fs2.optional */
#define MGOS_CONFIG_HAVE_FSTAB_FS2_OPTIONAL
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS2_OPTIONAL
int mgos_config_get_fstab_fs2_optional(struct mgos_config *cfg);
static inline int mgos_sys_config_get_fstab_fs2_optional(void) { return mgos_config_get_fstab_fs2_optional(&mgos_sys_config); }
void mgos_config_set_fstab_fs2_optional(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_fstab_fs2_optional(int v) { mgos_config_set_fstab_fs2_optional(&mgos_sys_config, v); }

/* fstab.fs2.created */
#define MGOS_CONFIG_HAVE_FSTAB_FS2_CREATED
#define MGOS_SYS_CONFIG_HAVE_FSTAB_FS2_CREATED
int mgos_config_get_fstab_fs2_created(struct mgos_config *cfg);
static inline int mgos_sys_config_get_fstab_fs2_created(void) { return mgos_config_get_fstab_fs2_created(&mgos_sys_config); }
void mgos_config_set_fstab_fs2_created(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_fstab_fs2_created(int v) { mgos_config_set_fstab_fs2_created(&mgos_sys_config, v); }

/* gcp */
#define MGOS_CONFIG_HAVE_GCP
#define MGOS_SYS_CONFIG_HAVE_GCP
const struct mgos_config_gcp * mgos_config_get_gcp(struct mgos_config *cfg);
static inline const struct mgos_config_gcp * mgos_sys_config_get_gcp(void) { return mgos_config_get_gcp(&mgos_sys_config); }

/* gcp.enable */
#define MGOS_CONFIG_HAVE_GCP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_GCP_ENABLE
int mgos_config_get_gcp_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_gcp_enable(void) { return mgos_config_get_gcp_enable(&mgos_sys_config); }
void mgos_config_set_gcp_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_gcp_enable(int v) { mgos_config_set_gcp_enable(&mgos_sys_config, v); }

/* gcp.server */
#define MGOS_CONFIG_HAVE_GCP_SERVER
#define MGOS_SYS_CONFIG_HAVE_GCP_SERVER
const char * mgos_config_get_gcp_server(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_gcp_server(void) { return mgos_config_get_gcp_server(&mgos_sys_config); }
void mgos_config_set_gcp_server(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_gcp_server(const char * v) { mgos_config_set_gcp_server(&mgos_sys_config, v); }

/* gcp.project */
#define MGOS_CONFIG_HAVE_GCP_PROJECT
#define MGOS_SYS_CONFIG_HAVE_GCP_PROJECT
const char * mgos_config_get_gcp_project(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_gcp_project(void) { return mgos_config_get_gcp_project(&mgos_sys_config); }
void mgos_config_set_gcp_project(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_gcp_project(const char * v) { mgos_config_set_gcp_project(&mgos_sys_config, v); }

/* gcp.region */
#define MGOS_CONFIG_HAVE_GCP_REGION
#define MGOS_SYS_CONFIG_HAVE_GCP_REGION
const char * mgos_config_get_gcp_region(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_gcp_region(void) { return mgos_config_get_gcp_region(&mgos_sys_config); }
void mgos_config_set_gcp_region(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_gcp_region(const char * v) { mgos_config_set_gcp_region(&mgos_sys_config, v); }

/* gcp.registry */
#define MGOS_CONFIG_HAVE_GCP_REGISTRY
#define MGOS_SYS_CONFIG_HAVE_GCP_REGISTRY
const char * mgos_config_get_gcp_registry(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_gcp_registry(void) { return mgos_config_get_gcp_registry(&mgos_sys_config); }
void mgos_config_set_gcp_registry(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_gcp_registry(const char * v) { mgos_config_set_gcp_registry(&mgos_sys_config, v); }

/* gcp.device */
#define MGOS_CONFIG_HAVE_GCP_DEVICE
#define MGOS_SYS_CONFIG_HAVE_GCP_DEVICE
const char * mgos_config_get_gcp_device(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_gcp_device(void) { return mgos_config_get_gcp_device(&mgos_sys_config); }
void mgos_config_set_gcp_device(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_gcp_device(const char * v) { mgos_config_set_gcp_device(&mgos_sys_config, v); }

/* gcp.key */
#define MGOS_CONFIG_HAVE_GCP_KEY
#define MGOS_SYS_CONFIG_HAVE_GCP_KEY
const char * mgos_config_get_gcp_key(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_gcp_key(void) { return mgos_config_get_gcp_key(&mgos_sys_config); }
void mgos_config_set_gcp_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_gcp_key(const char * v) { mgos_config_set_gcp_key(&mgos_sys_config, v); }

/* gcp.token_ttl */
#define MGOS_CONFIG_HAVE_GCP_TOKEN_TTL
#define MGOS_SYS_CONFIG_HAVE_GCP_TOKEN_TTL
int mgos_config_get_gcp_token_ttl(struct mgos_config *cfg);
static inline int mgos_sys_config_get_gcp_token_ttl(void) { return mgos_config_get_gcp_token_ttl(&mgos_sys_config); }
void mgos_config_set_gcp_token_ttl(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_gcp_token_ttl(int v) { mgos_config_set_gcp_token_ttl(&mgos_sys_config, v); }

/* gcp.enable_config */
#define MGOS_CONFIG_HAVE_GCP_ENABLE_CONFIG
#define MGOS_SYS_CONFIG_HAVE_GCP_ENABLE_CONFIG
int mgos_config_get_gcp_enable_config(struct mgos_config *cfg);
static inline int mgos_sys_config_get_gcp_enable_config(void) { return mgos_config_get_gcp_enable_config(&mgos_sys_config); }
void mgos_config_set_gcp_enable_config(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_gcp_enable_config(int v) { mgos_config_set_gcp_enable_config(&mgos_sys_config, v); }

/* gcp.enable_commands */
#define MGOS_CONFIG_HAVE_GCP_ENABLE_COMMANDS
#define MGOS_SYS_CONFIG_HAVE_GCP_ENABLE_COMMANDS
int mgos_config_get_gcp_enable_commands(struct mgos_config *cfg);
static inline int mgos_sys_config_get_gcp_enable_commands(void) { return mgos_config_get_gcp_enable_commands(&mgos_sys_config); }
void mgos_config_set_gcp_enable_commands(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_gcp_enable_commands(int v) { mgos_config_set_gcp_enable_commands(&mgos_sys_config, v); }

/* pppos */
#define MGOS_CONFIG_HAVE_PPPOS
#define MGOS_SYS_CONFIG_HAVE_PPPOS
const struct mgos_config_pppos * mgos_config_get_pppos(struct mgos_config *cfg);
static inline const struct mgos_config_pppos * mgos_sys_config_get_pppos(void) { return mgos_config_get_pppos(&mgos_sys_config); }

/* pppos.enable */
#define MGOS_CONFIG_HAVE_PPPOS_ENABLE
#define MGOS_SYS_CONFIG_HAVE_PPPOS_ENABLE
int mgos_config_get_pppos_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_pppos_enable(void) { return mgos_config_get_pppos_enable(&mgos_sys_config); }
void mgos_config_set_pppos_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_pppos_enable(int v) { mgos_config_set_pppos_enable(&mgos_sys_config, v); }

/* pppos.uart_no */
#define MGOS_CONFIG_HAVE_PPPOS_UART_NO
#define MGOS_SYS_CONFIG_HAVE_PPPOS_UART_NO
int mgos_config_get_pppos_uart_no(struct mgos_config *cfg);
static inline int mgos_sys_config_get_pppos_uart_no(void) { return mgos_config_get_pppos_uart_no(&mgos_sys_config); }
void mgos_config_set_pppos_uart_no(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_pppos_uart_no(int v) { mgos_config_set_pppos_uart_no(&mgos_sys_config, v); }

/* pppos.baud_rate */
#define MGOS_CONFIG_HAVE_PPPOS_BAUD_RATE
#define MGOS_SYS_CONFIG_HAVE_PPPOS_BAUD_RATE
int mgos_config_get_pppos_baud_rate(struct mgos_config *cfg);
static inline int mgos_sys_config_get_pppos_baud_rate(void) { return mgos_config_get_pppos_baud_rate(&mgos_sys_config); }
void mgos_config_set_pppos_baud_rate(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_pppos_baud_rate(int v) { mgos_config_set_pppos_baud_rate(&mgos_sys_config, v); }

/* pppos.start_baud_rate */
#define MGOS_CONFIG_HAVE_PPPOS_START_BAUD_RATE
#define MGOS_SYS_CONFIG_HAVE_PPPOS_START_BAUD_RATE
int mgos_config_get_pppos_start_baud_rate(struct mgos_config *cfg);
static inline int mgos_sys_config_get_pppos_start_baud_rate(void) { return mgos_config_get_pppos_start_baud_rate(&mgos_sys_config); }
void mgos_config_set_pppos_start_baud_rate(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_pppos_start_baud_rate(int v) { mgos_config_set_pppos_start_baud_rate(&mgos_sys_config, v); }

/* pppos.fc_enable */
#define MGOS_CONFIG_HAVE_PPPOS_FC_ENABLE
#define MGOS_SYS_CONFIG_HAVE_PPPOS_FC_ENABLE
int mgos_config_get_pppos_fc_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_pppos_fc_enable(void) { return mgos_config_get_pppos_fc_enable(&mgos_sys_config); }
void mgos_config_set_pppos_fc_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_pppos_fc_enable(int v) { mgos_config_set_pppos_fc_enable(&mgos_sys_config, v); }

/* pppos.start_fc_enable */
#define MGOS_CONFIG_HAVE_PPPOS_START_FC_ENABLE
#define MGOS_SYS_CONFIG_HAVE_PPPOS_START_FC_ENABLE
int mgos_config_get_pppos_start_fc_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_pppos_start_fc_enable(void) { return mgos_config_get_pppos_start_fc_enable(&mgos_sys_config); }
void mgos_config_set_pppos_start_fc_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_pppos_start_fc_enable(int v) { mgos_config_set_pppos_start_fc_enable(&mgos_sys_config, v); }

/* pppos.rx_gpio */
#define MGOS_CONFIG_HAVE_PPPOS_RX_GPIO
#define MGOS_SYS_CONFIG_HAVE_PPPOS_RX_GPIO
int mgos_config_get_pppos_rx_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_pppos_rx_gpio(void) { return mgos_config_get_pppos_rx_gpio(&mgos_sys_config); }
void mgos_config_set_pppos_rx_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_pppos_rx_gpio(int v) { mgos_config_set_pppos_rx_gpio(&mgos_sys_config, v); }

/* pppos.tx_gpio */
#define MGOS_CONFIG_HAVE_PPPOS_TX_GPIO
#define MGOS_SYS_CONFIG_HAVE_PPPOS_TX_GPIO
int mgos_config_get_pppos_tx_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_pppos_tx_gpio(void) { return mgos_config_get_pppos_tx_gpio(&mgos_sys_config); }
void mgos_config_set_pppos_tx_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_pppos_tx_gpio(int v) { mgos_config_set_pppos_tx_gpio(&mgos_sys_config, v); }

/* pppos.cts_gpio */
#define MGOS_CONFIG_HAVE_PPPOS_CTS_GPIO
#define MGOS_SYS_CONFIG_HAVE_PPPOS_CTS_GPIO
int mgos_config_get_pppos_cts_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_pppos_cts_gpio(void) { return mgos_config_get_pppos_cts_gpio(&mgos_sys_config); }
void mgos_config_set_pppos_cts_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_pppos_cts_gpio(int v) { mgos_config_set_pppos_cts_gpio(&mgos_sys_config, v); }

/* pppos.rts_gpio */
#define MGOS_CONFIG_HAVE_PPPOS_RTS_GPIO
#define MGOS_SYS_CONFIG_HAVE_PPPOS_RTS_GPIO
int mgos_config_get_pppos_rts_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_pppos_rts_gpio(void) { return mgos_config_get_pppos_rts_gpio(&mgos_sys_config); }
void mgos_config_set_pppos_rts_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_pppos_rts_gpio(int v) { mgos_config_set_pppos_rts_gpio(&mgos_sys_config, v); }

/* pppos.dtr_gpio */
#define MGOS_CONFIG_HAVE_PPPOS_DTR_GPIO
#define MGOS_SYS_CONFIG_HAVE_PPPOS_DTR_GPIO
int mgos_config_get_pppos_dtr_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_pppos_dtr_gpio(void) { return mgos_config_get_pppos_dtr_gpio(&mgos_sys_config); }
void mgos_config_set_pppos_dtr_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_pppos_dtr_gpio(int v) { mgos_config_set_pppos_dtr_gpio(&mgos_sys_config, v); }

/* pppos.dtr_act */
#define MGOS_CONFIG_HAVE_PPPOS_DTR_ACT
#define MGOS_SYS_CONFIG_HAVE_PPPOS_DTR_ACT
int mgos_config_get_pppos_dtr_act(struct mgos_config *cfg);
static inline int mgos_sys_config_get_pppos_dtr_act(void) { return mgos_config_get_pppos_dtr_act(&mgos_sys_config); }
void mgos_config_set_pppos_dtr_act(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_pppos_dtr_act(int v) { mgos_config_set_pppos_dtr_act(&mgos_sys_config, v); }

/* pppos.apn */
#define MGOS_CONFIG_HAVE_PPPOS_APN
#define MGOS_SYS_CONFIG_HAVE_PPPOS_APN
const char * mgos_config_get_pppos_apn(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_pppos_apn(void) { return mgos_config_get_pppos_apn(&mgos_sys_config); }
void mgos_config_set_pppos_apn(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_pppos_apn(const char * v) { mgos_config_set_pppos_apn(&mgos_sys_config, v); }

/* pppos.user */
#define MGOS_CONFIG_HAVE_PPPOS_USER
#define MGOS_SYS_CONFIG_HAVE_PPPOS_USER
const char * mgos_config_get_pppos_user(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_pppos_user(void) { return mgos_config_get_pppos_user(&mgos_sys_config); }
void mgos_config_set_pppos_user(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_pppos_user(const char * v) { mgos_config_set_pppos_user(&mgos_sys_config, v); }

/* pppos.pass */
#define MGOS_CONFIG_HAVE_PPPOS_PASS
#define MGOS_SYS_CONFIG_HAVE_PPPOS_PASS
const char * mgos_config_get_pppos_pass(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_pppos_pass(void) { return mgos_config_get_pppos_pass(&mgos_sys_config); }
void mgos_config_set_pppos_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_pppos_pass(const char * v) { mgos_config_set_pppos_pass(&mgos_sys_config, v); }

/* pppos.connect_on_startup */
#define MGOS_CONFIG_HAVE_PPPOS_CONNECT_ON_STARTUP
#define MGOS_SYS_CONFIG_HAVE_PPPOS_CONNECT_ON_STARTUP
int mgos_config_get_pppos_connect_on_startup(struct mgos_config *cfg);
static inline int mgos_sys_config_get_pppos_connect_on_startup(void) { return mgos_config_get_pppos_connect_on_startup(&mgos_sys_config); }
void mgos_config_set_pppos_connect_on_startup(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_pppos_connect_on_startup(int v) { mgos_config_set_pppos_connect_on_startup(&mgos_sys_config, v); }

/* pppos.rst_gpio */
#define MGOS_CONFIG_HAVE_PPPOS_RST_GPIO
#define MGOS_SYS_CONFIG_HAVE_PPPOS_RST_GPIO
int mgos_config_get_pppos_rst_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_pppos_rst_gpio(void) { return mgos_config_get_pppos_rst_gpio(&mgos_sys_config); }
void mgos_config_set_pppos_rst_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_pppos_rst_gpio(int v) { mgos_config_set_pppos_rst_gpio(&mgos_sys_config, v); }

/* pppos.rst_act */
#define MGOS_CONFIG_HAVE_PPPOS_RST_ACT
#define MGOS_SYS_CONFIG_HAVE_PPPOS_RST_ACT
int mgos_config_get_pppos_rst_act(struct mgos_config *cfg);
static inline int mgos_sys_config_get_pppos_rst_act(void) { return mgos_config_get_pppos_rst_act(&mgos_sys_config); }
void mgos_config_set_pppos_rst_act(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_pppos_rst_act(int v) { mgos_config_set_pppos_rst_act(&mgos_sys_config, v); }

/* pppos.rst_hold_ms */
#define MGOS_CONFIG_HAVE_PPPOS_RST_HOLD_MS
#define MGOS_SYS_CONFIG_HAVE_PPPOS_RST_HOLD_MS
int mgos_config_get_pppos_rst_hold_ms(struct mgos_config *cfg);
static inline int mgos_sys_config_get_pppos_rst_hold_ms(void) { return mgos_config_get_pppos_rst_hold_ms(&mgos_sys_config); }
void mgos_config_set_pppos_rst_hold_ms(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_pppos_rst_hold_ms(int v) { mgos_config_set_pppos_rst_hold_ms(&mgos_sys_config, v); }

/* pppos.rst_wait_ms */
#define MGOS_CONFIG_HAVE_PPPOS_RST_WAIT_MS
#define MGOS_SYS_CONFIG_HAVE_PPPOS_RST_WAIT_MS
int mgos_config_get_pppos_rst_wait_ms(struct mgos_config *cfg);
static inline int mgos_sys_config_get_pppos_rst_wait_ms(void) { return mgos_config_get_pppos_rst_wait_ms(&mgos_sys_config); }
void mgos_config_set_pppos_rst_wait_ms(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_pppos_rst_wait_ms(int v) { mgos_config_set_pppos_rst_wait_ms(&mgos_sys_config, v); }

/* pppos.rst_mode */
#define MGOS_CONFIG_HAVE_PPPOS_RST_MODE
#define MGOS_SYS_CONFIG_HAVE_PPPOS_RST_MODE
int mgos_config_get_pppos_rst_mode(struct mgos_config *cfg);
static inline int mgos_sys_config_get_pppos_rst_mode(void) { return mgos_config_get_pppos_rst_mode(&mgos_sys_config); }
void mgos_config_set_pppos_rst_mode(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_pppos_rst_mode(int v) { mgos_config_set_pppos_rst_mode(&mgos_sys_config, v); }

/* pppos.echo_interval */
#define MGOS_CONFIG_HAVE_PPPOS_ECHO_INTERVAL
#define MGOS_SYS_CONFIG_HAVE_PPPOS_ECHO_INTERVAL
int mgos_config_get_pppos_echo_interval(struct mgos_config *cfg);
static inline int mgos_sys_config_get_pppos_echo_interval(void) { return mgos_config_get_pppos_echo_interval(&mgos_sys_config); }
void mgos_config_set_pppos_echo_interval(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_pppos_echo_interval(int v) { mgos_config_set_pppos_echo_interval(&mgos_sys_config, v); }

/* pppos.echo_fails */
#define MGOS_CONFIG_HAVE_PPPOS_ECHO_FAILS
#define MGOS_SYS_CONFIG_HAVE_PPPOS_ECHO_FAILS
int mgos_config_get_pppos_echo_fails(struct mgos_config *cfg);
static inline int mgos_sys_config_get_pppos_echo_fails(void) { return mgos_config_get_pppos_echo_fails(&mgos_sys_config); }
void mgos_config_set_pppos_echo_fails(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_pppos_echo_fails(int v) { mgos_config_set_pppos_echo_fails(&mgos_sys_config, v); }

/* pppos.hexdump_enable */
#define MGOS_CONFIG_HAVE_PPPOS_HEXDUMP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_PPPOS_HEXDUMP_ENABLE
int mgos_config_get_pppos_hexdump_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_pppos_hexdump_enable(void) { return mgos_config_get_pppos_hexdump_enable(&mgos_sys_config); }
void mgos_config_set_pppos_hexdump_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_pppos_hexdump_enable(int v) { mgos_config_set_pppos_hexdump_enable(&mgos_sys_config, v); }

/* provision */
#define MGOS_CONFIG_HAVE_PROVISION
#define MGOS_SYS_CONFIG_HAVE_PROVISION
const struct mgos_config_provision * mgos_config_get_provision(struct mgos_config *cfg);
static inline const struct mgos_config_provision * mgos_sys_config_get_provision(void) { return mgos_config_get_provision(&mgos_sys_config); }

/* provision.btn */
#define MGOS_CONFIG_HAVE_PROVISION_BTN
#define MGOS_SYS_CONFIG_HAVE_PROVISION_BTN
const struct mgos_config_provision_btn * mgos_config_get_provision_btn(struct mgos_config *cfg);
static inline const struct mgos_config_provision_btn * mgos_sys_config_get_provision_btn(void) { return mgos_config_get_provision_btn(&mgos_sys_config); }

/* provision.btn.pin */
#define MGOS_CONFIG_HAVE_PROVISION_BTN_PIN
#define MGOS_SYS_CONFIG_HAVE_PROVISION_BTN_PIN
int mgos_config_get_provision_btn_pin(struct mgos_config *cfg);
static inline int mgos_sys_config_get_provision_btn_pin(void) { return mgos_config_get_provision_btn_pin(&mgos_sys_config); }
void mgos_config_set_provision_btn_pin(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_provision_btn_pin(int v) { mgos_config_set_provision_btn_pin(&mgos_sys_config, v); }

/* provision.btn.pull_up */
#define MGOS_CONFIG_HAVE_PROVISION_BTN_PULL_UP
#define MGOS_SYS_CONFIG_HAVE_PROVISION_BTN_PULL_UP
int mgos_config_get_provision_btn_pull_up(struct mgos_config *cfg);
static inline int mgos_sys_config_get_provision_btn_pull_up(void) { return mgos_config_get_provision_btn_pull_up(&mgos_sys_config); }
void mgos_config_set_provision_btn_pull_up(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_provision_btn_pull_up(int v) { mgos_config_set_provision_btn_pull_up(&mgos_sys_config, v); }

/* provision.btn.hold_ms */
#define MGOS_CONFIG_HAVE_PROVISION_BTN_HOLD_MS
#define MGOS_SYS_CONFIG_HAVE_PROVISION_BTN_HOLD_MS
int mgos_config_get_provision_btn_hold_ms(struct mgos_config *cfg);
static inline int mgos_sys_config_get_provision_btn_hold_ms(void) { return mgos_config_get_provision_btn_hold_ms(&mgos_sys_config); }
void mgos_config_set_provision_btn_hold_ms(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_provision_btn_hold_ms(int v) { mgos_config_set_provision_btn_hold_ms(&mgos_sys_config, v); }

/* provision.led */
#define MGOS_CONFIG_HAVE_PROVISION_LED
#define MGOS_SYS_CONFIG_HAVE_PROVISION_LED
const struct mgos_config_provision_led * mgos_config_get_provision_led(struct mgos_config *cfg);
static inline const struct mgos_config_provision_led * mgos_sys_config_get_provision_led(void) { return mgos_config_get_provision_led(&mgos_sys_config); }

/* provision.led.pin */
#define MGOS_CONFIG_HAVE_PROVISION_LED_PIN
#define MGOS_SYS_CONFIG_HAVE_PROVISION_LED_PIN
int mgos_config_get_provision_led_pin(struct mgos_config *cfg);
static inline int mgos_sys_config_get_provision_led_pin(void) { return mgos_config_get_provision_led_pin(&mgos_sys_config); }
void mgos_config_set_provision_led_pin(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_provision_led_pin(int v) { mgos_config_set_provision_led_pin(&mgos_sys_config, v); }

/* provision.led.active_high */
#define MGOS_CONFIG_HAVE_PROVISION_LED_ACTIVE_HIGH
#define MGOS_SYS_CONFIG_HAVE_PROVISION_LED_ACTIVE_HIGH
int mgos_config_get_provision_led_active_high(struct mgos_config *cfg);
static inline int mgos_sys_config_get_provision_led_active_high(void) { return mgos_config_get_provision_led_active_high(&mgos_sys_config); }
void mgos_config_set_provision_led_active_high(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_provision_led_active_high(int v) { mgos_config_set_provision_led_active_high(&mgos_sys_config, v); }

/* provision.stable_state */
#define MGOS_CONFIG_HAVE_PROVISION_STABLE_STATE
#define MGOS_SYS_CONFIG_HAVE_PROVISION_STABLE_STATE
int mgos_config_get_provision_stable_state(struct mgos_config *cfg);
static inline int mgos_sys_config_get_provision_stable_state(void) { return mgos_config_get_provision_stable_state(&mgos_sys_config); }
void mgos_config_set_provision_stable_state(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_provision_stable_state(int v) { mgos_config_set_provision_stable_state(&mgos_sys_config, v); }

/* provision.timeout */
#define MGOS_CONFIG_HAVE_PROVISION_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_PROVISION_TIMEOUT
int mgos_config_get_provision_timeout(struct mgos_config *cfg);
static inline int mgos_sys_config_get_provision_timeout(void) { return mgos_config_get_provision_timeout(&mgos_sys_config); }
void mgos_config_set_provision_timeout(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_provision_timeout(int v) { mgos_config_set_provision_timeout(&mgos_sys_config, v); }

/* provision.max_state */
#define MGOS_CONFIG_HAVE_PROVISION_MAX_STATE
#define MGOS_SYS_CONFIG_HAVE_PROVISION_MAX_STATE
int mgos_config_get_provision_max_state(struct mgos_config *cfg);
static inline int mgos_sys_config_get_provision_max_state(void) { return mgos_config_get_provision_max_state(&mgos_sys_config); }
void mgos_config_set_provision_max_state(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_provision_max_state(int v) { mgos_config_set_provision_max_state(&mgos_sys_config, v); }

/* wifi */
#define MGOS_CONFIG_HAVE_WIFI
#define MGOS_SYS_CONFIG_HAVE_WIFI
const struct mgos_config_wifi * mgos_config_get_wifi(struct mgos_config *cfg);
static inline const struct mgos_config_wifi * mgos_sys_config_get_wifi(void) { return mgos_config_get_wifi(&mgos_sys_config); }

/* wifi.ap */
#define MGOS_CONFIG_HAVE_WIFI_AP
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP
const struct mgos_config_wifi_ap * mgos_config_get_wifi_ap(struct mgos_config *cfg);
static inline const struct mgos_config_wifi_ap * mgos_sys_config_get_wifi_ap(void) { return mgos_config_get_wifi_ap(&mgos_sys_config); }

/* wifi.ap.enable */
#define MGOS_CONFIG_HAVE_WIFI_AP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_ENABLE
int mgos_config_get_wifi_ap_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_wifi_ap_enable(void) { return mgos_config_get_wifi_ap_enable(&mgos_sys_config); }
void mgos_config_set_wifi_ap_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_enable(int v) { mgos_config_set_wifi_ap_enable(&mgos_sys_config, v); }

/* wifi.ap.ssid */
#define MGOS_CONFIG_HAVE_WIFI_AP_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_SSID
const char * mgos_config_get_wifi_ap_ssid(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_ap_ssid(void) { return mgos_config_get_wifi_ap_ssid(&mgos_sys_config); }
void mgos_config_set_wifi_ap_ssid(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_ssid(const char * v) { mgos_config_set_wifi_ap_ssid(&mgos_sys_config, v); }

/* wifi.ap.pass */
#define MGOS_CONFIG_HAVE_WIFI_AP_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_PASS
const char * mgos_config_get_wifi_ap_pass(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_ap_pass(void) { return mgos_config_get_wifi_ap_pass(&mgos_sys_config); }
void mgos_config_set_wifi_ap_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_pass(const char * v) { mgos_config_set_wifi_ap_pass(&mgos_sys_config, v); }

/* wifi.ap.hidden */
#define MGOS_CONFIG_HAVE_WIFI_AP_HIDDEN
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_HIDDEN
int mgos_config_get_wifi_ap_hidden(struct mgos_config *cfg);
static inline int mgos_sys_config_get_wifi_ap_hidden(void) { return mgos_config_get_wifi_ap_hidden(&mgos_sys_config); }
void mgos_config_set_wifi_ap_hidden(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_hidden(int v) { mgos_config_set_wifi_ap_hidden(&mgos_sys_config, v); }

/* wifi.ap.channel */
#define MGOS_CONFIG_HAVE_WIFI_AP_CHANNEL
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_CHANNEL
int mgos_config_get_wifi_ap_channel(struct mgos_config *cfg);
static inline int mgos_sys_config_get_wifi_ap_channel(void) { return mgos_config_get_wifi_ap_channel(&mgos_sys_config); }
void mgos_config_set_wifi_ap_channel(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_channel(int v) { mgos_config_set_wifi_ap_channel(&mgos_sys_config, v); }

/* wifi.ap.max_connections */
#define MGOS_CONFIG_HAVE_WIFI_AP_MAX_CONNECTIONS
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_MAX_CONNECTIONS
int mgos_config_get_wifi_ap_max_connections(struct mgos_config *cfg);
static inline int mgos_sys_config_get_wifi_ap_max_connections(void) { return mgos_config_get_wifi_ap_max_connections(&mgos_sys_config); }
void mgos_config_set_wifi_ap_max_connections(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_max_connections(int v) { mgos_config_set_wifi_ap_max_connections(&mgos_sys_config, v); }

/* wifi.ap.ip */
#define MGOS_CONFIG_HAVE_WIFI_AP_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_IP
const char * mgos_config_get_wifi_ap_ip(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_ap_ip(void) { return mgos_config_get_wifi_ap_ip(&mgos_sys_config); }
void mgos_config_set_wifi_ap_ip(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_ip(const char * v) { mgos_config_set_wifi_ap_ip(&mgos_sys_config, v); }

/* wifi.ap.netmask */
#define MGOS_CONFIG_HAVE_WIFI_AP_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_NETMASK
const char * mgos_config_get_wifi_ap_netmask(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_ap_netmask(void) { return mgos_config_get_wifi_ap_netmask(&mgos_sys_config); }
void mgos_config_set_wifi_ap_netmask(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_netmask(const char * v) { mgos_config_set_wifi_ap_netmask(&mgos_sys_config, v); }

/* wifi.ap.gw */
#define MGOS_CONFIG_HAVE_WIFI_AP_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_GW
const char * mgos_config_get_wifi_ap_gw(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_ap_gw(void) { return mgos_config_get_wifi_ap_gw(&mgos_sys_config); }
void mgos_config_set_wifi_ap_gw(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_gw(const char * v) { mgos_config_set_wifi_ap_gw(&mgos_sys_config, v); }

/* wifi.ap.dhcp_start */
#define MGOS_CONFIG_HAVE_WIFI_AP_DHCP_START
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_DHCP_START
const char * mgos_config_get_wifi_ap_dhcp_start(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_ap_dhcp_start(void) { return mgos_config_get_wifi_ap_dhcp_start(&mgos_sys_config); }
void mgos_config_set_wifi_ap_dhcp_start(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_dhcp_start(const char * v) { mgos_config_set_wifi_ap_dhcp_start(&mgos_sys_config, v); }

/* wifi.ap.dhcp_end */
#define MGOS_CONFIG_HAVE_WIFI_AP_DHCP_END
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_DHCP_END
const char * mgos_config_get_wifi_ap_dhcp_end(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_ap_dhcp_end(void) { return mgos_config_get_wifi_ap_dhcp_end(&mgos_sys_config); }
void mgos_config_set_wifi_ap_dhcp_end(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_dhcp_end(const char * v) { mgos_config_set_wifi_ap_dhcp_end(&mgos_sys_config, v); }

/* wifi.ap.trigger_on_gpio */
#define MGOS_CONFIG_HAVE_WIFI_AP_TRIGGER_ON_GPIO
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_TRIGGER_ON_GPIO
int mgos_config_get_wifi_ap_trigger_on_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_wifi_ap_trigger_on_gpio(void) { return mgos_config_get_wifi_ap_trigger_on_gpio(&mgos_sys_config); }
void mgos_config_set_wifi_ap_trigger_on_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_trigger_on_gpio(int v) { mgos_config_set_wifi_ap_trigger_on_gpio(&mgos_sys_config, v); }

/* wifi.ap.disable_after */
#define MGOS_CONFIG_HAVE_WIFI_AP_DISABLE_AFTER
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_DISABLE_AFTER
int mgos_config_get_wifi_ap_disable_after(struct mgos_config *cfg);
static inline int mgos_sys_config_get_wifi_ap_disable_after(void) { return mgos_config_get_wifi_ap_disable_after(&mgos_sys_config); }
void mgos_config_set_wifi_ap_disable_after(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_disable_after(int v) { mgos_config_set_wifi_ap_disable_after(&mgos_sys_config, v); }

/* wifi.ap.hostname */
#define MGOS_CONFIG_HAVE_WIFI_AP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_HOSTNAME
const char * mgos_config_get_wifi_ap_hostname(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_ap_hostname(void) { return mgos_config_get_wifi_ap_hostname(&mgos_sys_config); }
void mgos_config_set_wifi_ap_hostname(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_hostname(const char * v) { mgos_config_set_wifi_ap_hostname(&mgos_sys_config, v); }

/* wifi.ap.keep_enabled */
#define MGOS_CONFIG_HAVE_WIFI_AP_KEEP_ENABLED
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_KEEP_ENABLED
int mgos_config_get_wifi_ap_keep_enabled(struct mgos_config *cfg);
static inline int mgos_sys_config_get_wifi_ap_keep_enabled(void) { return mgos_config_get_wifi_ap_keep_enabled(&mgos_sys_config); }
void mgos_config_set_wifi_ap_keep_enabled(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_keep_enabled(int v) { mgos_config_set_wifi_ap_keep_enabled(&mgos_sys_config, v); }

/* wifi.ap.bandwidth_20mhz */
#define MGOS_CONFIG_HAVE_WIFI_AP_BANDWIDTH_20MHZ
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_BANDWIDTH_20MHZ
int mgos_config_get_wifi_ap_bandwidth_20mhz(struct mgos_config *cfg);
static inline int mgos_sys_config_get_wifi_ap_bandwidth_20mhz(void) { return mgos_config_get_wifi_ap_bandwidth_20mhz(&mgos_sys_config); }
void mgos_config_set_wifi_ap_bandwidth_20mhz(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_bandwidth_20mhz(int v) { mgos_config_set_wifi_ap_bandwidth_20mhz(&mgos_sys_config, v); }

/* wifi.sta */
#define MGOS_CONFIG_HAVE_WIFI_STA
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA
const struct mgos_config_wifi_sta * mgos_config_get_wifi_sta(struct mgos_config *cfg);
static inline const struct mgos_config_wifi_sta * mgos_sys_config_get_wifi_sta(void) { return mgos_config_get_wifi_sta(&mgos_sys_config); }

/* wifi.sta.enable */
#define MGOS_CONFIG_HAVE_WIFI_STA_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_ENABLE
int mgos_config_get_wifi_sta_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_wifi_sta_enable(void) { return mgos_config_get_wifi_sta_enable(&mgos_sys_config); }
void mgos_config_set_wifi_sta_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta_enable(int v) { mgos_config_set_wifi_sta_enable(&mgos_sys_config, v); }

/* wifi.sta.ssid */
#define MGOS_CONFIG_HAVE_WIFI_STA_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_SSID
const char * mgos_config_get_wifi_sta_ssid(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta_ssid(void) { return mgos_config_get_wifi_sta_ssid(&mgos_sys_config); }
void mgos_config_set_wifi_sta_ssid(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_ssid(const char * v) { mgos_config_set_wifi_sta_ssid(&mgos_sys_config, v); }

/* wifi.sta.pass */
#define MGOS_CONFIG_HAVE_WIFI_STA_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_PASS
const char * mgos_config_get_wifi_sta_pass(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta_pass(void) { return mgos_config_get_wifi_sta_pass(&mgos_sys_config); }
void mgos_config_set_wifi_sta_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_pass(const char * v) { mgos_config_set_wifi_sta_pass(&mgos_sys_config, v); }

/* wifi.sta.user */
#define MGOS_CONFIG_HAVE_WIFI_STA_USER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_USER
const char * mgos_config_get_wifi_sta_user(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta_user(void) { return mgos_config_get_wifi_sta_user(&mgos_sys_config); }
void mgos_config_set_wifi_sta_user(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_user(const char * v) { mgos_config_set_wifi_sta_user(&mgos_sys_config, v); }

/* wifi.sta.anon_identity */
#define MGOS_CONFIG_HAVE_WIFI_STA_ANON_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_ANON_IDENTITY
const char * mgos_config_get_wifi_sta_anon_identity(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta_anon_identity(void) { return mgos_config_get_wifi_sta_anon_identity(&mgos_sys_config); }
void mgos_config_set_wifi_sta_anon_identity(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_anon_identity(const char * v) { mgos_config_set_wifi_sta_anon_identity(&mgos_sys_config, v); }

/* wifi.sta.cert */
#define MGOS_CONFIG_HAVE_WIFI_STA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CERT
const char * mgos_config_get_wifi_sta_cert(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta_cert(void) { return mgos_config_get_wifi_sta_cert(&mgos_sys_config); }
void mgos_config_set_wifi_sta_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_cert(const char * v) { mgos_config_set_wifi_sta_cert(&mgos_sys_config, v); }

/* wifi.sta.key */
#define MGOS_CONFIG_HAVE_WIFI_STA_KEY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_KEY
const char * mgos_config_get_wifi_sta_key(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta_key(void) { return mgos_config_get_wifi_sta_key(&mgos_sys_config); }
void mgos_config_set_wifi_sta_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_key(const char * v) { mgos_config_set_wifi_sta_key(&mgos_sys_config, v); }

/* wifi.sta.ca_cert */
#define MGOS_CONFIG_HAVE_WIFI_STA_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CA_CERT
const char * mgos_config_get_wifi_sta_ca_cert(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta_ca_cert(void) { return mgos_config_get_wifi_sta_ca_cert(&mgos_sys_config); }
void mgos_config_set_wifi_sta_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_ca_cert(const char * v) { mgos_config_set_wifi_sta_ca_cert(&mgos_sys_config, v); }

/* wifi.sta.ip */
#define MGOS_CONFIG_HAVE_WIFI_STA_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_IP
const char * mgos_config_get_wifi_sta_ip(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta_ip(void) { return mgos_config_get_wifi_sta_ip(&mgos_sys_config); }
void mgos_config_set_wifi_sta_ip(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_ip(const char * v) { mgos_config_set_wifi_sta_ip(&mgos_sys_config, v); }

/* wifi.sta.netmask */
#define MGOS_CONFIG_HAVE_WIFI_STA_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_NETMASK
const char * mgos_config_get_wifi_sta_netmask(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta_netmask(void) { return mgos_config_get_wifi_sta_netmask(&mgos_sys_config); }
void mgos_config_set_wifi_sta_netmask(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_netmask(const char * v) { mgos_config_set_wifi_sta_netmask(&mgos_sys_config, v); }

/* wifi.sta.gw */
#define MGOS_CONFIG_HAVE_WIFI_STA_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_GW
const char * mgos_config_get_wifi_sta_gw(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta_gw(void) { return mgos_config_get_wifi_sta_gw(&mgos_sys_config); }
void mgos_config_set_wifi_sta_gw(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_gw(const char * v) { mgos_config_set_wifi_sta_gw(&mgos_sys_config, v); }

/* wifi.sta.nameserver */
#define MGOS_CONFIG_HAVE_WIFI_STA_NAMESERVER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_NAMESERVER
const char * mgos_config_get_wifi_sta_nameserver(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta_nameserver(void) { return mgos_config_get_wifi_sta_nameserver(&mgos_sys_config); }
void mgos_config_set_wifi_sta_nameserver(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_nameserver(const char * v) { mgos_config_set_wifi_sta_nameserver(&mgos_sys_config, v); }

/* wifi.sta.dhcp_hostname */
#define MGOS_CONFIG_HAVE_WIFI_STA_DHCP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_DHCP_HOSTNAME
const char * mgos_config_get_wifi_sta_dhcp_hostname(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta_dhcp_hostname(void) { return mgos_config_get_wifi_sta_dhcp_hostname(&mgos_sys_config); }
void mgos_config_set_wifi_sta_dhcp_hostname(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_dhcp_hostname(const char * v) { mgos_config_set_wifi_sta_dhcp_hostname(&mgos_sys_config, v); }

/* wifi.sta1 */
#define MGOS_CONFIG_HAVE_WIFI_STA1
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1
const struct mgos_config_wifi_sta * mgos_config_get_wifi_sta1(struct mgos_config *cfg);
static inline const struct mgos_config_wifi_sta * mgos_sys_config_get_wifi_sta1(void) { return mgos_config_get_wifi_sta1(&mgos_sys_config); }

/* wifi.sta1.enable */
#define MGOS_CONFIG_HAVE_WIFI_STA1_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_ENABLE
int mgos_config_get_wifi_sta1_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_wifi_sta1_enable(void) { return mgos_config_get_wifi_sta1_enable(&mgos_sys_config); }
void mgos_config_set_wifi_sta1_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta1_enable(int v) { mgos_config_set_wifi_sta1_enable(&mgos_sys_config, v); }

/* wifi.sta1.ssid */
#define MGOS_CONFIG_HAVE_WIFI_STA1_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_SSID
const char * mgos_config_get_wifi_sta1_ssid(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta1_ssid(void) { return mgos_config_get_wifi_sta1_ssid(&mgos_sys_config); }
void mgos_config_set_wifi_sta1_ssid(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_ssid(const char * v) { mgos_config_set_wifi_sta1_ssid(&mgos_sys_config, v); }

/* wifi.sta1.pass */
#define MGOS_CONFIG_HAVE_WIFI_STA1_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_PASS
const char * mgos_config_get_wifi_sta1_pass(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta1_pass(void) { return mgos_config_get_wifi_sta1_pass(&mgos_sys_config); }
void mgos_config_set_wifi_sta1_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_pass(const char * v) { mgos_config_set_wifi_sta1_pass(&mgos_sys_config, v); }

/* wifi.sta1.user */
#define MGOS_CONFIG_HAVE_WIFI_STA1_USER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_USER
const char * mgos_config_get_wifi_sta1_user(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta1_user(void) { return mgos_config_get_wifi_sta1_user(&mgos_sys_config); }
void mgos_config_set_wifi_sta1_user(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_user(const char * v) { mgos_config_set_wifi_sta1_user(&mgos_sys_config, v); }

/* wifi.sta1.anon_identity */
#define MGOS_CONFIG_HAVE_WIFI_STA1_ANON_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_ANON_IDENTITY
const char * mgos_config_get_wifi_sta1_anon_identity(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta1_anon_identity(void) { return mgos_config_get_wifi_sta1_anon_identity(&mgos_sys_config); }
void mgos_config_set_wifi_sta1_anon_identity(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_anon_identity(const char * v) { mgos_config_set_wifi_sta1_anon_identity(&mgos_sys_config, v); }

/* wifi.sta1.cert */
#define MGOS_CONFIG_HAVE_WIFI_STA1_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_CERT
const char * mgos_config_get_wifi_sta1_cert(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta1_cert(void) { return mgos_config_get_wifi_sta1_cert(&mgos_sys_config); }
void mgos_config_set_wifi_sta1_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_cert(const char * v) { mgos_config_set_wifi_sta1_cert(&mgos_sys_config, v); }

/* wifi.sta1.key */
#define MGOS_CONFIG_HAVE_WIFI_STA1_KEY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_KEY
const char * mgos_config_get_wifi_sta1_key(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta1_key(void) { return mgos_config_get_wifi_sta1_key(&mgos_sys_config); }
void mgos_config_set_wifi_sta1_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_key(const char * v) { mgos_config_set_wifi_sta1_key(&mgos_sys_config, v); }

/* wifi.sta1.ca_cert */
#define MGOS_CONFIG_HAVE_WIFI_STA1_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_CA_CERT
const char * mgos_config_get_wifi_sta1_ca_cert(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta1_ca_cert(void) { return mgos_config_get_wifi_sta1_ca_cert(&mgos_sys_config); }
void mgos_config_set_wifi_sta1_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_ca_cert(const char * v) { mgos_config_set_wifi_sta1_ca_cert(&mgos_sys_config, v); }

/* wifi.sta1.ip */
#define MGOS_CONFIG_HAVE_WIFI_STA1_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_IP
const char * mgos_config_get_wifi_sta1_ip(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta1_ip(void) { return mgos_config_get_wifi_sta1_ip(&mgos_sys_config); }
void mgos_config_set_wifi_sta1_ip(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_ip(const char * v) { mgos_config_set_wifi_sta1_ip(&mgos_sys_config, v); }

/* wifi.sta1.netmask */
#define MGOS_CONFIG_HAVE_WIFI_STA1_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_NETMASK
const char * mgos_config_get_wifi_sta1_netmask(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta1_netmask(void) { return mgos_config_get_wifi_sta1_netmask(&mgos_sys_config); }
void mgos_config_set_wifi_sta1_netmask(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_netmask(const char * v) { mgos_config_set_wifi_sta1_netmask(&mgos_sys_config, v); }

/* wifi.sta1.gw */
#define MGOS_CONFIG_HAVE_WIFI_STA1_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_GW
const char * mgos_config_get_wifi_sta1_gw(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta1_gw(void) { return mgos_config_get_wifi_sta1_gw(&mgos_sys_config); }
void mgos_config_set_wifi_sta1_gw(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_gw(const char * v) { mgos_config_set_wifi_sta1_gw(&mgos_sys_config, v); }

/* wifi.sta1.nameserver */
#define MGOS_CONFIG_HAVE_WIFI_STA1_NAMESERVER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_NAMESERVER
const char * mgos_config_get_wifi_sta1_nameserver(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta1_nameserver(void) { return mgos_config_get_wifi_sta1_nameserver(&mgos_sys_config); }
void mgos_config_set_wifi_sta1_nameserver(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_nameserver(const char * v) { mgos_config_set_wifi_sta1_nameserver(&mgos_sys_config, v); }

/* wifi.sta1.dhcp_hostname */
#define MGOS_CONFIG_HAVE_WIFI_STA1_DHCP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_DHCP_HOSTNAME
const char * mgos_config_get_wifi_sta1_dhcp_hostname(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta1_dhcp_hostname(void) { return mgos_config_get_wifi_sta1_dhcp_hostname(&mgos_sys_config); }
void mgos_config_set_wifi_sta1_dhcp_hostname(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_dhcp_hostname(const char * v) { mgos_config_set_wifi_sta1_dhcp_hostname(&mgos_sys_config, v); }

/* wifi.sta2 */
#define MGOS_CONFIG_HAVE_WIFI_STA2
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2
const struct mgos_config_wifi_sta * mgos_config_get_wifi_sta2(struct mgos_config *cfg);
static inline const struct mgos_config_wifi_sta * mgos_sys_config_get_wifi_sta2(void) { return mgos_config_get_wifi_sta2(&mgos_sys_config); }

/* wifi.sta2.enable */
#define MGOS_CONFIG_HAVE_WIFI_STA2_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_ENABLE
int mgos_config_get_wifi_sta2_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_wifi_sta2_enable(void) { return mgos_config_get_wifi_sta2_enable(&mgos_sys_config); }
void mgos_config_set_wifi_sta2_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta2_enable(int v) { mgos_config_set_wifi_sta2_enable(&mgos_sys_config, v); }

/* wifi.sta2.ssid */
#define MGOS_CONFIG_HAVE_WIFI_STA2_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_SSID
const char * mgos_config_get_wifi_sta2_ssid(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta2_ssid(void) { return mgos_config_get_wifi_sta2_ssid(&mgos_sys_config); }
void mgos_config_set_wifi_sta2_ssid(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_ssid(const char * v) { mgos_config_set_wifi_sta2_ssid(&mgos_sys_config, v); }

/* wifi.sta2.pass */
#define MGOS_CONFIG_HAVE_WIFI_STA2_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_PASS
const char * mgos_config_get_wifi_sta2_pass(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta2_pass(void) { return mgos_config_get_wifi_sta2_pass(&mgos_sys_config); }
void mgos_config_set_wifi_sta2_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_pass(const char * v) { mgos_config_set_wifi_sta2_pass(&mgos_sys_config, v); }

/* wifi.sta2.user */
#define MGOS_CONFIG_HAVE_WIFI_STA2_USER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_USER
const char * mgos_config_get_wifi_sta2_user(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta2_user(void) { return mgos_config_get_wifi_sta2_user(&mgos_sys_config); }
void mgos_config_set_wifi_sta2_user(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_user(const char * v) { mgos_config_set_wifi_sta2_user(&mgos_sys_config, v); }

/* wifi.sta2.anon_identity */
#define MGOS_CONFIG_HAVE_WIFI_STA2_ANON_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_ANON_IDENTITY
const char * mgos_config_get_wifi_sta2_anon_identity(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta2_anon_identity(void) { return mgos_config_get_wifi_sta2_anon_identity(&mgos_sys_config); }
void mgos_config_set_wifi_sta2_anon_identity(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_anon_identity(const char * v) { mgos_config_set_wifi_sta2_anon_identity(&mgos_sys_config, v); }

/* wifi.sta2.cert */
#define MGOS_CONFIG_HAVE_WIFI_STA2_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_CERT
const char * mgos_config_get_wifi_sta2_cert(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta2_cert(void) { return mgos_config_get_wifi_sta2_cert(&mgos_sys_config); }
void mgos_config_set_wifi_sta2_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_cert(const char * v) { mgos_config_set_wifi_sta2_cert(&mgos_sys_config, v); }

/* wifi.sta2.key */
#define MGOS_CONFIG_HAVE_WIFI_STA2_KEY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_KEY
const char * mgos_config_get_wifi_sta2_key(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta2_key(void) { return mgos_config_get_wifi_sta2_key(&mgos_sys_config); }
void mgos_config_set_wifi_sta2_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_key(const char * v) { mgos_config_set_wifi_sta2_key(&mgos_sys_config, v); }

/* wifi.sta2.ca_cert */
#define MGOS_CONFIG_HAVE_WIFI_STA2_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_CA_CERT
const char * mgos_config_get_wifi_sta2_ca_cert(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta2_ca_cert(void) { return mgos_config_get_wifi_sta2_ca_cert(&mgos_sys_config); }
void mgos_config_set_wifi_sta2_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_ca_cert(const char * v) { mgos_config_set_wifi_sta2_ca_cert(&mgos_sys_config, v); }

/* wifi.sta2.ip */
#define MGOS_CONFIG_HAVE_WIFI_STA2_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_IP
const char * mgos_config_get_wifi_sta2_ip(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta2_ip(void) { return mgos_config_get_wifi_sta2_ip(&mgos_sys_config); }
void mgos_config_set_wifi_sta2_ip(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_ip(const char * v) { mgos_config_set_wifi_sta2_ip(&mgos_sys_config, v); }

/* wifi.sta2.netmask */
#define MGOS_CONFIG_HAVE_WIFI_STA2_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_NETMASK
const char * mgos_config_get_wifi_sta2_netmask(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta2_netmask(void) { return mgos_config_get_wifi_sta2_netmask(&mgos_sys_config); }
void mgos_config_set_wifi_sta2_netmask(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_netmask(const char * v) { mgos_config_set_wifi_sta2_netmask(&mgos_sys_config, v); }

/* wifi.sta2.gw */
#define MGOS_CONFIG_HAVE_WIFI_STA2_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_GW
const char * mgos_config_get_wifi_sta2_gw(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta2_gw(void) { return mgos_config_get_wifi_sta2_gw(&mgos_sys_config); }
void mgos_config_set_wifi_sta2_gw(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_gw(const char * v) { mgos_config_set_wifi_sta2_gw(&mgos_sys_config, v); }

/* wifi.sta2.nameserver */
#define MGOS_CONFIG_HAVE_WIFI_STA2_NAMESERVER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_NAMESERVER
const char * mgos_config_get_wifi_sta2_nameserver(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta2_nameserver(void) { return mgos_config_get_wifi_sta2_nameserver(&mgos_sys_config); }
void mgos_config_set_wifi_sta2_nameserver(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_nameserver(const char * v) { mgos_config_set_wifi_sta2_nameserver(&mgos_sys_config, v); }

/* wifi.sta2.dhcp_hostname */
#define MGOS_CONFIG_HAVE_WIFI_STA2_DHCP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_DHCP_HOSTNAME
const char * mgos_config_get_wifi_sta2_dhcp_hostname(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_wifi_sta2_dhcp_hostname(void) { return mgos_config_get_wifi_sta2_dhcp_hostname(&mgos_sys_config); }
void mgos_config_set_wifi_sta2_dhcp_hostname(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_dhcp_hostname(const char * v) { mgos_config_set_wifi_sta2_dhcp_hostname(&mgos_sys_config, v); }

/* wifi.sta_cfg_idx */
#define MGOS_CONFIG_HAVE_WIFI_STA_CFG_IDX
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CFG_IDX
int mgos_config_get_wifi_sta_cfg_idx(struct mgos_config *cfg);
static inline int mgos_sys_config_get_wifi_sta_cfg_idx(void) { return mgos_config_get_wifi_sta_cfg_idx(&mgos_sys_config); }
void mgos_config_set_wifi_sta_cfg_idx(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta_cfg_idx(int v) { mgos_config_set_wifi_sta_cfg_idx(&mgos_sys_config, v); }

/* wifi.sta_connect_timeout */
#define MGOS_CONFIG_HAVE_WIFI_STA_CONNECT_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CONNECT_TIMEOUT
int mgos_config_get_wifi_sta_connect_timeout(struct mgos_config *cfg);
static inline int mgos_sys_config_get_wifi_sta_connect_timeout(void) { return mgos_config_get_wifi_sta_connect_timeout(&mgos_sys_config); }
void mgos_config_set_wifi_sta_connect_timeout(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta_connect_timeout(int v) { mgos_config_set_wifi_sta_connect_timeout(&mgos_sys_config, v); }

/* wifi.sta_ps_mode */
#define MGOS_CONFIG_HAVE_WIFI_STA_PS_MODE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_PS_MODE
int mgos_config_get_wifi_sta_ps_mode(struct mgos_config *cfg);
static inline int mgos_sys_config_get_wifi_sta_ps_mode(void) { return mgos_config_get_wifi_sta_ps_mode(&mgos_sys_config); }
void mgos_config_set_wifi_sta_ps_mode(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta_ps_mode(int v) { mgos_config_set_wifi_sta_ps_mode(&mgos_sys_config, v); }

/* wifi.sta_all_chan_scan */
#define MGOS_CONFIG_HAVE_WIFI_STA_ALL_CHAN_SCAN
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_ALL_CHAN_SCAN
int mgos_config_get_wifi_sta_all_chan_scan(struct mgos_config *cfg);
static inline int mgos_sys_config_get_wifi_sta_all_chan_scan(void) { return mgos_config_get_wifi_sta_all_chan_scan(&mgos_sys_config); }
void mgos_config_set_wifi_sta_all_chan_scan(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta_all_chan_scan(int v) { mgos_config_set_wifi_sta_all_chan_scan(&mgos_sys_config, v); }

/* spi */
#define MGOS_CONFIG_HAVE_SPI
#define MGOS_SYS_CONFIG_HAVE_SPI
const struct mgos_config_spi * mgos_config_get_spi(struct mgos_config *cfg);
static inline const struct mgos_config_spi * mgos_sys_config_get_spi(void) { return mgos_config_get_spi(&mgos_sys_config); }

/* spi.enable */
#define MGOS_CONFIG_HAVE_SPI_ENABLE
#define MGOS_SYS_CONFIG_HAVE_SPI_ENABLE
int mgos_config_get_spi_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_spi_enable(void) { return mgos_config_get_spi_enable(&mgos_sys_config); }
void mgos_config_set_spi_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_spi_enable(int v) { mgos_config_set_spi_enable(&mgos_sys_config, v); }

/* spi.debug */
#define MGOS_CONFIG_HAVE_SPI_DEBUG
#define MGOS_SYS_CONFIG_HAVE_SPI_DEBUG
int mgos_config_get_spi_debug(struct mgos_config *cfg);
static inline int mgos_sys_config_get_spi_debug(void) { return mgos_config_get_spi_debug(&mgos_sys_config); }
void mgos_config_set_spi_debug(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_spi_debug(int v) { mgos_config_set_spi_debug(&mgos_sys_config, v); }

/* spi.unit_no */
#define MGOS_CONFIG_HAVE_SPI_UNIT_NO
#define MGOS_SYS_CONFIG_HAVE_SPI_UNIT_NO
int mgos_config_get_spi_unit_no(struct mgos_config *cfg);
static inline int mgos_sys_config_get_spi_unit_no(void) { return mgos_config_get_spi_unit_no(&mgos_sys_config); }
void mgos_config_set_spi_unit_no(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_spi_unit_no(int v) { mgos_config_set_spi_unit_no(&mgos_sys_config, v); }

/* spi.miso_gpio */
#define MGOS_CONFIG_HAVE_SPI_MISO_GPIO
#define MGOS_SYS_CONFIG_HAVE_SPI_MISO_GPIO
int mgos_config_get_spi_miso_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_spi_miso_gpio(void) { return mgos_config_get_spi_miso_gpio(&mgos_sys_config); }
void mgos_config_set_spi_miso_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_spi_miso_gpio(int v) { mgos_config_set_spi_miso_gpio(&mgos_sys_config, v); }

/* spi.mosi_gpio */
#define MGOS_CONFIG_HAVE_SPI_MOSI_GPIO
#define MGOS_SYS_CONFIG_HAVE_SPI_MOSI_GPIO
int mgos_config_get_spi_mosi_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_spi_mosi_gpio(void) { return mgos_config_get_spi_mosi_gpio(&mgos_sys_config); }
void mgos_config_set_spi_mosi_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_spi_mosi_gpio(int v) { mgos_config_set_spi_mosi_gpio(&mgos_sys_config, v); }

/* spi.sclk_gpio */
#define MGOS_CONFIG_HAVE_SPI_SCLK_GPIO
#define MGOS_SYS_CONFIG_HAVE_SPI_SCLK_GPIO
int mgos_config_get_spi_sclk_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_spi_sclk_gpio(void) { return mgos_config_get_spi_sclk_gpio(&mgos_sys_config); }
void mgos_config_set_spi_sclk_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_spi_sclk_gpio(int v) { mgos_config_set_spi_sclk_gpio(&mgos_sys_config, v); }

/* spi.cs0_gpio */
#define MGOS_CONFIG_HAVE_SPI_CS0_GPIO
#define MGOS_SYS_CONFIG_HAVE_SPI_CS0_GPIO
int mgos_config_get_spi_cs0_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_spi_cs0_gpio(void) { return mgos_config_get_spi_cs0_gpio(&mgos_sys_config); }
void mgos_config_set_spi_cs0_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_spi_cs0_gpio(int v) { mgos_config_set_spi_cs0_gpio(&mgos_sys_config, v); }

/* spi.cs1_gpio */
#define MGOS_CONFIG_HAVE_SPI_CS1_GPIO
#define MGOS_SYS_CONFIG_HAVE_SPI_CS1_GPIO
int mgos_config_get_spi_cs1_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_spi_cs1_gpio(void) { return mgos_config_get_spi_cs1_gpio(&mgos_sys_config); }
void mgos_config_set_spi_cs1_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_spi_cs1_gpio(int v) { mgos_config_set_spi_cs1_gpio(&mgos_sys_config, v); }

/* spi.cs2_gpio */
#define MGOS_CONFIG_HAVE_SPI_CS2_GPIO
#define MGOS_SYS_CONFIG_HAVE_SPI_CS2_GPIO
int mgos_config_get_spi_cs2_gpio(struct mgos_config *cfg);
static inline int mgos_sys_config_get_spi_cs2_gpio(void) { return mgos_config_get_spi_cs2_gpio(&mgos_sys_config); }
void mgos_config_set_spi_cs2_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_spi_cs2_gpio(int v) { mgos_config_set_spi_cs2_gpio(&mgos_sys_config, v); }

/* watson */
#define MGOS_CONFIG_HAVE_WATSON
#define MGOS_SYS_CONFIG_HAVE_WATSON
const struct mgos_config_watson * mgos_config_get_watson(struct mgos_config *cfg);
static inline const struct mgos_config_watson * mgos_sys_config_get_watson(void) { return mgos_config_get_watson(&mgos_sys_config); }

/* watson.enable */
#define MGOS_CONFIG_HAVE_WATSON_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WATSON_ENABLE
int mgos_config_get_watson_enable(struct mgos_config *cfg);
static inline int mgos_sys_config_get_watson_enable(void) { return mgos_config_get_watson_enable(&mgos_sys_config); }
void mgos_config_set_watson_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_watson_enable(int v) { mgos_config_set_watson_enable(&mgos_sys_config, v); }

/* watson.host_name */
#define MGOS_CONFIG_HAVE_WATSON_HOST_NAME
#define MGOS_SYS_CONFIG_HAVE_WATSON_HOST_NAME
const char * mgos_config_get_watson_host_name(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_watson_host_name(void) { return mgos_config_get_watson_host_name(&mgos_sys_config); }
void mgos_config_set_watson_host_name(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_watson_host_name(const char * v) { mgos_config_set_watson_host_name(&mgos_sys_config, v); }

/* watson.client_id */
#define MGOS_CONFIG_HAVE_WATSON_CLIENT_ID
#define MGOS_SYS_CONFIG_HAVE_WATSON_CLIENT_ID
const char * mgos_config_get_watson_client_id(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_watson_client_id(void) { return mgos_config_get_watson_client_id(&mgos_sys_config); }
void mgos_config_set_watson_client_id(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_watson_client_id(const char * v) { mgos_config_set_watson_client_id(&mgos_sys_config, v); }

/* watson.token */
#define MGOS_CONFIG_HAVE_WATSON_TOKEN
#define MGOS_SYS_CONFIG_HAVE_WATSON_TOKEN
const char * mgos_config_get_watson_token(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_watson_token(void) { return mgos_config_get_watson_token(&mgos_sys_config); }
void mgos_config_set_watson_token(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_watson_token(const char * v) { mgos_config_set_watson_token(&mgos_sys_config, v); }

/* watson.cert */
#define MGOS_CONFIG_HAVE_WATSON_CERT
#define MGOS_SYS_CONFIG_HAVE_WATSON_CERT
const char * mgos_config_get_watson_cert(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_watson_cert(void) { return mgos_config_get_watson_cert(&mgos_sys_config); }
void mgos_config_set_watson_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_watson_cert(const char * v) { mgos_config_set_watson_cert(&mgos_sys_config, v); }

/* watson.key */
#define MGOS_CONFIG_HAVE_WATSON_KEY
#define MGOS_SYS_CONFIG_HAVE_WATSON_KEY
const char * mgos_config_get_watson_key(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_watson_key(void) { return mgos_config_get_watson_key(&mgos_sys_config); }
void mgos_config_set_watson_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_watson_key(const char * v) { mgos_config_set_watson_key(&mgos_sys_config, v); }

/* watson.ca_cert */
#define MGOS_CONFIG_HAVE_WATSON_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_WATSON_CA_CERT
const char * mgos_config_get_watson_ca_cert(struct mgos_config *cfg);
static inline const char * mgos_sys_config_get_watson_ca_cert(void) { return mgos_config_get_watson_ca_cert(&mgos_sys_config); }
void mgos_config_set_watson_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_watson_ca_cert(const char * v) { mgos_config_set_watson_ca_cert(&mgos_sys_config, v); }

/* mjs */
#define MGOS_CONFIG_HAVE_MJS
#define MGOS_SYS_CONFIG_HAVE_MJS
const struct mgos_config_mjs * mgos_config_get_mjs(struct mgos_config *cfg);
static inline const struct mgos_config_mjs * mgos_sys_config_get_mjs(void) { return mgos_config_get_mjs(&mgos_sys_config); }

/* mjs.generate_jsc */
#define MGOS_CONFIG_HAVE_MJS_GENERATE_JSC
#define MGOS_SYS_CONFIG_HAVE_MJS_GENERATE_JSC
int mgos_config_get_mjs_generate_jsc(struct mgos_config *cfg);
static inline int mgos_sys_config_get_mjs_generate_jsc(void) { return mgos_config_get_mjs_generate_jsc(&mgos_sys_config); }
void mgos_config_set_mjs_generate_jsc(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mjs_generate_jsc(int v) { mgos_config_set_mjs_generate_jsc(&mgos_sys_config, v); }

/* board */
#define MGOS_CONFIG_HAVE_BOARD
#define MGOS_SYS_CONFIG_HAVE_BOARD
const struct mgos_config_board * mgos_config_get_board(struct mgos_config *cfg);
static inline const struct mgos_config_board * mgos_sys_config_get_board(void) { return mgos_config_get_board(&mgos_sys_config); }

/* board.led1 */
#define MGOS_CONFIG_HAVE_BOARD_LED1
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED1
const struct mgos_config_board_led1 * mgos_config_get_board_led1(struct mgos_config *cfg);
static inline const struct mgos_config_board_led1 * mgos_sys_config_get_board_led1(void) { return mgos_config_get_board_led1(&mgos_sys_config); }

/* board.led1.pin */
#define MGOS_CONFIG_HAVE_BOARD_LED1_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED1_PIN
int mgos_config_get_board_led1_pin(struct mgos_config *cfg);
static inline int mgos_sys_config_get_board_led1_pin(void) { return mgos_config_get_board_led1_pin(&mgos_sys_config); }
void mgos_config_set_board_led1_pin(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_led1_pin(int v) { mgos_config_set_board_led1_pin(&mgos_sys_config, v); }

/* board.led1.active_high */
#define MGOS_CONFIG_HAVE_BOARD_LED1_ACTIVE_HIGH
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED1_ACTIVE_HIGH
int mgos_config_get_board_led1_active_high(struct mgos_config *cfg);
static inline int mgos_sys_config_get_board_led1_active_high(void) { return mgos_config_get_board_led1_active_high(&mgos_sys_config); }
void mgos_config_set_board_led1_active_high(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_led1_active_high(int v) { mgos_config_set_board_led1_active_high(&mgos_sys_config, v); }

/* board.led2 */
#define MGOS_CONFIG_HAVE_BOARD_LED2
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED2
const struct mgos_config_board_led2 * mgos_config_get_board_led2(struct mgos_config *cfg);
static inline const struct mgos_config_board_led2 * mgos_sys_config_get_board_led2(void) { return mgos_config_get_board_led2(&mgos_sys_config); }

/* board.led2.pin */
#define MGOS_CONFIG_HAVE_BOARD_LED2_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED2_PIN
int mgos_config_get_board_led2_pin(struct mgos_config *cfg);
static inline int mgos_sys_config_get_board_led2_pin(void) { return mgos_config_get_board_led2_pin(&mgos_sys_config); }
void mgos_config_set_board_led2_pin(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_led2_pin(int v) { mgos_config_set_board_led2_pin(&mgos_sys_config, v); }

/* board.led2.active_high */
#define MGOS_CONFIG_HAVE_BOARD_LED2_ACTIVE_HIGH
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED2_ACTIVE_HIGH
int mgos_config_get_board_led2_active_high(struct mgos_config *cfg);
static inline int mgos_sys_config_get_board_led2_active_high(void) { return mgos_config_get_board_led2_active_high(&mgos_sys_config); }
void mgos_config_set_board_led2_active_high(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_led2_active_high(int v) { mgos_config_set_board_led2_active_high(&mgos_sys_config, v); }

/* board.led3 */
#define MGOS_CONFIG_HAVE_BOARD_LED3
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED3
const struct mgos_config_board_led3 * mgos_config_get_board_led3(struct mgos_config *cfg);
static inline const struct mgos_config_board_led3 * mgos_sys_config_get_board_led3(void) { return mgos_config_get_board_led3(&mgos_sys_config); }

/* board.led3.pin */
#define MGOS_CONFIG_HAVE_BOARD_LED3_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED3_PIN
int mgos_config_get_board_led3_pin(struct mgos_config *cfg);
static inline int mgos_sys_config_get_board_led3_pin(void) { return mgos_config_get_board_led3_pin(&mgos_sys_config); }
void mgos_config_set_board_led3_pin(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_led3_pin(int v) { mgos_config_set_board_led3_pin(&mgos_sys_config, v); }

/* board.led3.active_high */
#define MGOS_CONFIG_HAVE_BOARD_LED3_ACTIVE_HIGH
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED3_ACTIVE_HIGH
int mgos_config_get_board_led3_active_high(struct mgos_config *cfg);
static inline int mgos_sys_config_get_board_led3_active_high(void) { return mgos_config_get_board_led3_active_high(&mgos_sys_config); }
void mgos_config_set_board_led3_active_high(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_led3_active_high(int v) { mgos_config_set_board_led3_active_high(&mgos_sys_config, v); }

/* board.btn1 */
#define MGOS_CONFIG_HAVE_BOARD_BTN1
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN1
const struct mgos_config_board_btn1 * mgos_config_get_board_btn1(struct mgos_config *cfg);
static inline const struct mgos_config_board_btn1 * mgos_sys_config_get_board_btn1(void) { return mgos_config_get_board_btn1(&mgos_sys_config); }

/* board.btn1.pin */
#define MGOS_CONFIG_HAVE_BOARD_BTN1_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN1_PIN
int mgos_config_get_board_btn1_pin(struct mgos_config *cfg);
static inline int mgos_sys_config_get_board_btn1_pin(void) { return mgos_config_get_board_btn1_pin(&mgos_sys_config); }
void mgos_config_set_board_btn1_pin(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_btn1_pin(int v) { mgos_config_set_board_btn1_pin(&mgos_sys_config, v); }

/* board.btn1.pull_up */
#define MGOS_CONFIG_HAVE_BOARD_BTN1_PULL_UP
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN1_PULL_UP
int mgos_config_get_board_btn1_pull_up(struct mgos_config *cfg);
static inline int mgos_sys_config_get_board_btn1_pull_up(void) { return mgos_config_get_board_btn1_pull_up(&mgos_sys_config); }
void mgos_config_set_board_btn1_pull_up(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_btn1_pull_up(int v) { mgos_config_set_board_btn1_pull_up(&mgos_sys_config, v); }

/* board.btn2 */
#define MGOS_CONFIG_HAVE_BOARD_BTN2
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN2
const struct mgos_config_board_btn2 * mgos_config_get_board_btn2(struct mgos_config *cfg);
static inline const struct mgos_config_board_btn2 * mgos_sys_config_get_board_btn2(void) { return mgos_config_get_board_btn2(&mgos_sys_config); }

/* board.btn2.pin */
#define MGOS_CONFIG_HAVE_BOARD_BTN2_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN2_PIN
int mgos_config_get_board_btn2_pin(struct mgos_config *cfg);
static inline int mgos_sys_config_get_board_btn2_pin(void) { return mgos_config_get_board_btn2_pin(&mgos_sys_config); }
void mgos_config_set_board_btn2_pin(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_btn2_pin(int v) { mgos_config_set_board_btn2_pin(&mgos_sys_config, v); }

/* board.btn2.pull_up */
#define MGOS_CONFIG_HAVE_BOARD_BTN2_PULL_UP
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN2_PULL_UP
int mgos_config_get_board_btn2_pull_up(struct mgos_config *cfg);
static inline int mgos_sys_config_get_board_btn2_pull_up(void) { return mgos_config_get_board_btn2_pull_up(&mgos_sys_config); }
void mgos_config_set_board_btn2_pull_up(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_btn2_pull_up(int v) { mgos_config_set_board_btn2_pull_up(&mgos_sys_config, v); }

/* board.btn3 */
#define MGOS_CONFIG_HAVE_BOARD_BTN3
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN3
const struct mgos_config_board_btn3 * mgos_config_get_board_btn3(struct mgos_config *cfg);
static inline const struct mgos_config_board_btn3 * mgos_sys_config_get_board_btn3(void) { return mgos_config_get_board_btn3(&mgos_sys_config); }

/* board.btn3.pin */
#define MGOS_CONFIG_HAVE_BOARD_BTN3_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN3_PIN
int mgos_config_get_board_btn3_pin(struct mgos_config *cfg);
static inline int mgos_sys_config_get_board_btn3_pin(void) { return mgos_config_get_board_btn3_pin(&mgos_sys_config); }
void mgos_config_set_board_btn3_pin(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_btn3_pin(int v) { mgos_config_set_board_btn3_pin(&mgos_sys_config, v); }

/* board.btn3.pull_up */
#define MGOS_CONFIG_HAVE_BOARD_BTN3_PULL_UP
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN3_PULL_UP
int mgos_config_get_board_btn3_pull_up(struct mgos_config *cfg);
static inline int mgos_sys_config_get_board_btn3_pull_up(void) { return mgos_config_get_board_btn3_pull_up(&mgos_sys_config); }
void mgos_config_set_board_btn3_pull_up(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_btn3_pull_up(int v) { mgos_config_set_board_btn3_pull_up(&mgos_sys_config, v); }

bool mgos_sys_config_get(const struct mg_str key, struct mg_str *value);
bool mgos_sys_config_set(const struct mg_str key, const struct mg_str value, bool free_strings);

#ifdef __cplusplus
}
#endif
