/*
 *	airRohr firmware
 *	Copyright (C) 2016-2018  Code for Stuttgart a.o.
 * 
 *  Czech translations
 * 
 *	Texts should be as short as possible
 *	We only have 512 kB for the entire firmware
 */

const char INTL_LANG[] = "CZ";
const char INTL_PM_SENSOR[] PROGMEM = "Senzor prachových èástic";
const char INTL_CONFIGURATION[] PROGMEM = "Konfigurace";
const char INTL_WIFI_SETTINGS[] PROGMEM = "Nastavení Wi-Fi";
const char INTL_WIFI_NETWORKS[] PROGMEM = "Vyhledávání Wi-Fi sítí ...";
const char INTL_LANGUAGE[] PROGMEM = "Jazyk";
const char INTL_NO_NETWORKS[] PROGMEM = "Žádné Wi-Fi sítì v dosahu.";
const char INTL_NETWORKS_FOUND[] PROGMEM = "Dostupné sítì: ";
const char INTL_AB_HIER_NUR_ANDERN[] PROGMEM = "Rozšíøené nastavení (jen pokud víte jistì, co dìláte)";
const char INTL_SAVE[] PROGMEM = "Uložit";
const char INTL_SENSORS[] PROGMEM = "Moduly (èidla)";
const char INTL_SDS011[] PROGMEM = "SDS011 (modul {pm})";
const char INTL_PMS[] PROGMEM = "Plantower PMS(1,3,5,6,7)003 (modul {pm})";
const char INTL_HPM[] PROGMEM = "Honeywell PM modul";
const char INTL_PPD42NS[] PROGMEM = "PPD42NS";
const char INTL_DHT22[] PROGMEM = "DHT22 ({t}, {h})";
const char INTL_HTU21D[] PROGMEM = "HTU21D ({t}, {h})";
const char INTL_BMP180[] PROGMEM = "BMP180 ({t}, {p})";
const char INTL_BMP280[] PROGMEM = "BMP280 ({t}, {p})";
const char INTL_BME280[] PROGMEM = "BME280 ({t}, {h}, {p})";
const char INTL_DS18B20[] PROGMEM = "DS18B20 ({t})";
const char INTL_NEO6M[] PROGMEM = "GPS (NEO 6M)";
const char INTL_BASICAUTH[] PROGMEM = "Pøihlášení (heslem)";
const char INTL_FS_WIFI[] PROGMEM = "Wi-Fi modul";
const char INTL_FS_WIFI_DESCRIPTION[] PROGMEM = "Wi-Fi modul v konfiguraèním módu";
const char INTL_FS_WIFI_NAME[] PROGMEM = "Název";
const char INTL_MORE_SETTINGS[] PROGMEM = "Další nastavení";
const char INTL_AUTO_UPDATE[] PROGMEM = "Autom. aktualizace";
const char INTL_USE_BETA[] PROGMEM = "Nahrát betaverzi";
const char INTL_DISPLAY[] PROGMEM = "OLED SSD1306";
const char INTL_SH1106[] PROGMEM = "OLED SH1106";
const char INTL_LCD1602_27[] PROGMEM = "LCD 1602 (I2C: 0x27)";
const char INTL_LCD1602_3F[] PROGMEM = "LCD 1602 (I2C: 0x3F)";
const char INTL_LCD2004_27[] PROGMEM = "LCD 2004 (I2C: 0x27)";
const char INTL_DEBUG_LEVEL[] PROGMEM = "Ladìní&nbsp;Úroveò";
const char INTL_MEASUREMENT_INTERVAL[] PROGMEM = "Interval mìøení";
const char INTL_DURATION_ROUTER_MODE[] PROGMEM = "Trvání&nbsp;Mód routeru";
const char INTL_MORE_APIS[] PROGMEM = "Další API";
const char INTL_SEND_TO_OWN_API[] PROGMEM = "Poslat data na vlastní API";
const char INTL_SERVER[] PROGMEM = "Server"; 
const char INTL_PATH[] PROGMEM = "Cesta"; 
const char INTL_PORT[] PROGMEM = "Port"; 
const char INTL_USER[] PROGMEM = "Uživatel"; 
const char INTL_PASSWORD[] PROGMEM = "Heslo"; 
const char INTL_SEND_TO[] PROGMEM = "Odeslat na {v}"; 
const char INTL_READ_FROM[] PROGMEM = "Èti z {v}";
const char INTL_SENSOR_IS_REBOOTING[] PROGMEM = "Zaøízení bude restartováno";
const char INTL_RESTART_DEVICE[] PROGMEM = "Restartovat zaøízení";
const char INTL_DELETE_CONFIG[] PROGMEM = "Smazat Config.json";
const char INTL_RESTART_SENSOR[] PROGMEM = "Restart senzoru";
const char INTL_HOME[] PROGMEM = "Hlavní stránka";
const char INTL_BACK_TO_HOME[] PROGMEM = "Zpìt na hlavní stránku";
const char INTL_CURRENT_DATA[] PROGMEM = "Aktuální hodnoty";
const char INTL_ACTIVE_SENSORS_MAP[] PROGMEM = "Mapa aktivních senzorù (externí odkaz)";
const char INTL_CONFIGURATION_DELETE[] PROGMEM = "Smazat konfiguraci";
const char INTL_CONFIGURATION_REALLY_DELETE[] PROGMEM = "Opravdu smazat konfiguraci?";
const char INTL_DELETE[] PROGMEM = "Smazat";
const char INTL_CANCEL[] PROGMEM = "Zrušit";
const char INTL_REALLY_RESTART_SENSOR[] PROGMEM = "Opravdu restartovat senzor";
const char INTL_RESTART[] PROGMEM = "Restartovat";
const char INTL_SAVE_AND_RESTART[] PROGMEM = "Uložit a restartovat";
const char INTL_FIRMWARE[] PROGMEM = "Firmware verze";
const char INTL_DEBUG_SETTING_TO[] PROGMEM = "Ladìní nastaveno na";
const char INTL_NONE[] PROGMEM = "žádný";
const char INTL_ERROR[] PROGMEM = "chyba";
const char INTL_WARNING[] PROGMEM = "varování";
const char INTL_MIN_INFO[] PROGMEM = "min. info";
const char INTL_MED_INFO[] PROGMEM = "stø. info";
const char INTL_MAX_INFO[] PROGMEM = "max. info";
const char INTL_CONFIG_DELETED[] PROGMEM = "Config.json smazán";
const char INTL_CONFIG_CAN_NOT_BE_DELETED[] PROGMEM = "Config.json nemohl být smazán";
const char INTL_CONFIG_NOT_FOUND[] PROGMEM = "Config.json nenalezen";
const char INTL_TIME_TO_FIRST_MEASUREMENT[] PROGMEM = "Zbývá {v} sekund do prvního mìøení.";
const char INTL_TIME_SINCE_LAST_MEASUREMENT[] PROGMEM = " sekund od posledního mìøení.";
const char INTL_PARTICLES_PER_LITER[] PROGMEM = "èástice/litr";
const char INTL_PARTICULATE_MATTER[] PROGMEM = "prachových èástic";
const char INTL_TEMPERATURE[] PROGMEM = "teplota";
const char INTL_HUMIDITY[] PROGMEM = "rel. vlhkost";
const char INTL_PRESSURE[] PROGMEM = "tlak vzduchu";
const char INTL_LATITUDE[] PROGMEM = "Zem. šíøka";
const char INTL_LONGITUDE[] PROGMEM = "Zem. délka";
const char INTL_ALTITUDE[] PROGMEM = "Nadm. výška";
const char INTL_DATE[] PROGMEM = "Datum";
const char INTL_TIME[] PROGMEM = "Èas";
const char INTL_SIGNAL_STRENGTH[] PROGMEM = "Síla signálu";
const char INTL_SIGNAL_QUALITY[] PROGMEM = "Kvalita signálu";
const char INTL_NUMBER_OF_MEASUREMENTS[] PROGMEM = "Poèet mìøení:";
const char INTL_SENSOR[] PROGMEM = "Modul";
const char INTL_PARAMETER[] PROGMEM = "Parametr";
const char INTL_VALUE[] PROGMEM = "Hodnota";

