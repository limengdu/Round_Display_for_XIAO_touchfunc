// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.2.3
// LVGL version: 8.3.4
// Project name: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t *ui_Screen1;
lv_obj_t *ui_Roller2;
lv_obj_t *ui____initial_actions0;
const lv_img_dsc_t *ui_imgset_bleon[1] = {&ui_img_bleon2_png};
const lv_img_dsc_t *ui_imgset_1858024365[1] = {&ui_img_364787093};
const lv_img_dsc_t *ui_imgset_minute_[1] = {&ui_img_minute_80_png};
const lv_img_dsc_t *ui_imgset_2027695788[1] = {&ui_img_1387450172};
const lv_img_dsc_t *ui_imgset_people[2] = {&ui_img_people1_png, &ui_img_people2_png};
const lv_img_dsc_t *ui_imgset_second_[1] = {&ui_img_second_120_png};
const lv_img_dsc_t *ui_imgset_17248525[1] = {&ui_img_827571443};
const lv_img_dsc_t *ui_imgset_up[1] = {&ui_img_up2_png};
const lv_img_dsc_t *ui_imgset_wifioff[1] = {&ui_img_wifioff2_png};
const lv_img_dsc_t *ui_imgset_wifioff_[2] = {&ui_img_wifioff_40_png, &ui_img_wifioff_45_png};
const lv_img_dsc_t *ui_imgset_wifion[1] = {&ui_img_wifion2_png};
const lv_img_dsc_t *ui_imgset_1456443776[1] = {&ui_img_171461417};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Roller2 = lv_roller_create(ui_Screen1);
lv_roller_set_options( ui_Roller2, "Option 1\nOption 2\nOption 3\nOption 4\nOption 5\nOption 6\nOption 7\nOption 8\nOption 9", LV_ROLLER_MODE_NORMAL );
lv_obj_set_height( ui_Roller2, 193);
lv_obj_set_width( ui_Roller2, LV_SIZE_CONTENT);  /// 20
lv_obj_set_align( ui_Roller2, LV_ALIGN_CENTER );

}

void ui_init( void )
{LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Screen1_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_Screen1);
}
