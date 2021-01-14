/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_UIStatusBarDisplayItemPlacementWifiGroup *)wifiGroup;
-(_UIStatusBarDisplayItemPlacementCellularGroup *)cellularGroup;
@end

