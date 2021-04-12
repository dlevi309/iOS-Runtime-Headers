/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/GEORoutePreloadStrategy.h>

@protocol OS_dispatch_queue, GEORoutePreloadCamera;
@class NSObject, GEORoutePreloader, GEOComposedRoute, GEOTileKeyList, NSMutableArray, NSMapTable, NSTimer, NSMutableDictionary, NSString;

@interface GEONavRoutePreloadStrategy : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadStrategy> {

	NSObject*<OS_dispatch_queue> _workQueue;
	GEORoutePreloader* _preloader;
	GEOComposedRoute* _route;
	double _currentRoutePosition;
	int _downloadState;
	id<GEORoutePreloadCamera> _camera;
	GEOTileKeyList* _tilesLoadingOrLoaded;
	GEOTileKeyList* _tilesReceived;
	NSMutableArray* _steps;
	unsigned _stepGeneration;
	long long _currentLoadingSteps;
	NSMapTable* _stepErrors;
	NSMapTable* _stepLifetimeErrors;
	BOOL _anyErrors;
	BOOL _finished;
	double _beginTime;
	double _mostRecentErrorTime;
	BOOL _hadEnoughTilesToDisableNetworking;
	NSTimer* _geodCrashTimer;
	double _maneuverSizeInMeters;
	BOOL _enabled;
	double _stepSizeInMeters;
	NSMutableDictionary* _tileSetStyles;

}

@property (nonatomic,retain) id<GEORoutePreloadCamera> camera;                  //@synthesize camera=_camera - In the implementation block
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
-(void)_stop;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(void)setCamera:(id<GEORoutePreloadCamera>)arg1 ;
-(id<GEORoutePreloadCamera>)camera;
-(void)setPreloader:(GEORoutePreloader *)arg1 ;
-(void)updateWithRoute:(id)arg1 routeMatch:(id)arg2 ;
-(void)performTearDown;
-(GEOComposedRoute *)route;
-(void)updateWithRouteMatch:(id)arg1 ;
-(void)observedNetworkQualityDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(void)_retryFailuresWithErrorsReset:(BOOL)arg1 ;
-(void)_performNextRequests;
-(void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned)arg2 andZoom:(unsigned)arg3 ;
-(void)_geodCrashed:(id)arg1 ;
-(GEORoutePreloader *)preloader;
-(void)_resetErrCounts;
-(void)_cancelStep:(id)arg1 ;
-(id)_descriptionForStep:(id)arg1 ;
-(void)_incrementErrorForStep:(id)arg1 ;
-(BOOL)_loadStep:(id)arg1 requireWiFi:(BOOL)arg2 ;
-(void)_performTileRequestsWithCurrentRoutePositionStepIndex:(long long)arg1 firstErrorStepIndex:(long long)arg2 firstLoadStepIndex:(long long)arg3 loadStepsAhead:(long long)arg4 loadStepsAheadIfNoWiFi:(long long)arg5 ;
-(void)_accumulateSteps;
-(void)_cancelAllSteps;
-(void)_cancelRequestsInPast;
@end

