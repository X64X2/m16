#pragma once

enum {
	COMMAND_NOP = 0,
	COMMAND_WAIT,
	COMMAND_GOTO,
	COMMAND_SHAKE_CAM,
	COMMAND_SET_VAR_INT,
	COMMAND_SET_VAR_FLOAT,
	COMMAND_SET_LVAR_INT,
	COMMAND_SET_LVAR_FLOAT,
	COMMAND_ADD_VAL_TO_INT_VAR,
	COMMAND_ADD_VAL_TO_FLOAT_VAR,
	COMMAND_ADD_VAL_TO_INT_LVAR,
	COMMAND_ADD_VAL_TO_FLOAT_LVAR,
	COMMAND_SUB_VAL_FROM_INT_VAR,
	COMMAND_SUB_VAL_FROM_FLOAT_VAR,
	COMMAND_SUB_VAL_FROM_INT_LVAR,
	COMMAND_SUB_VAL_FROM_FLOAT_LVAR,
	COMMAND_MULT_INT_VAR_BY_VAL,
	COMMAND_MULT_FLOAT_VAR_BY_VAL,
	COMMAND_MULT_INT_LVAR_BY_VAL,
	COMMAND_MULT_FLOAT_LVAR_BY_VAL,
	COMMAND_DIV_INT_VAR_BY_VAL,
	COMMAND_DIV_FLOAT_VAR_BY_VAL,
	COMMAND_DIV_INT_LVAR_BY_VAL,
	COMMAND_DIV_FLOAT_LVAR_BY_VAL,
	COMMAND_IS_INT_VAR_GREATER_THAN_NUMBER,
	COMMAND_IS_INT_LVAR_GREATER_THAN_NUMBER,
	COMMAND_IS_NUMBER_GREATER_THAN_INT_VAR,
	COMMAND_IS_NUMBER_GREATER_THAN_INT_LVAR,
	COMMAND_IS_INT_VAR_GREATER_THAN_INT_VAR,
	COMMAND_IS_INT_LVAR_GREATER_THAN_INT_LVAR,
	COMMAND_IS_INT_VAR_GREATER_THAN_INT_LVAR,
	COMMAND_IS_INT_LVAR_GREATER_THAN_INT_VAR,
	COMMAND_IS_FLOAT_VAR_GREATER_THAN_NUMBER,
	COMMAND_IS_FLOAT_LVAR_GREATER_THAN_NUMBER,
	COMMAND_IS_NUMBER_GREATER_THAN_FLOAT_VAR,
	COMMAND_IS_NUMBER_GREATER_THAN_FLOAT_LVAR,
	COMMAND_IS_FLOAT_VAR_GREATER_THAN_FLOAT_VAR,
	COMMAND_IS_FLOAT_LVAR_GREATER_THAN_FLOAT_LVAR,
	COMMAND_IS_FLOAT_VAR_GREATER_THAN_FLOAT_LVAR,
	COMMAND_IS_FLOAT_LVAR_GREATER_THAN_FLOAT_VAR,
	COMMAND_IS_INT_VAR_GREATER_OR_EQUAL_TO_NUMBER,
	COMMAND_IS_INT_LVAR_GREATER_OR_EQUAL_TO_NUMBER,
	COMMAND_IS_NUMBER_GREATER_OR_EQUAL_TO_INT_VAR,
	COMMAND_IS_NUMBER_GREATER_OR_EQUAL_TO_INT_LVAR,
	COMMAND_IS_INT_VAR_GREATER_OR_EQUAL_TO_INT_VAR,
	COMMAND_IS_INT_LVAR_GREATER_OR_EQUAL_TO_INT_LVAR,
	COMMAND_IS_INT_VAR_GREATER_OR_EQUAL_TO_INT_LVAR,
	COMMAND_IS_INT_LVAR_GREATER_OR_EQUAL_TO_INT_VAR,
	COMMAND_IS_FLOAT_VAR_GREATER_OR_EQUAL_TO_NUMBER,
	COMMAND_IS_FLOAT_LVAR_GREATER_OR_EQUAL_TO_NUMBER,
	COMMAND_IS_NUMBER_GREATER_OR_EQUAL_TO_FLOAT_VAR,
	COMMAND_IS_NUMBER_GREATER_OR_EQUAL_TO_FLOAT_LVAR,
	COMMAND_IS_FLOAT_VAR_GREATER_OR_EQUAL_TO_FLOAT_VAR,
	COMMAND_IS_FLOAT_LVAR_GREATER_OR_EQUAL_TO_FLOAT_LVAR,
	COMMAND_IS_FLOAT_VAR_GREATER_OR_EQUAL_TO_FLOAT_LVAR,
	COMMAND_IS_FLOAT_LVAR_GREATER_OR_EQUAL_TO_FLOAT_VAR,
	COMMAND_IS_INT_VAR_EQUAL_TO_NUMBER,
	COMMAND_IS_INT_LVAR_EQUAL_TO_NUMBER,
	COMMAND_IS_INT_VAR_EQUAL_TO_INT_VAR,
	COMMAND_IS_INT_LVAR_EQUAL_TO_INT_LVAR,
	COMMAND_IS_INT_VAR_EQUAL_TO_INT_LVAR,
	COMMAND_IS_INT_VAR_NOT_EQUAL_TO_NUMBER,
	COMMAND_IS_INT_LVAR_NOT_EQUAL_TO_NUMBER,
	COMMAND_IS_INT_VAR_NOT_EQUAL_TO_INT_VAR,
	COMMAND_IS_INT_LVAR_NOT_EQUAL_TO_INT_LVAR,
	COMMAND_IS_INT_VAR_NOT_EQUAL_TO_INT_LVAR,
	COMMAND_IS_FLOAT_VAR_EQUAL_TO_NUMBER,
	COMMAND_IS_FLOAT_LVAR_EQUAL_TO_NUMBER,
	COMMAND_IS_FLOAT_VAR_EQUAL_TO_FLOAT_VAR,
	COMMAND_IS_FLOAT_LVAR_EQUAL_TO_FLOAT_LVAR,
	COMMAND_IS_FLOAT_VAR_EQUAL_TO_FLOAT_LVAR,
	COMMAND_IS_FLOAT_VAR_NOT_EQUAL_TO_NUMBER,
	COMMAND_IS_FLOAT_LVAR_NOT_EQUAL_TO_NUMBER,
	COMMAND_IS_FLOAT_VAR_NOT_EQUAL_TO_FLOAT_VAR,
	COMMAND_IS_FLOAT_LVAR_NOT_EQUAL_TO_FLOAT_LVAR,
	COMMAND_IS_FLOAT_VAR_NOT_EQUAL_TO_FLOAT_LVAR,
	COMMAND_GOTO_IF_TRUE,
	COMMAND_GOTO_IF_FALSE,
	COMMAND_TERMINATE_THIS_SCRIPT,
	COMMAND_START_NEW_SCRIPT,
	COMMAND_GOSUB,
	COMMAND_RETURN,
	COMMAND_LINE,
	COMMAND_CREATE_PLAYER,
	COMMAND_GET_PLAYER_COORDINATES,
	COMMAND_SET_PLAYER_COORDINATES,
	COMMAND_IS_PLAYER_IN_AREA_2D,
	COMMAND_IS_PLAYER_IN_AREA_3D,
	COMMAND_ADD_INT_VAR_TO_INT_VAR,
	COMMAND_ADD_FLOAT_VAR_TO_FLOAT_VAR,
	COMMAND_ADD_INT_LVAR_TO_INT_LVAR,
	COMMAND_ADD_FLOAT_LVAR_TO_FLOAT_LVAR,
	COMMAND_ADD_INT_VAR_TO_INT_LVAR,
	COMMAND_ADD_FLOAT_VAR_TO_FLOAT_LVAR,
	COMMAND_ADD_INT_LVAR_TO_INT_VAR,
	COMMAND_ADD_FLOAT_LVAR_TO_FLOAT_VAR,
	COMMAND_SUB_INT_VAR_FROM_INT_VAR,
	COMMAND_SUB_FLOAT_VAR_FROM_FLOAT_VAR,
	COMMAND_SUB_INT_LVAR_FROM_INT_LVAR,
	COMMAND_SUB_FLOAT_LVAR_FROM_FLOAT_LVAR,
	COMMAND_SUB_INT_VAR_FROM_INT_LVAR,
	COMMAND_SUB_FLOAT_VAR_FROM_FLOAT_LVAR,
	COMMAND_SUB_INT_LVAR_FROM_INT_VAR,
	COMMAND_SUB_FLOAT_LVAR_FROM_FLOAT_VAR,
	COMMAND_MULT_INT_VAR_BY_INT_VAR,
	COMMAND_MULT_FLOAT_VAR_BY_FLOAT_VAR,
	COMMAND_MULT_INT_LVAR_BY_INT_LVAR,
	COMMAND_MULT_FLOAT_LVAR_BY_FLOAT_LVAR,
	COMMAND_MULT_INT_VAR_BY_INT_LVAR,
	COMMAND_MULT_FLOAT_VAR_BY_FLOAT_LVAR,
	COMMAND_MULT_INT_LVAR_BY_INT_VAR,
	COMMAND_MULT_FLOAT_LVAR_BY_FLOAT_VAR,
	COMMAND_DIV_INT_VAR_BY_INT_VAR,
	COMMAND_DIV_FLOAT_VAR_BY_FLOAT_VAR,
	COMMAND_DIV_INT_LVAR_BY_INT_LVAR,
	COMMAND_DIV_FLOAT_LVAR_BY_FLOAT_LVAR,
	COMMAND_DIV_INT_VAR_BY_INT_LVAR,
	COMMAND_DIV_FLOAT_VAR_BY_FLOAT_LVAR,
	COMMAND_DIV_INT_LVAR_BY_INT_VAR,
	COMMAND_DIV_FLOAT_LVAR_BY_FLOAT_VAR,
	COMMAND_ADD_TIMED_VAL_TO_FLOAT_VAR,
	COMMAND_ADD_TIMED_VAL_TO_FLOAT_LVAR,
	COMMAND_ADD_TIMED_FLOAT_VAR_TO_FLOAT_VAR,
	COMMAND_ADD_TIMED_FLOAT_LVAR_TO_FLOAT_LVAR,
	COMMAND_ADD_TIMED_FLOAT_LVAR_TO_FLOAT_VAR,
	COMMAND_ADD_TIMED_FLOAT_VAR_TO_FLOAT_LVAR,
	COMMAND_SUB_TIMED_VAL_FROM_FLOAT_VAR,
	COMMAND_SUB_TIMED_VAL_FROM_FLOAT_LVAR,
	COMMAND_SUB_TIMED_FLOAT_VAR_FROM_FLOAT_VAR,
	COMMAND_SUB_TIMED_FLOAT_LVAR_FROM_FLOAT_LVAR,
	COMMAND_SUB_TIMED_FLOAT_LVAR_FROM_FLOAT_VAR,
	COMMAND_SUB_TIMED_FLOAT_VAR_FROM_FLOAT_LVAR,
	COMMAND_SET_VAR_INT_TO_VAR_INT,
	COMMAND_SET_LVAR_INT_TO_LVAR_INT,
	COMMAND_SET_VAR_FLOAT_TO_VAR_FLOAT,
	COMMAND_SET_LVAR_FLOAT_TO_LVAR_FLOAT,
	COMMAND_SET_VAR_FLOAT_TO_LVAR_FLOAT,
	COMMAND_SET_LVAR_FLOAT_TO_VAR_FLOAT,
	COMMAND_SET_VAR_INT_TO_LVAR_INT,
	COMMAND_SET_LVAR_INT_TO_VAR_INT,
	COMMAND_CSET_VAR_INT_TO_VAR_FLOAT,
	COMMAND_CSET_VAR_FLOAT_TO_VAR_INT,
	COMMAND_CSET_LVAR_INT_TO_VAR_FLOAT,
	COMMAND_CSET_LVAR_FLOAT_TO_VAR_INT,
	COMMAND_CSET_VAR_INT_TO_LVAR_FLOAT,
	COMMAND_CSET_VAR_FLOAT_TO_LVAR_INT,
	COMMAND_CSET_LVAR_INT_TO_LVAR_FLOAT,
	COMMAND_CSET_LVAR_FLOAT_TO_LVAR_INT,
	COMMAND_ABS_VAR_INT,
	COMMAND_ABS_LVAR_INT,
	COMMAND_ABS_VAR_FLOAT,
	COMMAND_ABS_LVAR_FLOAT,
	COMMAND_GENERATE_RANDOM_FLOAT,
	COMMAND_GENERATE_RANDOM_INT,
	COMMAND_CREATE_CHAR,
	COMMAND_DELETE_CHAR,
	COMMAND_CHAR_WANDER_DIR,
	COMMAND_CHAR_WANDER_RANGE,
	COMMAND_CHAR_FOLLOW_PATH,
	COMMAND_CHAR_SET_IDLE,
	COMMAND_GET_CHAR_COORDINATES,
	COMMAND_SET_CHAR_COORDINATES,
	COMMAND_IS_CHAR_STILL_ALIVE,
	COMMAND_IS_CHAR_IN_AREA_2D,
	COMMAND_IS_CHAR_IN_AREA_3D,
	COMMAND_CREATE_CAR,
	COMMAND_DELETE_CAR,
	COMMAND_CAR_GOTO_COORDINATES,
	COMMAND_CAR_WANDER_RANDOMLY,
	COMMAND_CAR_SET_IDLE,
	COMMAND_GET_CAR_COORDINATES,
	COMMAND_SET_CAR_COORDINATES,
	COMMAND_IS_CAR_STILL_ALIVE,
	COMMAND_SET_CAR_CRUISE_SPEED,
	COMMAND_SET_CAR_DRIVING_STYLE,
	COMMAND_SET_CAR_MISSION,
	COMMAND_IS_CAR_IN_AREA_2D,
	COMMAND_IS_CAR_IN_AREA_3D,
	COMMAND_SPECIAL_0,
	COMMAND_SPECIAL_1,
	COMMAND_SPECIAL_2,
	COMMAND_SPECIAL_3,
	COMMAND_SPECIAL_4,
	COMMAND_SPECIAL_5,
	COMMAND_SPECIAL_6,
	COMMAND_SPECIAL_7,
	COMMAND_PRINT_BIG,
	COMMAND_PRINT,
	COMMAND_PRINT_NOW,
	COMMAND_PRINT_SOON,
	COMMAND_CLEAR_PRINTS,
	COMMAND_GET_TIME_OF_DAY,
	COMMAND_SET_TIME_OF_DAY,
	COMMAND_GET_MINUTES_TO_TIME_OF_DAY,
	COMMAND_IS_POINT_ON_SCREEN,
	COMMAND_DEBUG_ON,
	COMMAND_DEBUG_OFF,
	COMMAND_RETURN_TRUE,
	COMMAND_RETURN_FALSE,
	COMMAND_VAR_INT,
	COMMAND_VAR_FLOAT,
	COMMAND_LVAR_INT,
	COMMAND_LVAR_FLOAT,
	COMMAND_LBRACKET,
	COMMAND_RBRACKET,
	COMMAND_REPEAT,
	COMMAND_ENDREPEAT,
	COMMAND_IF,
	COMMAND_IFNOT,
	COMMAND_ELSE,
	COMMAND_ENDIF,
	COMMAND_WHILE,
	COMMAND_WHILENOT,
	COMMAND_ENDWHILE,
	COMMAND_ANDOR,
	COMMAND_LAUNCH_MISSION,
	COMMAND_MISSION_HAS_FINISHED,
	COMMAND_STORE_CAR_CHAR_IS_IN,
	COMMAND_STORE_CAR_PLAYER_IS_IN,
	COMMAND_IS_CHAR_IN_CAR,
	COMMAND_IS_PLAYER_IN_CAR,
	COMMAND_IS_CHAR_IN_MODEL,
	COMMAND_IS_PLAYER_IN_MODEL,
	COMMAND_IS_CHAR_IN_ANY_CAR,
	COMMAND_IS_PLAYER_IN_ANY_CAR,
	COMMAND_IS_BUTTON_PRESSED,
	COMMAND_GET_PAD_STATE,
	COMMAND_LOCATE_PLAYER_ANY_MEANS_2D,
	COMMAND_LOCATE_PLAYER_ON_FOOT_2D,
	COMMAND_LOCATE_PLAYER_IN_CAR_2D,
	COMMAND_LOCATE_STOPPED_PLAYER_ANY_MEANS_2D,
	COMMAND_LOCATE_STOPPED_PLAYER_ON_FOOT_2D,
	COMMAND_LOCATE_STOPPED_PLAYER_IN_CAR_2D,
	COMMAND_LOCATE_PLAYER_ANY_MEANS_CHAR_2D,
	COMMAND_LOCATE_PLAYER_ON_FOOT_CHAR_2D,
	COMMAND_LOCATE_PLAYER_IN_CAR_CHAR_2D,
	COMMAND_LOCATE_CHAR_ANY_MEANS_2D,
	COMMAND_LOCATE_CHAR_ON_FOOT_2D,
	COMMAND_LOCATE_CHAR_IN_CAR_2D,
	COMMAND_LOCATE_STOPPED_CHAR_ANY_MEANS_2D,
	COMMAND_LOCATE_STOPPED_CHAR_ON_FOOT_2D,
	COMMAND_LOCATE_STOPPED_CHAR_IN_CAR_2D,
	COMMAND_LOCATE_CHAR_ANY_MEANS_CHAR_2D,
	COMMAND_LOCATE_CHAR_ON_FOOT_CHAR_2D,
	COMMAND_LOCATE_CHAR_IN_CAR_CHAR_2D,
	COMMAND_LOCATE_PLAYER_ANY_MEANS_3D,
	COMMAND_LOCATE_PLAYER_ON_FOOT_3D,
	COMMAND_LOCATE_PLAYER_IN_CAR_3D,
	COMMAND_LOCATE_STOPPED_PLAYER_ANY_MEANS_3D,
	COMMAND_LOCATE_STOPPED_PLAYER_ON_FOOT_3D,
	COMMAND_LOCATE_STOPPED_PLAYER_IN_CAR_3D,
	COMMAND_LOCATE_PLAYER_ANY_MEANS_CHAR_3D,
	COMMAND_LOCATE_PLAYER_ON_FOOT_CHAR_3D,
	COMMAND_LOCATE_PLAYER_IN_CAR_CHAR_3D,
	COMMAND_LOCATE_CHAR_ANY_MEANS_3D,
	COMMAND_LOCATE_CHAR_ON_FOOT_3D,
	COMMAND_LOCATE_CHAR_IN_CAR_3D,
	COMMAND_LOCATE_STOPPED_CHAR_ANY_MEANS_3D,
	COMMAND_LOCATE_STOPPED_CHAR_ON_FOOT_3D,
	COMMAND_LOCATE_STOPPED_CHAR_IN_CAR_3D,
	COMMAND_LOCATE_CHAR_ANY_MEANS_CHAR_3D,
	COMMAND_LOCATE_CHAR_ON_FOOT_CHAR_3D,
	COMMAND_LOCATE_CHAR_IN_CAR_CHAR_3D,
	COMMAND_CREATE_OBJECT,
	COMMAND_DELETE_OBJECT,
	COMMAND_ADD_SCORE,
	COMMAND_IS_SCORE_GREATER,
	COMMAND_STORE_SCORE,
	COMMAND_GIVE_REMOTE_CONTROLLED_CAR_TO_PLAYER,
	COMMAND_ALTER_WANTED_LEVEL,
	COMMAND_ALTER_WANTED_LEVEL_NO_DROP,
	COMMAND_IS_WANTED_LEVEL_GREATER,
	COMMAND_CLEAR_WANTED_LEVEL,
	COMMAND_SET_DEATHARREST_STATE,
	COMMAND_HAS_DEATHARREST_BEEN_EXECUTED,
	COMMAND_ADD_AMMO_TO_PLAYER,
	COMMAND_ADD_AMMO_TO_CHAR,
	COMMAND_ADD_AMMO_TO_CAR,
	COMMAND_IS_PLAYER_STILL_ALIVE,
	COMMAND_IS_PLAYER_DEAD,
	COMMAND_IS_CHAR_DEAD,
	COMMAND_IS_CAR_DEAD,
	COMMAND_SET_CHAR_THREAT_SEARCH,
	COMMAND_SET_CHAR_THREAT_REACTION,
	COMMAND_SET_CHAR_OBJ_NO_OBJ,
	COMMAND_ORDER_DRIVER_OUT_OF_CAR,
	COMMAND_ORDER_CHAR_TO_DRIVE_CAR,
	COMMAND_ADD_PATROL_POINT,
	COMMAND_IS_PLAYER_IN_GANGZONE,
	COMMAND_IS_PLAYER_IN_ZONE,
	COMMAND_IS_PLAYER_PRESSING_HORN,
	COMMAND_HAS_CHAR_SPOTTED_PLAYER,
	COMMAND_ORDER_CHAR_TO_BACKDOOR,
	COMMAND_ADD_CHAR_TO_GANG,
	COMMAND_IS_CHAR_OBJECTIVE_PASSED,
	COMMAND_SET_CHAR_DRIVE_AGGRESSION,
	COMMAND_SET_CHAR_MAX_DRIVESPEED,
	COMMAND_CREATE_CHAR_INSIDE_CAR,
	COMMAND_WARP_PLAYER_FROM_CAR_TO_COORD,
	COMMAND_MAKE_CHAR_DO_NOTHING,
	COMMAND_SET_CHAR_INVINCIBLE,
	COMMAND_SET_PLAYER_INVINCIBLE,
	COMMAND_SET_CHAR_GRAPHIC_TYPE,
	COMMAND_SET_PLAYER_GRAPHIC_TYPE,
	COMMAND_HAS_PLAYER_BEEN_ARRESTED,
	COMMAND_STOP_CHAR_DRIVING,
	COMMAND_KILL_CHAR,
	COMMAND_SET_FAVOURITE_CAR_MODEL_FOR_CHAR,
	COMMAND_SET_CHAR_OCCUPATION,
	COMMAND_CHANGE_CAR_LOCK,
	COMMAND_SHAKE_CAM_WITH_POINT,
	COMMAND_IS_CAR_MODEL,
	COMMAND_IS_CAR_REMAP,
	COMMAND_HAS_CAR_JUST_SUNK,
	COMMAND_SET_CAR_NO_COLLIDE,
	COMMAND_IS_CAR_DEAD_IN_AREA_2D,
	COMMAND_IS_CAR_DEAD_IN_AREA_3D,
	COMMAND_IS_TRAILER_ATTACHED,
	COMMAND_IS_CAR_ON_TRAILER,
	COMMAND_HAS_CAR_GOT_WEAPON,
	COMMAND_PARK,
	COMMAND_HAS_PARK_FINISHED,
	COMMAND_KILL_ALL_PASSENGERS,
	COMMAND_SET_CAR_BULLETPROOF,
	COMMAND_SET_CAR_FLAMEPROOF,
	COMMAND_SET_CAR_ROCKETPROOF,
	COMMAND_IS_CARBOMB_ACTIVE,
	COMMAND_GIVE_CAR_ALARM,
	COMMAND_PUT_CAR_ON_TRAILER,
	COMMAND_IS_CAR_CRUSHED,
	COMMAND_CREATE_GANG_CAR,
	COMMAND_CREATE_CAR_GENERATOR,
	COMMAND_SWITCH_CAR_GENERATOR,
	COMMAND_ADD_PAGER_MESSAGE,
	COMMAND_DISPLAY_ONSCREEN_TIMER,
	COMMAND_CLEAR_ONSCREEN_TIMER,
	COMMAND_DISPLAY_ONSCREEN_COUNTER,
	COMMAND_CLEAR_ONSCREEN_COUNTER,
	COMMAND_SET_ZONE_CAR_INFO,
	COMMAND_IS_CHAR_IN_GANG_ZONE,
	COMMAND_IS_CHAR_IN_ZONE,
	COMMAND_SET_CAR_DENSITY,
	COMMAND_SET_PED_DENSITY,
	COMMAND_POINT_CAMERA_AT_PLAYER,
	COMMAND_POINT_CAMERA_AT_CAR,
	COMMAND_POINT_CAMERA_AT_CHAR,
	COMMAND_RESTORE_CAMERA,
	COMMAND_SHAKE_PAD,
	COMMAND_SET_ZONE_PED_INFO,
	COMMAND_SET_TIME_SCALE,
	COMMAND_IS_CAR_IN_AIR,
	COMMAND_SET_FIXED_CAMERA_POSITION,
	COMMAND_POINT_CAMERA_AT_POINT,
	COMMAND_ADD_BLIP_FOR_CAR_OLD,
	COMMAND_ADD_BLIP_FOR_CHAR_OLD,
	COMMAND_ADD_BLIP_FOR_OBJECT_OLD,
	COMMAND_REMOVE_BLIP,
	COMMAND_CHANGE_BLIP_COLOUR,
	COMMAND_DIM_BLIP,
	COMMAND_ADD_BLIP_FOR_COORD_OLD,
	COMMAND_CHANGE_BLIP_SCALE,
	COMMAND_SET_FADING_COLOUR,
	COMMAND_DO_FADE,
	COMMAND_GET_FADING_STATUS,
	COMMAND_ADD_HOSPITAL_RESTART,
	COMMAND_ADD_POLICE_RESTART,
	COMMAND_OVERRIDE_NEXT_RESTART,
	COMMAND_DRAW_SHADOW,
	COMMAND_GET_PLAYER_HEADING,
	COMMAND_SET_PLAYER_HEADING,
	COMMAND_GET_CHAR_HEADING,
	COMMAND_SET_CHAR_HEADING,
	COMMAND_GET_CAR_HEADING,
	COMMAND_SET_CAR_HEADING,
	COMMAND_GET_OBJECT_HEADING,
	COMMAND_SET_OBJECT_HEADING,
	COMMAND_IS_PLAYER_TOUCHING_OBJECT,
	COMMAND_IS_CHAR_TOUCHING_OBJECT,
	COMMAND_SET_PLAYER_AMMO,
	COMMAND_SET_CHAR_AMMO,
	COMMAND_SET_CAR_AMMO,
	COMMAND_LOAD_CAMERA_SPLINE,
	COMMAND_MOVE_CAMERA_ALONG_SPLINE,
	COMMAND_GET_CAMERA_POSITION_ALONG_SPLINE,
	COMMAND_DECLARE_MISSION_FLAG,
	COMMAND_DECLARE_MISSION_FLAG_FOR_CONTACT,
	COMMAND_DECLARE_BASE_BRIEF_ID_FOR_CONTACT,
	COMMAND_IS_PLAYER_HEALTH_GREATER,
	COMMAND_IS_CHAR_HEALTH_GREATER,
	COMMAND_IS_CAR_HEALTH_GREATER,
	COMMAND_ADD_BLIP_FOR_CAR,
	COMMAND_ADD_BLIP_FOR_CHAR,
	COMMAND_ADD_BLIP_FOR_OBJECT,
	COMMAND_ADD_BLIP_FOR_CONTACT_POINT,
	COMMAND_ADD_BLIP_FOR_COORD,
	COMMAND_CHANGE_BLIP_DISPLAY,
	COMMAND_ADD_ONE_OFF_SOUND,
	COMMAND_ADD_CONTINUOUS_SOUND,
	COMMAND_REMOVE_SOUND,
	COMMAND_IS_CAR_STUCK_ON_ROOF,
	COMMAND_ADD_UPSIDEDOWN_CAR_CHECK,
	COMMAND_REMOVE_UPSIDEDOWN_CAR_CHECK,
	COMMAND_SET_CHAR_OBJ_WAIT_ON_FOOT,
	COMMAND_SET_CHAR_OBJ_FLEE_ON_FOOT_TILL_SAFE,
	COMMAND_SET_CHAR_OBJ_GUARD_SPOT,
	COMMAND_SET_CHAR_OBJ_GUARD_AREA,
	COMMAND_SET_CHAR_OBJ_WAIT_IN_CAR,
	COMMAND_IS_PLAYER_IN_AREA_ON_FOOT_2D,
	COMMAND_IS_PLAYER_IN_AREA_IN_CAR_2D,
	COMMAND_IS_PLAYER_STOPPED_IN_AREA_2D,
	COMMAND_IS_PLAYER_STOPPED_IN_AREA_ON_FOOT_2D,
	COMMAND_IS_PLAYER_STOPPED_IN_AREA_IN_CAR_2D,
	COMMAND_IS_PLAYER_IN_AREA_ON_FOOT_3D,
	COMMAND_IS_PLAYER_IN_AREA_IN_CAR_3D,
	COMMAND_IS_PLAYER_STOPPED_IN_AREA_3D,
	COMMAND_IS_PLAYER_STOPPED_IN_AREA_ON_FOOT_3D,
	COMMAND_IS_PLAYER_STOPPED_IN_AREA_IN_CAR_3D,
	COMMAND_IS_CHAR_IN_AREA_ON_FOOT_2D,
	COMMAND_IS_CHAR_IN_AREA_IN_CAR_2D,
	COMMAND_IS_CHAR_STOPPED_IN_AREA_2D,
	COMMAND_IS_CHAR_STOPPED_IN_AREA_ON_FOOT_2D,
	COMMAND_IS_CHAR_STOPPED_IN_AREA_IN_CAR_2D,
	COMMAND_IS_CHAR_IN_AREA_ON_FOOT_3D,
	COMMAND_IS_CHAR_IN_AREA_IN_CAR_3D,
	COMMAND_IS_CHAR_STOPPED_IN_AREA_3D,
	COMMAND_IS_CHAR_STOPPED_IN_AREA_ON_FOOT_3D,
	COMMAND_IS_CHAR_STOPPED_IN_AREA_IN_CAR_3D,
	COMMAND_IS_CAR_STOPPED_IN_AREA_2D,
	COMMAND_IS_CAR_STOPPED_IN_AREA_3D,
	COMMAND_LOCATE_CAR_2D,
	COMMAND_LOCATE_STOPPED_CAR_2D,
	COMMAND_LOCATE_CAR_3D,
	COMMAND_LOCATE_STOPPED_CAR_3D,
	COMMAND_GIVE_WEAPON_TO_PLAYER,
	COMMAND_GIVE_WEAPON_TO_CHAR,
	COMMAND_GIVE_WEAPON_TO_CAR,
	COMMAND_SET_PLAYER_CONTROL,
	COMMAND_FORCE_WEATHER,
	COMMAND_FORCE_WEATHER_NOW,
	COMMAND_RELEASE_WEATHER,
	COMMAND_SET_CURRENT_PLAYER_WEAPON,
	COMMAND_SET_CURRENT_CHAR_WEAPON,
	COMMAND_SET_CURRENT_CAR_WEAPON,
	COMMAND_GET_OBJECT_COORDINATES,
	COMMAND_SET_OBJECT_COORDINATES,
	COMMAND_GET_GAME_TIMER,
	COMMAND_TURN_CHAR_TO_FACE_COORD,
	COMMAND_TURN_PLAYER_TO_FACE_COORD,
	COMMAND_STORE_WANTED_LEVEL,
	COMMAND_IS_CAR_STOPPED,
	COMMAND_MARK_CHAR_AS_NO_LONGER_NEEDED,
	COMMAND_MARK_CAR_AS_NO_LONGER_NEEDED,
	COMMAND_MARK_OBJECT_AS_NO_LONGER_NEEDED,
	COMMAND_DONT_REMOVE_CHAR,
	COMMAND_DONT_REMOVE_CAR,
	COMMAND_DONT_REMOVE_OBJECT,
	COMMAND_CREATE_CHAR_AS_PASSENGER,
	COMMAND_SET_CHAR_OBJ_KILL_CHAR_ON_FOOT,
	COMMAND_SET_CHAR_OBJ_KILL_PLAYER_ON_FOOT,
	COMMAND_SET_CHAR_OBJ_KILL_CHAR_ANY_MEANS,
	COMMAND_SET_CHAR_OBJ_KILL_PLAYER_ANY_MEANS,
	COMMAND_SET_CHAR_OBJ_FLEE_CHAR_ON_FOOT_TILL_SAFE,
	COMMAND_SET_CHAR_OBJ_FLEE_PLAYER_ON_FOOT_TILL_SAFE,
	COMMAND_SET_CHAR_OBJ_FLEE_CHAR_ON_FOOT_ALWAYS,
	COMMAND_SET_CHAR_OBJ_FLEE_PLAYER_ON_FOOT_ALWAYS,
	COMMAND_SET_CHAR_OBJ_GOTO_CHAR_ON_FOOT,
	COMMAND_SET_CHAR_OBJ_GOTO_PLAYER_ON_FOOT,
	COMMAND_SET_CHAR_OBJ_LEAVE_CAR,
	COMMAND_SET_CHAR_OBJ_ENTER_CAR_AS_PASSENGER,
	COMMAND_SET_CHAR_OBJ_ENTER_CAR_AS_DRIVER,
	COMMAND_SET_CHAR_OBJ_FOLLOW_CAR_IN_CAR,
	COMMAND_SET_CHAR_OBJ_FIRE_AT_OBJECT_FROM_VEHICLE,
	COMMAND_SET_CHAR_OBJ_DESTROY_OBJECT,
	COMMAND_SET_CHAR_OBJ_DESTROY_CAR,
	COMMAND_SET_CHAR_OBJ_GOTO_AREA_ON_FOOT,
	COMMAND_SET_CHAR_OBJ_GOTO_AREA_IN_CAR,
	COMMAND_SET_CHAR_OBJ_FOLLOW_CAR_ON_FOOT_WITH_OFFSET,
	COMMAND_SET_CHAR_OBJ_GUARD_ATTACK,
	COMMAND_SET_CHAR_AS_LEADER,
	COMMAND_SET_PLAYER_AS_LEADER,
	COMMAND_LEAVE_GROUP,
	COMMAND_SET_CHAR_OBJ_FOLLOW_ROUTE,
	COMMAND_ADD_ROUTE_POINT,
	COMMAND_PRINT_WITH_NUMBER_BIG,
	COMMAND_PRINT_WITH_NUMBER,
	COMMAND_PRINT_WITH_NUMBER_NOW,
	COMMAND_PRINT_WITH_NUMBER_SOON,
	COMMAND_SWITCH_ROADS_ON,
	COMMAND_SWITCH_ROADS_OFF,
	COMMAND_GET_NUMBER_OF_PASSENGERS,
	COMMAND_GET_MAXIMUM_NUMBER_OF_PASSENGERS,
	COMMAND_SET_CAR_DENSITY_MULTIPLIER,
	COMMAND_SET_CAR_HEAVY,
	COMMAND_CLEAR_CHAR_THREAT_SEARCH,
	COMMAND_ACTIVATE_CRANE,
	COMMAND_DEACTIVATE_CRANE,
	COMMAND_SET_MAX_WANTED_LEVEL,
	COMMAND_SAVE_VAR_INT,
	COMMAND_SAVE_VAR_FLOAT,
	COMMAND_IS_CAR_IN_AIR_PROPER,
	COMMAND_IS_CAR_UPSIDEDOWN,
	COMMAND_GET_PLAYER_CHAR,
	COMMAND_CANCEL_OVERRIDE_RESTART,
	COMMAND_SET_POLICE_IGNORE_PLAYER,
	COMMAND_ADD_PAGER_MESSAGE_WITH_NUMBER,
	COMMAND_START_KILL_FRENZY,
	COMMAND_READ_KILL_FRENZY_STATUS,
	COMMAND_SQRT,
	COMMAND_LOCATE_PLAYER_ANY_MEANS_CAR_2D,
	COMMAND_LOCATE_PLAYER_ON_FOOT_CAR_2D,
	COMMAND_LOCATE_PLAYER_IN_CAR_CAR_2D,
	COMMAND_LOCATE_PLAYER_ANY_MEANS_CAR_3D,
	COMMAND_LOCATE_PLAYER_ON_FOOT_CAR_3D,
	COMMAND_LOCATE_PLAYER_IN_CAR_CAR_3D,
	COMMAND_LOCATE_CHAR_ANY_MEANS_CAR_2D,
	COMMAND_LOCATE_CHAR_ON_FOOT_CAR_2D,
	COMMAND_LOCATE_CHAR_IN_CAR_CAR_2D,
	COMMAND_LOCATE_CHAR_ANY_MEANS_CAR_3D,
	COMMAND_LOCATE_CHAR_ON_FOOT_CAR_3D,
	COMMAND_LOCATE_CHAR_IN_CAR_CAR_3D,
	COMMAND_GENERATE_RANDOM_FLOAT_IN_RANGE,
	COMMAND_GENERATE_RANDOM_INT_IN_RANGE,
	COMMAND_LOCK_CAR_DOORS,
	COMMAND_EXPLODE_CAR,
	COMMAND_ADD_EXPLOSION,
	COMMAND_IS_CAR_UPRIGHT,
	COMMAND_TURN_CHAR_TO_FACE_CHAR,
	COMMAND_TURN_CHAR_TO_FACE_PLAYER,
	COMMAND_TURN_PLAYER_TO_FACE_CHAR,
	COMMAND_SET_CHAR_OBJ_GOTO_COORD_ON_FOOT,
	COMMAND_SET_CHAR_OBJ_GOTO_COORD_IN_CAR,
	COMMAND_CREATE_PICKUP,
	COMMAND_HAS_PICKUP_BEEN_COLLECTED,
	COMMAND_REMOVE_PICKUP,
	COMMAND_SET_TAXI_LIGHTS,
	COMMAND_PRINT_BIG_Q,
	COMMAND_PRINT_WITH_NUMBER_BIG_Q,
	COMMAND_SET_GARAGE,
	COMMAND_SET_GARAGE_WITH_CAR_MODEL,
	COMMAND_SET_TARGET_CAR_FOR_MISSION_GARAGE,
	COMMAND_IS_CAR_IN_MISSION_GARAGE,
	COMMAND_SET_FREE_BOMBS,
	COMMAND_SET_POWERPOINT,
	COMMAND_SET_ALL_TAXI_LIGHTS,
	COMMAND_IS_CAR_ARMED_WITH_ANY_BOMB,
	COMMAND_APPLY_BRAKES_TO_PLAYERS_CAR,
	COMMAND_SET_PLAYER_HEALTH,
	COMMAND_SET_CHAR_HEALTH,
	COMMAND_SET_CAR_HEALTH,
	COMMAND_GET_PLAYER_HEALTH,
	COMMAND_GET_CHAR_HEALTH,
	COMMAND_GET_CAR_HEALTH,
	COMMAND_IS_CAR_ARMED_WITH_BOMB,
	COMMAND_CHANGE_CAR_COLOUR,
	COMMAND_SWITCH_PED_ROADS_ON,
	COMMAND_SWITCH_PED_ROADS_OFF,
	COMMAND_CHAR_LOOK_AT_CHAR_ALWAYS,
	COMMAND_CHAR_LOOK_AT_PLAYER_ALWAYS,
	COMMAND_PLAYER_LOOK_AT_CHAR_ALWAYS,
	COMMAND_STOP_CHAR_LOOKING,
	COMMAND_STOP_PLAYER_LOOKING,
	COMMAND_SWITCH_HELICOPTER,
	COMMAND_SET_GANG_ATTITUDE,
	COMMAND_SET_GANG_GANG_ATTITUDE,
	COMMAND_SET_GANG_PLAYER_ATTITUDE,
	COMMAND_SET_GANG_PED_MODELS,
	COMMAND_SET_GANG_CAR_MODEL,
	COMMAND_SET_GANG_WEAPONS,
	COMMAND_SET_CHAR_OBJ_RUN_TO_AREA,
	COMMAND_SET_CHAR_OBJ_RUN_TO_COORD,
	COMMAND_IS_PLAYER_TOUCHING_OBJECT_ON_FOOT,
	COMMAND_IS_CHAR_TOUCHING_OBJECT_ON_FOOT,
	COMMAND_LOAD_SPECIAL_CHARACTER,
	COMMAND_HAS_SPECIAL_CHARACTER_LOADED,
	COMMAND_FLASH_CAR,
	COMMAND_FLASH_CHAR,
	COMMAND_FLASH_OBJECT,
	COMMAND_IS_PLAYER_IN_REMOTE_MODE,
	COMMAND_ARM_CAR_WITH_BOMB,
	COMMAND_SET_CHAR_PERSONALITY,
	COMMAND_SET_CUTSCENE_OFFSET,
	COMMAND_SET_ANIM_GROUP_FOR_CHAR,
	COMMAND_SET_ANIM_GROUP_FOR_PLAYER,
	COMMAND_REQUEST_MODEL,
	COMMAND_HAS_MODEL_LOADED,
	COMMAND_MARK_MODEL_AS_NO_LONGER_NEEDED,
	COMMAND_GRAB_PHONE,
	COMMAND_SET_REPEATED_PHONE_MESSAGE,
	COMMAND_SET_PHONE_MESSAGE,
	COMMAND_HAS_PHONE_DISPLAYED_MESSAGE,
	COMMAND_TURN_PHONE_OFF,
	COMMAND_DRAW_CORONA,
	COMMAND_DRAW_LIGHT,
	COMMAND_STORE_WEATHER,
	COMMAND_RESTORE_WEATHER,
	COMMAND_STORE_CLOCK,
	COMMAND_RESTORE_CLOCK,
	COMMAND_RESTART_CRITICAL_MISSION,
	COMMAND_IS_PLAYER_PLAYING,
	COMMAND_SET_COLL_OBJ_NO_OBJ,
	COMMAND_SET_COLL_OBJ_WAIT_ON_FOOT,
	COMMAND_SET_COLL_OBJ_FLEE_ON_FOOT_TILL_SAFE,
	COMMAND_SET_COLL_OBJ_GUARD_SPOT,
	COMMAND_SET_COLL_OBJ_GUARD_AREA,
	COMMAND_SET_COLL_OBJ_WAIT_IN_CAR,
	COMMAND_SET_COLL_OBJ_KILL_CHAR_ON_FOOT,
	COMMAND_SET_COLL_OBJ_KILL_PLAYER_ON_FOOT,
	COMMAND_SET_COLL_OBJ_KILL_CHAR_ANY_MEANS,
	COMMAND_SET_COLL_OBJ_KILL_PLAYER_ANY_MEANS,
	COMMAND_SET_COLL_OBJ_FLEE_CHAR_ON_FOOT_TILL_SAFE,
	COMMAND_SET_COLL_OBJ_FLEE_PLAYER_ON_FOOT_TILL_SAFE,
	COMMAND_SET_COLL_OBJ_FLEE_CHAR_ON_FOOT_ALWAYS,
	COMMAND_SET_COLL_OBJ_FLEE_PLAYER_ON_FOOT_ALWAYS,
	COMMAND_SET_COLL_OBJ_GOTO_CHAR_ON_FOOT,
	COMMAND_SET_COLL_OBJ_GOTO_PLAYER_ON_FOOT,
	COMMAND_SET_COLL_OBJ_LEAVE_CAR,
	COMMAND_SET_COLL_OBJ_ENTER_CAR_AS_PASSENGER,
	COMMAND_SET_COLL_OBJ_ENTER_CAR_AS_DRIVER,
	COMMAND_SET_COLL_OBJ_FOLLOW_CAR_IN_CAR,
	COMMAND_SET_COLL_OBJ_FIRE_AT_OBJECT_FROM_VEHICLE,
	COMMAND_SET_COLL_OBJ_DESTROY_OBJECT,
	COMMAND_SET_COLL_OBJ_DESTROY_CAR,
	COMMAND_SET_COLL_OBJ_GOTO_AREA_ON_FOOT,
	COMMAND_SET_COLL_OBJ_GOTO_AREA_IN_CAR,
	COMMAND_SET_COLL_OBJ_FOLLOW_CAR_ON_FOOT_WITH_OFFSET,
	COMMAND_SET_COLL_OBJ_GUARD_ATTACK,
	COMMAND_SET_COLL_OBJ_FOLLOW_ROUTE,
	COMMAND_SET_COLL_OBJ_GOTO_COORD_ON_FOOT,
	COMMAND_SET_COLL_OBJ_GOTO_COORD_IN_CAR,
	COMMAND_SET_COLL_OBJ_RUN_TO_AREA,
	COMMAND_SET_COLL_OBJ_RUN_TO_COORD,
	COMMAND_ADD_PEDS_IN_AREA_TO_COLL,
	COMMAND_ADD_PEDS_IN_VEHICLE_TO_COLL,
	COMMAND_CLEAR_COLL,
	COMMAND_IS_COLL_IN_CARS,
	COMMAND_LOCATE_COLL_ANY_MEANS_2D,
	COMMAND_LOCATE_COLL_ON_FOOT_2D,
	COMMAND_LOCATE_COLL_IN_CAR_2D,
	COMMAND_LOCATE_STOPPED_COLL_ANY_MEANS_2D,
	COMMAND_LOCATE_STOPPED_COLL_ON_FOOT_2D,
	COMMAND_LOCATE_STOPPED_COLL_IN_CAR_2D,
	COMMAND_LOCATE_COLL_ANY_MEANS_CHAR_2D,
	COMMAND_LOCATE_COLL_ON_FOOT_CHAR_2D,
	COMMAND_LOCATE_COLL_IN_CAR_CHAR_2D,
	COMMAND_LOCATE_COLL_ANY_MEANS_CAR_2D,
	COMMAND_LOCATE_COLL_ON_FOOT_CAR_2D,
	COMMAND_LOCATE_COLL_IN_CAR_CAR_2D,
	COMMAND_LOCATE_COLL_ANY_MEANS_PLAYER_2D,
	COMMAND_LOCATE_COLL_ON_FOOT_PLAYER_2D,
	COMMAND_LOCATE_COLL_IN_CAR_PLAYER_2D,
	COMMAND_IS_COLL_IN_AREA_2D,
	COMMAND_IS_COLL_IN_AREA_ON_FOOT_2D,
	COMMAND_IS_COLL_IN_AREA_IN_CAR_2D,
	COMMAND_IS_COLL_STOPPED_IN_AREA_2D,
	COMMAND_IS_COLL_STOPPED_IN_AREA_ON_FOOT_2D,
	COMMAND_IS_COLL_STOPPED_IN_AREA_IN_CAR_2D,
	COMMAND_GET_NUMBER_OF_PEDS_IN_COLL,
	COMMAND_SET_CHAR_HEED_THREATS,
	COMMAND_SET_PLAYER_HEED_THREATS,
	COMMAND_GET_CONTROLLER_MODE,
	COMMAND_SET_CAN_RESPRAY_CAR,
	COMMAND_IS_TAXI,
	COMMAND_UNLOAD_SPECIAL_CHARACTER,
	COMMAND_RESET_NUM_OF_MODELS_KILLED_BY_PLAYER,
	COMMAND_GET_NUM_OF_MODELS_KILLED_BY_PLAYER,
	COMMAND_ACTIVATE_GARAGE,
	COMMAND_SWITCH_TAXI_TIMER,
	COMMAND_CREATE_OBJECT_NO_OFFSET,
	COMMAND_IS_BOAT,
	COMMAND_SET_CHAR_OBJ_GOTO_AREA_ANY_MEANS,
	COMMAND_SET_COLL_OBJ_GOTO_AREA_ANY_MEANS,
	COMMAND_IS_PLAYER_STOPPED,
	COMMAND_IS_CHAR_STOPPED,
	COMMAND_MESSAGE_WAIT,
	COMMAND_ADD_PARTICLE_EFFECT,
	COMMAND_SWITCH_WIDESCREEN,
	COMMAND_ADD_SPRITE_BLIP_FOR_CAR,
	COMMAND_ADD_SPRITE_BLIP_FOR_CHAR,
	COMMAND_ADD_SPRITE_BLIP_FOR_OBJECT,
	COMMAND_ADD_SPRITE_BLIP_FOR_CONTACT_POINT,
	COMMAND_ADD_SPRITE_BLIP_FOR_COORD,
	COMMAND_SET_CHAR_ONLY_DAMAGED_BY_PLAYER,
	COMMAND_SET_CAR_ONLY_DAMAGED_BY_PLAYER,
	COMMAND_SET_CHAR_PROOFS,
	COMMAND_SET_CAR_PROOFS,
	COMMAND_IS_PLAYER_IN_ANGLED_AREA_2D,
	COMMAND_IS_PLAYER_IN_ANGLED_AREA_ON_FOOT_2D,
	COMMAND_IS_PLAYER_IN_ANGLED_AREA_IN_CAR_2D,
	COMMAND_IS_PLAYER_STOPPED_IN_ANGLED_AREA_2D,
	COMMAND_IS_PLAYER_STOPPED_IN_ANGLED_AREA_ON_FOOT_2D,
	COMMAND_IS_PLAYER_STOPPED_IN_ANGLED_AREA_IN_CAR_2D,
	COMMAND_IS_PLAYER_IN_ANGLED_AREA_3D,
	COMMAND_IS_PLAYER_IN_ANGLED_AREA_ON_FOOT_3D,
	COMMAND_IS_PLAYER_IN_ANGLED_AREA_IN_CAR_3D,
	COMMAND_IS_PLAYER_STOPPED_IN_ANGLED_AREA_3D,
	COMMAND_IS_PLAYER_STOPPED_IN_ANGLED_AREA_ON_FOOT_3D,
	COMMAND_IS_PLAYER_STOPPED_IN_ANGLED_AREA_IN_CAR_3D,
	COMMAND_DEACTIVATE_GARAGE,
	COMMAND_GET_NUMBER_OF_CARS_COLLECTED_BY_GARAGE,
	COMMAND_HAS_CAR_BEEN_TAKEN_TO_GARAGE,
	COMMAND_SET_SWAT_REQUIRED,
	COMMAND_SET_FBI_REQUIRED,
	COMMAND_SET_ARMY_REQUIRED,
	COMMAND_IS_CAR_IN_WATER,
	COMMAND_GET_CLOSEST_CHAR_NODE,
	COMMAND_GET_CLOSEST_CAR_NODE,
	COMMAND_CAR_GOTO_COORDINATES_ACCURATE,
	COMMAND_START_PACMAN_RACE,
	COMMAND_START_PACMAN_RECORD,
	COMMAND_GET_NUMBER_OF_POWER_PILLS_EATEN,
	COMMAND_CLEAR_PACMAN,
	COMMAND_START_PACMAN_SCRAMBLE,
	COMMAND_GET_NUMBER_OF_POWER_PILLS_CARRIED,
	COMMAND_CLEAR_NUMBER_OF_POWER_PILLS_CARRIED,
	COMMAND_IS_CAR_ON_SCREEN,
	COMMAND_IS_CHAR_ON_SCREEN,
	COMMAND_IS_OBJECT_ON_SCREEN,
	COMMAND_GOSUB_FILE,
	COMMAND_GET_GROUND_Z_FOR_3D_COORD,
	COMMAND_START_SCRIPT_FIRE,
	COMMAND_IS_SCRIPT_FIRE_EXTINGUISHED,
	COMMAND_REMOVE_SCRIPT_FIRE,
	COMMAND_SET_COMEDY_CONTROLS,
	COMMAND_BOAT_GOTO_COORDS,
	COMMAND_BOAT_STOP,
	COMMAND_IS_PLAYER_SHOOTING_IN_AREA,
	COMMAND_IS_CHAR_SHOOTING_IN_AREA,
	COMMAND_IS_CURRENT_PLAYER_WEAPON,
	COMMAND_IS_CURRENT_CHAR_WEAPON,
	COMMAND_CLEAR_NUMBER_OF_POWER_PILLS_EATEN,
	COMMAND_ADD_POWER_PILL,
	COMMAND_SET_BOAT_CRUISE_SPEED,
	COMMAND_GET_RANDOM_CHAR_IN_AREA,
	COMMAND_GET_RANDOM_CHAR_IN_ZONE,
	COMMAND_IS_PLAYER_IN_TAXI,
	COMMAND_IS_PLAYER_SHOOTING,
	COMMAND_IS_CHAR_SHOOTING,
	COMMAND_CREATE_MONEY_PICKUP,
	COMMAND_SET_CHAR_ACCURACY,
	COMMAND_GET_CAR_SPEED,
	COMMAND_LOAD_CUTSCENE,
	COMMAND_CREATE_CUTSCENE_OBJECT,
	COMMAND_SET_CUTSCENE_ANIM,
	COMMAND_START_CUTSCENE,
	COMMAND_GET_CUTSCENE_TIME,
	COMMAND_HAS_CUTSCENE_FINISHED,
	COMMAND_CLEAR_CUTSCENE,
	COMMAND_RESTORE_CAMERA_JUMPCUT,
	COMMAND_CREATE_COLLECTABLE1,
	COMMAND_SET_COLLECTABLE1_TOTAL,
	COMMAND_IS_PROJECTILE_IN_AREA,
	COMMAND_DESTROY_PROJECTILES_IN_AREA,
	COMMAND_DROP_MINE,
	COMMAND_DROP_NAUTICAL_MINE,
	COMMAND_IS_CHAR_MODEL,
	COMMAND_LOAD_SPECIAL_MODEL,
	COMMAND_CREATE_CUTSCENE_HEAD,
	COMMAND_SET_CUTSCENE_HEAD_ANIM,
	COMMAND_SIN,
	COMMAND_COS,
	COMMAND_GET_CAR_FORWARD_X,
	COMMAND_GET_CAR_FORWARD_Y,
	COMMAND_CHANGE_GARAGE_TYPE,
	COMMAND_ACTIVATE_CRUSHER_CRANE,
	COMMAND_PRINT_WITH_2_NUMBERS,
	COMMAND_PRINT_WITH_2_NUMBERS_NOW,
	COMMAND_PRINT_WITH_2_NUMBERS_SOON,
	COMMAND_PRINT_WITH_3_NUMBERS,
	COMMAND_PRINT_WITH_3_NUMBERS_NOW,
	COMMAND_PRINT_WITH_3_NUMBERS_SOON,
	COMMAND_PRINT_WITH_4_NUMBERS,
	COMMAND_PRINT_WITH_4_NUMBERS_NOW,
	COMMAND_PRINT_WITH_4_NUMBERS_SOON,
	COMMAND_PRINT_WITH_5_NUMBERS,
	COMMAND_PRINT_WITH_5_NUMBERS_NOW,
	COMMAND_PRINT_WITH_5_NUMBERS_SOON,
	COMMAND_PRINT_WITH_6_NUMBERS,
	COMMAND_PRINT_WITH_6_NUMBERS_NOW,
	COMMAND_PRINT_WITH_6_NUMBERS_SOON,
	COMMAND_SET_CHAR_OBJ_FOLLOW_CHAR_IN_FORMATION,
	COMMAND_PLAYER_MADE_PROGRESS,
	COMMAND_SET_PROGRESS_TOTAL,
	COMMAND_REGISTER_JUMP_DISTANCE,
	COMMAND_REGISTER_JUMP_HEIGHT,
	COMMAND_REGISTER_JUMP_FLIPS,
	COMMAND_REGISTER_JUMP_SPINS,
	COMMAND_REGISTER_JUMP_STUNT,
	COMMAND_REGISTER_UNIQUE_JUMP_FOUND,
	COMMAND_SET_UNIQUE_JUMPS_TOTAL,
	COMMAND_REGISTER_PASSENGER_DROPPED_OFF_TAXI,
	COMMAND_REGISTER_MONEY_MADE_TAXI,
	COMMAND_REGISTER_MISSION_GIVEN,
	COMMAND_REGISTER_MISSION_PASSED,
	COMMAND_SET_CHAR_RUNNING,
	COMMAND_REMOVE_ALL_SCRIPT_FIRES,
	COMMAND_IS_FIRST_CAR_COLOUR,
	COMMAND_IS_SECOND_CAR_COLOUR,
	COMMAND_HAS_CHAR_BEEN_DAMAGED_BY_WEAPON,
	COMMAND_HAS_CAR_BEEN_DAMAGED_BY_WEAPON,
	COMMAND_IS_CHAR_IN_CHARS_GROUP,
	COMMAND_IS_CHAR_IN_PLAYERS_GROUP,
	COMMAND_EXPLODE_CHAR_HEAD,
	COMMAND_EXPLODE_PLAYER_HEAD,
	COMMAND_ANCHOR_BOAT,
	COMMAND_SET_ZONE_GROUP,
	COMMAND_START_CAR_FIRE,
	COMMAND_START_CHAR_FIRE,
	COMMAND_GET_RANDOM_CAR_OF_TYPE_IN_AREA,
	COMMAND_GET_RANDOM_CAR_OF_TYPE_IN_ZONE,
	COMMAND_HAS_RESPRAY_HAPPENED,
	COMMAND_SET_CAMERA_ZOOM,
	COMMAND_CREATE_PICKUP_WITH_AMMO,
	COMMAND_SET_CAR_RAM_CAR,
	COMMAND_SET_CAR_BLOCK_CAR,
	COMMAND_SET_CHAR_OBJ_CATCH_TRAIN,
	COMMAND_SET_COLL_OBJ_CATCH_TRAIN,
	COMMAND_SET_PLAYER_NEVER_GETS_TIRED,
	COMMAND_SET_PLAYER_FAST_RELOAD,
	COMMAND_SET_CHAR_BLEEDING,
	COMMAND_SET_CAR_FUNNY_SUSPENSION,
	COMMAND_SET_CAR_BIG_WHEELS,
	COMMAND_SET_FREE_RESPRAYS,
	COMMAND_SET_PLAYER_VISIBLE,
	COMMAND_SET_CHAR_VISIBLE,
	COMMAND_SET_CAR_VISIBLE,
	COMMAND_IS_AREA_OCCUPIED,
	COMMAND_START_DRUG_RUN,
	COMMAND_HAS_DRUG_RUN_BEEN_COMPLETED,
	COMMAND_HAS_DRUG_PLANE_BEEN_SHOT_DOWN,
	COMMAND_SAVE_PLAYER_FROM_FIRES,
	COMMAND_DISPLAY_TEXT,
	COMMAND_SET_TEXT_SCALE,
	COMMAND_SET_TEXT_COLOUR,
	COMMAND_SET_TEXT_JUSTIFY,
	COMMAND_SET_TEXT_CENTRE,
	COMMAND_SET_TEXT_WRAPX,
	COMMAND_SET_TEXT_CENTRE_SIZE,
	COMMAND_SET_TEXT_BACKGROUND,
	COMMAND_SET_TEXT_BACKGROUND_COLOUR,
	COMMAND_SET_TEXT_BACKGROUND_ONLY_TEXT,
	COMMAND_SET_TEXT_PROPORTIONAL,
	COMMAND_SET_TEXT_FONT,
	COMMAND_INDUSTRIAL_PASSED,
	COMMAND_COMMERCIAL_PASSED,
	COMMAND_SUBURBAN_PASSED,
	COMMAND_ROTATE_OBJECT,
	COMMAND_SLIDE_OBJECT,
	COMMAND_REMOVE_CHAR_ELEGANTLY,
	COMMAND_SET_CHAR_STAY_IN_SAME_PLACE,
	COMMAND_IS_NASTY_GAME,
	COMMAND_UNDRESS_CHAR,
	COMMAND_DRESS_CHAR,
	COMMAND_START_CHASE_SCENE,
	COMMAND_STOP_CHASE_SCENE,
	COMMAND_IS_EXPLOSION_IN_AREA,
	COMMAND_IS_EXPLOSION_IN_ZONE,
	COMMAND_START_DRUG_DROP_OFF,
	COMMAND_HAS_DROP_OFF_PLANE_BEEN_SHOT_DOWN,
	COMMAND_FIND_DROP_OFF_PLANE_COORDINATES,
	COMMAND_CREATE_FLOATING_PACKAGE,
	COMMAND_PLACE_OBJECT_RELATIVE_TO_CAR,
	COMMAND_MAKE_OBJECT_TARGETTABLE,
	COMMAND_ADD_ARMOUR_TO_PLAYER,
	COMMAND_ADD_ARMOUR_TO_CHAR,
	COMMAND_OPEN_GARAGE,
	COMMAND_CLOSE_GARAGE,
	COMMAND_WARP_CHAR_FROM_CAR_TO_COORD,
	COMMAND_SET_VISIBILITY_OF_CLOSEST_OBJECT_OF_TYPE,
	COMMAND_HAS_CHAR_SPOTTED_CHAR,
	COMMAND_SET_CHAR_OBJ_HAIL_TAXI,
	COMMAND_HAS_OBJECT_BEEN_DAMAGED,
	COMMAND_START_KILL_FRENZY_HEADSHOT,
	COMMAND_ACTIVATE_MILITARY_CRANE,
	COMMAND_WARP_PLAYER_INTO_CAR,
	COMMAND_WARP_CHAR_INTO_CAR,
	COMMAND_SWITCH_CAR_RADIO,
	COMMAND_SET_AUDIO_STREAM,
	COMMAND_PRINT_WITH_2_NUMBERS_BIG,
	COMMAND_PRINT_WITH_3_NUMBERS_BIG,
	COMMAND_PRINT_WITH_4_NUMBERS_BIG,
	COMMAND_PRINT_WITH_5_NUMBERS_BIG,
	COMMAND_PRINT_WITH_6_NUMBERS_BIG,
	COMMAND_SET_CHAR_WAIT_STATE,
	COMMAND_SET_CAMERA_BEHIND_PLAYER,
	COMMAND_SET_MOTION_BLUR,
	COMMAND_PRINT_STRING_IN_STRING,
	COMMAND_CREATE_RANDOM_CHAR,
	COMMAND_SET_CHAR_OBJ_STEAL_ANY_CAR,
	COMMAND_SET_2_REPEATED_PHONE_MESSAGES,
	COMMAND_SET_2_PHONE_MESSAGES,
	COMMAND_SET_3_REPEATED_PHONE_MESSAGES,
	COMMAND_SET_3_PHONE_MESSAGES,
	COMMAND_SET_4_REPEATED_PHONE_MESSAGES,
	COMMAND_SET_4_PHONE_MESSAGES,
	COMMAND_IS_SNIPER_BULLET_IN_AREA,
	COMMAND_GIVE_PLAYER_DETONATOR,
	COMMAND_SET_COLL_OBJ_STEAL_ANY_CAR,
	COMMAND_SET_OBJECT_VELOCITY,
	COMMAND_SET_OBJECT_COLLISION,
	COMMAND_IS_ICECREAM_JINGLE_ON,
	COMMAND_PRINT_STRING_IN_STRING_NOW,
	COMMAND_PRINT_STRING_IN_STRING_SOON,
	COMMAND_SET_5_REPEATED_PHONE_MESSAGES,
	COMMAND_SET_5_PHONE_MESSAGES,
	COMMAND_SET_6_REPEATED_PHONE_MESSAGES,
	COMMAND_SET_6_PHONE_MESSAGES,
	COMMAND_IS_POINT_OBSCURED_BY_A_MISSION_ENTITY,
	COMMAND_LOAD_ALL_MODELS_NOW,
	COMMAND_ADD_TO_OBJECT_VELOCITY,
	COMMAND_DRAW_SPRITE,
	COMMAND_DRAW_RECT,
	COMMAND_LOAD_SPRITE,
	COMMAND_LOAD_TEXTURE_DICTIONARY,
	COMMAND_REMOVE_TEXTURE_DICTIONARY,
	COMMAND_SET_OBJECT_DYNAMIC,
	COMMAND_SET_CHAR_ANIM_SPEED,
	COMMAND_PLAY_MISSION_PASSED_TUNE,
	COMMAND_CLEAR_AREA,
	COMMAND_FREEZE_ONSCREEN_TIMER,
	COMMAND_SWITCH_CAR_SIREN,
	COMMAND_SWITCH_PED_ROADS_ON_ANGLED,
	COMMAND_SWITCH_PED_ROADS_OFF_ANGLED,
	COMMAND_SWITCH_ROADS_ON_ANGLED,
	COMMAND_SWITCH_ROADS_OFF_ANGLED,
	COMMAND_SET_CAR_WATERTIGHT,
	COMMAND_ADD_MOVING_PARTICLE_EFFECT,
	COMMAND_SET_CHAR_CANT_BE_DRAGGED_OUT,
	COMMAND_TURN_CAR_TO_FACE_COORD,
	COMMAND_IS_CRANE_LIFTING_CAR,
	COMMAND_DRAW_SPHERE,
	COMMAND_SET_CAR_STATUS,
	COMMAND_IS_CHAR_MALE,
	COMMAND_SCRIPT_NAME,
	COMMAND_CHANGE_GARAGE_TYPE_WITH_CAR_MODEL,
	COMMAND_FIND_DRUG_PLANE_COORDINATES,
	COMMAND_SAVE_INT_TO_DEBUG_FILE,
	COMMAND_SAVE_FLOAT_TO_DEBUG_FILE,
	COMMAND_SAVE_NEWLINE_TO_DEBUG_FILE,
	COMMAND_POLICE_RADIO_MESSAGE,
	COMMAND_SET_CAR_STRONG,
	COMMAND_REMOVE_ROUTE,
	COMMAND_SWITCH_RUBBISH,
	COMMAND_REMOVE_PARTICLE_EFFECTS_IN_AREA,
	COMMAND_SWITCH_STREAMING,
	COMMAND_IS_GARAGE_OPEN,
	COMMAND_IS_GARAGE_CLOSED,
	COMMAND_START_CATALINA_HELI,
	COMMAND_CATALINA_HELI_TAKE_OFF,
	COMMAND_REMOVE_CATALINA_HELI,
	COMMAND_HAS_CATALINA_HELI_BEEN_SHOT_DOWN,
	COMMAND_SWAP_NEAREST_BUILDING_MODEL,
	COMMAND_SWITCH_WORLD_PROCESSING,
	COMMAND_REMOVE_ALL_PLAYER_WEAPONS,
	COMMAND_GRAB_CATALINA_HELI,
	COMMAND_CLEAR_AREA_OF_CARS,
	COMMAND_SET_ROTATING_GARAGE_DOOR,
	COMMAND_ADD_SPHERE,
	COMMAND_REMOVE_SPHERE,
	COMMAND_CATALINA_HELI_FLY_AWAY,
	COMMAND_SET_EVERYONE_IGNORE_PLAYER,
	COMMAND_STORE_CAR_CHAR_IS_IN_NO_SAVE,
	COMMAND_STORE_CAR_PLAYER_IS_IN_NO_SAVE,
	COMMAND_IS_PHONE_DISPLAYING_MESSAGE,
	COMMAND_DISPLAY_ONSCREEN_TIMER_WITH_STRING,
	COMMAND_DISPLAY_ONSCREEN_COUNTER_WITH_STRING,
	COMMAND_CREATE_RANDOM_CAR_FOR_CAR_PARK,
	COMMAND_IS_COLLISION_IN_MEMORY,
	COMMAND_SET_WANTED_MULTIPLIER,
	COMMAND_SET_CAMERA_IN_FRONT_OF_PLAYER,
	COMMAND_IS_CAR_VISIBLY_DAMAGED,
	COMMAND_DOES_OBJECT_EXIST,
	COMMAND_LOAD_SCENE,
	COMMAND_ADD_STUCK_CAR_CHECK,
	COMMAND_REMOVE_STUCK_CAR_CHECK,
	COMMAND_IS_CAR_STUCK,
	COMMAND_LOAD_MISSION_AUDIO,
	COMMAND_HAS_MISSION_AUDIO_LOADED,
	COMMAND_PLAY_MISSION_AUDIO,
	COMMAND_HAS_MISSION_AUDIO_FINISHED,
	COMMAND_GET_CLOSEST_CAR_NODE_WITH_HEADING,
	COMMAND_HAS_IMPORT_GARAGE_SLOT_BEEN_FILLED,
	COMMAND_CLEAR_THIS_PRINT,
	COMMAND_CLEAR_THIS_BIG_PRINT,
	COMMAND_SET_MISSION_AUDIO_POSITION,
	COMMAND_ACTIVATE_SAVE_MENU,
	COMMAND_HAS_SAVE_GAME_FINISHED,
	COMMAND_NO_SPECIAL_CAMERA_FOR_THIS_GARAGE,
	COMMAND_ADD_BLIP_FOR_PICKUP_OLD,
	COMMAND_ADD_BLIP_FOR_PICKUP,
	COMMAND_ADD_SPRITE_BLIP_FOR_PICKUP,
	COMMAND_SET_PED_DENSITY_MULTIPLIER,
	COMMAND_FORCE_RANDOM_PED_TYPE,
	COMMAND_SET_TEXT_DRAW_BEFORE_FADE,
	COMMAND_GET_COLLECTABLE1S_COLLECTED,
	COMMAND_REGISTER_EL_BURRO_TIME,
	COMMAND_SET_SPRITES_DRAW_BEFORE_FADE,
	COMMAND_SET_TEXT_RIGHT_JUSTIFY,
	COMMAND_PRINT_HELP,
	COMMAND_CLEAR_HELP,
	COMMAND_FLASH_HUD_OBJECT,
	COMMAND_FLASH_RADAR_BLIP,
	COMMAND_IS_CHAR_IN_CONTROL,
	COMMAND_SET_GENERATE_CARS_AROUND_CAMERA,
	COMMAND_CLEAR_SMALL_PRINTS,
	COMMAND_HAS_MILITARY_CRANE_COLLECTED_ALL_CARS,
	COMMAND_SET_UPSIDEDOWN_CAR_NOT_DAMAGED,
	COMMAND_CAN_PLAYER_START_MISSION,
	COMMAND_MAKE_PLAYER_SAFE_FOR_CUTSCENE,
	COMMAND_USE_TEXT_COMMANDS,
	COMMAND_SET_THREAT_FOR_PED_TYPE,
	COMMAND_CLEAR_THREAT_FOR_PED_TYPE,
	COMMAND_GET_CAR_COLOURS,
	COMMAND_SET_ALL_CARS_CAN_BE_DAMAGED,
	COMMAND_SET_CAR_CAN_BE_DAMAGED,
	COMMAND_MAKE_PLAYER_UNSAFE,
	COMMAND_LOAD_COLLISION,
	COMMAND_GET_BODY_CAST_HEALTH,
	COMMAND_SET_CHARS_CHATTING,
	COMMAND_MAKE_PLAYER_SAFE,
	COMMAND_SET_CAR_STAYS_IN_CURRENT_LEVEL,
	COMMAND_SET_CHAR_STAYS_IN_CURRENT_LEVEL,
	COMMAND_REGISTER_4X4_ONE_TIME,
	COMMAND_REGISTER_4X4_TWO_TIME,
	COMMAND_REGISTER_4X4_THREE_TIME,
	COMMAND_REGISTER_4X4_MAYHEM_TIME,
	COMMAND_REGISTER_LIFE_SAVED,
	COMMAND_REGISTER_CRIMINAL_CAUGHT,
	COMMAND_REGISTER_AMBULANCE_LEVEL,
	COMMAND_REGISTER_FIRE_EXTINGUISHED,
	COMMAND_TURN_PHONE_ON,
	COMMAND_REGISTER_LONGEST_DODO_FLIGHT,
	COMMAND_REGISTER_DEFUSE_BOMB_TIME,
	COMMAND_SET_TOTAL_NUMBER_OF_KILL_FRENZIES,
	COMMAND_BLOW_UP_RC_BUGGY,
	COMMAND_REMOVE_CAR_FROM_CHASE,
	COMMAND_IS_FRENCH_GAME,
	COMMAND_IS_GERMAN_GAME,
	COMMAND_CLEAR_MISSION_AUDIO,
	COMMAND_SET_FADE_IN_AFTER_NEXT_ARREST,
	COMMAND_SET_FADE_IN_AFTER_NEXT_DEATH,
	COMMAND_SET_GANG_PED_MODEL_PREFERENCE,
	COMMAND_SET_CHAR_USE_PEDNODE_SEEK,
	COMMAND_SWITCH_VEHICLE_WEAPONS,
	COMMAND_SET_GET_OUT_OF_JAIL_FREE,
	COMMAND_SET_FREE_HEALTH_CARE,
	COMMAND_IS_CAR_DOOR_CLOSED,
	COMMAND_LOAD_AND_LAUNCH_MISSION,
	COMMAND_LOAD_AND_LAUNCH_MISSION_INTERNAL,
	COMMAND_SET_OBJECT_DRAW_LAST,
	COMMAND_GET_AMMO_IN_PLAYER_WEAPON,
	COMMAND_GET_AMMO_IN_CHAR_WEAPON,
	COMMAND_REGISTER_KILL_FRENZY_PASSED,
	COMMAND_SET_CHAR_SAY,
	COMMAND_SET_NEAR_CLIP,
	COMMAND_SET_RADIO_CHANNEL,
	COMMAND_OVERRIDE_HOSPITAL_LEVEL,
	COMMAND_OVERRIDE_POLICE_STATION_LEVEL,
	COMMAND_FORCE_RAIN,
	COMMAND_DOES_GARAGE_CONTAIN_CAR,
	COMMAND_SET_CAR_TRACTION,
	COMMAND_ARE_MEASUREMENTS_IN_METRES,
	COMMAND_CONVERT_METRES_TO_FEET,
	COMMAND_MARK_ROADS_BETWEEN_LEVELS,
	COMMAND_MARK_PED_ROADS_BETWEEN_LEVELS,
	COMMAND_SET_CAR_AVOID_LEVEL_TRANSITIONS,
	COMMAND_SET_CHAR_AVOID_LEVEL_TRANSITIONS,
	COMMAND_IS_THREAT_FOR_PED_TYPE,
	COMMAND_CLEAR_AREA_OF_CHARS,
	COMMAND_SET_TOTAL_NUMBER_OF_MISSIONS,
	COMMAND_CONVERT_METRES_TO_FEET_INT,
	COMMAND_REGISTER_FASTEST_TIME,
	COMMAND_REGISTER_HIGHEST_SCORE,
	COMMAND_WARP_CHAR_INTO_CAR_AS_PASSENGER,
	COMMAND_IS_CAR_PASSENGER_SEAT_FREE,
	COMMAND_GET_CHAR_IN_CAR_PASSENGER_SEAT,
	COMMAND_SET_CHAR_IS_CHRIS_CRIMINAL,
	COMMAND_START_CREDITS,
	COMMAND_STOP_CREDITS,
	COMMAND_ARE_CREDITS_FINISHED,
	COMMAND_CREATE_SINGLE_PARTICLE,
	COMMAND_SET_CHAR_IGNORE_LEVEL_TRANSITIONS,
	COMMAND_GET_CHASE_CAR,
	COMMAND_START_BOAT_FOAM_ANIMATION,
	COMMAND_UPDATE_BOAT_FOAM_ANIMATION,
	COMMAND_SET_MUSIC_DOES_FADE,
	COMMAND_SET_INTRO_IS_PLAYING,
	COMMAND_SET_PLAYER_HOOKER,
	COMMAND_PLAY_END_OF_GAME_TUNE,
	COMMAND_STOP_END_OF_GAME_TUNE,
	COMMAND_GET_CAR_MODEL,
	COMMAND_IS_PLAYER_SITTING_IN_CAR,
	COMMAND_IS_PLAYER_SITTING_IN_ANY_CAR,
	COMMAND_SET_SCRIPT_FIRE_AUDIO,
	COMMAND_ARE_ANY_CAR_CHEATS_ACTIVATED,
	COMMAND_SET_CHAR_SUFFERS_CRITICAL_HITS,
	COMMAND_IS_PLAYER_LIFTING_A_PHONE,
	COMMAND_IS_CHAR_SITTING_IN_CAR,
	COMMAND_IS_CHAR_SITTING_IN_ANY_CAR,
	COMMAND_IS_PLAYER_ON_FOOT,
	COMMAND_IS_CHAR_ON_FOOT,
	COMMAND_LOAD_COLLISION_WITH_SCREEN,
	COMMAND_LOAD_SPLASH_SCREEN,
	COMMAND_SET_CAR_IGNORE_LEVEL_TRANSITIONS,
	COMMAND_MAKE_CRAIGS_CAR_A_BIT_STRONGER,
	COMMAND_SET_JAMES_CAR_ON_PATH_TO_PLAYER,
	COMMAND_LOAD_END_OF_GAME_TUNE,
	COMMAND_ENABLE_PLAYER_CONTROL_CAMERA,
#if GTA_VERSION > GTA3_PS2_160
	COMMAND_SET_OBJECT_ROTATION,
	COMMAND_GET_DEBUG_CAMERA_COORDINATES,
	COMMAND_GET_DEBUG_CAMERA_FRONT_VECTOR,
	COMMAND_IS_PLAYER_TARGETTING_ANY_CHAR,
	COMMAND_IS_PLAYER_TARGETTING_CHAR,
	COMMAND_IS_PLAYER_TARGETTING_OBJECT,
	COMMAND_TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME,
	COMMAND_DISPLAY_TEXT_WITH_NUMBER,
	COMMAND_DISPLAY_TEXT_WITH_2_NUMBERS,
	COMMAND_FAIL_CURRENT_MISSION,
	COMMAND_GET_CLOSEST_OBJECT_OF_TYPE,
	COMMAND_PLACE_OBJECT_RELATIVE_TO_OBJECT,
	COMMAND_SET_ALL_OCCUPANTS_OF_CAR_LEAVE_CAR,
	COMMAND_SET_INTERPOLATION_PARAMETERS,
	COMMAND_GET_CLOSEST_CAR_NODE_WITH_HEADING_TOWARDS_POINT,
	COMMAND_GET_CLOSEST_CAR_NODE_WITH_HEADING_AWAY_POINT,
	COMMAND_GET_DEBUG_CAMERA_POINT_AT,
	COMMAND_ATTACH_CHAR_TO_CAR,
	COMMAND_DETACH_CHAR_FROM_CAR,
	COMMAND_SET_CAR_CHANGE_LANE,
	COMMAND_CLEAR_CHAR_LAST_WEAPON_DAMAGE,
	COMMAND_CLEAR_CAR_LAST_WEAPON_DAMAGE,
	COMMAND_GET_RANDOM_COP_IN_AREA,
	COMMAND_GET_RANDOM_COP_IN_ZONE,
	COMMAND_SET_CHAR_OBJ_FLEE_CAR,
	COMMAND_GET_DRIVER_OF_CAR,
	COMMAND_GET_NUMBER_OF_FOLLOWERS,
	COMMAND_GIVE_REMOTE_CONTROLLED_MODEL_TO_PLAYER,
	COMMAND_GET_CURRENT_PLAYER_WEAPON,
	COMMAND_GET_CURRENT_CHAR_WEAPON,
	COMMAND_LOCATE_CHAR_ANY_MEANS_OBJECT_2D,
	COMMAND_LOCATE_CHAR_ON_FOOT_OBJECT_2D,
	COMMAND_LOCATE_CHAR_IN_CAR_OBJECT_2D,
	COMMAND_LOCATE_CHAR_ANY_MEANS_OBJECT_3D,
	COMMAND_LOCATE_CHAR_ON_FOOT_OBJECT_3D,
	COMMAND_LOCATE_CHAR_IN_CAR_OBJECT_3D,
	COMMAND_SET_CAR_HANDBRAKE_TURN_LEFT,
	COMMAND_SET_CAR_HANDBRAKE_TURN_RIGHT,
	COMMAND_SET_CAR_HANDBRAKE_STOP,
	COMMAND_IS_CHAR_ON_ANY_BIKE,
	COMMAND_LOCATE_SNIPER_BULLET_2D,
	COMMAND_LOCATE_SNIPER_BULLET_3D,
	COMMAND_GET_NUMBER_OF_SEATS_IN_MODEL,
	COMMAND_IS_PLAYER_ON_ANY_BIKE,
	COMMAND_IS_CHAR_LYING_DOWN,
	COMMAND_CAN_CHAR_SEE_DEAD_CHAR,
	COMMAND_SET_ENTER_CAR_RANGE_MULTIPLIER,
#if GTA_VERSION < GTA3_PC_11
	COMMAND_SET_THREAT_REACTION_RANGE_MULTIPLIER,
#endif
#ifdef USE_ADVANCED_SCRIPT_DEBUG_OUTPUT
	LAST_SCRIPT_COMMAND
#endif
#endif
};

#ifdef USE_ADVANCED_SCRIPT_DEBUG_OUTPUT

enum eScriptArgument
{
	ARGTYPE_NONE = 0,
	ARGTYPE_INT,
	ARGTYPE_FLOAT,
	ARGTYPE_STRING,
	ARGTYPE_LABEL,
	ARGTYPE_BOOL,
	ARGTYPE_PED_HANDLE,
	ARGTYPE_VEHICLE_HANDLE,
	ARGTYPE_OBJECT_HANDLE,
	ARGTYPE_ANDOR
};

struct tScriptCommandData
{
	int id;
	const char name[64];
	eScriptArgument input[18];
	eScriptArgument output[18];
	bool cond;
	int position;
	const char name_override[8];
};
#endif