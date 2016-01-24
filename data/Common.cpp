﻿#include "data/Common.h"
#include "data/DataInterface.h"
QString getCauseString(int cause)
{
    switch(cause)
    {
    case CAUSE_DEFAULT:
        return "default";
    case CAUSE_OVERLOAD:
        return "overload";
    case CAUSE_USE:
        return "use";
    case CAUSE_ATTACK:
        return QStringLiteral("攻击");
    case CAUSE_POISON:
        return QStringLiteral("中毒");
    case CAUSE_WEAKEN:
        return QStringLiteral("虚弱");
    case CAUSE_MISSILE:
        return QStringLiteral("魔弹");
    case JI_FENG_JI:
        return QStringLiteral("疾风技");
    case LIE_FENG_JI:
        return QStringLiteral("烈风技");
    case LIAN_XU_JI:
        return QStringLiteral("连续技");
    case SHENG_JIAN:
        return QStringLiteral("圣剑");
    case JIAN_YING:
        return QStringLiteral("剑影");
    case XUE_YING_KUANG_DAO:
        return QStringLiteral("血影狂刀");
    case XUE_XING_PAO_XIAO:
        return QStringLiteral("血腥咆哮");
    case KUANG_HUA:
        return QStringLiteral("狂化");
    case SI_LIE:
        return QStringLiteral("撕裂");
    case XUE_YING_KUANG_DAO_USED:
        return QStringLiteral("血影狂刀");
    case FENG_ZHI_FENG_YIN:
        return QStringLiteral("风之封印");
    case SHUI_ZHI_FENG_YIN:
        return QStringLiteral("水之封印");
    case HUO_ZHI_FENG_YIN:
        return QStringLiteral("火之封印");
    case DI_ZHI_FENG_YIN:
        return QStringLiteral("地之封印");
    case LEI_ZHI_FENG_YIN:
        return QStringLiteral("雷之封印");
    case FA_SHU_JI_DONG:
        return QStringLiteral("法术激荡");
    case WU_XI_SHU_FU:
        return QStringLiteral("五系束缚");
    case FENG_YIN_PO_SUI:
        return QStringLiteral("封印破碎");
    case FAN_SHI:
        return QStringLiteral("反噬");
    case SHUI_YING:
        return QStringLiteral("水影");
    case QIAN_XING:
        return QStringLiteral("潜行");
    case BING_SHUANG_DAO_YAN:
        return QStringLiteral("冰霜祷言");
    case ZHI_LIAO_SHU:
        return QStringLiteral("治疗术");
    case ZHI_YU_ZHI_GUANG:
        return QStringLiteral("治愈之光");
    case LIAN_MIN:
        return QStringLiteral("怜悯");
    case SHENG_LIAO:
        return QStringLiteral("圣疗");
    case TIAN_SHI_ZHI_QIANG:
        return QStringLiteral("天使之墙");
    case TIAN_SHI_ZHU_FU:
        return QStringLiteral("天使祝福");
    case FENG_ZHI_JIE_JING:
        return QStringLiteral("风之洁净");
    case TIAN_SHI_JI_BAN:
        return QStringLiteral("天使羁绊");
    case TIAN_SHI_ZHI_GE:
        return QStringLiteral("天使之歌");
    case SHEN_ZHI_BI_HU:
        return QStringLiteral("神之庇护");
    case MO_BAO_CHONG_JI:
        return QStringLiteral("魔爆冲击");
    case MO_DAN_ZHANG_WO:
        return QStringLiteral("魔弹掌握");
    case MO_DAN_RONG_HE:
        return QStringLiteral("魔弹融合");
    case HUI_MIE_FENG_BAO:
        return QStringLiteral("毁灭风暴");
    case HUI_YAO:
        return QStringLiteral("辉耀");
    case CHENG_JIE:
        return QStringLiteral("惩戒");
    case SHENG_GUANG_QI_YU:
        return QStringLiteral("圣光祈愈");
    case TIAN_QIANG:
        return QStringLiteral("天枪");
    case DI_QIANG:
        return QStringLiteral("地枪");
    case SHEN_SHENG_XIN_YANG:
        return QStringLiteral("神圣信仰");
    case SHENG_JI:
        return QStringLiteral("圣击");
    case FENG_REN:
        return QStringLiteral("风刃");
    case BING_DONG:
        return QStringLiteral("冰冻");
    case HUO_QIU:
        return QStringLiteral("火球");
    case YUN_SHI:
        return QStringLiteral("陨石");
    case LEI_JI:
        return QStringLiteral("雷击");
    case YUAN_SU_DIAN_RAN:
        return QStringLiteral("元素点燃");
    case YUE_GUANG:
        return QStringLiteral("月光");
    case YUAN_SU_XI_SHOU:
        return QStringLiteral("元素吸收");
    case BU_XIU:
        return QStringLiteral("不朽");
    case SHENG_DU:
        return QStringLiteral("圣渎");
    case WEN_YI:
        return QStringLiteral("瘟疫");
    case SI_WANG_ZHI_CHU:
        return QStringLiteral("死亡之触");
    case MU_BEI_YUN_LUO:
        return QStringLiteral("墓碑陨落");
    case YI_SHI_ZHONG_DUAN:
        return QStringLiteral("仪式中断");
    case ZHONG_CAI_YI_SHI:
        return QStringLiteral("仲裁仪式");
    case MO_RI_SHEN_PAN:
        return QStringLiteral("末日审判");
    case SHEN_PAN_LANG_CHAO:
        return QStringLiteral("审判浪潮");
    case PAN_JUE_TIAN_PING:
        return QStringLiteral("判决天平");
    case QI_ZHA:
        return QStringLiteral("欺诈");
    case MAO_XIAN_ZHE_TIAN_TANG:
        return QStringLiteral("冒险家天堂");
    case TOU_TIAN_HUAN_RI:
        return QStringLiteral("偷天换日");
    case TE_SHU_JIA_GONG:
        return QStringLiteral("特殊加工");
    case JING_ZHUN_SHE_JI:
        return QStringLiteral("精准射击");
    case SHAN_GUANG_XIAN_JING:
        return QStringLiteral("闪光陷阱");
    case JU_JI:
        return QStringLiteral("狙击");
    case GUAN_CHUAN_SHE_JI:
        return QStringLiteral("贯穿射击");
    case SHAN_DIAN_JIAN:
        return QStringLiteral("闪电箭");
    case SHEN_SHENG_QI_SHI:
        return QStringLiteral("神圣启示");
    case SHEN_SHENG_QI_FU:
        return QStringLiteral("神圣祈福");
    case SHUI_ZHI_SHEN_LI:
        return QStringLiteral("水之神力");
    case SHUI_ZHI_SHEN_LI_GIVE:
        return QStringLiteral("水之神力给牌");
    case SHENG_SHI_SHOU_HU:
        return QStringLiteral("圣使守护");
    case SHEN_SHENG_QI_YUE:
        return QStringLiteral("神圣契约");
    case SHEN_SHENG_LING_YU:
        return QStringLiteral("神圣领域");
    case  XIU_LUO_LIAN_ZHAN:
        return QStringLiteral("修罗连斩");
    case  AN_YING_NING_JU:
        return QStringLiteral("暗影凝聚");
    case    AN_YING_ZHI_LI:
        return QStringLiteral("暗影之力");
    case     AN_YING_KANG_JU:
        return QStringLiteral("暗影抗拒");
    case     AN_YING_LIU_XING:
        return QStringLiteral("暗影流星");
    case     HEI_AN_ZHEN_CHAN:
        return QStringLiteral("黑暗震颤");
    case ZHI_HUI_FA_DIAN:
        return QStringLiteral("智慧法典");
    case MO_DAO_FA_DIAN:
        return QStringLiteral("魔道法典");
    case SHENG_JIE_FA_DIAN:
        return QStringLiteral("圣洁法典");
    case FA_SHU_FAN_TAN:
        return QStringLiteral("法术反弹");
    case NIAN_QI_LI_CHANG:
        return QStringLiteral("念气立场");
    case XU_LI_YI_JI:
        return QStringLiteral("蓄力一击");
    case NIAN_DAN:
        return QStringLiteral("念弹");
    case BAI_SHI_HUAN_LONG_QUAN:
        return QStringLiteral("百式幻龙拳");
    case CANG_YAN_ZHI_HUN:
        return QStringLiteral("苍炎之魂");
    case DOU_SHEN_TIAN_QU:
        return QStringLiteral("斗神天驱");
    case XU_LI_CANG_YAN:
        return QStringLiteral("蓄力一击/苍炎之魂");
    case BAI_SHI_DOU_SHEN:
        return QStringLiteral("百式幻龙拳/斗神天驱");
    case LING_HUN_ZHEN_BAO:
        return QStringLiteral("灵魂震爆");
    case LING_HUN_CI_YU:
        return QStringLiteral("灵魂赐予");
    case LING_HUN_ZENG_FU:
        return QStringLiteral("灵魂增幅");
    case LING_HUN_TUN_SHI:
        return QStringLiteral("灵魂吞噬");
    case LING_HUN_ZHAO_HUAN:
        return QStringLiteral("灵魂召还");
    case LING_HUN_ZHUAN_HUAN:
        return QStringLiteral("灵魂转换");
    case LING_HUN_JING_XIANG:
        return QStringLiteral("灵魂镜像");
    case LING_HUN_LIAN_JIAN:
        return QStringLiteral("灵魂链接");
    case LING_HUN_LIAN_JIE_REACT:
        return QStringLiteral("灵魂链接响应");
    case XUE_ZHI_BEI_MING:
        return QStringLiteral("血之悲鸣");
    case TONG_SHENG_GONG_SI:
        return QStringLiteral("同生共死");
    case XUE_ZHI_AI_SHANG:
        return QStringLiteral("血之哀伤");
    case NI_LIU:
        return QStringLiteral("逆流");
    case XUE_ZHI_ZU_ZHOU:
        return QStringLiteral("血之诅咒");
    case XUE_ZHI_ZU_ZHOU_QI_PAI:
        return QStringLiteral("血之诅咒弃牌");
    case LIU_XUE:
        return QStringLiteral("流血");
    case QI_DAO:
        return QStringLiteral("祈祷");
    case WEI_LI_CI_FU:
        return QStringLiteral("威力赐福");
    case XUN_JIE_CI_FU:
        return QStringLiteral("迅捷赐福");
    case GUANG_HUI_XIN_YANG:
        return QStringLiteral("光辉信仰");
    case QI_HEI_XIN_YANG:
        return QStringLiteral("漆黑信仰");
    case FA_LI_CHAO_XI:
        return QStringLiteral("法力潮汐");
    case FENG_XING:
        return QStringLiteral("风行");
    case LEI_MING:
        return QStringLiteral("雷鸣");
    case NIAN_ZHOU:
        return QStringLiteral("念咒");
    case BAI_GUI_YE_XING:
        return QStringLiteral("百鬼夜行");
    case LING_LI_BENG_JIE:
        return QStringLiteral("灵力崩解");
    case JIAN_HUN_SHOU_HU:
        return QStringLiteral("剑魂守护");
    case YANG_GON:
        return QStringLiteral("佯攻");
    case JIAN_QI_ZHAN:
        return QStringLiteral("剑气斩");
    case TIAN_SHI_YU_E_MO:
        return QStringLiteral("天使与恶魔");
    case TIAN_SHI_ZHI_HUN:
        return QStringLiteral("天使之魂");
    case E_MO_ZHI_HUN:
        return QStringLiteral("恶魔之魂");
    case BU_QU_YI_ZHI:
        return QStringLiteral("不屈意志");
    case TIAO_XIN:
        return QStringLiteral("挑衅");
    case JIN_DUAN_ZHI_LI:
        return QStringLiteral("禁断之力");
    case NU_HOU:
        return QStringLiteral("怒吼");
    case MING_JING_ZHI_SHUI:
        return QStringLiteral("明镜止水");
    case SI_DOU:
        return QStringLiteral("死斗");
    case JING_PI_LI_JIE:
        return QStringLiteral("精疲力竭");
    case XING_HONG_SHENG_YUE:
        return QStringLiteral("腥红圣约");
    case XING_HONG_XIN_YANG:
        return QStringLiteral("腥红信仰");
    case XUE_XING_DAO_YAN:
        return QStringLiteral("血腥祷言");
    case SHA_LU_SHENG_YAN:
        return QStringLiteral("杀戮盛宴");
    case RE_XUE_FEI_TENG:
        return QStringLiteral("热血沸腾");
    case JIE_JIAO_JIE_ZAO:
        return QStringLiteral("戒骄戒躁");
    case JIE_JIAO_JIE_ZAO_AFTER_MAGIC:
        return QStringLiteral("戒骄戒躁");
    case XING_HONG_SHI_ZI:
        return QStringLiteral("猩红十字");
    case CHONG_YING:
        return QStringLiteral("充盈");
    case SHEN_SHENG_ZHUI_JI:
        return QStringLiteral("神圣追击");
    case ZHI_XU_ZHI_YIN:
        return QStringLiteral("秩序之印");
    case HE_PING_XING_ZHE:
        return QStringLiteral("和平行者");
    case JUN_SHEN_WEI_GUANG:
        return QStringLiteral("军神威光");
    case YING_LING_ZHAO_HUAN:
        return QStringLiteral("英灵召唤");
    case SHENG_MING_ZHI_HUO:
        return QStringLiteral("生命之火");
    case WU_DONG:
        return QStringLiteral("舞动");
    case DU_FEN:
        return QStringLiteral("毒粉");
    case CHAO_SHENG:
        return QStringLiteral("朝圣");
    case JING_HUA_SHUI_YUE:
        return QStringLiteral("镜花水月");
    case DIAO_LING:
        return QStringLiteral("凋零");
    case YONG_HUA:
        return QStringLiteral("蛹化");
    case DAO_NI_ZHI_DIE:
        return QStringLiteral("倒逆之蝶");
    case NU_HUO_MO_WEN:
        return QStringLiteral("怒火压制&魔纹融合");
    case NU_HUO_YA_ZHI:
        return QStringLiteral("怒火压制");
    case MO_WEN_RONG_HE:
        return QStringLiteral("魔纹融合");
    case ZHAN_WEN_SUI_JI:
        return QStringLiteral("战纹碎击");
    case FU_WEN_GAI_ZAO:
    case FU_WEN_GAI_ZAO_TOKEN:
        return QStringLiteral("符文改造");
    case SHUANG_CHONG_HUI_XIANG:
        return QStringLiteral("双重回响");
    case MO_GUAN_CHONG_JI:
    case MO_GUAN_CHONG_JI_HIT:
        return QStringLiteral("魔贯冲击");
    case LEI_GUANG_SAN_SHE:
    case LEI_GUANG_SAN_SHE_EXTRA:
        return QStringLiteral("雷光散射");
    case DUO_CHONG_SHE_JI:
        return QStringLiteral("多重射击");
    case CHONG_NENG:
        return QStringLiteral("充能");
    case CHONG_NENG_GAI_PAI:
        return QStringLiteral("充能盖牌");
    case MO_YAN:
        return QStringLiteral("魔眼");
    case MO_YAN_GAI_PAI:
        return QStringLiteral("魔眼盖牌");
    case CHONG_NENG_MO_YAN:
        return QStringLiteral("充能&魔眼");
    case AN_ZHI_JIE_FANG:
        return QStringLiteral("暗之解放");
    case HUAN_YING_XING_CHEN:
        return QStringLiteral("幻影星辰");
    case AN_ZHI_ZHANG_BI:
        return QStringLiteral("暗之障壁");
    case CHONG_YING_DISCARD:
        return QStringLiteral("充盈");
    case QI_HEI_ZHI_QIANG:
        return QStringLiteral("漆黑之枪");
    case CANG_YAN_FA_DIAN:
        return QStringLiteral("苍炎法典");
    case TIAN_HUO_DUAN_KONG:
        return QStringLiteral("天火断空");
    case MO_NV_ZHI_NU:
    case MO_NV_ZHI_NU_ATTACK:
        return QStringLiteral("魔女之怒");
    case TI_SHEN_WAN_OU:
        return QStringLiteral("替身玩偶");
    case YONG_SHENG_YIN_SHI_JI:
        return QStringLiteral("永生银时计");
    case TONG_KU_LIAN_JIE:
        return QStringLiteral("痛苦链接");
    case TONG_KU_LIAN_JIE_CARD:
        return QStringLiteral("痛苦链接弃牌");
    case MO_NENG_FAN_ZHUAN:
        return QStringLiteral("魔能反转");

    case CHEN_LUN_XIE_ZOU_QU:
        return QStringLiteral("沉沦协奏曲");
    case BU_XIE_HE_XIAN:
        return QStringLiteral("不谐和弦");
    case GE_YONG_TIAN_FU:
        return QStringLiteral("歌咏天赋");
    case BAO_FENG_QIAN_ZOU_QU:
        return QStringLiteral("暴风前奏曲");
    case JI_ANG_KUANG_XIANG_QU:
    case JI_ANG_KUANG_XIANG_QU_2:
        return QStringLiteral("激昂狂想曲");
    case SHENG_LI_JIAO_XIANG_SHI:
    case SHENG_LI_JIAO_XIANG_SHI_2:
        return QStringLiteral("胜利交响诗");
    case XI_WANG_FU_GE_QU:
        return QStringLiteral("希望赋格曲");
    default:
        return "CauseString undefined";
    }
}
QString getCommandString(network::Command *cmd){
    QString msg;
    int targetID = cmd->dst_ids(0);
    switch (cmd->respond_id())
    {
    case network::RESPOND_DISCARD:
    {
        int cause = cmd->args(0);
        int howMany = cmd->args(1);
        if(cause != CAUSE_OVERLOAD){
            msg = QStringLiteral("等待") + dataInterface->getPlayerById(targetID)->getRoleName() + getCauseString(cause) + QStringLiteral("(弃手牌）响应");
        }
        else{
            msg = dataInterface->getPlayerById(targetID)->getRoleName()+QStringLiteral("需要弃")+QString::number(howMany)+QStringLiteral("张牌");
            msg += cmd->args(2) == 1 ? msg+QStringLiteral("(明弃)") : msg+QStringLiteral("(暗弃)");
        }
        return msg;
    }
    case network::RESPOND_DISCARD_COVER:
    {
        int cause = cmd->args(0);
        int howMany = cmd->args(1);
        if(cause != CAUSE_OVERLOAD){
            msg = QStringLiteral("等待") + dataInterface->getPlayerById(targetID)->getRoleName() + getCauseString(cause) + QStringLiteral("（盖牌）响应");
        }
        else{
            msg = dataInterface->getPlayerById(targetID)->getRoleName()+QStringLiteral("需要弃")+QString::number(howMany)+QStringLiteral("张盖牌");
        }
        return msg;
    }
    }
    return "CommandString undefined";
}