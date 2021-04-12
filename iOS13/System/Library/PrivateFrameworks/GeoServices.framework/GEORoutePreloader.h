/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOTileLoaderObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, GEOComposedRoute, GEOApplicationAuditToken, geo_isolater, NSDate, NSString;

@interface GEORoutePreloader : NSObject <GEOTileLoaderObserver> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSArray* _strategies;
	GEOComposedRoute* _route;
	BOOL _running;
	unsigned long long _networkQuality;
	GEOOnce_s _didTearDown;
	GEOApplicationAuditToken* _auditToken;
	geo_isolater* _deviceQualitiesIsolation;
	int _batteryNotificationToken;
	BOOL _pluggedIn;
	geo_isolater* _statisticsIsolation;
	unsigned long long _statisticsCounts[5];
	unsigned long long _tilesUsed;
	unsigned long long _nonPreloadedTilesLoadedFromNetwork;
	unsigned long long _nonPreloadedTilesFailed;
	NSDate* _statisticsStartDate;

}

@property (nonatomic,readonly) GEOComposedRoute * route;                           //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) unsigned long long networkQuality; 
@property (nonatomic,readonly) GEOApplicationAuditToken * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(GEOApplicationAuditToken *)auditToken;
-(void)stop;
-(void)start;
-(void)_start;
-(void)_stop;
-(void)tearDown;
-(void)tileLoader:(id)arg1 loadedTileKey:(const GEOTileKey*)arg2 fromSource:(long long)arg3 withOptions:(unsigned long long)arg4 ;
-(void)tileLoader:(id)arg1 failedTileKey:(const GEOTileKey*)arg2 error:(id)arg3 withOptions:(unsigned long long)arg4 ;
-(id)initWithRoute:(id)arg1 strategies:(id)arg2 auditToken:(id)arg3 ;
-(void)_performTearDown;
-(void)_unregisterForNetworkQualityObservation;
-(void)_unregisterForBatteryStatusChanges;
-(void)_finalizeStatistics;
-(void)_registerForNetworkQualityObservation;
-(void)_registerForBatteryStatusChanges;
-(GEOComposedRoute *)route;
-(void)updateWithRouteMatch:(id)arg1 ;
-(void)_networkReachabilityChanged:(id)arg1 ;
-(void)_updateObservedNetworkPerformanceForDownload:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)_updateBatteryState;
-(id)initWithRoute:(id)arg1 strategies:(id)arg2 ;
-(unsigned long long)networkQuality;
-(void)updateObservedNetworkPerformanceForDownload:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)updateObservedNetworkPerformanceWithServerError;
-(BOOL)isPluggedIn;
-(void)incrementTileLoadStatistic:(long long)arg1 amount:(unsigned long long)arg2 ;
@end

