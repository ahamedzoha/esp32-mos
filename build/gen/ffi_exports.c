/* Auto-generated, do not edit. */

/*
 * Symbols filtered by the following globs:
 */

#include <stdbool.h>

#include "mgos_dlsym.h"

/* NOTE: signatures are fake */
double  ceil(double);
double  cos(double);
void  esp32_uart_config_set_fifo(int, void *, int, int, int, int);
void  esp32_uart_config_set_pins(int, void *, int, int, int, int);
double  exp(double);
double  fabs(double);
void  fclose(void *);
double  floor(double);
double  fmax(double, double);
double  fmin(double, double);
void * fopen(char *, char *);
int  fread(char *, int, int, void *);
void  free(void *);
void  free(void *);
int  fwrite(char *, int, int, void *);
int  hall_sens_read(void);
double  log(double);
void * malloc(int);
void  mbuf_remove(void *, int);
int  mg_conn_addr_to_str(void *, char *, int, int);
bool  mg_rpc_send_errorf(void *, int, char *, char *);
void  mg_send(void *, void *, int);
void  mg_set_protocol_http_websocket(void *);
double  mg_time(void);
int  mgos_adc_enable(int);
int  mgos_adc_read(int);
bool  mgos_aws_is_connected();
char * mgos_aws_shadow_event_name(int);
bool  mgos_aws_shadow_get();
double  mgos_aws_shadow_get_last_state_version(void);
void  mgos_aws_shadow_set_state_handler_simple(int (*)(void *, int, char *, char *, char *, char *), void *);
int  mgos_aws_shadow_update_simple(double, char *);
void * mgos_azure_get_c2dd(void);
bool  mgos_azure_is_connected();
bool  mgos_azure_send_d2c_msgp(struct mg_str *, struct mg_str *);
void * mgos_bind(char *, void (*)(void *, int, void *, void *), void *);
void  mgos_bitbang_write_bits_js(int, int, int, void *, int);
void * mgos_bt_gap_get_srdd(void);
char * mgos_bt_gap_parse_name_js(struct mg_str *);
bool  mgos_bt_gap_scan_js(int, bool);
void * mgos_bt_gatt_js_get_conn_def(void);
void * mgos_bt_gatt_js_get_conn_def(void);
bool  mgos_bt_gattc_connect_js(char *);
bool  mgos_bt_gattc_disconnect(int);
bool  mgos_bt_gattc_discover(int);
void * mgos_bt_gattc_js_get_discovery_result_arg_def(void);
void * mgos_bt_gattc_js_get_notify_arg_def(void);
void * mgos_bt_gattc_js_get_read_result_def(void);
bool  mgos_bt_gattc_read(int, int);
bool  mgos_bt_gattc_subscribe(int, int);
bool  mgos_bt_gattc_write_js(int, int, struct mg_str *);
void * mgos_bt_gatts_js_add_char(void *, char *, int);
void  mgos_bt_gatts_js_free_chars(void *);
void * mgos_bt_gatts_js_get_notify_mode_arg_def(void);
void * mgos_bt_gatts_js_get_read_arg_def(void);
void * mgos_bt_gatts_js_get_write_arg_def(void);
void  mgos_bt_gatts_notify_js(void *, int, int, struct mg_str *);
bool  mgos_bt_gatts_register_service(char *, int, void *, int (*)(void *, int, void *, void *), void *);
void  mgos_bt_gatts_send_resp_data_js(void *, void *, struct mg_str *);
void  mgos_clear_timer(int);
void * mgos_conf_find_schema_entry(char *, void *);
double  mgos_conf_value_double(void *, void *);
int  mgos_conf_value_int(void *, void *);
char * mgos_conf_value_string_nonnull(void *, void *);
int  mgos_conf_value_type(void *);
bool  mgos_config_apply(char *, bool);
void * mgos_config_schema();
void * mgos_connect(char *, void (*)(void *, int, void *, void *), void *);
void * mgos_connect_http(char *, void (*)(void *, int, void *, void *), void *);
void * mgos_connect_http_ssl(char *, void (*)(void *, int, void *, void *), void *, char *, char *, char *);
void * mgos_connect_ssl(char *, void (*)(void *, int, void *, void *), void *, char *, char *, char *);
bool  mgos_dash_is_connected();
void  mgos_dash_notify(char *, char *);
int  mgos_debug_event_get_len(void *);
void * mgos_debug_event_get_ptr(void *);
void  mgos_dht_close(void *);
void * mgos_dht_create(int, int);
float  mgos_dht_get_humidity(void *);
float  mgos_dht_get_temp(void *);
void  mgos_disconnect(void *);
void  mgos_esp_deep_sleep_d(double);
bool  mgos_event_add_group_handler(int, void(*)(int, void *, void *), void *);
bool  mgos_event_add_handler(int, void(*)(int, void *, void *), void *);
bool  mgos_event_register_base(int, char *);
int  mgos_event_trigger(int, void *);
bool  mgos_gcp_is_connected();
bool  mgos_gcp_send_eventp(struct mg_str *);
void * mgos_get_body_ptr(void *);
int  mgos_get_free_heap_size();
int  mgos_get_heap_size();
int  mgos_get_mbuf_len(void *);
void * mgos_get_mbuf_ptr(void *);
int  mgos_get_mgstr_len(void *);
int  mgos_get_mgstr_len(void *);
void * mgos_get_mgstr_ptr(void *);
void * mgos_get_mgstr_ptr(void *);
void * mgos_get_msg_ptr(void *);
void * mgos_get_recv_mbuf(void *);
int  mgos_gpio_blink(int, int, int);
int  mgos_gpio_disable_int(int);
int  mgos_gpio_enable_int(int);
int  mgos_gpio_read(int);
int  mgos_gpio_set_button_handler(int,int,int,int,void(*)(int, void *), void *);
int  mgos_gpio_set_int_handler(int,int,void(*)(int,void *),void *);
int  mgos_gpio_set_mode(int,int);
int  mgos_gpio_set_pull(int,int);
int  mgos_gpio_setup_input(int,int);
int  mgos_gpio_setup_output(int,int);
int  mgos_gpio_toggle(int);
void  mgos_gpio_write(int,int);
void  mgos_i2c_close(void *);
void * mgos_i2c_get_global(void);
void * mgos_i2c_get_global(void);
bool  mgos_i2c_read(void *, int, char *, int, bool);
int  mgos_i2c_read_reg_b(void *, int, int);
int  mgos_i2c_read_reg_n(void *, int, int, int, char *);
int  mgos_i2c_read_reg_w(void *, int, int);
void  mgos_i2c_stop(void *);
bool  mgos_i2c_write(void *, int, char *, int, bool);
bool  mgos_i2c_write_reg_b(void *, int, int, int);
int  mgos_i2c_write_reg_n(void *, int, int, int, char *);
bool  mgos_i2c_write_reg_w(void *, int, int, int);
bool  mgos_is_inbound(void *);
void  mgos_log(char *, int, int, char *);
void * mgos_mjs_get_config();
void  mgos_mqtt_add_global_handler(void (*)(void *, int, void *, void *), void *);
bool  mgos_mqtt_global_is_connected();
int  mgos_mqtt_pub(char *, void *, int, int, bool);
void  mgos_mqtt_sub(char *, void (*)(void *, void *, int, void *, int, void *), void *);
void  mgos_neopixel_clear(void *);
void * mgos_neopixel_create(int, int, int);
void  mgos_neopixel_set(void *, int, int, int, int);
void  mgos_neopixel_show(void *);
char * mgos_ota_status_get_msg(void *);
void * mgos_rpc_add_handler(void *, void (*)(void *, char *, char *, void *), void *);
bool  mgos_rpc_call(char *, char *, char *, void (*)(char *, int, char *, void *), void *);
bool  mgos_rpc_send_response(void *, char *);
int  mgos_set_timer(int,int,void(*)(void *),void *);
char * mgos_shadow_event_name(int);
bool  mgos_shadow_get(void);
bool  mgos_shadow_update(double, char *);
void * mgos_spi_create_txn(int, int, int);
void * mgos_spi_get_global(void);
bool  mgos_spi_run_txn(void *, bool, void *);
void  mgos_spi_set_fd_txn(void *, int, void *, void *);
void  mgos_spi_set_hd_txn(void *, int, void *, int, int, void *);
int  mgos_strftime(char *, int, char *, int);
void  mgos_system_restart_after(int);
void * mgos_uart_config_get_default(int);
void  mgos_uart_config_set_basic_params(void *, int, int, int, int);
void  mgos_uart_config_set_rx_params(void *, int, int, int);
void  mgos_uart_config_set_tx_params(void *, int, int);
int  mgos_uart_configure(int, void *);
void  mgos_uart_flush(int);
int  mgos_uart_is_rx_enabled(int);
int  mgos_uart_read(int, void *, int);
int  mgos_uart_read_avail(int);
void  mgos_uart_set_dispatcher(int, void(*)(int, void *), void *);
void  mgos_uart_set_rx_enabled(int, int);
int  mgos_uart_write(int, char *, int);
int  mgos_uart_write_avail(int);
double  mgos_uptime();
void  mgos_usleep(int);
bool  mgos_watson_is_connected();
bool  mgos_watson_send_event_jsonp(struct mg_str *, struct mg_str *);
void  mgos_wdt_feed();
char * mjs_get_bcode_filename_by_offset(void *, int);
int  mjs_get_lineno_by_offset(void *, int);
int  mjs_get_offset_by_call_frame_num(void *, int);
double  mjs_mem_get_int(void *, int, int);
void * mjs_mem_get_ptr(void *, int);
double  mjs_mem_get_uint(void *, int, int);
void  mjs_mem_set_uint(void *, int, int, int);
void * mjs_mem_to_ptr(int);
double  pow(double, double);
int  rand();
int  remove(char *);
int  rename(char *, char *);
double  round(double);
double  sin(double);
double  sqrt(double);
void * strdup(char *);
int  temprature_sens_read(void);