const char LUFTDATEN_INFO_LOGO_SVG[] PROGMEM = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\
<svg viewBox=\"0 0 350 350\" xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\">\
<defs>\
<path id=\"d\" d=\"m284.38 273.35v-62.5c-1.77-23.65-9.32-42.14-22.65-55.48-13.33-13.33-30.76-20.88-52.27-22.64h-34.46-29.37c-24.67 2.77-43.66 10.82-57 24.16-13.33 13.33-21 31.32-23 53.96v62.5\"/>\
<path id=\"c\" d=\"m177.6 188.56v-112 112z\"/>\
<path id=\"a\" d=\"m171.92 76.73c5.82 0 10.53 4.71 10.53 10.52v90.95c0 5.82-4.71 10.53-10.53 10.53h-17.2c-5.82 0-10.53-4.71-10.53-10.53v-90.95c0-5.81 4.71-10.52 10.53-10.52h17.2z\"/>\
<path id=\"e\" d=\"m228.81 248.48h112-112z\"/>\
<path id=\"b\" d=\"m340.81 243.19c0 5.82-4.71 10.53-10.52 10.53h-90.95c-5.81 0-10.53-4.71-10.53-10.53v-17.21c0-5.81 4.72-10.52 10.53-10.52h90.95c5.81 0 10.52 4.71 10.52 10.52v17.21z\"/>\
</defs>\
<use fill-opacity=\"0\" stroke=\"#e0e0e0\" stroke-width=\"100\" xlink:href=\"#d\"/>\
<use fill-opacity=\"0\" stroke=\"#e0e0e0\" stroke-width=\"50\" xlink:href=\"#c\"/>\
<use fill=\"#e0e0e0\" xlink:href=\"#a\"/>\
<use fill-opacity=\"0\" stroke=\"#e0e0e0\" stroke-width=\"50\" xlink:href=\"#e\"/>\
<use fill=\"#e0e0e0\" xlink:href=\"#b\"/>\
</svg>";
