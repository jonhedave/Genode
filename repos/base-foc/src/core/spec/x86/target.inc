LD_TEXT_ADDR = 0x500000
REQUIRES    += x86
SRC_CC      += io_port_session_component.cc \
               spec/x86/ipc_pager.cc \
               spec/x86/platform.cc

vpath io_port_session_component.cc $(BASE_DIR)/src/core/spec/x86
vpath platform_services.cc         $(BASE_DIR)/src/core/spec/x86

include $(REP_DIR)/src/core/target.inc
