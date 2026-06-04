#ifndef dsp_full_loc
#define dsp_full_loc
#include <pgmspace.h>
/*************************************************************************************
    HOWTO:
    Copy this file to yoRadio/locale/displayL10n_custom.h
    and modify it
*************************************************************************************/
const char mon[] PROGMEM = "пнд";
const char tue[] PROGMEM = "втр";
const char wed[] PROGMEM = "срд";
const char thu[] PROGMEM = "чтв";
const char fri[] PROGMEM = "птн";
const char sat[] PROGMEM = "сбт";
const char sun[] PROGMEM = "нед";

const char monf[] PROGMEM = "понеділок";
const char tuef[] PROGMEM = "вівторок";
const char wedf[] PROGMEM = "середа";
const char thuf[] PROGMEM = "четвер";
const char frif[] PROGMEM = "п'ятниця";
const char satf[] PROGMEM = "субота";
const char sunf[] PROGMEM = "неділя";

const char jan[] PROGMEM = "січня";
const char feb[] PROGMEM = "лютого";
const char mar[] PROGMEM = "березня";
const char apr[] PROGMEM = "квітня";
const char may[] PROGMEM = "травня";
const char jun[] PROGMEM = "червня";
const char jul[] PROGMEM = "липня";
const char aug[] PROGMEM = "серпня";
const char sep[] PROGMEM = "вересня";
const char octt[] PROGMEM = "жовтня";
const char nov[] PROGMEM = "листопада";
const char decc[] PROGMEM = "грудня";

const char wn_N[]      PROGMEM = "північний";
const char wn_NE[]     PROGMEM = "північно-східний";
const char wn_E[]      PROGMEM = "східний";
const char wn_SE[]     PROGMEM = "південно-східний";
const char wn_S[]      PROGMEM = "південний";
const char wn_SW[]     PROGMEM = "південно-західний";
const char wn_W[]      PROGMEM = "західний";
const char wn_NW[]     PROGMEM = "північно-західний";
const char prv[]    PROGMEM = ", пориви ";

const char* const dow[]     PROGMEM = { sun, mon, tue, wed, thu, fri, sat };
const char* const dowf[]    PROGMEM = { sunf, monf, tuef, wedf, thuf, frif, satf };
const char* const mnths[]   PROGMEM = { jan, feb, mar, apr, may, jun, jul, aug, sep, octt, nov, decc };
const char* const wind[]    PROGMEM = { wn_N, wn_NE, wn_NE, wn_E, wn_E, wn_SE, wn_SE, wn_S, wn_S, wn_SW, wn_SW, wn_W, wn_W, wn_NW, wn_NW, wn_N, wn_N };

const char    const_PlReady[]    PROGMEM = "[готовий]";
const char  const_PlStopped[]    PROGMEM = "[зупинено]";
const char  const_PlConnect[]    PROGMEM = "[з'єднання]";
const char  const_DlgVolume[]    PROGMEM = "ГУЧНІСТЬ";
const char    const_DlgLost[]    PROGMEM = "ВИМКНЕНО";
const char  const_DlgUpdate[]    PROGMEM = "ОНОВЛЕННЯ";
const char const_DlgNextion[]    PROGMEM = "NEXTION";
const char const_getWeather[]    PROGMEM = "";
const char  const_waitForSD[]    PROGMEM = "ІНДЕКС SD";

const char        apNameTxt[]    PROGMEM = "ТОЧКА ДОСТУПУ";
const char        apPassTxt[]    PROGMEM = "ГАСЛО";
const char       bootstrFmt[]    PROGMEM = "З'єднуюсь з %s";
const char        apSettFmt[]    PROGMEM = "НАЛАШТУВАННЯ: HTTP://%s/";
#if EXT_WEATHER
const char       weatherFmt[]    PROGMEM = "%s, %+.1f\011C (відчувається:%+.0f\011C) \007 тиск: %d мм \007 вологість: %d%% \007 вітер: %s %.0f%s%s м/с (метеостанція %s)";
#else
const char       weatherFmt[]    PROGMEM = "%s, %.1f\011C \007 тиск: %d mm \007 вологість: %d%%";
#endif
const char     weatherUnits[]    PROGMEM = "metric";   /* standard, metric, imperial */
const char      weatherLang[]    PROGMEM = "ua";       /* https://openweathermap.org/current#multi */

#endif
