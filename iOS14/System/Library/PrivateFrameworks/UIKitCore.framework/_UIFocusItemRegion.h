/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(id<UIFocusItem>)item;
-(id)_visualRepresentationColor;
-(unsigned long long)_focusableBoundaries;
-(id)_defaultFocusItem;
-(long long)_preferredDistanceComparisonType;
-(BOOL)_canOccludeRegionsBelow;
-(long long)_visualRepresentationPatternType;
-(id)_debugAssociatedObject;
-(BOOL)_canBeOccludedByRegionsAbove;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2 ;
-(BOOL)_shouldCropRegionToSearchArea;
-(id)description;
-(id)initWithFrame:(CGRect)arg1 item:(id)arg2 ;
-(BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