const struct mgos_ffi_export ffi_exports[] = {
  {"ceil", ceil},
  {"cos", cos},
  {"esp32_uart_config_set_fifo", esp32_uart_config_set_fifo},
  {"esp32_uart_config_set_pins", esp32_uart_config_set_pins},
  {"exp", exp},
  {"fabs", fabs},
  {"fclose", fclose},
  {"floor", floor},
  {"fmax", fmax},
  {"fmin", fmin},
  {"fopen", fopen},
  {"fread", fread},
  {"free", free},
  {"free", free},
  {"fwrite", fwrite},
  {"hall_sens_read", hall_sens_read},
  {"log", log},
  {"malloc", malloc},
  {"mbuf_remove", mbuf_remove},
  {"mg_conn_addr_to_str", mg_conn_addr_to_str},
  {"mg_rpc_send_errorf", mg_rpc_send_errorf},
  {"mg_send", mg_send},
  {"mg_set_protocol_http_websocket", mg_set_protocol_http_websocket},
  {"mg_time", mg_time},
  {"mgos_adc_enable", mgos_adc_enable},
  {"mgos_adc_read", mgos_adc_read},
  {"mgos_aws_is_connected", mgos_aws_is_connected},
  {"mgos_aws_shadow_event_name", mgos_aws_shadow_event_name},
  {"mgos_aws_shadow_get", mgos_aws_shadow_get},
  {"mgos_aws_shadow_get_last_state_version", mgos_aws_shadow_get_last_state_version},
  {"mgos_aws_shadow_set_state_handler_simple", mgos_aws_shadow_set_state_handler_simple},
  {"mgos_aws_shadow_update_simple", mgos_aws_shadow_update_simple},
  {"mgos_azure_get_c2dd", mgos_azure_get_c2dd},
  {"mgos_azure_is_connected", mgos_azure_is_connected},
  {"mgos_azure_send_d2c_msgp", mgos_azure_send_d2c_msgp},
  {"mgos_bind", mgos_bind},
  {"mgos_bitbang_write_bits_js", mgos_bitbang_write_bits_js},
  {"mgos_bt_gap_get_srdd", mgos_bt_gap_get_srdd},
  {"mgos_bt_gap_parse_name_js", mgos_bt_gap_parse_name_js},
  {"mgos_bt_gap_scan_js", mgos_bt_gap_scan_js},
  {"mgos_bt_gatt_js_get_conn_def", mgos_bt_gatt_js_get_conn_def},
  {"mgos_bt_gatt_js_get_conn_def", mgos_bt_gatt_js_get_conn_def},
  {"mgos_bt_gattc_connect_js", mgos_bt_gattc_connect_js},
  {"mgos_bt_gattc_disconnect", mgos_bt_gattc_disconnect},
  {"mgos_bt_gattc_discover", mgos_bt_gattc_discover},
  {"mgos_bt_gattc_js_get_discovery_result_arg_def", mgos_bt_gattc_js_get_discovery_result_arg_def},
  {"mgos_bt_gattc_js_get_notify_arg_def", mgos_bt_gattc_js_get_notify_arg_def},
  {"mgos_bt_gattc_js_get_read_result_def", mgos_bt_gattc_js_get_read_result_def},
  {"mgos_bt_gattc_read", mgos_bt_gattc_read},
  {"mgos_bt_gattc_subscribe", mgos_bt_gattc_subscribe},
  {"mgos_bt_gattc_write_js", mgos_bt_gattc_write_js},
  {"mgos_bt_gatts_js_add_char", mgos_bt_gatts_js_add_char},
  {"mgos_bt_gatts_js_free_chars", mgos_bt_gatts_js_free_chars},
  {"mgos_bt_gatts_js_get_notify_mode_arg_def", mgos_bt_gatts_js_get_notify_mode_arg_def},
  {"mgos_bt_gatts_js_get_read_arg_def", mgos_bt_gatts_js_get_read_arg_def},
  {"mgos_bt_gatts_js_get_write_arg_def", mgos_bt_gatts_js_get_write_arg_def},
  {"mgos_bt_gatts_notify_js", mgos_bt_gatts_notify_js},
  {"mgos_bt_gatts_register_service", mgos_bt_gatts_register_service},
  {"mgos_bt_gatts_send_resp_data_js", mgos_bt_gatts_send_resp_data_js},
  {"mgos_clear_timer", mgos_clear_timer},
  {"mgos_conf_find_schema_entry", mgos_conf_find_schema_entry},
  {"mgos_conf_value_double", mgos_conf_value_double},
  {"mgos_conf_value_int", mgos_conf_value_int},
  {"mgos_conf_value_string_nonnull", mgos_conf_value_string_nonnull},
  {"mgos_conf_value_type", mgos_conf_value_type},
  {"mgos_config_apply", mgos_config_apply},
  {"mgos_config_schema", mgos_config_schema},
  {"mgos_connect", mgos_connect},
  {"mgos_connect_http", mgos_connect_http},
  {"mgos_connect_http_ssl", mgos_connect_http_ssl},
  {"mgos_connect_ssl", mgos_connect_ssl},
  {"mgos_dash_is_connected", mgos_dash_is_connected},
  {"mgos_dash_notify", mgos_dash_notify},
  {"mgos_debug_event_get_len", mgos_debug_event_get_len},
  {"mgos_debug_event_get_ptr", mgos_debug_event_get_ptr},
  {"mgos_dht_close", mgos_dht_close},
  {"mgos_dht_create", mgos_dht_create},
  {"mgos_dht_get_humidity", mgos_dht_get_humidity},
  {"mgos_dht_get_temp", mgos_dht_get_temp},
  {"mgos_disconnect", mgos_disconnect},
  {"mgos_esp_deep_sleep_d", mgos_esp_deep_sleep_d},
  {"mgos_event_add_group_handler", mgos_event_add_group_handler},
  {"mgos_event_add_handler", mgos_event_add_handler},
  {"mgos_event_register_base", mgos_event_register_base},
  {"mgos_event_trigger", mgos_event_trigger},
  {"mgos_gcp_is_connected", mgos_gcp_is_connected},
  {"mgos_gcp_send_eventp", mgos_gcp_send_eventp},
  {"mgos_get_body_ptr", mgos_get_body_ptr},
  {"mgos_get_free_heap_size", mgos_get_free_heap_size},
  {"mgos_get_heap_size", mgos_get_heap_size},
  {"mgos_get_mbuf_len", mgos_get_mbuf_len},
  {"mgos_get_mbuf_ptr", mgos_get_mbuf_ptr},
  {"mgos_get_mgstr_len", mgos_get_mgstr_len},
  {"mgos_get_mgstr_len", mgos_get_mgstr_len},
  {"mgos_get_mgstr_ptr", mgos_get_mgstr_ptr},
  {"mgos_get_mgstr_ptr", mgos_get_mgstr_ptr},
  {"mgos_get_msg_ptr", mgos_get_msg_ptr},
  {"mgos_get_recv_mbuf", mgos_get_recv_mbuf},
  {"mgos_gpio_blink", mgos_gpio_blink},
  {"mgos_gpio_disable_int", mgos_gpio_disable_int},
  {"mgos_gpio_enable_int", mgos_gpio_enable_int},
  {"mgos_gpio_read", mgos_gpio_read},
  {"mgos_gpio_set_button_handler", mgos_gpio_set_button_handler},
  {"mgos_gpio_set_int_handler", mgos_gpio_set_int_handler},
  {"mgos_gpio_set_mode", mgos_gpio_set_mode},
  {"mgos_gpio_set_pull", mgos_gpio_set_pull},
  {"mgos_gpio_setup_input", mgos_gpio_setup_input},
  {"mgos_gpio_setup_output", mgos_gpio_setup_output},
  {"mgos_gpio_toggle", mgos_gpio_toggle},
  {"mgos_gpio_write", mgos_gpio_write},
  {"mgos_i2c_close", mgos_i2c_close},
  {"mgos_i2c_get_global", mgos_i2c_get_global},
  {"mgos_i2c_get_global", mgos_i2c_get_global},
  {"mgos_i2c_read", mgos_i2c_read},
  {"mgos_i2c_read_reg_b", mgos_i2c_read_reg_b},
  {"mgos_i2c_read_reg_n", mgos_i2c_read_reg_n},
  {"mgos_i2c_read_reg_w", mgos_i2c_read_reg_w},
  {"mgos_i2c_stop", mgos_i2c_stop},
  {"mgos_i2c_write", mgos_i2c_write},
  {"mgos_i2c_write_reg_b", mgos_i2c_write_reg_b},
  {"mgos_i2c_write_reg_n", mgos_i2c_write_reg_n},
  {"mgos_i2c_write_reg_w", mgos_i2c_write_reg_w},
  {"mgos_is_inbound", mgos_is_inbound},
  {"mgos_log", mgos_log},
  {"mgos_mjs_get_config", mgos_mjs_get_config},
  {"mgos_mqtt_add_global_handler", mgos_mqtt_add_global_handler},
  {"mgos_mqtt_global_is_connected", mgos_mqtt_global_is_connected},
  {"mgos_mqtt_pub", mgos_mqtt_pub},
  {"mgos_mqtt_sub", mgos_mqtt_sub},
  {"mgos_neopixel_clear", mgos_neopixel_clear},
  {"mgos_neopixel_create", mgos_neopixel_create},
  {"mgos_neopixel_set", mgos_neopixel_set},
  {"mgos_neopixel_show", mgos_neopixel_show},
  {"mgos_ota_status_get_msg", mgos_ota_status_get_msg},
  {"mgos_rpc_add_handler", mgos_rpc_add_handler},
  {"mgos_rpc_call", mgos_rpc_call},
  {"mgos_rpc_send_response", mgos_rpc_send_response},
  {"mgos_set_timer", mgos_set_timer},
  {"mgos_shadow_event_name", mgos_shadow_event_name},
  {"mgos_shadow_get", mgos_shadow_get},
  {"mgos_shadow_update", mgos_shadow_update},
  {"mgos_spi_create_txn", mgos_spi_create_txn},
  {"mgos_spi_get_global", mgos_spi_get_global},
  {"mgos_spi_run_txn", mgos_spi_run_txn},
  {"mgos_spi_set_fd_txn", mgos_spi_set_fd_txn},
  {"mgos_spi_set_hd_txn", mgos_spi_set_hd_txn},
  {"mgos_strftime", mgos_strftime},
  {"mgos_system_restart_after", mgos_system_restart_after},
  {"mgos_uart_config_get_default", mgos_uart_config_get_default},
  {"mgos_uart_config_set_basic_params", mgos_uart_config_set_basic_params},
  {"mgos_uart_config_set_rx_params", mgos_uart_config_set_rx_params},
  {"mgos_uart_config_set_tx_params", mgos_uart_config_set_tx_params},
  {"mgos_uart_configure", mgos_uart_configure},
  {"mgos_uart_flush", mgos_uart_flush},
  {"mgos_uart_is_rx_enabled", mgos_uart_is_rx_enabled},
  {"mgos_uart_read", mgos_uart_read},
  {"mgos_uart_read_avail", mgos_uart_read_avail},
  {"mgos_uart_set_dispatcher", mgos_uart_set_dispatcher},
  {"mgos_uart_set_rx_enabled", mgos_uart_set_rx_enabled},
  {"mgos_uart_write", mgos_uart_write},
  {"mgos_uart_write_avail", mgos_uart_write_avail},
  {"mgos_uptime", mgos_uptime},
  {"mgos_usleep", mgos_usleep},
  {"mgos_watson_is_connected", mgos_watson_is_connected},
  {"mgos_watson_send_event_jsonp", mgos_watson_send_event_jsonp},
  {"mgos_wdt_feed", mgos_wdt_feed},
  {"mjs_get_bcode_filename_by_offset", mjs_get_bcode_filename_by_offset},
  {"mjs_get_lineno_by_offset", mjs_get_lineno_by_offset},
  {"mjs_get_offset_by_call_frame_num", mjs_get_offset_by_call_frame_num},
  {"mjs_mem_get_int", mjs_mem_get_int},
  {"mjs_mem_get_ptr", mjs_mem_get_ptr},
  {"mjs_mem_get_uint", mjs_mem_get_uint},
  {"mjs_mem_set_uint", mjs_mem_set_uint},
  {"mjs_mem_to_ptr", mjs_mem_to_ptr},
  {"pow", pow},
  {"rand", rand},
  {"remove", remove},
  {"rename", rename},
  {"round", round},
  {"sin", sin},
  {"sqrt", sqrt},
  {"strdup", strdup},
  {"temprature_sens_read", temprature_sens_read},
};
const int ffi_exports_cnt = 183;
