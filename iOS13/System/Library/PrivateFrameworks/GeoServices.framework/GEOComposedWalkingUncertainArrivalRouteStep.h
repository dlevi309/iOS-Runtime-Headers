/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedWalkingRouteStep.h>

@class NSArray;

@interface GEOComposedWalkingUncertainArrivalRouteStep : GEOComposedWalkingRouteStep {

	NSArray* _aggregatedGEOSteps;
	unsigned _aggregatedStepsDistance;
	unsigned _aggregatedStepsDuration;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)duration;
-(unsigned)distance;
-(BOOL)isUncertainArrival;
-(unsigned)_calculateAggregatedStepsDuration;
-(unsigned)_calculateAggregatedStepsDistance;
-(id)initWithComposedRoute:(id)arg1 aggregatedGEOSteps:(id)arg2 stepIndex:(unsigned long long)arg3 pointRange:(NSRange)arg4 maneuverPointRange:(NSRange)arg5 ;
@end

