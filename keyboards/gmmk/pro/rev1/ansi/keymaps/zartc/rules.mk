# Enable additional features.
SRC += encoder_actions.c

WAIT_FOR_USB = yes

# Disabling MouseKey because it may breaks KVM switch (and it is not used anyway)
MOUSEKEY_ENABLE = no

CAPS_WORD_ENABLE = no
COMMAND_ENABLE = no
NKRO_ENABLE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
COMBO_ENABLE = no
AUDIO_ENABLE = no
KEY_OVERRIDE_ENABLE = no
LEADER_ENABLE = no
MIDI_ENABLE = no
BLUETOOTH_ENABLE = no
SPLIT_KEYBOARD = no
