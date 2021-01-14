/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOPBTransitStop, GEOPBTransitStation, GEOComposedRouteStep, GEOComposedTransitTripRouteStep;

@interface _GEORouteMatchUpdater_EnterBoard : _GEORouteMatchUpdater {

	GEOPBTransitStop* _transitStop;
	GEOPBTransitStation* _transitStation;
	GEOCoarseLocationLatLng _entranceCoordinate;
	PolylineCoordinate _routeCoordinateApproaching;
	PolylineCoordinate _routeCoordinateAtStation;
	GEOComposedRouteStep* _enterStationStep;
	GEOComposedRouteStep* _boardVehicleStep;
	GEOComposedTransitTripRouteStep* _rideStep;
	BOOL _hasEnteredStation;

}
-(id)initWithTransitRouteMatcher:(id)arg1 boardVehicleStep:(id)arg2 ;
-(BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(BOOL)_hasLocationEnteredStation:(id)arg1 routeMatch:(id)arg2 ;
-(BOOL)_hasLocationExitedStation:(id)arg1 ;
-(BOOL)_isLocationNearEndOfWalkingSegment:(id)arg1 ;
-(BOOL)_isLocationNearAccessPoint:(id)arg1 ;
-(BOOL)_isLocationNearTransitNode:(id)arg1 ;
@end

