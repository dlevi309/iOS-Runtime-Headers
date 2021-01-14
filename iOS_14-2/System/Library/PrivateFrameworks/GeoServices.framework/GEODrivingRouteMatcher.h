/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEORouteMatcher.h>

@interface GEODrivingRouteMatcher : GEORouteMatcher
-(double)_modifiedHorizontalAccuracy:(double)arg1 routeIndex:(unsigned)arg2 ;
-(void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(BOOL)_supportsSnapping;
-(id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3 ;
-(double)_courseFromLocation:(id)arg1 ;
-(id)_startStepForPreviousRouteMatch:(id)arg1 ;
-(GEOCoarseLocationLatLng)_coordinateFromLocation:(id)arg1 ;
-(id)initWithRoute:(id)arg1 ;
-(double)_maxMatchDistance:(double)arg1 routeIndex:(unsigned)arg2 previousRouteMatch:(id)arg3 timeSinceTunnel:(double)arg4 ;
-(double)_maxCourseDelta:(id)arg1 previousRouteMatch:(id)arg2 timeSinceTunnel:(double)arg3 ;
-(double)_courseWeightForLocation:(id)arg1 accuracyType:(long long)arg2 ;
-(double)_modifiedCourseAccuracyForLocation:(id)arg1 previousRouteMatch:(id)arg2 ;
@end

