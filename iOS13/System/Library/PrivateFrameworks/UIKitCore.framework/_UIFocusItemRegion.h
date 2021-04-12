/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusRegion.h>

@protocol UIFocusItem;
@interface _UIFocusItemRegion : _UIFocusRegion {

	BOOL _itemIsEligibleForFocusInteraction;
	BOOL _itemIsFocusable;
	id<UIFocusItem> _item;

}

@property (nonatomic,__weak,readonly) id<UIFocusItem> item;              //@synthesize item=_item - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<UIFocusItem>)item;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 item:(id)arg2 ;
-(BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)_visualRepresentationColor;
-(unsigned long long)_focusableBoundaries;
-(long long)_preferredDistanceComparisonType;
-(long long)_visualRepresentationPatternType;
-(BOOL)_canOccludeRegionsBelow;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2 ;
-(id)_debugAssociatedObject;
-(id)_defaultFocusItem;
-(BOOL)_canBeOccludedByRegionsAbove;
-(BOOL)_shouldCropRegionToSearchArea;
@end

