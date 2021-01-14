/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/CKAppInstallationWatcherObserver.h>

@class NSArray, NSString, IMBalloonPlugin, NSHashTable, NSDictionary, NSMutableDictionary, NSMutableArray, NSSet, NSCache, CKPreviewDispatchCache;

@interface CKBalloonPluginManager : NSObject <CKAppInstallationWatcherObserver> {

	NSArray* _appStripCandidatePlugins;
	NSArray* _visibleAppStripPlugins;
	NSArray* _visibleSwitcherPlugins;
	NSArray* _recentAppStripPlugins;
	NSArray* _visibleRecentAppStripPlugins;
	BOOL _isAppInstallationEnabled;
	BOOL _isAppRemovalEnabled;
	BOOL _isCameraAllowed;
	BOOL _appStoreAutoEnableToggled;
	BOOL _keepingEmptySections;
	BOOL _isAppInstallationObserver;
	NSString* _lastLaunchedIdentifier;
	IMBalloonPlugin* _lastViewedPlugin;
	NSArray* _visiblePlugins;
	NSArray* _cachedPotentiallyVisiblePlugins;
	NSArray* _favoriteAppStripPlugins;
	NSHashTable* _currentExtensionConsumers;
	NSDictionary* _pluginVersionMap;
	NSDictionary* _pluginSeenMap;
	NSDictionary* _pluginIndexPathMap;
	NSMutableDictionary* _historicalPluginIndexPathMap;
	NSMutableArray* _MRUPluginInteractionList;
	NSDictionary* _pluginLaunchTimeMap;
	NSArray* _allPlugins;
	long long _numberOfSectionsToKeep;
	NSMutableArray* _visibleInstallations;
	NSSet* _oldVisibleSwitcherPluginIdentifiers;
	NSCache* _iconCache;
	CKPreviewDispatchCache* _snapshotCache;
	NSMutableDictionary* _activeBrowsers;

}

