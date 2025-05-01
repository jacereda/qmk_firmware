// clang-format off

const uint16_t PROGMEM resetl_combo[] = {KC_QUOT, KC_COMM, KC_DOT, KC_P, COMBO_END};
const uint16_t PROGMEM bootloaderl_combo[] = {KC_COMM, KC_DOT, KC_P, KC_Y, COMBO_END};
const uint16_t PROGMEM esc_combo[] = {KC_O, KC_E, COMBO_END};
const uint16_t PROGMEM grv_combo[] = {KC_O, KC_U, COMBO_END};
const uint16_t PROGMEM lbrc_combo[] = {KC_E, KC_U, COMBO_END};
const uint16_t PROGMEM rbrc_combo[] = {KC_U, KC_I, COMBO_END};

const uint16_t PROGMEM resetr_combo[] = {KC_G, KC_C, KC_R, KC_L, COMBO_END};
const uint16_t PROGMEM bootloaderr_combo[] = {KC_F, KC_G, KC_C, KC_R, COMBO_END};
const uint16_t PROGMEM bsls_combo[] = {KC_D, KC_H, COMBO_END};
const uint16_t PROGMEM slsh_combo[] = {KC_H, KC_T, COMBO_END};
const uint16_t PROGMEM mins_combo[] = {KC_H, KC_N, COMBO_END};
const uint16_t PROGMEM eql_combo[] = {KC_T, KC_N, COMBO_END};
const uint16_t PROGMEM ent_combo[] = {KC_H, KC_T, KC_N, COMBO_END};
const uint16_t PROGMEM ent2_combo[] = {KC_H, KC_T, KC_N, KC_S, COMBO_END};

combo_t key_combos[] = {
    COMBO(resetl_combo, QK_REBOOT),
    COMBO(bootloaderl_combo, QK_BOOTLOADER),
    COMBO(esc_combo, KC_ESC),
    COMBO(grv_combo, KC_GRV),
    COMBO(lbrc_combo, KC_LBRC),
    COMBO(rbrc_combo, KC_RBRC),

    COMBO(resetr_combo, QK_REBOOT),
    COMBO(bootloaderr_combo, QK_BOOTLOADER),
    COMBO(bsls_combo, KC_BSLS),
    COMBO(slsh_combo, KC_SLSH),
    COMBO(eql_combo, KC_EQL),
    COMBO(mins_combo, KC_MINS),
    COMBO(ent_combo, KC_ENT),
    COMBO(ent2_combo, KC_ENT),
};
