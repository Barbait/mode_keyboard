#ifndef LAYOUT_SYMBOLS_H
#define LAYOUT_SYMBOLS_H

#include "main.h"

LayoutKey symbolsLayout[rowsCount][columnsCount] = {
  {
    { KEY_NOOP, COLOR_BLACK },
    { KEY_NOOP, COLOR_BLACK },
    { KEY_SYMBOL_EXCLAMATION_MARK, COLOR_WHITE },
    { KEY_SYMBOL_COMMERCIAL_A, COLOR_WHITE },
    { KEY_SYMBOL_SHARP, COLOR_WHITE },
    { KEY_SYMBOL_DOLLAR, COLOR_WHITE },
    { KEY_SYMBOL_PERCENT, COLOR_WHITE },
    { KEY_SYMBOL_ASTERIX, COLOR_WHITE },
    { KEY_NOOP, COLOR_BLACK },
    { KEY_NOOP, COLOR_BLACK },
    { KEY_NOOP, COLOR_BLACK },
    { KEY_NOOP, COLOR_BLACK },
    { KEY_NOOP, COLOR_BLACK }
  },
  {
    { KEY_NOOP, COLOR_BLACK },
    { KEY_NOOP, COLOR_BLACK },
    { KEY_SYMBOL_CIRCUMFLEX, COLOR_WHITE },
    { KEY_BACKTICK, COLOR_WHITE },
    { KEY_SYMBOL_UNDERSCORE, COLOR_WHITE },
    { KEY_BACKSLASH, COLOR_WHITE },
    { KEY_SYMBOL_PIPE, COLOR_WHITE },
    { KEY_SLASH, COLOR_WHITE },
    { KEY_NOOP, COLOR_BLACK },
    { KEY_NOOP, COLOR_BLACK },
    { KEY_NOOP, COLOR_BLACK },
    { KEY_NOOP, COLOR_BLACK },
    { KEY_NOOP, COLOR_BLACK }
  },
  {
    { KEY_NOOP, COLOR_BLACK },
    { MODIFIERKEY_SHIFT, COLOR_FUCHSIA },
    { KEY_NOOP, COLOR_BLACK },
    { KEY_NOOP, COLOR_BLACK },
    { KEY_QUOTE, COLOR_WHITE },
    { KEY_SYMBOL_DOUBLE_QUOTE, COLOR_WHITE },
    { KEY_COMMA, COLOR_WHITE },
    { KEY_PERIOD, COLOR_WHITE },
    { KEY_NOOP, COLOR_BLACK },
    { KEY_NOOP, COLOR_BLACK },
    { KEY_NOOP, COLOR_BLACK },
    { KEY_NOOP, COLOR_BLACK },
    { KEY_NOOP, COLOR_BLACK }
  },
  {
    { KEY_LAYOUT_SYMBOLS, COLOR_BLACK },
    { MODIFIERKEY_CTRL, COLOR_FUCHSIA },
    { MODIFIERKEY_GUI, COLOR_FUCHSIA },
    { MODIFIERKEY_ALT, COLOR_FUCHSIA },
    { KEY_SYMBOL_LEFT_CHEVRON, COLOR_WHITE },
    { KEY_SYMBOL_RIGHT_CHEVRON, COLOR_WHITE },
    { KEY_SYMBOL_LEFT_BRACE, COLOR_WHITE },
    { KEY_SYMBOL_RIGHT_BRACE, COLOR_WHITE },
    { KEY_EQUAL, COLOR_WHITE },
    { KEY_NOOP, COLOR_BLACK },
    { KEY_HOME, COLOR_BLACK },
    { KEY_NOOP, COLOR_BLACK },
    { KEY_NOOP, COLOR_BLACK }
  }
};

#endif
