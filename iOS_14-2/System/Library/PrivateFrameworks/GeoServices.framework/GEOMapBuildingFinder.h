/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder;

@interface GEOMapBuildingFinder : GEOMapRequest {

	GEOMapTileFinder* _tileFinder;
	GEOCoarseLocationLatLng _centerCoordinate;
	double _radius;

}
-(void)cancel;
-(id)initWithMap:(id)arg1 centerCoordinate:(GEOCoarseLocationLatLng)arg2 radius:(double)arg3 ;
-(void)findBuildingsWithHandler:(/*^block*/id)arg1 ;
@end

