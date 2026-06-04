/*************************************************************************************
    ST7789 320x240 displays configuration file.
    Copy this file to yoRadio/src/displays/conf/displayST7789conf_custom.h
    and modify it
    More info on https://github.com/e2002/yoradio/wiki/Widgets#widgets-description
*************************************************************************************/

#ifndef displayST7789conf_h
#define displayST7789conf_h

#define DSP_WIDTH       320
#define DSP_HEIGTH       240
#define TFT_FRAMEWDT    2
#define MAX_WIDTH       DSP_WIDTH-TFT_FRAMEWDT*2
//#define PLMITEMS        11
//#define PLMITEMLENGHT   40
//#define PLMITEMHEIGHT   22

#if BITRATE_FULL
  #define TITLE_FIX 44
#else
  #define TITLE_FIX 0
#endif

#define bootLogoTop     68

//  #define BATTERY_ON      config.store.batteryon			// Статус батарейки)
  #define BatX      TFT_FRAMEWDT+1	// X coordinate for batt. (Координата X для батарейки)
  #define BatY      164				// Y coordinate for batt. (Координата Y для батарейки)
  #define BatFS     2				// FontSize for batt. (Размер шрифта для батарейки)
  #define ProcX     TFT_FRAMEWDT	// X coordinate for percent (Координата X для процентов заряда)
  #define ProcY     146				// Y coordinate for percent (Координата Y для процентов заряда)
  #define ProcFS    2				// FontSize for percent (Размер шрифта для процентов заряда)
  #define VoltX      180				// X coordinate for voltage (Координата X для напряжения)		(TFT_FRAMEWDT)
  #define VoltY      208				// Y coordinate for voltage (Координата Y для напряжения)		(183)
  #define VoltFS     2				// FontSize for voltage (Размер шрифта для напряжения)

/* SROLLS  */                            /* {{ left, top, fontsize, align }, buffsize, uppercase, width, scrolldelay, scrolldelta, scrolltime } */
const ScrollConfig metaConf       PROGMEM = {{ TFT_FRAMEWDT,   4, 3, WA_CENTER }, 140, false, MAX_WIDTH, 5000, 4, 30 };
const ScrollConfig title1Conf     PROGMEM = {{ TFT_FRAMEWDT,  40, 3, WA_LEFT }, 140, false, MAX_WIDTH, 5000, 4, 30 };
const ScrollConfig title2Conf     PROGMEM = {{ TFT_FRAMEWDT,  70, 3, WA_LEFT }, 140, false, MAX_WIDTH, 5000, 4, 30 };
const ScrollConfig playlistConf   PROGMEM = {{ TFT_FRAMEWDT, 112, 3, WA_LEFT }, 140, false, MAX_WIDTH, 1000, 4, 30 };
const ScrollConfig apTitleConf    PROGMEM = {{ TFT_FRAMEWDT,   2, 3, WA_CENTER }, 140, false, MAX_WIDTH, 0, 4, 20 };
const ScrollConfig apSettConf     PROGMEM = {{ TFT_FRAMEWDT, 216, 2, WA_LEFT }, 140, false, MAX_WIDTH, 0, 4, 30 };
const ScrollConfig weatherConf    PROGMEM = {{ TFT_FRAMEWDT, 183, 2, WA_LEFT }, 250, true, MAX_WIDTH, 0, 3, 40 };	// Weather (погода)

/* BACKGROUNDS  */                       /* {{ left, top, fontsize, align }, width, height, outlined } */
const FillConfig   metaBGConf     PROGMEM = {{ 0, 30, 0, WA_LEFT }, DSP_WIDTH, 2, false };
const FillConfig   metaBGConfInv  PROGMEM = {{ 0, 30, 0, WA_LEFT }, MAX_WIDTH, 2, false };
const FillConfig   volbarConf     PROGMEM = {{ TFT_FRAMEWDT, 225, 0, WA_LEFT }, MAX_WIDTH, 8, true };
const FillConfig  playlBGConf     PROGMEM = {{ 0, 107, 0, WA_LEFT }, DSP_WIDTH, 24, false };
const FillConfig  heapbarConf     PROGMEM = {{ 0, 236, 0, WA_LEFT }, DSP_WIDTH, 5, true };

/* WIDGETS  */                           /* { left, top, fontsize, align } */
const WidgetConfig bootstrConf    PROGMEM = { 0, 188,  2, WA_CENTER };
const WidgetConfig bitrateConf    PROGMEM = { 4,  24,  1, WA_RIGHT};
const WidgetConfig voltxtConf     PROGMEM = { 4, 218,  2, WA_RIGHT };
const WidgetConfig  iptxtConf     PROGMEM = { 0, 218,  2, WA_CENTER };
const WidgetConfig   rssiConf     PROGMEM = { 4, 218,  2, WA_LEFT };
const WidgetConfig numConf        PROGMEM = { 0, 150,  0, WA_CENTER };
const WidgetConfig apNameConf     PROGMEM = { TFT_FRAMEWDT, 66, 2, WA_CENTER };
const WidgetConfig apName2Conf    PROGMEM = { TFT_FRAMEWDT, 90, 2, WA_CENTER };
const WidgetConfig apPassConf     PROGMEM = { TFT_FRAMEWDT, 130, 2, WA_CENTER };
const WidgetConfig apPass2Conf    PROGMEM = { TFT_FRAMEWDT, 154, 2, WA_CENTER };
const WidgetConfig  clockConf     PROGMEM = { TFT_FRAMEWDT+10, 152, 0, WA_RIGHT };  /* 52 is a fixed font size */
const WidgetConfig bootWdtConf    PROGMEM = { TFT_FRAMEWDT, 162, 2, WA_CENTER };
#ifdef CPU_LOAD
    const WidgetConfig  cpuConf   PROGMEM = { 185, 208, 2, WA_LEFT };
#endif

const ProgressConfig bootPrgConf  PROGMEM = { 100, 14, 4 };
const BitrateConfig fullbitrateConf PROGMEM = {{TFT_FRAMEWDT+3, 104, 2, WA_RIGHT}, 42 };

/* BANDS  */                             /* { onebandwidth, onebandheight, bandsHspace, bandsVspace, numofbands, fadespeed } */
const WidgetConfig vuConf         PROGMEM = { TFT_FRAMEWDT, 186, 1, WA_CENTER };
const VUBandsConfig bandsConf     PROGMEM = { (MAX_WIDTH-TFT_FRAMEWDT*3)/2, 20, TFT_FRAMEWDT, 1, 20, 8 };	//Boombox

/* STRINGS  */
const char         numtxtFmt[]    PROGMEM = "%d";
const char           rssiFmt[]    PROGMEM = "WiFi %d";
const char          iptxtFmt[]    PROGMEM = "%s";
const char         voltxtFmt[]    PROGMEM = "\023\025%d";
const char        bitrateFmt[]    PROGMEM = "%d kBs";
const char           cpuFmt[]    PROGMEM = "cpu:%d";

/* MOVES  */                             /* { left, top, width (0 - auto, -1 - lock )} */
const MoveConfig    clockMove     PROGMEM = { TFT_FRAMEWDT+10, 152, 0 };
const MoveConfig   weatherMove    PROGMEM = { TFT_FRAMEWDT, 184, 0 };
const MoveConfig   weatherMoveVU  PROGMEM = { TFT_FRAMEWDT, 160, 0 };

#endif
