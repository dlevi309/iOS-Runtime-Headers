/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedRouteStep;

@interface _GEORouteMatchUpdater_FerryProgression : _GEORouteMatchUpdater {

	GEOComposedRouteStep* _boardStep;
	GEOComposedRouteStep* _alightStep;
	GEOCoarseLocationLatLng _alightLocationCoordinate;
	double _startProgressionDistanceToDestination;
	unsigned long long _progressionCount;

}
-(id)initWithRoute:(id)arg1 tripSegment:(id)arg2 ;
-(BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(unsigned long long)priority;
@end

