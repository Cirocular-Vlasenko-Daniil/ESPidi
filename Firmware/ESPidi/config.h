#ifndef CONFIG_H
#define CONFIG_H

#include <ESPidiHub.h>

// Карта пинов ESPidi — из SDK ESPidi HUB
#define SDA_PIN     espidi::pin::OLED_SDA
#define SCL_PIN     espidi::pin::OLED_SCL
#define ENC_A       espidi::pin::ENC_A
#define ENC_B       espidi::pin::ENC_B
#define ENC_BTN     espidi::pin::ENC_SW
#define BTN_L_R     espidi::pin::PAGE
#define BTN_TAP     espidi::pin::TAP
#define BTN_PLAY    espidi::pin::PLAY
#define MIDI_RX     espidi::pin::MIDI_RX
#define MIDI_TX     espidi::pin::MIDI_TX

#define OLED_WIDTH  espidi::OLED_WIDTH
#define OLED_HEIGHT espidi::OLED_HEIGHT
#define OLED_ADDR   espidi::OLED_ADDR

#define MAX_HELD_NOTES 8

#define DEBOUNCE_MS     30
#define LONG_PRESS_MS   600
#define TAP_TIMEOUT_MS  2000
#define SAVE_DELAY_MS 5000

// Адреса EEPROM. Блоки идут подряд и не перекрываются; макросы с sizeof() раскрываются там,
// где подключены arp.h / seq_mel.h / seq_song.h / settings.h (midi_handler.cpp).
// При изменении раскладки увеличьте EEPROM_LAYOUT_VERSION: старые данные будут проигнорированы.
#define EEPROM_LAYOUT_VERSION 0xE2
#define EEPROM_VERSION      0   // байт версии раскладки
#define EEPROM_APP_TYPE     1   // текущее приложение
#define EEPROM_SEQ_DATA     2   // номер текущего паттерна
#define EEPROM_SONG_DATA    3   // номер текущей песни
#define EEPROM_ARP_PARAMS   4
#define EEPROM_SEQ_PARAMS   (EEPROM_ARP_PARAMS + sizeof(ArpParams))
#define EEPROM_SONG_PARAMS  (EEPROM_SEQ_PARAMS + sizeof(MelSeqParams))
#define EEPROM_SETTINGS     (EEPROM_SONG_PARAMS + sizeof(SongParams))

#define VISIBLE_ROWS 3
#define MAX_PATTERNS 64
#define PATTERN_DIR "/espidi_ex/patterns"   // FW_DIR из storage.h

#endif