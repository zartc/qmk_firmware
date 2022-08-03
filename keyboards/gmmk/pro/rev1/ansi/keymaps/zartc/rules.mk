# Enable additional features.
SRC += encoder_actions.c

DEBOUNCE_TYPE = sym_defer_g
DEBOUNCE = 45
# https://github.com/qmk/qmk_firmware/issues/6269
# After some experimentation, I fixed mine with DEBOUNCE=15 and DEBOUNCE_TYPE = sym_g



# Disabling MouseKey because it may breaks KVM switch
MOUSEKEY_ENABLE = no
