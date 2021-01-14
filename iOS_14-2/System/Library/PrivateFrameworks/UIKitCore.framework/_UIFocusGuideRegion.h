/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusRegion.h>

@protocol _UIFocusGuideRegionDelegate;
@interface _UIFocusGuideRegion : _UIFocusRegion {

	BOOL __isFocusGuideUnoccludable;
	id<_UIFocusGuideRegionDelegate> _delegate;
	double __regionFocusPriority;

}

@property (assign,setter=_setIsFocusGuideUnoccludable:,nonatomic) BOOL _isFocusGuideUnoccludable;              //@synthesize _isFocusGuideUnoccludable=__isFocusGuideUnoccludable - In the implementation block
@property (assign,setter=_setRegionFocusPriority:,nonatomic) double _regionFocusPriority;                      //@synthesize _regionFocusPriority=__regionFocusPriority - In the implementation block
@property (assign,nonatomic,__weak) id<_UIFocusGuideRegionDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
-(id<_UIFocusGuideRegionDelegate>)delegate;
-(void)_setRegionFocusPriority:(double)arg1 ;
-(void)_setIsFocusGuideUnoccludable:(BOOL)arg1 ;
-(id)_fallbackFocusItemForMovementRequest:(id)arg1 inFocusMap:(id)arg2 ;
-(id)_visualRepresentationColor;
-(unsigned long long)_focusableBoundaries;
-(BOOL)_isFocusGuideUnoccludable;
-(double)_regionFocusPriority;
-(BOOL)_isEnabledForFocusedRegion:(id)arg1 ;
-(id)_delegatePreferredFocusEnvironmentsForMovementRequest:(id)arg1 ;
-(id)_focusedItemForLinearSorting:(id)arg1 inMap:(id)arg2 ;
-(long long)_preferredDistanceComparisonType;
-(BOOL)_canOccludeRegionsBelow;
-(long long)_visualRepresentationPatternType;
-(id)_debugAssociatedObject;
-(BOOL)_canBeOccludedByRegionsAbove;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2 ;
-(BOOL)_shouldUseNextFocusedItemForLinearSorting;
-(void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg1 ;
-(void)setDelegate:(id<_UIFocusGuideRegionDelegate>)arg1 ;
-(BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

