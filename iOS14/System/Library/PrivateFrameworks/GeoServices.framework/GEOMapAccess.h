/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequestManager.h>

@protocol OS_dispatch_queue, GEOMapAccessRestrictions;
@class NSObject;

@interface GEOMapAccess : GEOMapRequestManager {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	id<GEOMapAccessRestrictions> _restrictions;
	/*^block*/id _tileErrorHandler;
	BOOL _useMapMatchingTilesetForRoads;

}

@property (nonatomic,readonly) unsigned long long roadsZoomLevel; 
@property (nonatomic,readonly) unsigned long long transitZoomLevel; 
@property (nonatomic,readonly) unsigned long long buildingsZoomLevel; 
@property (assign,nonatomic) BOOL useMapMatchingTilesetForRoads;                            //@synthesize useMapMatchingTilesetForRoads=_useMapMatchingTilesetForRoads - In the implementation block
@property (nonatomic,readonly) BOOL allowsNetworkTileLoad; 
@property (assign,nonatomic,__weak) id<GEOMapAccessRestrictions> restrictions;              //@synthesize restrictions=_restrictions - In the implementation block
@property (nonatomic,copy) id tileErrorHandler;                                             //@synthesize tileErrorHandler=_tileErrorHandler - In the implementation block
@property (assign,nonatomic) unsigned zoomLevel; 
@property (nonatomic,readonly) unsigned minZoomLevel; 
@property (nonatomic,readonly) unsigned maxZoomLevel; 
@property (nonatomic,readonly) unsigned maxTransitZoomLevel; 
+(BOOL)supportsRoadMapAccess;
+(id)map;
+(id)transitMap;
+(id)realisticMap;
+(BOOL)supportsTransitMapAccess;
+(BOOL)supportsBuildingMapAccess;
+(BOOL)supportsTransitMap;
+(BOOL)supportsRealisticMap;
-(unsigned)zoomLevel;
-(id)findClosestNamedFeaturesAtCoordinate:(GEOCoarseLocationLatLng)arg1 roadHandler:(/*^block*/id)arg2 pointHandler:(/*^block*/id)arg3 polygonHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)findTransitPointWithID:(unsigned long long)arg1 near:(GEOCoarseLocationLatLng)arg2 pointHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setZoomLevel:(unsigned)arg1 ;
-(id)init;
-(BOOL)allowsNetworkTileLoad;
-(id<GEOMapAccessRestrictions>)restrictions;
-(void)setRestrictions:(id<GEOMapAccessRestrictions>)arg1 ;
-(unsigned)minZoomLevel;
-(unsigned)maxZoomLevel;
-(BOOL)useMapMatchingTilesetForRoads;
-(unsigned long long)roadsZoomLevel;
-(unsigned long long)transitZoomLevel;
-(unsigned long long)buildingsZoomLevel;
-(id)tileErrorHandler;
-(id)findTransitPointWithParentID:(unsigned long long)arg1 near:(GEOCoarseLocationLatLng)arg2 type:(unsigned long long)arg3 pointHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)findTransitStationWithID:(unsigned long long)arg1 near:(GEOCoarseLocationLatLng)arg2 stationHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitHallWithID:(unsigned long long)arg1 near:(GEOCoarseLocationLatLng)arg2 hallHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)callbackQueue;
-(unsigned)maxTransitZoomLevel;
-(id)findTransitEdgesWithin:(double)arg1 of:(GEOCoarseLocationLatLng)arg2 edgeHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_transitPointForTransitMapNode:(shared_ptr<geo::MapNodeTransit>*)arg1 ;
-(id)_findTransitPointsWithin:(double)arg1 of:(GEOCoarseLocationLatLng)arg2 type:(unsigned long long)arg3 pointHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_findTransitPointWithID:(unsigned long long)arg1 near:(GEOCoarseLocationLatLng)arg2 type:(unsigned long long)arg3 pointHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)_hasLoadedTilesNearCoordinate:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 zoomLevel:(unsigned long long)arg3 tileStyle:(int)arg4 tileSize:(int)arg5 tileScale:(int)arg6 ;
-(id)findClosestRoadAtCoordinate:(GEOCoarseLocationLatLng)arg1 roadHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setUseMapMatchingTilesetForRoads:(BOOL)arg1 ;
-(id)findRoadsWithin:(double)arg1 of:(GEOCoarseLocationLatLng)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)hasLoadedRoadTilesNearCoordinate:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 ;
-(id)findTransitLinksWithin:(double)arg1 of:(GEOCoarseLocationLatLng)arg2 linkHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitPointsWithin:(double)arg1 of:(GEOCoarseLocationLatLng)arg2 pointHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitNodesWithin:(double)arg1 of:(GEOCoarseLocationLatLng)arg2 nodeHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitStationsWithin:(double)arg1 of:(GEOCoarseLocationLatLng)arg2 stationHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitStopsWithin:(double)arg1 of:(GEOCoarseLocationLatLng)arg2 stopHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitHallsWithin:(double)arg1 of:(GEOCoarseLocationLatLng)arg2 hallHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitNodeWithID:(unsigned long long)arg1 near:(GEOCoarseLocationLatLng)arg2 nodeHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitStopWithID:(unsigned long long)arg1 near:(GEOCoarseLocationLatLng)arg2 stopHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findBuildingsWithin:(double)arg1 of:(GEOCoarseLocationLatLng)arg2 buildingHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)preloadRoadTilesNearCoordinate:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)preloadTransitTilesNearCoordinate:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)preloadBuildingTilesNearCoordinate:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)hasLoadedTransitTilesNearCoordinate:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 ;
-(BOOL)hasLoadedBuildingTilesNearCoordinate:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 ;
-(id)findRoadTilesWithin:(double)arg1 of:(GEOCoarseLocationLatLng)arg2 tileHander:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setCallbackQueue:(id)arg1 ;
-(id)buildMapEdgeTransitFrom:(const TransitEdgePiece*)arg1 edgeHandler:(/*^block*/id)arg2 ;
-(void)setTileErrorHandler:(id)arg1 ;
-(id)findRoadEdgesWithin:(double)arg1 of:(GEOCoarseLocationLatLng)arg2 edgeHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

