#ifndef STORAGE_H
#define STORAGE_H

// Хранилище под ESPidi HUB: NVS и LittleFS общие для всех прошивок на плате,
// поэтому настройки — в своём NVS-пространстве, файлы — в своей папке.
#include <EEPROM.h>
#include <ESPidiHub.h>

#define FW_ID "espidi_ex"   // = id в ESPIDI_FIRMWARE(), NVS-пространство и папка файлов
#define FW_DIR "/" FW_ID

extern EEPROMClass settingsStore;   // EEPROM-эмуляция в NVS-пространстве FW_ID

// Монтирует общий LittleFS (без форматирования чужих данных) и создаёт FW_DIR.
bool files_mount();

#endif
