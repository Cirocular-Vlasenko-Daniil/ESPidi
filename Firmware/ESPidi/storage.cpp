#include "storage.h"

EEPROMClass settingsStore(FW_ID);

bool files_mount() {
    static int8_t state = -1;   // -1 — ещё не пробовали, 0 — нет, 1 — смонтировано
    if (state < 0) {
        state = espidi::mountFiles() ? 1 : 0;
        if (state) espidi::dataDir(FW_ID);
    }
    return state == 1;
}
