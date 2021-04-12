/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/MNTransitInstruction.h>

@class GEOComposedWalkingRouteLeg;

@interface MNTransitWalkingLegInstruction : MNTransitInstruction {

	GEOComposedWalkingRouteLeg* _walkingLeg;

}

@property (nonatomic,readonly) GEOComposedWalkingRouteLeg * walkingLeg;              //@synthesize walkingLeg=_walkingLeg - In the implementation block
+(id)instructionForWalkingLeg:(id)arg1 context:(long long)arg2 ;
-(id)instructionSet;
-(id)overridenInstructionsMapping;
-(id)initWithWalkingLeg:(id)arg1 context:(long long)arg2 ;
-(GEOComposedWalkingRouteLeg *)walkingLeg;
@end

