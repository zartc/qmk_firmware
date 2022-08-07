# Enable additional features.
SRC += encoder_actions.c

# Disabling MouseKey because it may breaks KVM switch (and it is not used anyway)
MOUSEKEY_ENABLE = no

CAPS_WORD_ENABLE = yes
COMMAND_ENABLE = no
