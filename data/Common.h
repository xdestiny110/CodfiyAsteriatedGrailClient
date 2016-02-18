﻿#ifndef COMMON_H
#define COMMON_H
#include <QString>
#include "protocol/action_respond.pb.h"
#define VERSION 151223
enum GrailError{
    GE_SUCCESS,
    GE_TIMEOUT,
    GE_URGENT,
    GE_EMPTY_HANDLE,
    GE_DECK_OVERFLOW,
    GE_CARD_NOT_ENOUGH,
    GE_USERID_NOT_FOUND,
    GE_HANDCARD_NOT_FOUND,
    GE_BASIC_EFFECT_NOT_FOUND,
    GE_BASIC_EFFECT_ALREADY_EXISTS,
    GE_EXCLUSIVE_EFFECT_NOT_FOUND,
    GE_COVERCARD_NOT_FOUND,
    GE_MOVECARD_FAILED,
    GE_INCONSISTENT_STATE,
    GE_FATAL_ERROR,
    GE_INVALID_TABLEID,
    GE_INVALID_PLAYERID,
    GE_INVALID_CARDID,
    GE_INVALID_ROLEID,
    GE_INVALID_ACTION,
    GE_INVALID_STEP,
    GE_INVALID_EXCLUSIVE_EFFECT,
    GE_INVALID_ARGUMENT,
    GE_NO_STATE,
    GE_NO_CONTEXT,
    GE_NO_REPLY,
    GE_NOT_SUPPORTED,
    GE_PLAYER_FULL,
    GE_GUEST_FULL,
    GE_DISCONNECTED,
    GE_NOT_WELCOME,
    GE_WRONG_PASSWORD
};

