// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: Thermostat

#ifndef _THERMOSTAT_UI_H
#define _THERMOSTAT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
void ui_event_Screen1(lv_event_t * e);
extern lv_obj_t * ui_Screen1;
void ui_event_Time(lv_event_t * e);
extern lv_obj_t * ui_Time;
void ui_event_Label1(lv_event_t * e);
extern lv_obj_t * ui_Label1;
void ui_event_Temp(lv_event_t * e);
extern lv_obj_t * ui_Temp;
void ui_event_Humidity(lv_event_t * e);
extern lv_obj_t * ui_Humidity;
void ui_event_ModeDropdown(lv_event_t * e);
extern lv_obj_t * ui_ModeDropdown;
extern lv_obj_t * ui_ConfigButton;
extern lv_obj_t * ui_SetupBtn;
void ui_event_Arc2(lv_event_t * e);
extern lv_obj_t * ui_Arc2;
extern lv_obj_t * ui_SetTemp;
void ui_event_Panel1(lv_event_t * e);
extern lv_obj_t * ui_Panel1;
extern lv_obj_t * ui_Label4;
void ui_event_Panel2(lv_event_t * e);
extern lv_obj_t * ui_Panel2;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui____initial_actions0;

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif