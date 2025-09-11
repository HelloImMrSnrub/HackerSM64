#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"
#include "make_const_nonconst.h"
#include "levels/wf/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript fast64_wf_loads[] = {
	LOAD_MODEL_FROM_GEO(MODEL_PROPELLOR, Propellor_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CHAINPLATFORM, ChainPlatform_geo), 
	RETURN(), 
};

const LevelScript level_wf_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _sunset_skybox_yay0SegmentRomStart, _sunset_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _grass_yay0SegmentRomStart, _grass_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_15), 
	JUMP_LINK(fast64_wf_loads), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, wf_geo_0007E0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, wf_geo_000820), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, wf_geo_000860), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, wf_geo_000878), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, wf_geo_000890), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, wf_geo_0008A8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, wf_geo_0008E8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, wf_geo_000900), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, wf_geo_000940), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_GIANT_POLE, wf_geo_000AE0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, wf_geo_000958), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, wf_geo_0009A0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_PLATFORM, wf_geo_0009B8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, wf_geo_0009D0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12, wf_geo_0009E8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_SMALL_BOMP, wf_geo_000A00), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_LARGE_BOMP, wf_geo_000A40), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_WOODEN_PLATFORM, wf_geo_000A58), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_SLIDING_PLATFORM, wf_geo_000A98), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE_PART, wf_geo_000AB0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE, wf_geo_000AC8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_TRAPEZOID_PLATORM, wf_geo_000AF8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM, wf_geo_000B10), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_UNUSED, wf_geo_000B38), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_ELEVATOR, wf_geo_000B60), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_RIGHT, wf_geo_000B78), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_LEFT, wf_geo_000B90), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD, wf_geo_000BA8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_DOOR, wf_geo_000BE0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD_FELLED, wf_geo_000BC8), 
	LOAD_MODEL_FROM_GEO(MODEL_PROPELLOR, Propellor_geo), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wf_area_1),
		WARP_NODE(0x0A, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x32, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_WF, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0D, LEVEL_WF, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0xB1, LEVEL_WF, 0x02, 0xB2, WARP_NO_CHECKPOINT),
		WARP_NODE(0xB4, LEVEL_WF, 0x02, 0xB3, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CASTLE_METAL_DOOR, -1072, 1800, -1550, 0, 0, 0, 0x00000000, bhvDoorWarp),
		OBJECT(MODEL_PURPLE_SWITCH, 334, 1700, -4996, 0, 0, 0, 0x00000000, bhvFloorSwitchGrills),
		OBJECT(MODEL_CASTLE_METAL_DOOR, -3350, 899, -2329, 0, -90, 0, 0x00000000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_METAL_DOOR, -3350, 899, -2176, 0, 90, 0, 0x00000000, bhvDoorWarp),
		MARIO_POS(0x01, 0, 2000, 1700, 2300),
		OBJECT(MODEL_NONE, 1627, 1523, -3166, 0, -90, 0, (0xB1 << 16), bhvWarp),
		OBJECT(MODEL_NONE, 1377, 1504, -3151, 0, -90, 0, (0xB4 << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_PROPELLOR, -900, 6788, -1735, 0, 0, 0, (8 << 24), bhvPropellor),
		OBJECT(MODEL_PROPELLOR, 3340, -3200, 1490, 0, 0, 0, (10 << 24), bhvPropellor),
		OBJECT(MODEL_PROPELLOR, 3340, -3500, 1490, 0, 0, 0, (8 << 24), bhvPropellor),
		OBJECT(MODEL_PROPELLOR, 2357, -2575, -6617, 0, 0, 0, (10 << 24), bhvPropellor),
		OBJECT(MODEL_PROPELLOR, 1976, 4700, -539, 0, 0, 0, (8 << 24), bhvPropellor),
		OBJECT(MODEL_PROPELLOR, 1976, 5100, -539, 0, 0, 0, (6 << 24), bhvPropellor),
		OBJECT(MODEL_PROPELLOR, 2357, -2875, -6617, 0, 0, 0, (8 << 24), bhvPropellor),
		OBJECT(MODEL_PROPELLOR, -3491, -2350, 757, 0, 0, 0, (10 << 24), bhvPropellor),
		OBJECT(MODEL_PROPELLOR, -3491, -2650, 757, 0, 0, 0, (8 << 24), bhvPropellor),
		OBJECT(MODEL_PROPELLOR, -900, 7188, -1735, 0, 0, 0, (6 << 24), bhvPropellor),
		OBJECT(MODEL_PROPELLOR, -900, 3288, -1735, 0, 0, 0, (4 << 24), bhvPropellor),
		OBJECT(MODEL_PROPELLOR, -5410, 3955, -1670, 0, 0, 0, (4 << 24), bhvPropellor),
		OBJECT(MODEL_PROPELLOR, -3659, 5905, -5561, 0, 0, 0, (8 << 24), bhvPropellor),
		OBJECT(MODEL_PROPELLOR, -3659, 6305, -5561, 0, 0, 0, (6 << 24), bhvPropellor),
		OBJECT(MODEL_STAR, -1845, 2100, -1150, 0, 0, 0, (2 << 24), bhvStar),
		OBJECT(MODEL_STAR, -3990, 5200, -1952, 0, 90, 0, (1 << 24), bhvStar),
		OBJECT(MODEL_NONE, 2000, 1700, 2300, 0, 0, 0, (0x0A << 16), bhvSpinAirborneWarp),
		OBJECT_WITH_ACTS(MODEL_NONE, 2800, 250, -200, 0, -90, 0, (0x0c << 16), bhvFadingWarp, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_NONE, -2532, 2700, -1466, 0, -180, 0, (0x0d << 16), bhvFadingWarp, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT(MODEL_WOODEN_POST, 311, 1700, -4400, 0, 0, 0, 0x00000000, bhvWoodenPost),
		OBJECT(MODEL_WOODEN_POST, 1035, 1700, -4039, 0, 0, 0, 0x00000000, bhvWoodenPost),
		OBJECT(MODEL_WOODEN_POST, -412, 1700, -4761, 0, 0, 0, 0x00000000, bhvWoodenPost),
		TERRAIN(wf_area_1_collision),
		MACRO_OBJECTS(wf_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(2, wf_area_2),
		WARP_NODE(0xB2, LEVEL_WF, 0x01, 0xB1, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x32, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0xB3, LEVEL_WF, 0x01, 0xB4, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 8184, 1423, -3262, 0, 0, 0, (170 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, 6648, 1221, -916, 0, 180, 0, (0xB2 << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, 6648, 1221, -395, 0, 0, 0, (0xB3 << 16), bhvWarp),
		TERRAIN(wf_area_2_collision),
		MACRO_OBJECTS(wf_area_2_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 2000, 1700, 2300),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};