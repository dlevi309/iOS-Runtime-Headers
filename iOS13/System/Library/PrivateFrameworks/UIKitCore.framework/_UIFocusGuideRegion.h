/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusRegion.h>

@protocol _UIFocusGuideRegionDelegate;
@interface _UIFocusGuideRegion : _UIFocusRegion {

	id<_UIFocusGuideRegionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_UIFocusGuideRegionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<_UIFocusGuideRegionDelegate>)delegate;
-(void)setDelegate:(id<_UIFocusGuideRegionDelegate>)arg1 ;
-(BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)_fallbackFocusItemForMovementRequest:(id)arg1 inFocusMap:(id)arg2 ;
-(id)_visualRepresentationColor;
-(unsigned long long)_focusableBoundaries;
-(BOOL)_isEnabledForFocusedRegion:(id)arg1 ;
-(id)_delegatePreferredFocusEnvironmentsForMovementRequest:(id)arg1 ;
-(id)_focusedItemForLinearSorting:(id)arg1 inMap:(id)arg2 ;
-(long long)_preferredDistanceComparisonType;
-(long long)_visualRepresentationPatternType;
-(BOOL)_canOccludeRegionsBelow;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2 ;
-(BOOL)_shouldUseNextFocusedItemForLinearSorting;
-(void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg1 ;
-(id)_debugAssociatedObject;
@end

