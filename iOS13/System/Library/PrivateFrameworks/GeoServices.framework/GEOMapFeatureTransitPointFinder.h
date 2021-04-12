/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapFeatureAccessFinder.h>

@class GEOTileLoader;

@interface GEOMapFeatureTransitPointFinder : GEOMapFeatureAccessFinder {

	GEOTileLoader* _tileLoader;

}
-(id)_tileFinder;
-(id)initWithTileLoader:(id)arg1 ;
-(id)findTransitPointWithID:(unsigned long long)arg1 near:(SCD_Struct_GE32)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitPointsOfType:(unsigned long long)arg1 near:(SCD_Struct_GE32)arg2 radius:(double)arg3 handler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)findTransitAccessPointsForStation:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findParentOfTransitPoint:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findTransitPointsWithParent:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findGeometryForTransitPoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_transitPointForFeature:(GEOTransitNodeFeature*)arg1 ;
-(id)_geometryTileFinder;
@end

