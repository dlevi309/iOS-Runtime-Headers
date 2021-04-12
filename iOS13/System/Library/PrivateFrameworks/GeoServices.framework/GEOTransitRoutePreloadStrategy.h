/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/GEORoutePreloadStrategy.h>

@protocol OS_dispatch_queue;
@class GEORoutePreloader, GEOComposedRoute, GEOTransitSuggestedRoute, _GEOTransitRoutePreloaderData, GEOMapServiceTraits, NSTimer, NSObject, NSMutableDictionary, NSString;

@interface GEOTransitRoutePreloadStrategy : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadStrategy> {

	GEOTransitSuggestedRoute* _suggestedRoute;
	_GEOTransitRoutePreloaderData* _reserved;
	GEOMapServiceTraits* _traits;
	double _endRoutePosition;
	unsigned long long _indexOfLastStepWithPreparedBatch;
	NSTimer* _geodCrashTimer;
	double _radialDistanceToImplicateTilesMeters;
	long long _tilesRequested;
	BOOL _shouldPreloadEntireRoute;
	NSObject*<OS_dispatch_queue> _workQueue;
	GEORoutePreloader* _preloader;
	GEOComposedRoute* _route;
	double _currentRoutePosition;
	int _downloadState;
	double _stepSizeInMeters;
	BOOL _enabled;
	NSMutableDictionary* _tileSetStyles;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) GEORoutePreloader * preloader;              //@synthesize preloader=_preloader - In the implementation block
@property (nonatomic,retain) GEOComposedRoute * route;                          //@synthesize route=_route - In the implementation block
-(id)init;
-(void)stop;
-(void)start;
-(void)_start;
-(void)setTraits:(id)arg1 ;
-(void)_stop;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(void)setPreloader:(GEORoutePreloader *)arg1 ;
-(void)updateWithRoute:(id)arg1 routeMatch:(id)arg2 ;
-(void)performTearDown;
-(GEOComposedRoute *)route;
-(void)updateWithRouteMatch:(id)arg1 ;
-(void)observedNetworkQualityDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(void)_retryFailuresWithErrorsReset:(BOOL)arg1 ;
-(void)_resetErrorCounts;
-(void)_performNextRequests;
-(void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned)arg2 andZoom:(unsigned)arg3 ;
-(void)_cancelAllBatches;
-(PolylineCoordinate)_polylineCoordinateForDouble:(double)arg1 ;
-(void)_makeBatchesForSteps:(id)arg1 ;
-(void)_makeBatchForTilesAroundStationsForSteps:(id)arg1 ;
-(void)_processBatches;
-(void)_makePreloadBatchForSteps:(id)arg1 ;
-(void)_ignoreAlreadyRequestedTilesAndUpdateGlobalListWithNonDuplicatesForTileKeyList:(id)arg1 ;
-(void)_makePreloadBatchForPlaceDataOnSteps:(id)arg1 ;
-(void)_makePreloadBatchForTilesOnRouteWithSteps:(id)arg1 andPriority:(unsigned)arg2 ;
-(void)_loadPlacecardsForBatch:(id)arg1 ;
-(void)_loadTilesForBatch:(id)arg1 ;
-(void)_processedFinishedBatch:(id)arg1 withPartialStatus:(unsigned long long)arg2 ;
-(void)_geodCrashed:(id)arg1 ;
-(GEORoutePreloader *)preloader;
-(long long)tilesRequested;
-(void)setShouldPreloadEntireRoute:(BOOL)arg1 ;
@end

