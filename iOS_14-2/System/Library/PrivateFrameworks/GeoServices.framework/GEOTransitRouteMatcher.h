/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEORouteMatcher.h>

@class GEOMotionContext, NSArray;

@interface GEOTransitRouteMatcher : GEORouteMatcher {

	GEOMotionContext* _motionContext;
	NSArray* _stationsOnRoute;
	NSArray* _routeMatchUpdaters;
	NSArray* _stepRanges;
	double _distanceToClosestWalkingSegment;

}

@property (nonatomic,readonly) double distanceToClosestWalkingSegment;              //@synthesize distanceToClosestWalkingSegment=_distanceToClosestWalkingSegment - In the implementation block
-(void)_insertUpdater:(id)arg1 into:(id)arg2 ;
-(BOOL)_stepsInSameRange:(id)arg1 nextStep:(id)arg2 ;
-(id)initWithRoute:(id)arg1 motionContext:(id)arg2 ;
-(BOOL)isStationCoordinateOnRoute:(GEOCoarseLocationLatLng)arg1 ;
-(id)motionContext;
-(double)distanceToClosestWalkingSegment;
-(id)route;
-(void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(void)_considerCandidateMatch:(id)arg1 ;
-(void)_startRouteMatch;
-(id)_stepForPointIndex:(unsigned)arg1 previousStep:(id)arg2 ;
-(BOOL)_shouldConsiderCourseForLocation:(id)arg1 ;
-(double)_scoreModifierForStep:(id)arg1 previousStep:(id)arg2 ;
@end

