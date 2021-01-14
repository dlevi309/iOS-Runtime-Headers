/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/MNTransitInstruction.h>

@class GEOComposedRouteStep, NSDictionary;

@interface MNTransitStepInstruction : MNTransitInstruction {

	GEOComposedRouteStep* _step;
	NSDictionary* _overridenInstructionsMapping;

}

@property (nonatomic,readonly) GEOComposedRouteStep * step;                              //@synthesize step=_step - In the implementation block
@property (nonatomic,readonly) NSDictionary * overridenInstructionsMapping;              //@synthesize overridenInstructionsMapping=_overridenInstructionsMapping - In the implementation block
+(id)instructionForStep:(id)arg1 overrides:(id)arg2 context:(long long)arg3 ;
+(id)instructionForStep:(id)arg1 context:(long long)arg2 ;
-(id)instructionSet;
-(GEOComposedRouteStep *)step;
-(NSDictionary *)overridenInstructionsMapping;
-(id)initWithStep:(id)arg1 overrides:(id)arg2 context:(long long)arg3 ;
@end

