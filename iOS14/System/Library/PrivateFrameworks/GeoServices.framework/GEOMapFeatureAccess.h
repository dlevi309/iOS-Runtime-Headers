/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject, GEOTileLoader;

@interface GEOMapFeatureAccess : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _allowNetworkTileLoad;
	BOOL _flipNegativeTravelDirectionRoads;
	BOOL _visitDoubleTravelDirectionRoadsTwice;
	GEOTileLoader* _tileLoader;

}

@property (assign,nonatomic) BOOL allowNetworkTileLoad;                              //@synthesize allowNetworkTileLoad=_allowNetworkTileLoad - In the implementation block
@property (assign,nonatomic) BOOL flipNegativeTravelDirectionRoads;                  //@synthesize flipNegativeTravelDirectionRoads=_flipNegativeTravelDirectionRoads - In the implementation block
@property (assign,nonatomic) BOOL visitDoubleTravelDirectionRoadsTwice;              //@synthesize visitDoubleTravelDirectionRoadsTwice=_visitDoubleTravelDirectionRoadsTwice - In the implementation block
+(unsigned long long)zoomLevelForStyle:(int)arg1 scale:(int)arg2 ;
-(id)initWithQueue:(id)arg1 ;
-(id)findTransitHallForStop:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findTransitGeometryForPoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findTransitHallsForStation:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findAllRoadsAtPreviousIntersectionOf:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findTransitPointWithID:(unsigned long long)arg1 near:(GEOCoarseLocationLatLng)arg2 pointHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_preloadTilesNear:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 tileSetStyle:(int)arg3 tileSize:(int)arg4 tileScale:(int)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)init;
-(void)setAllowNetworkTileLoad:(BOOL)arg1 ;
-(void)preloadTransitTilesNear:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithQueue:(id)arg1 memoryCacheCountLimit:(unsigned long long)arg2 memoryCacheCostLimit:(unsigned long long)arg3 ;
-(id)findTransitStationsNear:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitLinksNear:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findBuildingsNear:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitStationForHall:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsToJunction:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findAllRoadsAtNextIntersectionOf:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsNear:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitAccessPointsForStation:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)visitDoubleTravelDirectionRoadsTwice;
-(void)preloadRoadTilesNear:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findTransitStopsForHall:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsToNextIntersectionOf:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsFromPreviousIntersectionOf:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setFlipNegativeTravelDirectionRoads:(BOOL)arg1 ;
-(BOOL)allowNetworkTileLoad;
-(id)findTransitStopsNear:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findRoadsFromNextIntersectionOf:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)roadTileKeysNear:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 ;
-(id)_findTransitPointsOfType:(unsigned long long)arg1 nearCoordinate:(GEOCoarseLocationLatLng)arg2 radius:(double)arg3 handler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_findParentOfTransitPoint:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_findChildrenOfTransitPoint:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsFromJunction:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setVisitDoubleTravelDirectionRoadsTwice:(BOOL)arg1 ;
-(id)findTransitHallsNear:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findRoadsToPreviousIntersectionOf:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)preloadBuildingTilesNear:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)flipNegativeTravelDirectionRoads;
-(/*^block*/id)_openTileLoaderWithCompletionHandler:(/*^block*/id)arg1 ;
@end

