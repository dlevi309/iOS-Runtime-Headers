/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapFeatureAccessFinder.h>

@class GEOTileLoader;

@interface GEOMapFeatureTransitPointFinder : GEOMapFeatureAccessFinder {

	GEOTileLoader* _tileLoader;

}
-(id)_tileFinder;
-(id)findTransitAccessPointsForStation:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTileLoader:(id)arg1 ;
-(id)findTransitPointWithID:(unsigned long long)arg1 near:(GEOCoarseLocationLatLng)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitPointsOfType:(unsigned long long)arg1 near:(GEOCoarseLocationLatLng)arg2 radius:(double)arg3 handler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)findParentOfTransitPoint:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findTransitPointsWithParent:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findGeometryForTransitPoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_transitPointForFeature:(GEOTransitNodeFeature*)arg1 ;
-(id)_geometryTileFinder;
@end

