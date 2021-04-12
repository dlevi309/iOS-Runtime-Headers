/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEORouteMatcher.h>

@interface GEOWalkingRouteMatcher : GEORouteMatcher {

	unsigned long long _newStepProgressions;

}
-(double)_maxMatchDistance:(double)arg1 routeIndex:(unsigned)arg2 previousMatchGood:(BOOL)arg3 ;
-(double)_modifiedHorizontalAccuracy:(double)arg1 routeIndex:(unsigned)arg2 ;
-(void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(BOOL)_supportsSnapping;
-(id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3 ;
-(id)initWithRoute:(id)arg1 ;
@end

