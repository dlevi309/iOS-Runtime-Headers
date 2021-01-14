/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/MNTransitInstruction.h>

@class GEOComposedWalkingRouteSegment;

@interface MNTransitWalkingSegmentInstruction : MNTransitInstruction {

	GEOComposedWalkingRouteSegment* _walkingSegment;

}

@property (nonatomic,readonly) GEOComposedWalkingRouteSegment * walkingSegment;              //@synthesize walkingSegment=_walkingSegment - In the implementation block
+(id)instructionForWalkingSegment:(id)arg1 context:(long long)arg2 ;
-(id)instructionSet;
-(id)overridenInstructionsMapping;
-(id)initWithWalkingSegment:(id)arg1 context:(long long)arg2 ;
-(GEOComposedWalkingRouteSegment *)walkingSegment;
@end

