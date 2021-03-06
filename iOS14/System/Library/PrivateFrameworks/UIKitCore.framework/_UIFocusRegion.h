/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusDebugQuickLookImageDrawing.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface _UIFocusRegion : NSObject <_UIFocusDebugQuickLookImageDrawing, NSCopying> {

	NSMutableArray* _mutableOccludingRegions;
	_UIFocusRegion* _originalRegion;
	CGRect _frame;

}

@property (assign,setter=_setFrame:,nonatomic) CGRect frame;                                                                                            //@synthesize frame=_frame - In the implementation block
@property (setter=_setOriginRegion:,getter=_originalRegion,nonatomic,retain) _UIFocusRegion * originalRegion;                                           //@synthesize originalRegion=_originalRegion - In the implementation block
@property (setter=_setMutableOccludingRegions:,getter=_mutableOccludingRegions,nonatomic,retain) NSMutableArray * mutableOccludingRegions;              //@synthesize mutableOccludingRegions=_mutableOccludingRegions - In the implementation block
@property (getter=_debugAssociatedObject,nonatomic,__weak,readonly) id debugAssociatedObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)__regionsByEvaluatingOcclusionsForBaseRegions:(id)arg1 occludingRegions:(id)arg2 baseRegionsCanOccludeEachOther:(BOOL)arg3 ;
+(id)_regionsByOccludingRegions:(id)arg1 beneathRegions:(id)arg2 ;
+(id)_regionsByEvaluatingOcclusionsForRegions:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(CGRect)frame;
-(id)_originalRegion;
-(unsigned long long)_focusableBoundaries;
-(double)_regionFocusPriority;
-(id)_focusedItemForLinearSorting:(id)arg1 inMap:(id)arg2 ;
-(id)_defaultFocusItem;
-(long long)_preferredDistanceComparisonType;
-(BOOL)_canOccludeRegionsBelow;
-(id)_debugAssociatedObject;
-(BOOL)_canBeOccludedByRegionsAbove;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2 ;
-(BOOL)_shouldUseNextFocusedItemForLinearSorting;
-(id)_resizeToRect:(CGRect)arg1 ;
-(void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg1 ;
-(BOOL)_shouldCropRegionToSearchArea;
-(id)_occludingRegions;
-(void)_setOriginRegion:(id)arg1 ;
-(void)_setMutableOccludingRegions:(id)arg1 ;
-(unsigned long long)_boundariesBlockingFocusMovementRequest:(id)arg1 ;
-(id)_mutableOccludingRegions;
-(void)_addOccludingRegion:(id)arg1 ;
-(id)_subregionWithFrame:(CGRect)arg1 ;
-(id)_visibleSubregionsWhenOccludedByRegion:(id)arg1 ;
-(unsigned long long)_effectiveFocusableBoundariesForHeading:(unsigned long long)arg1 ;
-(unsigned long long)_effectiveBoundariesBlockingFocusMovementRequest:(id)arg1 ;
-(void)_didParticipateAsDestinationRegionInFocusUpdate:(id)arg1 ;
-(NSString *)description;
-(void)_setFrame:(CGRect)arg1 ;
-(BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

