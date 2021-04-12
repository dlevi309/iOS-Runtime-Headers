/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEONavigationMapMatcher.h>

@interface GEONavigationDrivingMapMatcher : GEONavigationMapMatcher
-(int)transportType;
-(BOOL)_locationMeetsSpeedThresholdForRoadMatch:(id)arg1 distanceFromRoute:(double)arg2 ;
-(BOOL)_shouldConsiderRoadMatch:(id)arg1 overRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(id)matchLocation:(id)arg1 transportType:(int)arg2 ;
-(double)_approximateMaxSpeedForRoad:(SCD_Struct_GE74*)arg1 ;
-(id)_routeMatcherForRoute:(id)arg1 ;
@end

