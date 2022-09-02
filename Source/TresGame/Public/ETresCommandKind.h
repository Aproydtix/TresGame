#pragma once
#include "CoreMinimal.h"
#include "ETresCommandKind.generated.h"

UENUM(BlueprintType)
enum ETresCommandKind {
    TRES_CMD_KIND_NONE,
    TRES_CMD_KIND_REFLECTGUARD,
    TRES_CMD_KIND_BLOWCOUNTER,
    TRES_CMD_KIND_REVENGESLASH,
    TRES_CMD_KIND_REVENGEIMPACT,
    TRES_CMD_KIND_REVENGEDIVE,
    TRES_CMD_KIND_BARRIERCRACKER,
    TRES_CMD_KIND_HOOKUPPER,
    TRES_CMD_KIND_BACKRAID,
    TRES_CMD_KIND_BACKRUSH,
    TRES_CMD_KIND_WARPSLASH,
    TRES_CMD_KIND_DIVEATTACK,
    TRES_CMD_KIND_REVENGESLASH2,
    TRES_CMD_KIND_ANTIRAID,
    TRES_CMD_KIND_SHIELDBURST,
    TRES_CMD_KIND_BLADECOUNTER,
    TRES_CMD_KIND_SHIELDCOUNTER,
    TRES_CMD_KIND_SHIELDCOUNTER2,
    TRES_CMD_KIND_SHIELDCOUNTER3,
    TRES_CMD_KIND_SHIELDCOUNTER4,
    TRES_CMD_KIND_IKAZUCHI,
    TRES_CMD_KIND_SNEEZE,
    TRES_CMD_KIND_FR_DONALD,
    TRES_CMD_KIND_FR_DONALD2,
    TRES_CMD_KIND_FR_DONALD3,
    TRES_CMD_KIND_FR_GOOFY,
    TRES_CMD_KIND_FR_GOOFY2,
    TRES_CMD_KIND_ATTACK,
    TRES_CMD_KIND_MAGIC,
    TRES_CMD_KIND_FIRE,
    TRES_CMD_KIND_FIRA,
    TRES_CMD_KIND_FIRAGA,
    TRES_CMD_KIND_FIRAGAN,
    TRES_CMD_KIND_BLIZZARD,
    TRES_CMD_KIND_BLIZZARA,
    TRES_CMD_KIND_BLIZZAGA,
    TRES_CMD_KIND_BLIZZAGAN,
    TRES_CMD_KIND_THUNDER,
    TRES_CMD_KIND_THUNDARA,
    TRES_CMD_KIND_THUNDAGA,
    TRES_CMD_KIND_THUNDAGAN,
    TRES_CMD_KIND_WATER,
    TRES_CMD_KIND_WATARA,
    TRES_CMD_KIND_WATAGA,
    TRES_CMD_KIND_WATAGAN,
    TRES_CMD_KIND_AERO,
    TRES_CMD_KIND_AERORA,
    TRES_CMD_KIND_AEROGA,
    TRES_CMD_KIND_AEROGAN,
    TRES_CMD_KIND_CURE,
    TRES_CMD_KIND_CURA,
    TRES_CMD_KIND_CURAGA,
    TRES_CMD_KIND_HOLY,
    TRES_CMD_KIND_WATERFIRE,
    TRES_CMD_KIND_WATERBLIZZARD,
    TRES_CMD_KIND_WATERTHUNDER,
    TRES_CMD_KIND_WATERAERO,
    TRES_CMD_KIND_ITEM,
    TRES_CMD_KIND_POTION,
    TRES_CMD_KIND_HIPOTION,
    TRES_CMD_KIND_MEGAPOTION,
    TRES_CMD_KIND_ETHER,
    TRES_CMD_KIND_HIETHER,
    TRES_CMD_KIND_MEGAETHER,
    TRES_CMD_KIND_ELIXIR,
    TRES_CMD_KIND_LASTELIXIR,
    TRES_CMD_KIND_FOCUSSUPPLEMENT,
    TRES_CMD_KIND_HIFOCUSSUPPLEMENT,
    TRES_CMD_KIND_ALLCURE,
    TRES_CMD_KIND_DM,
    TRES_CMD_KIND_DM_WANDANYAN,
    TRES_CMD_KIND_DM_RALPH,
    TRES_CMD_KIND_DM_SIMBA,
    TRES_CMD_KIND_DM_STITCH,
    TRES_CMD_KIND_DM_ARIEL,
    TRES_CMD_KIND_DM_FINISH,
    TRES_CMD_KIND_SAVE,
    TRES_CMD_KIND_TALK,
    TRES_CMD_KIND_OPEN,
    TRES_CMD_KIND_CHECK,
    TRES_CMD_KIND_SHOP,
    TRES_CMD_KIND_RESCUE,
    TRES_CMD_KIND_VEHICLE,
    TRES_CMD_KIND_SHIP,
    TRES_CMD_KIND_PLANE,
    TRES_CMD_KIND_GETOFF,
    TRES_CMD_KIND_GIGAS_ELECTRO,
    TRES_CMD_KIND_RAIL,
    TRES_CMD_KIND_PLANEBOSS,
    TRES_CMD_KIND_SLIDESHOT,
    TRES_CMD_KIND_COVERSLIDE,
    TRES_CMD_KIND_TRICK,
    TRES_CMD_KIND_WATERPLAY,
    TRES_CMD_KIND_EXTENDHAND,
    TRES_CMD_KIND_ENEMYSHIP,
    TRES_CMD_KIND_SPECIALSHIP_RAGINGCANNON,
    TRES_CMD_KIND_SPECIALSHIP_WINDCHASER,
    TRES_CMD_KIND_SPECIALSHIP_TIDALWAVE,
    TRES_CMD_KIND_SPECIALSHIP_DASH,
    TRES_CMD_KIND_SWING,
    TRES_CMD_KIND_PUDDING,
    TRES_CMD_KIND_CHARGEBERSERK,
    TRES_CMD_KIND_POSTCARD,
    TRES_CMD_KIND_ANS_ENDURE,
    TRES_CMD_KIND_ANS_CHALLENGE,
    TRES_CMD_KIND_ANS_MIXING,
    TRES_CMD_KIND_ANS_BUMPING,
    TRES_CMD_KIND_ANS_BELIEVE,
    TRES_CMD_KIND_ANS_ACCEPT,
    TRES_CMD_KIND_FINISH_AN2,
    TRES_CMD_KIND_S_FIRA,
    TRES_CMD_KIND_S_FIRAGA,
    TRES_CMD_KIND_S_FIRAGAN,
    TRES_CMD_KIND_S_BLIZZARA,
    TRES_CMD_KIND_S_BLIZZAGA,
    TRES_CMD_KIND_S_BLIZZAGAN,
    TRES_CMD_KIND_S_THUNDARA,
    TRES_CMD_KIND_S_THUNDAGA,
    TRES_CMD_KIND_S_THUNDAGAN,
    TRES_CMD_KIND_S_WATARA,
    TRES_CMD_KIND_S_WATAGA,
    TRES_CMD_KIND_S_WATAGAN,
    TRES_CMD_KIND_S_AERORA,
    TRES_CMD_KIND_S_AEROGA,
    TRES_CMD_KIND_S_AEROGAN,
    TRES_CMD_KIND_S_CURAGAN,
    TRES_CMD_KIND_S_DARKFIRAGA,
    TRES_CMD_KIND_CHANGE_KB,
    TRES_CMD_KIND_CHANGE_DW,
    TRES_CMD_KIND_CHANGE_HM,
    TRES_CMD_KIND_CHANGE_YO,
    TRES_CMD_KIND_CHANGE_BZ,
    TRES_CMD_KIND_CHANGE_DR,
    TRES_CMD_KIND_CHANGE_SK,
    TRES_CMD_KIND_CHANGE_GM,
    TRES_CMD_KIND_CHANGE_SW,
    TRES_CMD_KIND_CHANGE_WA,
    TRES_CMD_KIND_CHANGE_SH,
    TRES_CMD_KIND_CHANGE_CL,
    TRES_CMD_KIND_CHANGE_AN,
    TRES_CMD_KIND_CHANGE_HL,
    TRES_CMD_KIND_CHANGE_FL,
    TRES_CMD_KIND_CHANGE_DW2,
    TRES_CMD_KIND_CHANGE_BZ2,
    TRES_CMD_KIND_CHANGE_CL2,
    TRES_CMD_KIND_CHANGE_SH2,
    TRES_CMD_KIND_CHANGE_HM2,
    TRES_CMD_KIND_CHANGE_DR2,
    TRES_CMD_KIND_CHANGE_L1,
    TRES_CMD_KIND_CHANGE_L2,
    TRES_CMD_KIND_CHANGE_L3,
    TRES_CMD_KIND_CHANGE_L4,
    TRES_CMD_KIND_CHANGE_L5,
    TRES_CMD_KIND_CHANGE_A1,
    TRES_CMD_KIND_CHANGE_A2,
    TRES_CMD_KIND_FINISH,
    TRES_CMD_KIND_FINISH_YO,
    TRES_CMD_KIND_FINISH_BZ,
    TRES_CMD_KIND_FINISH_DR,
    TRES_CMD_KIND_FINISH_SK,
    TRES_CMD_KIND_FINISH_GM,
    TRES_CMD_KIND_FINISH_SW,
    TRES_CMD_KIND_FINISH_WA,
    TRES_CMD_KIND_FINISH_SH,
    TRES_CMD_KIND_FINISH_CL,
    TRES_CMD_KIND_FINISH_AN,
    TRES_CMD_KIND_FINISH_FL,
    TRES_CMD_KIND_FINISH_AQ,
    TRES_CMD_KIND_FINISH_A2,
    TRES_CMD_KIND_FINISH_RI,
    TRES_CMD_KIND_SHEX_THUNDER,
    TRES_CMD_KIND_LM_STUNIMPACT,
    TRES_CMD_KIND_LM_SONICRAVE,
    TRES_CMD_KIND_LM_LASTARCANUM,
    TRES_CMD_KIND_LM_UNIONDISCODE,
    TRES_CMD_KIND_LMEX_RAVE,
    TRES_CMD_KIND_LMEX_FINISH,
    TRES_CMD_KIND_LMEX_BREAK,
    TRES_CMD_KIND_LMEX_THEEND,
    TRES_CMD_KIND_RISKCHARGE,
    TRES_CMD_KIND_FINISH_UNIONX,
    TRES_CMD_KIND_FINISH_UX1,
    TRES_CMD_KIND_FINISH_UX2,
    TRES_CMD_KIND_FINISH_UX3,
    TRES_CMD_KIND_FINISH_UX4,
    TRES_CMD_KIND_FINISH_UX5,
    TRES_CMD_KIND_AF_JETCOASTER_BM,
    TRES_CMD_KIND_AF_VIKINGSHIP,
    TRES_CMD_KIND_AF_TEACUP,
    TRES_CMD_KIND_AF_SHOOTINGRIDE,
    TRES_CMD_KIND_AF_MERRYGOROUND,
    TRES_CMD_KIND_AF_WATERRIDE,
    TRES_CMD_KIND_AF_FINISH,
    TRES_CMD_KIND_FR_SHIELDGUARDIAN,
    TRES_CMD_KIND_FR_MOUNTCURLING,
    TRES_CMD_KIND_FR_GOOFYSHOOT,
    TRES_CMD_KIND_FR_MICKEY,
    TRES_CMD_KIND_FR_MICKEYCHAIN,
    TRES_CMD_KIND_FR_SNOWCURLING,
    TRES_CMD_KIND_FR_MIKEBOWLING,
    TRES_CMD_KIND_FR_JACKSPIN,
    TRES_CMD_KIND_FR_SNOWCHASE,
    TRES_CMD_KIND_FR_POWERSTRIKE,
    TRES_CMD_KIND_FR_GIANTSOLDIER,
    TRES_CMD_KIND_FR_ROCKETLASER,
    TRES_CMD_KIND_FR_SPINNINGHOLD,
    TRES_CMD_KIND_FR_SNOWCOVERSWING,
    TRES_CMD_KIND_FR_CALLMETEOR,
    TRES_CMD_KIND_FR_FLAREFORCE,
    TRES_CMD_KIND_FR_BAYMAXRIDE,
    TRES_CMD_KIND_FR_ICEREVENGER,
    TRES_CMD_KIND_S_FINISH,
    TRES_CMD_KIND_FR_TRINITY,
    TRES_CMD_KIND_FR_SORA,
    TRES_CMD_KIND_FR_FINISH,
    TRES_CMD_KIND_BARRIERCRACKER2,
    TRES_CMD_KIND_BARRIERCRACKER3,
    TRES_CMD_KIND_BARRIERCRACKER4,
    TRES_CMD_KIND_GUARDCOUNTER_RO,
    TRES_CMD_KIND_GUARDCOUNTER_KA,
    TRES_CMD_KIND_SLIDETURN,
    TRES_CMD_KIND_CHANGE_LF,
    TRES_CMD_KIND_CHANGE_DF,
    TRES_CMD_KIND_CHANGE_TF,
    TRES_CMD_KIND_CHANGE_TF2,
    TRES_CMD_KIND_FINISH_TF,
    TRES_CMD_KIND_FINISH_TF2,
    TRES_CMD_KIND_FINISH_RO,
    TRES_CMD_KIND_FINISH_KA,
    TRES_CMD_KIND_DISPEL,
    TRES_CMD_KIND_QUICKBATTLE,
    TRES_CMD_KIND_S_CROSSSHOOT,
    TRES_CMD_KIND_SWTCH_SORA,
    TRES_CMD_KIND_SWTCH_AQUA,
    TRES_CMD_KIND_SWTCH_RIKU,
    TRES_CMD_KIND_SWTCH_KAIRI,
    TRES_CMD_KIND_SWTCH_ROXAS,
    TRES_CMD_KIND_FR_POPPINGHOLY,
    TRES_CMD_KIND_FR_BLIZZAGABOARD,
    TRES_CMD_KIND_FR_THINKOFYOU,
    TRES_CMD_KIND_FR_ULTIMATEEND,
    TRES_CMD_KIND_FR_LINKOFHEARTS,
    TRES_CMD_KIND_FR_PROMISEWINGS,
    TRES_CMD_KIND_LMEX_SLASH,
    TRES_CMD_KIND_ANS_USUAL,
    TRES_CMD_KIND_ANS_EASY,
    TRES_CMD_KIND_ANS_CHALLENGING,
    TRES_CMD_KIND_CARDDRAW,
    TRES_CMD_KIND_RESERVE248,
    TRES_CMD_KIND_RESERVE249,
    TRES_CMD_KIND_RESERVE250,
    TRES_CMD_KIND_RESERVE251,
    TRES_CMD_KIND_RESERVE252,
    TRES_CMD_KIND_SHOOTFLOW,
    TRES_CMD_KIND_END,
    TRES_CMD_KIND_MAX UMETA(Hidden),
};
