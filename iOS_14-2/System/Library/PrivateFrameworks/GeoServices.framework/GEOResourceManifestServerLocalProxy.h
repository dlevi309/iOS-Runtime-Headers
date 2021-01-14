/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOResourceFiltersManagerDelegate.h>
#import <libobjc.A.dylib/GEODataStateCapturing.h>
#import <libobjc.A.dylib/GEOKeyBagProtectedDataDidBecomeAvailableObserver.h>
#import <libobjc.A.dylib/GEOConfigChangeListenerDelegate.h>
#import <libobjc.A.dylib/GEOResourceManifestServerProxy.h>

@protocol GEOResourceManifestServerProxyDelegate, OS_dispatch_queue, OS_dispatch_source, NSObject;
@class GEOActiveTileGroup, GEOResourceManifestDownloadTask, NSObject, NSOperationQueue, GEOResourceManifestConfiguration, GEOResourceManifestDownload, NSString, NSError, NSMutableArray, GEOResourceFiltersManager, NSArray, _GEOResourceManifestServerLocalProxyMigrationState, NSProgress;

@interface GEOResourceManifestServerLocalProxy : NSObject <GEOResourceFiltersManagerDelegate, GEODataStateCapturing, GEOKeyBagProtectedDataDidBecomeAvailableObserver, GEOConfigChangeListenerDelegate, GEOResourceManifestServerProxy> {

	id<GEOResourceManifestServerProxyDelegate> _delegate;
	GEOResourceManifestDownloadTask* _manifestDownloadTask;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSOperationQueue* _workOperationQueue;
	GEOResourceManifestConfiguration* _configuration;
	BOOL _wantsManifestUpdateOnReachabilityChange;
	NSObject*<OS_dispatch_source> _manifestUpdateTimer;
	BOOL _wantsTileGroupUpdateOnReachabilityChange;
	NSObject*<OS_dispatch_source> _tileGroupUpdateTimer;
	GEOResourceManifestDownload* _resourceManifest;
	GEOActiveTileGroup* _activeTileGroup;
	id<NSObject> _newActiveTileGroupTransaction;
	BOOL _started;
	unsigned long long _manifestRetryCount;
	double _lastManifestRetryTimestamp;
	unsigned long long _tileGroupRetryCount;
	double _lastTileGroupRetryTimestamp;
	NSString* _authToken;
	os_unfair_lock_s _authTokenLock;
	NSError* _lastResourceManifestLoadError;
	NSMutableArray* _manifestUpdateCompletionHandlers;
	NSMutableArray* _opportunisticManifestUpdateCompletionHandlers;
	long long _currentManifestUpdateType;
	GEOResourceFiltersManager* _filtersManager;
	NSArray* _tileGroupMigrators;
	unsigned long long _stateCaptureHandle;
	_GEOResourceManifestServerLocalProxyMigrationState* _tileGroupMigrationState;
	NSProgress* _updateProgress;
	NSProgress* _currentUpdateProgress;

}

@property (nonatomic,retain) GEOActiveTileGroup * activeTileGroup; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<GEOResourceManifestServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)serverQueue;
-(void)openConnection;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1 ;
-(void)closeConnection;
-(void)cancelCurrentManifestUpdate;
-(BOOL)_writeActiveTileGroupToDisk:(id)arg1 error:(id*)arg2 ;
-(id)_manifestURL;
-(id)authToken;
-(void)valueChangedForGEOConfigKey:(SCD_Struct_GE88*)arg1 ;
-(oneway void)resetActiveTileGroup;
-(void)_tileGroupTimerFired;
-(id<GEOResourceManifestServerProxyDelegate>)delegate;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_notifyImmediateManifestUpdateCompletionHandlers:(id)arg1 ;
-(void)_loadFromDisk;
-(void)filtersManagerDidChangeActiveFilters:(id)arg1 ;
-(id)serverOperationQueue;
-(void)_updateManifest:(/*^block*/id)arg1 ;
-(void)performOpportunisticResourceLoading;
-(unsigned long long)maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2 ;
-(void)_updateManifest;
-(void)_addManifestUpdateCompletionHandler:(/*^block*/id)arg1 ;
-(oneway void)setActiveTileGroupIdentifier:(id)arg1 ;
-(BOOL)_writeManifestToDisk:(id)arg1 error:(id*)arg2 ;
-(void)deactivateResourceScale:(int)arg1 ;
-(void)_resetCurrentUpdateState;
-(void)_considerChangingActiveTileGroup;
-(void)setDelegate:(id<GEOResourceManifestServerProxyDelegate>)arg1 ;
-(void)protectedDataDidBecomeAvailable:(id)arg1 ;
-(id)_idealTileGroupToUse;
-(void)_startServer;
-(id)configuration;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)_notifyOpportunisticManifestUpdateCompletionHandlers:(id)arg1 ;
-(void)activateResourceScenario:(int)arg1 ;
-(void)_scheduleTileGroupUpdateTimerWithTimeInterval:(double)arg1 ;
-(void)_countryProvidersDidChange:(id)arg1 ;
-(void)_activeTileGroupOverridesChanged:(id)arg1 ;
-(void)activateResourceScale:(int)arg1 ;
-(BOOL)_writeManifestToDiskWithUpdatedMetadataForURL:(id)arg1 eTag:(id)arg2 error:(id*)arg3 ;
-(void)_updateTimerFired;
-(void)_terminationRequested:(id)arg1 ;
-(void)_cancelManifestUpdate;
-(void)updateIfNecessary:(/*^block*/id)arg1 ;
-(BOOL)_updateManifestIfNecessary:(/*^block*/id)arg1 ;
-(void)setActiveTileGroup:(GEOActiveTileGroup *)arg1 ;
-(void)_cancelMigrationTasks;
-(void)setActiveTileGroupIdentifier:(id)arg1 updateType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_manifestURLDidChange:(id)arg1 ;
-(void)_networkDefaultsDidChange:(id)arg1 ;
-(id)updateProgress;
-(id)migrationTaskOptions;
-(void)_scheduleUpdateTimerWithTimeInterval:(double)arg1 ;
-(void)_changeActiveTileGroup:(id)arg1 activeScales:(id)arg2 activeScenarios:(id)arg3 dataSet:(id)arg4 migrationTasks:(id)arg5 flushTileCache:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)_setCurrentUpdateType:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)captureStateDataWithHints:(os_state_hints_s*)arg1 ;
-(GEOActiveTileGroup *)activeTileGroup;
-(void)_changeActiveTileGroupIfNeededForManifestURL:(id)arg1 oldURL:(id)arg2 ;
-(void)_createMigrators;
-(void)_forceChangeActiveTileGroup:(id)arg1 flushTileCache:(BOOL)arg2 ;
-(void)_startOpportunisticMigrationToTileGroup:(id)arg1 inResourceManifest:(id)arg2 activeScales:(id)arg3 activeScenarios:(id)arg4 dataSet:(id)arg5 ;
-(void)forceUpdate:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deactivateResourceScenario:(int)arg1 ;
-(void)_handleManifestUpdateError:(id)arg1 ;
-(void)_addOpportunisticManifestUpdateCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2 ;
-(void)_notifyManifestUpdateCompletionHandlers:(id)arg1 ;
@end

