include $(THEOS)/makefiles/common.mk

BUNDLE_NAME = VirtualCamPro

VirtualCamPro_FILES = VCPRootListController.m
VirtualCamPro_FRAMEWORKS = UIKit Foundation
VirtualCamPro_INSTALL_PATH = /Library/PreferenceBundles
VirtualCamPro_CFLAGS = -fobjc-arc -I$(THEOS_PROJECT_DIR)/prefs
VirtualCamPro_LDFLAGS += -undefined dynamic_lookup

include $(THEOS_MAKE_PATH)/bundle.mk