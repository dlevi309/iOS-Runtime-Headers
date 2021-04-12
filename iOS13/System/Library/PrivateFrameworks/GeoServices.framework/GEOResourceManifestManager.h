/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) GEOActiveTileGroup * activeTileGroup; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(void)setServerProxyClass:(Class)arg1 ;
+(id)modernManagerForConfiguration:(id)arg1 ;
+(id)modernManager;
+(void)useRemoteProxy;
+(void)useLocalProxy;
+(void)disableServerConnection;
+(void)configureInProcessSingletonWithConfiguration:(id)arg1 ;
+(void)setHiDPI:(BOOL)arg1 ;
+(id)modernManagerForTileGroupIdentifier:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 ;
-(void)forceUpdate;
-(id)authToken;
-(id)updateProgress;
-(void)_localeChanged:(id)arg1 ;
-(void)addTileGroupObserver:(id)arg1 queue:(id)arg2 ;
-(void)removeTileGroupObserver:(id)arg1 ;
-(id)captureStatePlistWithHints:(os_state_hints_s*)arg1 ;
-(GEOActiveTileGroup *)activeTileGroup;
-(void)updateManifest:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)openServerConnection;
-(void)closeServerConnection;
-(BOOL)isMuninEnabled;
-(BOOL)isDisputedBordersWhitelistedForTileKey:(const GEOTileKey*)arg1 country:(id)arg2 region:(id)arg3 ;
-(BOOL)hasActiveTileGroup;
-(id)pathForResourceWithName:(id)arg1 ;
-(id)allResourceNames;
-(void)startObservingDevResources;
-(void)stopObservingDevResources;
-(void)_scheduleCachedResourceInfoPurgeTimer;
-(id)_loadActiveTileGroupIfNecessary:(BOOL)arg1 ;
-(void)closeServerConnection:(BOOL)arg1 ;
-(void)_purgeCachedResourceInfo;
-(int)mapMatchingTileSetStyle;
-(unsigned)versionForTileKey:(const GEOTileKey*)arg1 ;
-(int)requestStyleForTileKey:(const GEOTileKey*)arg1 ;
-(double)timeToLiveForTileKey:(const GEOTileKey*)arg1 ;
-(BOOL)isAvailableForTileKey:(const GEOTileKey*)arg1 ;
-(id)languageForTileKey:(const GEOTileKey*)arg1 ;
-(id)languageForTileKey:(const GEOTileKey*)arg1 overrideLocale:(id)arg2 ;
-(BOOL)useProxyAuthForTileKey:(const GEOTileKey*)arg1 ;
-(BOOL)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3 ;
-(void)_buildResourceNamesToPaths;
-(oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1 ;
-(oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1 ;
-(oneway void)serverProxyWillStartLoadingResources:(id)arg1 ;
-(oneway void)serverProxyDidStopLoadingResources:(id)arg1 ;
-(void)fakeTileGroupChange;
-(oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(/*^block*/id)arg3 ;
-(void)serverProxyNeedsWiFiResourceActivity:(id)arg1 ;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelCurrentManifestUpdate;
-(void)activateResourceScale:(int)arg1 ;
-(void)activateResourceScenario:(int)arg1 ;
-(void)deactivateResourceScale:(int)arg1 ;
-(void)deactivateResourceScenario:(int)arg1 ;
-(id)muninBucketURLForId:(unsigned short)arg1 lod:(unsigned char)arg2 ;
-(BOOL)hasResourceManifest;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1 ;
-(void)setActiveTileGroupIdentifier:(unsigned)arg1 ;
-(void)setActiveTileGroupIdentifier:(unsigned)arg1 updateType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)resetActiveTileGroup;
-(void)updateManifest:(/*^block*/id)arg1 ;
-(void)_notifyObserversOfResourcesChange;
-(void)devResourcesFolderDidChange;
-(void)addServerProxyObserver:(id)arg1 ;
-(void)removeServerProxyObserver:(id)arg1 ;
-(unsigned)mapMatchingZoomLevel;
-(id)_activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(id)localizationURLStringIfNecessaryForActiveTileSet:(id)arg1 tileKey:(const GEOTileKey*)arg2 overrideLocale:(id)arg3 ;
-(id)disputedBordersQueryItemsForTileKey:(const GEOTileKey*)arg1 country:(id)arg2 region:(id)arg3 ;
-(unsigned long long)_fromgeod_maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2 ;
-(id)allRegionalResourceNames;
-(id)allResourcePaths;
-(void)addNetworkActivityHandler:(/*^block*/id)arg1 ;
-(id)bestLocalizedStringForDisplayStringAtIndex:(unsigned long long)arg1 ;
-(void)setConstantlyChangeTileGroup:(BOOL)arg1 ;
-(void)setConstantlyChangeTileGroupInterval:(double)arg1 ;
-(void)updateManifestIfNecessary:(/*^block*/id)arg1 ;
-(id)detailedDescription;
-(unsigned)activeTileGroupIdentifier;
-(void)removeDevResources;
-(id<GEOResourceManifestServerProxy>)serverProxy;
@end

