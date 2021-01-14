/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/GEORoutePreloadStrategy.h>

@protocol OS_dispatch_queue, GEORoutePreloadCamera, OS_dispatch_source;
@class NSObject, GEORoutePreloader, GEOComposedRoute, GEOTileKeyList, NSMutableArray, NSMapTable, NSMutableDictionary, NSString;

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
	NSObject*<OS_dispatch_source> _geodCrashTimer;
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
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(id<GEORoutePreloadCamera>)camera;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(void)_performTileRequestsWithCurrentRoutePositionStepIndex:(long long)arg1 firstErrorStepIndex:(long long)arg2 firstLoadStepIndex:(long long)arg3 loadStepsAhead:(long long)arg4 loadStepsAheadIfNoWiFi:(long long)arg5 ;
-(GEOComposedRoute *)route;
-(id)init;
-(void)start;
-(void)_start;
-(void)stop;
-(void)_performNextRequests;
-(void)_retryFailuresWithErrorsReset:(BOOL)arg1 ;
-(GEORoutePreloader *)preloader;
-(void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned)arg2 andZoom:(unsigned)arg3 ;
-(void)_cancelStep:(id)arg1 ;
-(void)_geodCrashed;
-(void)setCamera:(id<GEORoutePreloadCamera>)arg1 ;
-(void)_accumulateSteps;
-(void)_resetErrCounts;
-(id)_descriptionForStep:(id)arg1 ;
-(void)_incrementErrorForStep:(id)arg1 ;
-(BOOL)_loadStep:(id)arg1 requireWiFi:(BOOL)arg2 ;
-(void)_cancelAllSteps;
-(void)_cancelRequestsInPast;
-(void)_stop;
-(void)setPreloader:(GEORoutePreloader *)arg1 ;
-(void)updateWithRoute:(id)arg1 routeMatch:(id)arg2 ;
-(void)performTearDown;
-(void)updateWithRouteMatch:(id)arg1 ;
-(void)observedNetworkQualityDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
@end

