/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarDisplayItemPlacementGroup.h>

@class _UIStatusBarDisplayItemPlacementCellularGroup, _UIStatusBarDisplayItemPlacementWifiGroup;

@interface _UIStatusBarDisplayItemPlacementNetworkGroup : _UIStatusBarDisplayItemPlacementGroup {

	_UIStatusBarDisplayItemPlacementCellularGroup* _cellularGroup;
	_UIStatusBarDisplayItemPlacementWifiGroup* _wifiGroup;

}

@property (nonatomic,readonly) _UIStatusBarDisplayItemPlacementCellularGroup * cellularGroup;              //@synthesize cellularGroup=_cellularGroup - In the implementation block
@property (nonatomic,readonly) _UIStatusBarDisplayItemPlacementWifiGroup * wifiGroup;                      //@synthesize wifiGroup=_wifiGroup - In the implementation block
+(id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 cellularItemClass:(Class)arg3 wifiItemClass:(Class)arg4 cellularTypeClass:(Class)arg5 includeCellularName:(BOOL)arg6 allowDualNetwork:(BOOL)arg7 ;
+(id)_groupWithCellularGroup:(id)arg1 wifiGroup:(id)arg2 includeCellularName:(BOOL)arg3 ;
+(id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 cellularItemClass:(Class)arg3 wifiItemClass:(Class)arg4 includeCellularName:(BOOL)arg5 ;
+(id)secondaryGroupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 cellularItemClass:(Class)arg3 wifiItemClass:(Class)arg4 ;
-(_UIStatusBarDisplayItemPlacementCellularGroup *)cellularGroup;
-(_UIStatusBarDisplayItemPlacementWifiGroup *)wifiGroup;
@end

