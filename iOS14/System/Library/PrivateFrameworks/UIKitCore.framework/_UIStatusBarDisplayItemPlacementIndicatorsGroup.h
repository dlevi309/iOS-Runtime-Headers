/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarDisplayItemPlacementGroup.h>

@class NSArray, _UIStatusBarDisplayItemPlacement;

@interface _UIStatusBarDisplayItemPlacementIndicatorsGroup : _UIStatusBarDisplayItemPlacementGroup {

	NSArray* _stablePlacements;
	NSArray* _unstablePlacements;
	_UIStatusBarDisplayItemPlacement* _bluetoothInsetPaddingItem;

}

@property (nonatomic,copy,readonly) NSArray * stablePlacements;                                           //@synthesize stablePlacements=_stablePlacements - In the implementation block
@property (nonatomic,copy,readonly) NSArray * unstablePlacements;                                         //@synthesize unstablePlacements=_unstablePlacements - In the implementation block
@property (nonatomic,readonly) _UIStatusBarDisplayItemPlacement * bluetoothInsetPaddingItem;              //@synthesize bluetoothInsetPaddingItem=_bluetoothInsetPaddingItem - In the implementation block
+(id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 bluetoothPaddingInset:(double)arg3 ;
+(id)activityItemDisplayIdentifier;
-(_UIStatusBarDisplayItemPlacement *)bluetoothInsetPaddingItem;
-(NSArray *)unstablePlacements;
-(NSArray *)stablePlacements;
@end

