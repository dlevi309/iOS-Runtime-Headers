/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
*/

#import <libobjc.A.dylib/HSCloudAvailability.h>

@class ICConnectionConfiguration, ICCloudClient, NSString;

@interface HSCloudClient : NSObject <HSCloudAvailability> {

	BOOL _active;
	ICConnectionConfiguration* _configuration;
	unsigned long long _daemonConfiguration;
	long long _preferredVideoQuality;
	ICCloudClient* _icCloudClient;
	/*^block*/id _updateInProgressChangedHandler;
	/*^block*/id _updateSagaInProgressChangedHandler;
	/*^block*/id _updateJaliscoInProgressChangedHandler;

}

@property (nonatomic,copy) id updateInProgressChangedHandler;                     //@synthesize updateInProgressChangedHandler=_updateInProgressChangedHandler - In the implementation block
@property (nonatomic,copy) id updateSagaInProgressChangedHandler;                 //@synthesize updateSagaInProgressChangedHandler=_updateSagaInProgressChangedHandler - In the implementation block
@property (nonatomic,copy) id updateJaliscoInProgressChangedHandler;              //@synthesize updateJaliscoInProgressChangedHandler=_updateJaliscoInProgressChangedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldProhibitActionsForCurrentNetworkConditions;
-(BOOL)canShowCloudDownloadButtons;
-(BOOL)canShowCloudVideo;
-(BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
-(BOOL)hasProperNetworkConditionsToShowCloudMedia;
-(BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
-(BOOL)isCellularDataRestrictedForVideos;
-(void)importItemArtworkForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateArtistHeroImages;
-(void)loadJaliscoGeniusCUIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)uploadItemProperties;
-(void)loadLastKnownEnableICMLErrorStatusWithCompletionHander:(/*^block*/id)arg1 ;
-(void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 ;
-(void)deprioritizeSubscriptionItemArtworkForPersistentID:(long long)arg1 ;
-(void)loadArtworkInfoForSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadJaliscoGeniusLearnMoreURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadArtworkInfoForSubscriptionContainerPersistentIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)disableJaliscoGeniusWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(long long)cloudAddToPlaylistBehavior;
-(void)importSubscriptionContainerArtworkForPersistentID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deprioritizeArtistHeroImageForPersistentID:(long long)arg1 ;
-(void)uploadArtworkForPlaylistWithPersistentID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addStoreItemWithAdamID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadScreenshotInfoForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadScreenshotInfoForSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadBooksForStoreIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addStoreItemWithAdamID:(long long)arg1 toPlaylistWithPersistentID:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_serverSagaUpdateInProgressDidChange;
-(void)loadArtworkInfoForSubscriptionItemPersistentIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)isAuthenticatedWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deprioritizeAlbumArtistHeroImageForPersistentID:(long long)arg1 ;
-(void)deprioritizeContainerArtworkForSagaID:(unsigned long long)arg1 ;
-(void)updateJaliscoLibraryWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)canSetItemProperty:(id)arg1 ;
-(void)isAuthenticatedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadArtworkInfoForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sdk_createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 tracklist:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setDaemonConfiguration:(unsigned long long)arg1 ;
-(BOOL)isCellularDataRestrictedForMusic;
-(void)loadScreenshotInfoForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importContainerArtworkForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1 ;
-(void)importSubscriptionItemArtworkForPersistentID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importArtistHeroImageForPersistentID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateJaliscoGeniusDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadArtworkInfoForSubscriptionContainerPersistentID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(void)sdk_addStoreItemWithOpaqueID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)canShowCloudMusic;
-(void)addGeniusPlaylistWithPersistentID:(long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)importScreenshotForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)authenticateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeJaliscoLibraryWithCompletionHander:(/*^block*/id)arg1 ;
-(void)setJaliscoGeniusCUID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)becomeActive;
-(void)setUpdateJaliscoInProgressChangedHandler:(id)arg1 ;
-(void)updateJaliscoLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isCellularDataRestricted;
-(void)loadScreenshotInfoForSubscriptionPersistentIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sdk_addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 ;
-(void)loadArtworkInfoForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadArtworkInfoForContainerSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadJaliscoGeniusOperationStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importSubscriptionScreenshotForPersistentID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setUpdateSagaInProgressChangedHandler:(id)arg1 ;
-(void)deprioritizeScreenshotForSagaID:(unsigned long long)arg1 ;
-(void)addItemWithSagaID:(long long)arg1 toPlaylistWithPersistentID:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)loadIsJaliscoUpdateInProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)importAlbumArtistHeroImageForPersistentID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadIsSagaUpdateInProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)isMediaKindDisabledForJaliscoLibrary:(long long)arg1 ;
-(void)loadUpdateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)authenticateAndStartInitialImport:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)enableJaliscoGeniusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deprioritizeSubscriptionContainerArtworkForPersistentID:(long long)arg1 ;
-(void)deauthenticateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadScreenshotInfoForSubscriptionPersistentID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)updateSagaInProgressChangedHandler;
-(void)updateSagaLibraryWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelUpdateJaliscoGeniusDataInProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadJaliscoUpdateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)canSetPlaylistProperty:(id)arg1 ;
-(void)loadArtworkInfoForContainerSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_serverJaliscoUpdateInProgressDidChange;
-(void)publishPlaylistWithSagaID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resignActive;
-(void)updateSagaLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPreferredVideoQuality:(long long)arg1 ;
-(void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
-(void)loadScreenshotInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)uploadCloudPlaylistProperties;
-(void)deprioritizeSubscriptionScreenshotForPersistentID:(long long)arg1 ;
-(void)uploadCloudItemProperties;
-(void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 ;
-(void)loadIsJaliscoGeniusSupportedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deprioritizeItemArtworkForSagaID:(unsigned long long)arg1 ;
-(void)resetConfiguration:(id)arg1 ;
-(void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isCellularDataRestrictedForStoreApps;
-(id)updateJaliscoInProgressChangedHandler;
-(void)dealloc;
-(void)setAlbumProperties:(id)arg1 forAlbumPersistentID:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)loadSagaUpdateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadArtworkInfoForSubscriptionItemPersistentID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_ICConnectionConfigurationFromHSConnectionConfiguration:(id)arg1 ;
-(id)_ICCloudItemIDListFromHSCloudItemIDList:(id)arg1 ;
-(id)updateInProgressChangedHandler;
-(void)setUpdateInProgressChangedHandler:(id)arg1 ;
@end

