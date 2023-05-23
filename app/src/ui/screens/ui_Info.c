// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: Thermostat

#include "../ui.h"

void ui_Info_screen_init(void)
{
    ui_Info = lv_obj_create(NULL);
    lv_obj_add_state(ui_Info, LV_STATE_USER_1);       /// States
    lv_obj_clear_flag(ui_Info, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                      LV_OBJ_FLAG_SCROLL_MOMENTUM);      /// Flags
    lv_obj_set_scrollbar_mode(ui_Info, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ui_Info, lv_color_hex(0xB787E2), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Info, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Info, lv_color_hex(0xBE5757), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Info, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WifiConnectedLabel = lv_label_create(ui_Info);
    lv_obj_set_width(ui_WifiConnectedLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WifiConnectedLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WifiConnectedLabel, 7);
    lv_obj_set_y(ui_WifiConnectedLabel, -100);
    lv_obj_set_align(ui_WifiConnectedLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_WifiConnectedLabel, "Connected:");

    ui_WifiConnCheckBox = lv_checkbox_create(ui_Info);
    lv_checkbox_set_text(ui_WifiConnCheckBox, "");
    lv_obj_set_width(ui_WifiConnCheckBox, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WifiConnCheckBox, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WifiConnCheckBox, 96);
    lv_obj_set_y(ui_WifiConnCheckBox, 10);
    lv_obj_add_flag(ui_WifiConnCheckBox, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags

    lv_obj_set_style_bg_color(ui_WifiConnCheckBox, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WifiConnCheckBox, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_WifiConnCheckBox, 1, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_WifiSsidLabel = lv_label_create(ui_Info);
    lv_obj_set_width(ui_WifiSsidLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WifiSsidLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WifiSsidLabel, 140);
    lv_obj_set_y(ui_WifiSsidLabel, -100);
    lv_obj_set_align(ui_WifiSsidLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_WifiSsidLabel, "SSID:");

    ui_IPLabel = lv_label_create(ui_Info);
    lv_obj_set_width(ui_IPLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_IPLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_IPLabel, 7);
    lv_obj_set_y(ui_IPLabel, -74);
    lv_obj_set_align(ui_IPLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_IPLabel, "IP Address:");

    ui_HostnameLabel = lv_label_create(ui_Info);
    lv_obj_set_width(ui_HostnameLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_HostnameLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_HostnameLabel, 7);
    lv_obj_set_y(ui_HostnameLabel, -48);
    lv_obj_set_align(ui_HostnameLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_HostnameLabel, "Hostname:");

    ui_RssiLabel = lv_label_create(ui_Info);
    lv_obj_set_width(ui_RssiLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RssiLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_RssiLabel, 7);
    lv_obj_set_y(ui_RssiLabel, -22);
    lv_obj_set_align(ui_RssiLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_RssiLabel, "Signal:");

    ui_FwVersionLabel = lv_label_create(ui_Info);
    lv_obj_set_width(ui_FwVersionLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_FwVersionLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_FwVersionLabel, 7);
    lv_obj_set_y(ui_FwVersionLabel, 4);
    lv_obj_set_align(ui_FwVersionLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_FwVersionLabel, "Firmware:");

    ui_BuildDateLabel = lv_label_create(ui_Info);
    lv_obj_set_width(ui_BuildDateLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BuildDateLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_BuildDateLabel, 7);
    lv_obj_set_y(ui_BuildDateLabel, 30);
    lv_obj_set_align(ui_BuildDateLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_BuildDateLabel, "Build Date:");

    ui_CopyrightLabel = lv_label_create(ui_Info);
    lv_obj_set_width(ui_CopyrightLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CopyrightLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CopyrightLabel, 7);
    lv_obj_set_y(ui_CopyrightLabel, 56);
    lv_obj_set_align(ui_CopyrightLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_long_mode(ui_CopyrightLabel, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_label_set_text(ui_CopyrightLabel, "Copyright: ");
    lv_obj_set_style_text_align(ui_CopyrightLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HomeBtn = lv_btn_create(ui_Info);
    lv_obj_set_width(ui_HomeBtn, 100);
    lv_obj_set_height(ui_HomeBtn, 36);
    lv_obj_set_x(ui_HomeBtn, -2);
    lv_obj_set_y(ui_HomeBtn, -3);
    lv_obj_set_align(ui_HomeBtn, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_HomeBtn, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_HomeBtn, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_HomeBtn, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HomeBtn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_HomeBtn, lv_color_hex(0x2620F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_HomeBtn, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HomeLabel = lv_label_create(ui_Info);
    lv_obj_set_width(ui_HomeLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_HomeLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_HomeLabel, -30);
    lv_obj_set_y(ui_HomeLabel, -14);
    lv_obj_set_align(ui_HomeLabel, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_HomeLabel, "Home");
    lv_obj_set_style_text_color(ui_HomeLabel, lv_color_hex(0xFFE300), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_HomeLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_HomeBtn, ui_event_HomeBtn, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Info, ui_event_Info, LV_EVENT_ALL, NULL);

}