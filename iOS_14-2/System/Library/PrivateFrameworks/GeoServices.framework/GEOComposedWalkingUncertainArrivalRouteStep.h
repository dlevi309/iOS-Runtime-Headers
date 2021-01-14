/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedWalkingRouteStep.h>

@class NSArray;

@interface GEOComposedWalkingUncertainArrivalRouteStep : GEOComposedWalkingRouteStep {

	NSArray* _aggregatedGEOSteps;
	double _aggregatedStepsDistance;
	unsigned _aggregatedStepsDuration;

}
+(BOOL)supportsSecureCoding;
-(double)distance;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isUncertainArrival;
-(unsigned)_calculateAggregatedStepsDuration;
-(double)_calculateAggregatedStepsDistance;
-(id)initWithComposedRoute:(id)arg1 aggregatedGEOSteps:(id)arg2 stepIndex:(unsigned long long)arg3 pointRange:(NSRange)arg4 maneuverPointRange:(NSRange)arg5 ;
-(unsigned)duration;
@end

