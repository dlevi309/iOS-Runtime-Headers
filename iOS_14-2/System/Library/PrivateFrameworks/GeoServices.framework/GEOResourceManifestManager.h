/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOPListStateCapturing.h>
#import <libobjc.A.dylib/GEOResourceManifestServerProxyDelegate.h>

@protocol GEOResourceManifestServerProxy, OS_dispatch_source;
@class NSHashTable, GEOActiveTileGroup, NSDictionary, NSSet, NSMutableArray, GEOLocalizationRegionsInfo, geo_isolater, GEOResourceManifestConfiguration, NSObject, NSString;

@interface GEOResourceManifestManager : NSObject <GEOPListStateCapturing, GEOResourceManifestServerProxyDelegate> {

	id<GEOResourceManifestServerProxy> _serverProxy;
	NSHashTable* _serverProxyObservers;
	GEOActiveTileGroup* _activeTileGroup;
	os_unfair_lock_s _activeTileGroupLock;
	NSDictionary* _resourceNamesToPaths;
	NSSet* _allResourceNames;
	NSSet* _allRegionalResourceNames;
	BOOL _needsToLoadTileGroupFromDisk;
	NSMutableArray* _tileGroupObservers;
	os_unfair_recursive_lock_s _tileGroupObserversLock;
	os_unfair_lock_s _closedCountLock;
	long long _closedCount;
	BOOL _constantlyChangeTileGroup;
	double _constantlyChangeTileGroupInterval;
	GEOLocalizationRegionsInfo* _localizationRegionsInfo;
	NSMutableArray* _networkActivityHandlers;
	geo_isolater* _networkActivityHandlersIsolation;
	BOOL _isUpdatingManifest;
	BOOL _isLoadingResources;
	os_unfair_lock_s _resourceNamesToPathsLock;
	GEOResourceManifestConfiguration* _configuration;
	NSObject*<OS_dispatch_source> _cachedResourceInfoPurgeTimer;
	unsigned long long _stateCaptureHandle;

}

@property (nonatomic,readonly) id<GEOResourceManifestServerProxy> serverProxy;              //@synthesize serverProxy=_serverProxy - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveTileGroup; 
@property (nonatomic,readonly) BOOL hasLoadedActiveTileGroup; 
@property (nonatomic,readonly) GEOActiveTileGroup * activeTileGroup; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)modernManagerNoCreate;
+(id)modernManagerForTileGroupIdentifier:(unsigned)arg1 ;
+(id)sharedManager;
+(id)modernManagerForConfiguration:(id)arg1 ;
+(void)setServerProxyClass:(Class)arg1 ;
+(id)modernManager;
+(void)setHiDPI:(BOOL)arg1 ;
+(void)configureInProcessSingletonWithConfiguration:(id)arg1 ;
+(void)disableServerConnection;
+(void)useLocalProxy;
+(void)useRemoteProxy;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1 ;
-(id)detailedDescription;
-(void)cancelCurrentManifestUpdate;
-(void)forceUpdate;
-(id)authToken;
-(oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(/*^block*/id)arg3 ;
-(void)_notifyObserversOfResourcesChange;
-(void)resetActiveTileGroup;
-(void)devResourcesFolderDidChange;
-(id)init;
-(id)captureStatePlistWithHints:(os_state_hints_s*)arg1 ;
-(void)openServerConnection;
-(void)setConstantlyChangeTileGroupInterval:(double)arg1 ;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned)mapMatchingZoomLevel;
-(BOOL)isDisputedBordersAllowlistedForTileKey:(const GEOTileKey*)arg1 country:(id)arg2 region:(id)arg3 ;
-(id)languageForTileKey:(const GEOTileKey*)arg1 ;
-(oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1 ;
-(void)closeServerConnection:(BOOL)arg1 ;
-(void)_scheduleCachedResourceInfoPurgeTimer;
-(void)removeDevResources;
-(BOOL)isAvailableForTileKey:(const GEOTileKey*)arg1 ;
-(BOOL)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3 ;
-(id)_activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(id<GEOResourceManifestServerProxy>)serverProxy;
-(double)timeToLiveForTileKey:(const GEOTileKey*)arg1 ;
-(void)setActiveTileGroupIdentifier:(unsigned)arg1 ;
-(void)stopObservingDevResources;
-(void)_localeChanged:(id)arg1 ;
-(id)allResourceNames;
-(void)deactivateResourceScale:(int)arg1 ;
-(int)requestStyleForTileKey:(const GEOTileKey*)arg1 ;
-(unsigned)activeTileGroupIdentifier;
-(id)initWithConfiguration:(id)arg1 ;
-(void)removeServerProxyObserver:(id)arg1 ;
-(unsigned)versionForTileKey:(const GEOTileKey*)arg1 ;
-(void)updateManifest:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isMuninEnabled;
-(void)closeServerConnection;
-(unsigned long long)_fromgeod_maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2 ;
-(void)addNetworkActivityHandler:(/*^block*/id)arg1 ;
-(id)allResourcePaths;
-(void)updateManifest:(/*^block*/id)arg1 ;
-(void)activateResourceScenario:(int)arg1 ;
-(void)fakeTileGroupChange;
-(id)localizationURLStringIfNecessaryForActiveTileSet:(id)arg1 tileKey:(const GEOTileKey*)arg2 overrideLocale:(id)arg3 ;
-(id)disputedBordersQueryItemsForTileKey:(const GEOTileKey*)arg1 country:(id)arg2 region:(id)arg3 ;
-(void)activateResourceScale:(int)arg1 ;
-(void)addServerProxyObserver:(id)arg1 ;
-(BOOL)hasActiveTileGroup;
-(id)muninBucketURLForId:(unsigned short)arg1 lod:(unsigned char)arg2 ;
-(oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1 ;
-(void)addTileGroupObserver:(id)arg1 queue:(id)arg2 ;
-(id)bestLocalizedStringForDisplayStringAtIndex:(unsigned long long)arg1 ;
-(oneway void)serverProxyWillStartLoadingResources:(id)arg1 ;
-(void)updateManifestIfNecessary:(/*^block*/id)arg1 ;
-(int)mapMatchingTileSetStyle;
-(void)serverProxyNeedsWiFiResourceActivity:(id)arg1 ;
-(void)_purgeCachedResourceInfo;
-(void)_buildResourceNamesToPaths;
-(void)setActiveTileGroupIdentifier:(unsigned)arg1 updateType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)allRegionalResourceNames;
-(id)updateProgress;
-(BOOL)hasResourceManifest;
-(void)setConstantlyChangeTileGroup:(BOOL)arg1 ;
-(id)pathForResourceWithName:(id)arg1 ;
-(GEOActiveTileGroup *)activeTileGroup;
-(BOOL)useProxyAuthForTileKey:(const GEOTileKey*)arg1 ;
-(oneway void)serverProxyDidStopLoadingResources:(id)arg1 ;
-(id)_loadActiveTileGroupIfNecessary:(BOOL)arg1 ;
-(id)languageForTileKey:(const GEOTileKey*)arg1 overrideLocale:(id)arg2 ;
-(BOOL)hasLoadedActiveTileGroup;
-(void)removeTileGroupObserver:(id)arg1 ;
-(void)deactivateResourceScenario:(int)arg1 ;
-(void)dealloc;
-(void)startObservingDevResources;
@end

