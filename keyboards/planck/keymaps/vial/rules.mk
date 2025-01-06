ifeq ($(strip $(AUDIO_ENABLE)), yes)
    SRC += muse.c
endif

VIA_ENABLE = yes
VIAL_ENABLE = yes
VIAL_INSECURE = yes
CAPS_WORD_ENABLE = yes
