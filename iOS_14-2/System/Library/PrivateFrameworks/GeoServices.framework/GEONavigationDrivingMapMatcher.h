/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEONavigationMapMatcher.h>

@interface GEONavigationDrivingMapMatcher : GEONavigationMapMatcher {

	BOOL _useMatchedCoordinateForMatching;

}

@property (assign,nonatomic) BOOL useMatchedCoordinateForMatching;              //@synthesize useMatchedCoordinateForMatching=_useMatchedCoordinateForMatching - In the implementation block
-(int)transportType;
-(BOOL)_locationMeetsSpeedThresholdForRoadMatch:(id)arg1 distanceFromRoute:(double)arg2 ;
-(double)_courseFromLocation:(id)arg1 ;
-(BOOL)_shouldConsiderRoadMatch:(id)arg1 overRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(void)setUseMatchedCoordinateForMatching:(BOOL)arg1 ;
-(id)matchLocation:(id)arg1 transportType:(int)arg2 ;
-(double)_approximateMaxSpeedForRoad:(SCD_Struct_GE77*)arg1 ;
-(GEOCoarseLocationLatLng)_coordinateFromLocation:(id)arg1 ;
-(id)_routeMatcherForRoute:(id)arg1 ;
-(BOOL)useMatchedCoordinateForMatching;
@end

