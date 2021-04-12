/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(id)findTransitLinksNear:(SCD_Struct_GE32)arg1 radius:(double)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findBuildingsNear:(SCD_Struct_GE32)arg1 radius:(double)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setAllowNetworkTileLoad:(BOOL)arg1 ;
-(void)setFlipNegativeTravelDirectionRoads:(BOOL)arg1 ;
-(void)setVisitDoubleTravelDirectionRoadsTwice:(BOOL)arg1 ;
-(id)findRoadsNear:(SCD_Struct_GE32)arg1 radius:(double)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)flipNegativeTravelDirectionRoads;
-(BOOL)visitDoubleTravelDirectionRoadsTwice;
-(/*^block*/id)_openTileLoaderWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_findTransitPointsOfType:(unsigned long long)arg1 nearCoordinate:(SCD_Struct_GE32)arg2 radius:(double)arg3 handler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_findParentOfTransitPoint:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_findChildrenOfTransitPoint:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findTransitAccessPointsForStation:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_preloadTilesNear:(SCD_Struct_GE32)arg1 radius:(double)arg2 tileSetStyle:(int)arg3 tileSize:(int)arg4 tileScale:(int)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)initWithQueue:(id)arg1 memoryCacheCountLimit:(unsigned long long)arg2 memoryCacheCostLimit:(unsigned long long)arg3 ;
-(id)findRoadsFromPreviousIntersectionOf:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsToPreviousIntersectionOf:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsFromNextIntersectionOf:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsToNextIntersectionOf:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findAllRoadsAtPreviousIntersectionOf:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findAllRoadsAtNextIntersectionOf:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsFromJunction:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsToJunction:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findTransitStopsNear:(SCD_Struct_GE32)arg1 radius:(double)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitHallsNear:(SCD_Struct_GE32)arg1 radius:(double)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitStationsNear:(SCD_Struct_GE32)arg1 radius:(double)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitPointWithID:(unsigned long long)arg1 near:(SCD_Struct_GE32)arg2 pointHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitHallForStop:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findTransitStationForHall:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findTransitStopsForHall:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findTransitHallsForStation:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findTransitGeometryForPoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)preloadRoadTilesNear:(SCD_Struct_GE32)arg1 radius:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)preloadTransitTilesNear:(SCD_Struct_GE32)arg1 radius:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)preloadBuildingTilesNear:(SCD_Struct_GE32)arg1 radius:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)roadTileKeysNear:(SCD_Struct_GE32)arg1 radius:(double)arg2 ;
-(BOOL)allowNetworkTileLoad;
@end

