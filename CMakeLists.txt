add_library(stm_automatic ${CMAKE_CURRENT_SOURCE_DIR}/control_drive_ert_rtw/control_drive.c)
add_library(stm_manual    ${CMAKE_CURRENT_SOURCE_DIR}/control_drive_manual_ert_rtw/control_drive_manual.c)
add_library(webots_manual ${CMAKE_CURRENT_SOURCE_DIR}/control_drive_manual_webots_ert_rtw/control_drive_manual_webots.c)
