extern "C" {
#include <interface/vmcs_host/vc_cecservice.h>
#include <interface/vchiq_arm/vchiq_if.h>
}

struct CECXBMCKeymap_ {
    const CEC_USER_CONTROL_T cec;
    const char *xbmc;
};

static CECXBMCKeymap_ CECXBMCKeymap[] = {
    { CEC_User_Control_Select                  , "select"    },
    { CEC_User_Control_Up                      , "up"        },
    { CEC_User_Control_Down                    , "down"      },
    { CEC_User_Control_Left                    , "left"      },
    { CEC_User_Control_Right                   , "right"     },
    { CEC_User_Control_RightUp                 , NULL        },
    { CEC_User_Control_RightDown               , NULL        },
    { CEC_User_Control_LeftUp                  , NULL        },
    { CEC_User_Control_LeftDown                , NULL        },
    { CEC_User_Control_RootMenu                , "menu"      },
    { CEC_User_Control_SetupMenu               , "title"     },
    { CEC_User_Control_ContentsMenu            , NULL        },
    { CEC_User_Control_FavoriteMenu            , NULL        },
    { CEC_User_Control_Exit                    , "back"      },
    { CEC_User_Control_Number0                 , "zero"      },
    { CEC_User_Control_Number1                 , "one"       },
    { CEC_User_Control_Number2                 , "two"       },
    { CEC_User_Control_Number3                 , "three"     },
    { CEC_User_Control_Number4                 , "four"      },
    { CEC_User_Control_Number5                 , "five"      },
    { CEC_User_Control_Number6                 , "six"       },
    { CEC_User_Control_Number7                 , "seven"     },
    { CEC_User_Control_Number8                 , "eight"     },
    { CEC_User_Control_Number9                 , "nine"      },
    { CEC_User_Control_Dot                     , NULL        },
    { CEC_User_Control_Enter                   , NULL        },
    { CEC_User_Control_Clear                   , NULL        },
    { CEC_User_Control_ChannelUp               , "pageplus"  },
    { CEC_User_Control_ChannelDown             , "pageminus" },
    { CEC_User_Control_PreviousChannel         , NULL        },
    { CEC_User_Control_SoundSelect             , NULL        },
    { CEC_User_Control_InputSelect             , NULL        },
    { CEC_User_Control_DisplayInformation      , "info"      },
    { CEC_User_Control_Help                    , NULL        },
    { CEC_User_Control_PageUp                  , NULL        },
    { CEC_User_Control_PageDown                , NULL        },
    { CEC_User_Control_Power                   , NULL        },
    { CEC_User_Control_VolumeUp                , NULL        },
    { CEC_User_Control_VolumeDown              , NULL        },
    { CEC_User_Control_Mute                    , NULL        },
    { CEC_User_Control_Play                    , "play"      },
    { CEC_User_Control_Stop                    , "stop"      },
    { CEC_User_Control_Pause                   , "pause"     },
    { CEC_User_Control_Record                  , "record"    },
    { CEC_User_Control_Rewind                  , "reverse"   },
    { CEC_User_Control_FastForward             , "forward"   },
    { CEC_User_Control_Eject                   , NULL        },
    { CEC_User_Control_Forward                 , "skipplus"  },
    { CEC_User_Control_Backward                , "skipminus" },
    { CEC_User_Control_Angle                   , NULL        },
    { CEC_User_Control_Subpicture              , NULL        },
    { CEC_User_Control_VideoOnDemand           , NULL        },
    { CEC_User_Control_EPG                     , "playlist"  },
    { CEC_User_Control_TimerProgramming        , NULL        },
    { CEC_User_Control_InitialConfig           , NULL        },
    { CEC_User_Control_PlayFunction            , NULL        },
    { CEC_User_Control_PausePlayFunction       , NULL        },
    { CEC_User_Control_RecordFunction          , NULL        },
    { CEC_User_Control_PauseRecordFunction     , NULL        },
    { CEC_User_Control_StopFunction            , NULL        },
    { CEC_User_Control_MuteFunction            , NULL        },
    { CEC_User_Control_RestoreVolumeFunction   , NULL        },
    { CEC_User_Control_TuneFunction            , NULL        },
    { CEC_User_Control_SelectDiskFunction      , NULL        },
    { CEC_User_Control_SelectAVInputFunction   , NULL        },
    { CEC_User_Control_SelectAudioInputFunction, NULL        },
    { CEC_User_Control_F1Blue                  , "blue"      },
    { CEC_User_Control_F2Red                   , "red"       },
    { CEC_User_Control_F3Green                 , "green"     },
    { CEC_User_Control_F4Yellow                , "yellow"    },
    { CEC_User_Control_F5                      , NULL        }
};

static unsigned int CECXBMCKeymapElements =
    sizeof(CECXBMCKeymap) / sizeof(CECXBMCKeymap[0]);
