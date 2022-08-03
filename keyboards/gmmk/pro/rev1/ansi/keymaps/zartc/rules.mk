# Enable additional features.
SRC += encoder_actions.c

# https://github.com/qmk/qmk_firmware/issues/6269
DEBOUNCE_TYPE = sym_defer_g


# Disabling MouseKey because it may breaks KVM switch (and it is not used anyway)
MOUSEKEY_ENABLE = no