@property (nonatomic,readonly) BOOL isAppRemovalEnabled; 
@property (nonatomic,readonly) NSArray * visibleDrawerPlugins; 
@property (nonatomic,readonly) NSArray * visibleFavoriteAppStripPlugins; 
@property (nonatomic,readonly) NSArray * visibleRecentAppStripPlugins; 
@property (nonatomic,readonly) NSArray * recentAppStripPlugins; 
@property (nonatomic,readonly) NSArray * potentiallyVisiblePlugins; 
@property (nonatomic,readonly) NSArray * potentiallyVisibleNonFavoritePlugins; 
@property (nonatomic,retain) NSDictionary * pluginIndexPathMap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * visiblePlugins;                                                       //@synthesize visiblePlugins=_visiblePlugins - In the implementation block
@property (nonatomic,retain) NSArray * cachedPotentiallyVisiblePlugins;                                      //@synthesize cachedPotentiallyVisiblePlugins=_cachedPotentiallyVisiblePlugins - In the implementation block
@property (nonatomic,retain) NSArray * visibleSwitcherPlugins;                                               //@synthesize visibleSwitcherPlugins=_visibleSwitcherPlugins - In the implementation block
@property (nonatomic,retain) NSArray * favoriteAppStripPlugins;                                              //@synthesize favoriteAppStripPlugins=_favoriteAppStripPlugins - In the implementation block
@property (assign,nonatomic) BOOL isAppInstallationEnabled;                                                  //@synthesize isAppInstallationEnabled=_isAppInstallationEnabled - In the implementation block
@property (assign,nonatomic) BOOL isAppRemovalEnabled;                                                       //@synthesize isAppRemovalEnabled=_isAppRemovalEnabled - In the implementation block
@property (assign,nonatomic) BOOL isCameraAllowed;                                                           //@synthesize isCameraAllowed=_isCameraAllowed - In the implementation block
@property (nonatomic,retain) NSHashTable * currentExtensionConsumers;                                        //@synthesize currentExtensionConsumers=_currentExtensionConsumers - In the implementation block
@property (nonatomic,retain) NSDictionary * pluginVersionMap;                                                //@synthesize pluginVersionMap=_pluginVersionMap - In the implementation block
@property (nonatomic,retain) NSDictionary * pluginSeenMap;                                                   //@synthesize pluginSeenMap=_pluginSeenMap - In the implementation block
@property (nonatomic,retain) NSDictionary * pluginIndexPathMap;                                              //@synthesize pluginIndexPathMap=_pluginIndexPathMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * historicalPluginIndexPathMap;                             //@synthesize historicalPluginIndexPathMap=_historicalPluginIndexPathMap - In the implementation block
@property (nonatomic,retain) NSMutableArray * MRUPluginInteractionList;                                      //@synthesize MRUPluginInteractionList=_MRUPluginInteractionList - In the implementation block
@property (nonatomic,retain) NSDictionary * pluginLaunchTimeMap;                                             //@synthesize pluginLaunchTimeMap=_pluginLaunchTimeMap - In the implementation block
@property (nonatomic,retain) NSArray * allPlugins;                                                           //@synthesize allPlugins=_allPlugins - In the implementation block
@property (assign,getter=isKeepingEmptySections,nonatomic) BOOL keepingEmptySections;                        //@synthesize keepingEmptySections=_keepingEmptySections - In the implementation block
@property (assign,nonatomic) long long numberOfSectionsToKeep;                                               //@synthesize numberOfSectionsToKeep=_numberOfSectionsToKeep - In the implementation block
@property (nonatomic,retain) NSMutableArray * visibleInstallations;                                          //@synthesize visibleInstallations=_visibleInstallations - In the implementation block
@property (assign,nonatomic) BOOL isAppInstallationObserver;                                                 //@synthesize isAppInstallationObserver=_isAppInstallationObserver - In the implementation block
@property (nonatomic,retain) NSSet * oldVisibleSwitcherPluginIdentifiers;                                    //@synthesize oldVisibleSwitcherPluginIdentifiers=_oldVisibleSwitcherPluginIdentifiers - In the implementation block
@property (nonatomic,retain) NSCache * iconCache;                                                            //@synthesize iconCache=_iconCache - In the implementation block
@property (nonatomic,retain) CKPreviewDispatchCache * snapshotCache;                                         //@synthesize snapshotCache=_snapshotCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeBrowsers;                                           //@synthesize activeBrowsers=_activeBrowsers - In the implementation block
@property (nonatomic,readonly) BOOL hasLoadedExtensions; 
@property (nonatomic,readonly) NSArray * allEnabledPlugins; 
@property (nonatomic,readonly) NSArray * disabledPlugins; 
@property (nonatomic,retain) NSString * lastLaunchedIdentifier;                                              //@synthesize lastLaunchedIdentifier=_lastLaunchedIdentifier - In the implementation block
@property (assign,nonatomic,__weak) IMBalloonPlugin * lastViewedPlugin;                                      //@synthesize lastViewedPlugin=_lastViewedPlugin - In the implementation block
@property (nonatomic,readonly) BOOL isAppStoreEnabled; 
@property (assign,getter=isAppStoreAutoEnableToggled,nonatomic) BOOL appStoreAutoEnableToggled;              //@synthesize appStoreAutoEnableToggled=_appStoreAutoEnableToggled - In the implementation block
+(id)sharedInstance;
+(id)recentPlugin;
+(id)morePlugin;
+(id)defaultFavoritePlugins;
-(id)init;
-(id)existingPhotoBrowserViewController;
-(void)invalidateAllActivePlugins;
-(void)forceKillRemoteExtensionsWithDelay:(BOOL)arg1 ;
-(void)setNumberOfSectionsToKeep:(long long)arg1 ;
-(void)cleanSeenMap;
-(void)reloadInstalledApps:(id)arg1 ;
-(void)handleManagedConfigSettingsChangeNotification:(id)arg1 ;
-(NSArray *)visibleSwitcherPlugins;
-(void)refreshPlugins;
-(CFStringRef)healthKitAchievementAvailabilityChangedNotification;
-(id)_decodeIndexPathMap:(id)arg1 ;
-(NSHashTable *)currentExtensionConsumers;
-(void)_updateHistoricalPluginIndexPathMap;
-(BOOL)_shouldForceRegenerateIndexPathMap;
-(void)regeneratePluginIndexPaths;
-(void)invalidateIconCache;
-(void)saveWithNotification:(BOOL)arg1 ;
-(NSArray *)recentAppStripPlugins;
-(BOOL)_shouldUninstallContainingBundle:(id)arg1 ;
-(NSArray *)visiblePlugins;
-(NSMutableArray *)MRUPluginInteractionList;
-(void)setMRUPluginInteractionList:(NSMutableArray *)arg1 ;
-(NSDictionary *)pluginIndexPathMap;
-(NSMutableDictionary *)historicalPluginIndexPathMap;
-(void)setHistoricalPluginIndexPathMap:(NSMutableDictionary *)arg1 ;
-(void)_disableAppWithBalloonIdentifier:(id)arg1 ;
-(void)_addAppWithBalloonIdentifier:(id)arg1 ;
-(BOOL)isAppStoreEnabled;
-(BOOL)hasLoadedExtensions;
-(id)_encodeIndexPathMap:(id)arg1 ;
-(NSDictionary *)pluginVersionMap;
-(NSDictionary *)pluginSeenMap;
-(NSDictionary *)pluginLaunchTimeMap;
-(NSArray *)visibleRecentAppStripPlugins;
-(NSArray *)visibleFavoriteAppStripPlugins;
-(BOOL)isInternalPlugin:(id)arg1 ;
-(BOOL)isPluginEnabled:(id)arg1 ;
-(void)_setSeen:(BOOL)arg1 forPlugin:(id)arg2 ;
-(id)allPluginsPassingTest:(/*^block*/id)arg1 ;
-(BOOL)isEnabledAndVisible:(id)arg1 ;
-(id)createFakeAppsForPPTTesting:(unsigned long long)arg1 ;
-(NSArray *)visibleDrawerPlugins;
-(IMBalloonPlugin *)lastViewedPlugin;
-(void)setPluginLaunchTimeMap:(NSDictionary *)arg1 ;
-(void)setPluginSeenMap:(NSDictionary *)arg1 ;
-(BOOL)isPluginSeenWithInstalledVersion:(id)arg1 ;
-(CKPreviewDispatchCache *)snapshotCache;
-(void)addExtensionConsumer:(id)arg1 ;
-(BOOL)isPluginVisible:(id)arg1 ;
-(BOOL)isAppStoreAutoEnableToggled;
-(BOOL)isAppRemovalEnabled;
-(BOOL)isAppInstallationEnabled;
-(BOOL)_shouldShowSURF;
-(BOOL)_shouldShowActivity;
-(void)healthStickerStatusChanged;
-(void)removeAppWithIdentifier:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forPlugin:(id)arg2 ;
-(id)balloonPluginIdentifierForAppExtensionBundleIdentifier:(id)arg1 ;
-(void)clearBalloonPluginCache;
-(NSArray *)allEnabledPlugins;
-(NSArray *)disabledPlugins;
-(unsigned long long)launchStatusForPlugin:(id)arg1 ;
-(void)updateLaunchStatus:(unsigned long long)arg1 forPlugin:(id)arg2 withNotification:(BOOL)arg3 ;
-(long long)lastViewedPluginIndex;
-(void)updateLaunchTimeForPlugin:(id)arg1 ;
-(id)launchTimeForPlugin:(id)arg1 ;
-(unsigned long long)badgeValueForPlugin:(id)arg1 ;
-(BOOL)isPluginSeen:(id)arg1 ;
-(void)setSeen:(BOOL)arg1 forPlugin:(id)arg2 ;
-(unsigned long long)unseenPluginCount;
-(void)setAppStoreAutoEnableToggled:(BOOL)arg1 ;
-(NSMutableDictionary *)activeBrowsers;
-(NSString *)lastLaunchedIdentifier;
-(void)setLastLaunchedIdentifier:(NSString *)arg1 ;
-(void)setLastViewedPlugin:(IMBalloonPlugin *)arg1 ;
-(void)setIsAppInstallationEnabled:(BOOL)arg1 ;
-(void)setIsAppRemovalEnabled:(BOOL)arg1 ;
-(void)setIsCameraAllowed:(BOOL)arg1 ;
-(void)setVisiblePlugins:(NSArray *)arg1 ;
-(NSArray *)cachedPotentiallyVisiblePlugins;
-(void)setCachedPotentiallyVisiblePlugins:(NSArray *)arg1 ;
-(void)setVisibleSwitcherPlugins:(NSArray *)arg1 ;
-(NSArray *)favoriteAppStripPlugins;
-(void)setFavoriteAppStripPlugins:(NSArray *)arg1 ;
-(void)setPluginVersionMap:(NSDictionary *)arg1 ;
-(void)setCurrentExtensionConsumers:(NSHashTable *)arg1 ;
-(void)setPluginIndexPathMap:(NSDictionary *)arg1 ;
-(void)setAllPlugins:(NSArray *)arg1 ;
-(BOOL)isKeepingEmptySections;
-(void)setKeepingEmptySections:(BOOL)arg1 ;
-(long long)numberOfSectionsToKeep;
-(NSMutableArray *)visibleInstallations;
-(void)setVisibleInstallations:(NSMutableArray *)arg1 ;
-(BOOL)isAppInstallationObserver;
-(void)setIsAppInstallationObserver:(BOOL)arg1 ;
-(NSSet *)oldVisibleSwitcherPluginIdentifiers;
-(void)setOldVisibleSwitcherPluginIdentifiers:(NSSet *)arg1 ;
-(void)setSnapshotCache:(CKPreviewDispatchCache *)arg1 ;
-(void)setActiveBrowsers:(NSMutableDictionary *)arg1 ;
-(void)invalidatePhotosPlugin;
-(void)commitInteractionTimeOrderingChanges;
-(void)forceTearDownRemoteViewsSkippingCameraApp:(BOOL)arg1 ;
-(void)forceKillRemoteExtensionsWithDelay:(BOOL)arg1 skipCameraApp:(BOOL)arg2 ;
-(id)bundleIdentifiersForCurrentExtensionConsumers;
-(void)invalidateAllActivePluginsSkippingCameraApp:(BOOL)arg1 ;
-(id)viewControllerForPluginIdentifier:(id)arg1 dataSource:(id)arg2 ;
-(void)_invalidatePluginForKey:(id)arg1 ;
-(id)newViewControllerForPluginIdentifier:(id)arg1 dataSource:(id)arg2 ;
-(id)browserSnapshotForKey:(id)arg1 ;
-(void)invalidateAllActiveSwitcherPlugins;
-(void)updateSnapshotForBrowserViewController:(id)arg1 currentBounds:(CGRect)arg2 ;
-(void)invalidateAppManagerPlugin;
-(id)digitalTouchViewControllerWithDataSource:(id)arg1 ;
-(id)photosBrowserViewControllerWithPluginPayloads:(id)arg1 ;
-(id)handwritingViewControllerWithPluginPayloads:(id)arg1 ;
-(BOOL)isViewController:(id)arg1 fromPluginWithIdentifier:(id)arg2 ;
-(id)pluginForIdentifier:(id)arg1 ;
-(id)pluginForAdamID:(id)arg1 ;
-(id)existingViewControllerForPluginIdentifier:(id)arg1 ;
-(void)forceKillNonCameraRemoteExtensionsImmediately;
-(void)updateIndexPath:(id)arg1 forPlugin:(id)arg2 isDrawerPluginPath:(BOOL)arg3 ;
-(void)updateInteractionTimeForPlugin:(id)arg1 ;
-(NSCache *)iconCache;
-(void)prepareForSuspend;
-(void)setIconCache:(NSCache *)arg1 ;
-(NSArray *)allPlugins;
-(id)viewControllerForPluginIdentifier:(id)arg1 ;
-(BOOL)isCameraAllowed;
-(void)_refreshVisibleDrawerPluginsDueToAppInstallationChange;
-(id)filteredArrayOfInstallationsThatShouldBeVisible:(id)arg1 ;
-(id)orderedPlugins:(BOOL)arg1 ;
-(id)candidateAppStripPlugins;
-(NSArray *)potentiallyVisiblePlugins;
-(id)allPotentiallyVisiblePlugins;
-(void)updateAppInstallations;
-(id)_pluginIndexPathForFavoritePluginWithIdentifier:(id)arg1 pluginMap:(id)arg2 fallbackMap:(id)arg3 ;
-(NSArray *)potentiallyVisibleNonFavoritePlugins;
-(BOOL)_addPluginToRecentsFrontIfNeeded:(id)arg1 frontOfRecents:(id)arg2 pluginMap:(id)arg3 fallbackMap:(id)arg4 ;
-(void)removeVisibleInstallationWithID:(id)arg1 ;
-(void)appInstallationWatcher:(id)arg1 changedAppInstallation:(id)arg2 ;
-(void)appInstallationWatcher:(id)arg1 addedAppInstallation:(id)arg2 ;
-(id)descriptionOfVisibleDrawerPlugins;
-(void)dealloc;
@end

