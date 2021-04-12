/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEORouteMatcher.h>

@interface GEODrivingRouteMatcher : GEORouteMatcher
-(id)initWithRoute:(id)arg1 ;
-(double)_modifiedHorizontalAccuracy:(double)arg1 routeIndex:(unsigned)arg2 ;
-(void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3 ;
-(BOOL)_supportsSnapping;
-(id)_startStepForPreviousRouteMatch:(id)arg1 ;
-(double)_maxMatchDistance:(double)arg1 routeIndex:(unsigned)arg2 previousRouteMatch:(id)arg3 timeSinceTunnel:(double)arg4 ;
-(double)_maxCourseDelta:(id)arg1 previousRouteMatch:(id)arg2 timeSinceTunnel:(double)arg3 ;
-(double)_courseWeightForLocation:(id)arg1 accuracyType:(long long)arg2 ;
-(double)_modifiedCourseAccuracyForLocation:(id)arg1 previousRouteMatch:(id)arg2 ;
@end