enum CAUSE{
    CAUSE_DEFAULT,
    CAUSE_OVERLOAD,
    CAUSE_USE,
    CAUSE_ATTACK,
    CAUSE_POISON,
    CAUSE_WEAKEN,
    CAUSE_MISSILE,
    CAUSE_BUY,
    CAUSE_SYNTHESIZE,
    JI_FENG_JI = 101,
    LIE_FENG_JI = 102,
    LIAN_XU_JI = 103,
    SHENG_JIAN = 104,
    JIAN_YING = 105,
    XUE_YING_KUANG_DAO = 201,
    XUE_XING_PAO_XIAO = 202,
    KUANG_HUA = 203,
    XUE_YING_KUANG_DAO_USED = 204,
    SI_LIE = 205,
	JING_ZHUN_SHE_JI = 301,
	SHAN_GUANG_XIAN_JING = 302,
	JU_JI = 303,
	SHAN_DIAN_JIAN = 304,
	GUAN_CHUAN_SHE_JI = 305,
    FENG_ZHI_FENG_YIN = 401,
    SHUI_ZHI_FENG_YIN = 402,
    HUO_ZHI_FENG_YIN = 403,
    DI_ZHI_FENG_YIN = 404,
    LEI_ZHI_FENG_YIN = 405,
    FA_SHU_JI_DONG = 406,
    WU_XI_SHU_FU = 407,
    FENG_YIN_PO_SUI = 408,
    FAN_SHI = 501,
    SHUI_YING = 502,
    QIAN_XING = 503,
    ZHI_LIAO_SHU = 601,
    ZHI_YU_ZHI_GUANG = 602,
    BING_SHUANG_DAO_YAN = 603,
    LIAN_MIN = 604,
    SHENG_LIAO = 605,
    TIAN_SHI_ZHI_QIANG = 701,
    TIAN_SHI_ZHU_FU = 702,
    FENG_ZHI_JIE_JING = 703,
    TIAN_SHI_JI_BAN = 704,
    TIAN_SHI_ZHI_GE = 705,
    SHEN_ZHI_BI_HU = 706,
    MO_BAO_CHONG_JI = 801,
    MO_DAN_ZHANG_WO = 802,
    MO_DAN_RONG_HE = 803,
    HUI_MIE_FENG_BAO = 804,
    SP_MO_BAO_CHONG_JI=805,
    FA_LI_HU_DUN=806,
    XIU_LUO_LIAN_ZHAN=901,
    AN_YING_NING_JU=902,
    AN_YING_ZHI_LI=903,
    AN_YING_KANG_JU=904,
    AN_YING_LIU_XING=905,
    HEI_AN_ZHEN_CHAN=906,
    HEI_AN_ZHEN_CHAN_BU_PAI=9061,
	HUI_YAO = 1001,
    CHENG_JIE = 1002,
    SHENG_GUANG_QI_YU = 1003,
	TIAN_QIANG = 1004,
	DI_QIANG = 1005,
	SHEN_SHENG_XIN_YANG = 1006,
	SHENG_JI = 1007,
    FENG_REN = 1101,
    BING_DONG = 1102,
    HUO_QIU = 1103,
    YUN_SHI = 1104,
    LEI_JI = 1105,
    YUAN_SU_DIAN_RAN = 1106,
    YUE_GUANG = 1107,
    YUAN_SU_XI_SHOU = 1108,
    QI_ZHA = 1201,
    MAO_XIAN_ZHE_TIAN_TANG = 1202,
    TOU_TIAN_HUAN_RI = 1203,
    TE_SHU_JIA_GONG = 1204,
    BU_XIU = 1301,
    SHENG_DU = 1302,
    WEN_YI = 1303,
    SI_WANG_ZHI_CHU = 1304,
    MU_BEI_YUN_LUO = 1305,
    YI_SHI_ZHONG_DUAN = 1401,
    ZHONG_CAI_YI_SHI = 1402,
    MO_RI_SHEN_PAN = 1403,
    SHEN_PAN_LANG_CHAO = 1404,
    PAN_JUE_TIAN_PING = 1405,
    SHEN_SHENG_QI_SHI = 1501,
    SHEN_SHENG_QI_FU = 1502,
    SHUI_ZHI_SHEN_LI = 1503,
    SHENG_SHI_SHOU_HU = 1504,
    SHEN_SHENG_QI_YUE = 1505,
    SHEN_SHENG_LING_YU = 1506,
    SHUI_ZHI_SHEN_LI_GIVE = 1531,
    SHUI_ZHI_SHEN_LI_CROSS = 1532,
    XUN_JIE_CI_FU = 1601,
    WEI_LI_CI_FU = 1602,
    QI_DAO = 1603,
    GUANG_HUI_XIN_YANG = 1604,
    QI_HEI_XIN_YANG = 1605,
    FA_LI_CHAO_XI = 1606,
    ZHI_HUI_FA_DIAN = 1701,
    MO_DAO_FA_DIAN = 1702,
    SHENG_JIE_FA_DIAN = 1703,
    FA_SHU_FAN_TAN = 1704,
	FENG_XING = 1801,
	LEI_MING = 1802,
	NIAN_ZHOU = 1803,
	BAI_GUI_YE_XING = 1804,
	LING_LI_BENG_JIE = 1805,
    JIAN_HUN_SHOU_HU=1901,
    YANG_GON=1902,
    JIAN_QI_ZHAN=1903,
    TIAN_SHI_YU_E_MO=1904,
    TIAN_SHI_ZHI_HUN=1905,
    E_MO_ZHI_HUN=1906,
    BU_QU_YI_ZHI=1907,
    NIAN_QI_LI_CHANG = 2001,
    XU_LI_YI_JI = 2002,
    NIAN_DAN = 2003,
    NIAN_DAN_SELF = 2031,
    BAI_SHI_HUAN_LONG_QUAN = 2004,
    CANG_YAN_ZHI_HUN = 2005,
    DOU_SHEN_TIAN_QU = 2006,
    XU_LI_CANG_YAN = 2025,
    BAI_SHI_DOU_SHEN = 2046,
	TIAO_XIN = 2101,
    JIN_DUAN_ZHI_LI = 2102,
	NU_HOU = 2103,
	MING_JING_ZHI_SHUI = 2104,
	SI_DOU = 2105,
	JING_PI_LI_JIE = 2106,
    LING_HUN_ZHEN_BAO =2201,
    LING_HUN_CI_YU =2202,
    LING_HUN_ZENG_FU=2203,
    LING_HUN_TUN_SHI=2204,
    LING_HUN_ZHAO_HUAN=2205,
    LING_HUN_ZHUAN_HUAN=2206,
    LING_HUN_JING_XIANG=2207,
    LING_HUN_LIAN_JIAN=2208,
    LING_HUN_LIAN_JIE_REACT=2209,
    XUE_ZHI_BEI_MING = 2301,
    TONG_SHENG_GONG_SI = 2302,
    XUE_ZHI_AI_SHANG = 2303,
    NI_LIU = 2304,
    XUE_ZHI_ZU_ZHOU = 2351,
    XUE_ZHI_ZU_ZHOU_QI_PAI = 2352,
    LIU_XUE=2306,    //added by WTF
    SHENG_MING_ZHI_HUO=2401,
    WU_DONG=2402,
    DU_FEN=2403,
    CHAO_SHENG=2404,
    JING_HUA_SHUI_YUE=2405,
    DIAO_LING=2406,
    YONG_HUA=2407,
    DAO_NI_ZHI_DIE=2408,
    SHEN_SHENG_ZHUI_JI = 2501,
    ZHI_XU_ZHI_YIN = 2502,
    HE_PING_XING_ZHE = 2503,
    JUN_SHEN_WEI_GUANG = 2504,
    JUN_SHEN_WEI_GUANG_2 = 25042,
    YING_LING_ZHAO_HUAN = 2505,
    MO_GUAN_CHONG_JI=2601,
    MO_GUAN_CHONG_JI_HIT=26011,
    LEI_GUANG_SAN_SHE =2602,
    LEI_GUANG_SAN_SHE_EXTRA=26021,
    DUO_CHONG_SHE_JI=2603,
    CHONG_NENG=2604,
    CHONG_NENG_GAI_PAI=26041,
    MO_YAN=2605,
    MO_YAN_GAI_PAI=26051,
    CHONG_NENG_MO_YAN=2606,
    NU_HUO_MO_WEN = 2701,
    NU_HUO_YA_ZHI = 2702,
    ZHAN_WEN_SUI_JI = 2703,
    MO_WEN_RONG_HE = 2704,
    FU_WEN_GAI_ZAO = 2705,
    FU_WEN_GAI_ZAO_TOKEN = 27051,
    SHUANG_CHONG_HUI_XIANG =2706,
	XING_HONG_SHENG_YUE = 2801,
    XING_HONG_XIN_YANG = 2802,
	XUE_XING_DAO_YAN = 2803,
    XUE_XING_DAO_YAN_1 = 2804,
	XUE_XING_DAO_YAN_2 = 2805,
	SHA_LU_SHENG_YAN = 2806,
	RE_XUE_FEI_TENG = 2807,
	JIE_JIAO_JIE_ZAO = 2808,
	JIE_JIAO_JIE_ZAO_AFTER_MAGIC = 28081,
	XING_HONG_SHI_ZI =2809,
    AN_ZHI_JIE_FANG=2901,
    HUAN_YING_XING_CHEN=2902,
    HEI_AN_SHU_FU=2903,
    AN_ZHI_ZHANG_BI=2904,
    CHONG_YING=2905,
    CHONG_YING_DISCARD=29051,
    QI_HEI_ZHI_QIANG=2906,
    CANG_YAN_FA_DIAN=3001,
    TIAN_HUO_DUAN_KONG=3002,
    MO_NV_ZHI_NU=3003,
    MO_NV_ZHI_NU_ATTACK=30031,
    TI_SHEN_WAN_OU=3004,
    YONG_SHENG_YIN_SHI_JI=3005,
    TONG_KU_LIAN_JIE=3006,
    TONG_KU_LIAN_JIE_CARD=30061,
    MO_NENG_FAN_ZHUAN=3007,
    CHEN_LUN_XIE_ZOU_QU=3101,
    BU_XIE_HE_XIAN=3102,
    GE_YONG_TIAN_FU=3103,
    BAO_FENG_QIAN_ZOU_QU=3104,
    JI_ANG_KUANG_XIANG_QU=3105,
    JI_ANG_KUANG_XIANG_QU_STONE=31051,
    JI_ANG_KUANG_XIANG_QU_2=31052,
    JI_ANG_KUANG_XIANG_QU_HARM=31053,
    SHENG_LI_JIAO_XIANG_SHI=3106,
    SHENG_LI_JIAO_XIANG_SHI_2=31061,
    SHENG_LI_JIAO_XIANG_SHI_STONE=31062,
    XI_WANG_FU_GE_QU=3107
};

enum CHANGE{
    CHANGE_ADD,
    CHANGE_REMOVE
};

enum DECK{
    DECK_PILE = 1,
    DECK_DISCARD = 2,
    DECK_HAND = 4,
    DECK_BASIC_EFFECT = 5,
    DECK_COVER = 6
};

enum HARM_TYPE{
    HARM_NONE,
    HARM_ATTACK,
    HARM_MAGIC
};

enum HIT_RATE{
    RATE_NORMAL,
    RATE_NOREATTACK,
    RATE_NOMISS
};

enum REATTACK{
    RA_ATTACK,
    RA_BLOCK,
    RA_GIVEUP
};

enum SpecialActionId{
    SPECIAL_BUY,
    SPECIAL_SYNTHESIZE,
    SPECIAL_EXTRACT
};

enum STEP{
    STEP_INIT = 0,
    STEP_DONE = 9999
};

QString getCauseString(int cause);

QString getCommandString(network::Command *cmd);


#endif // COMMON_H
