/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <libobjc.A.dylib/NMSNotificationDispatcherDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NPSDomainAccessor, NSDictionary, NMSNotificationDispatcher, NSNumber, NSDate, MPMediaPlaylist, NSArray, NSData, NSSet;

@interface NMSyncDefaults : NSObject <NMSNotificationDispatcherDelegate> {

	BOOL _needsSync;
	NSString* _pairingID;
	NSObject*<OS_dispatch_queue> _domainAccessorQueue;
	NPSDomainAccessor* _domainAccessor;
	NSDictionary* _notifiersDict;
	NMSNotificationDispatcher* _settingsNotifier;
	NMSNotificationDispatcher* _musicPinningSelectionsNotifier;
	NMSNotificationDispatcher* _recoSelectionsNotifier;
	NMSNotificationDispatcher* _libraryRecoNotifier;
	NMSNotificationDispatcher* _storeRecoNotifier;
	NMSNotificationDispatcher* _podcastsPinningSelectionsNotifier;
	NMSNotificationDispatcher* _podcastsSubscriptionMetadataNotifier;
	NMSNotificationDispatcher* _podcastsSizeInfoNotifier;
	NMSNotificationDispatcher* _audiobooksPinningSelectionsNotifier;
	NMSNotificationDispatcher* _audiobooksRecommendationsNotifier;
	NMSNotificationDispatcher* _syncStateNotifier;
	NMSNotificationDispatcher* _syncInfoNotifier;
	NMSNotificationDispatcher* _syncInfoRequestDateNotifier;
	BOOL _allowOffChargerAssetSync;
	NSNumber* _assetSyncLimit;
	NSNumber* _lastFullySentAssetSyncPlaylistPersistentID;
	NSNumber* _lastFullySentAssetSyncPlaylistVersion;
	NSDate* _modificationDate;
	NSDictionary* _musicSyncInfo;
	NSDictionary* _podcastsSyncInfo;
	NSDictionary* _audiobooksSyncInfo;
	unsigned long long _assetSyncLimitType;
	unsigned long long _assetSyncType;
	NSNumber* _assetSyncPlaylistPersistentID;

}

@property (nonatomic,retain) MPMediaPlaylist * assetSyncPlaylist; 
@property (nonatomic,copy) NSNumber * assetSyncLimit;                                                                        //@synthesize assetSyncLimit=_assetSyncLimit - In the implementation block
@property (nonatomic,copy) NSArray * pinnedPlaylists; 
@property (nonatomic,retain) NSNumber * workoutPlaylistID; 
@property (nonatomic,copy) NSArray * pinnedAlbums; 
@property (nonatomic,copy) NSArray * libraryRecommendationPlaylists; 
@property (nonatomic,copy) NSArray * libraryRecommendationAlbums; 
@property (nonatomic,copy) NSDictionary * musicRecommendationDict; 
@property (nonatomic,copy) NSData * cachedRecommendationsData; 
@property (nonatomic,copy) NSDate * storeRecommendationExpirationDate; 
@property (nonatomic,copy) NSDate * libraryRecommendationExpirationDate; 
@property (nonatomic,copy) NSNumber * minimumNumberOfRecentMusicModelObjects; 
@property (nonatomic,copy) NSNumber * lastFullySentAssetSyncPlaylistPersistentID;                                            //@synthesize lastFullySentAssetSyncPlaylistPersistentID=_lastFullySentAssetSyncPlaylistPersistentID - In the implementation block
@property (nonatomic,copy) NSNumber * lastFullySentAssetSyncPlaylistVersion;                                                 //@synthesize lastFullySentAssetSyncPlaylistVersion=_lastFullySentAssetSyncPlaylistVersion - In the implementation block
@property (nonatomic,copy) NSDate * lastMusicAppActiveDate; 
@property (nonatomic,copy) NSDate * lastSiriFaceActiveDate; 
@property (nonatomic,copy) NSDictionary * gizmoPodcastDownloadOrders; 
@property (nonatomic,copy) NSDictionary * gizmoPodcastEpisodeLimits; 
@property (assign,nonatomic) BOOL pinnedPodcastsAreUserSet; 
@property (nonatomic,copy) NSArray * listenNowPodcastFeedURLs; 
@property (nonatomic,copy) NSArray * pinnedPodcastFeedURLs; 
@property (nonatomic,copy) NSArray * pinnedPodcastStationUUIDs; 
@property (assign,nonatomic) BOOL wantToReadEnabled; 
@property (nonatomic,copy) NSArray * wantToReadAudiobooks; 
@property (assign,nonatomic) BOOL readingNowEnabled; 
@property (nonatomic,copy) NSArray * readingNowAudiobooks; 
@property (nonatomic,copy) NSArray * pinnedAudiobooks; 
@property (nonatomic,copy) NSNumber * audiobookDownloadLimit; 
@property (nonatomic,readonly) NSDate * modificationDate;                                                                    //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) BOOL debugSyncInfoEnabled; 
@property (nonatomic,readonly) NSDictionary * syncStateDict; 
@property (nonatomic,copy) NSDictionary * clientPinningSettingsToken; 
@property (nonatomic,copy) NSDictionary * musicSyncInfo;                                                                     //@synthesize musicSyncInfo=_musicSyncInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * podcastsSyncInfo;                                                                  //@synthesize podcastsSyncInfo=_podcastsSyncInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * audiobooksSyncInfo;                                                                //@synthesize audiobooksSyncInfo=_audiobooksSyncInfo - In the implementation block
@property (assign,nonatomic) unsigned long long assetSyncLimitType;                                                          //@synthesize assetSyncLimitType=_assetSyncLimitType - In the implementation block
@property (assign,nonatomic) unsigned long long assetSyncType;                                                               //@synthesize assetSyncType=_assetSyncType - In the implementation block
@property (setter=setAssetSyncPlaylistPersistentID:,nonatomic,retain) NSNumber * assetSyncPlaylistPersistentID;              //@synthesize assetSyncPlaylistPersistentID=_assetSyncPlaylistPersistentID - In the implementation block
@property (nonatomic,copy) NSSet * pinnedPodcasts; 
@property (nonatomic,copy) NSArray * listenNowPodcastEpisodes; 
@property (nonatomic,copy) NSArray * pinnedPodcastIdentifiers; 
@property (assign,nonatomic) BOOL allowOffChargerAssetSync;                                                                  //@synthesize allowOffChargerAssetSync=_allowOffChargerAssetSync - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDefaults;
-(NSDate *)modificationDate;
-(void)setPodcastsSyncInfo:(NSDictionary *)arg1 ;
-(void)setReadingNowEnabled:(BOOL)arg1 ;
-(id)lastUserPinningChangeDateForBundleID:(id)arg1 ;
-(id)_defaultWithPrefix:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(NSArray *)pinnedPodcastIdentifiers;
-(void)setMusicSyncInfo:(NSDictionary *)arg1 ;
-(NSArray *)readingNowAudiobooks;
-(NSArray *)libraryRecommendationPlaylists;
-(void)_setNeedsSynchronize;
-(BOOL)_deviceHasCapability:(id)arg1 forCapabilitiesKey:(id)arg2 ;
-(id)init;
-(NSDate *)lastMusicAppActiveDate;
-(NSArray *)libraryRecommendationAlbums;
-(NSDictionary *)podcastsSyncInfo;
-(void)setListenNowPodcastFeedURLs:(NSArray *)arg1 ;
-(void)setMinimumNumberOfRecentMusicModelObjects:(NSNumber *)arg1 ;
-(BOOL)_continueUsingMusicRecommendationKey;
-(NSArray *)pinnedPodcastFeedURLs;
-(NSArray *)pinnedPlaylists;
-(void)setStoreRecommendationExpirationDate:(NSDate *)arg1 ;
-(NSData *)cachedRecommendationsData;
-(id)_defaultPlaylistPersistentID;
-(void)_addWatchCapability:(id)arg1 ;
-(NSDate *)storeRecommendationExpirationDate;
-(NSArray *)pinnedAlbums;
-(NSNumber *)workoutPlaylistID;
-(NSArray *)listenNowPodcastEpisodes;
-(unsigned long long)assetSyncLimitType;
-(void)setLastSyncInfoRequestDate:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)debugSyncInfoEnabled;
-(void)clearPodcastsDefaults;
-(BOOL)wantToReadEnabled;
-(void)setPinnedPlaylists:(NSArray *)arg1 ;
-(void)setReadingNowAudiobooks:(NSArray *)arg1 ;
-(void)setAudiobookDownloadLimit:(NSNumber *)arg1 ;
-(void)setLibraryRecommendationExpirationDate:(NSDate *)arg1 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 shouldSynchronizeToPairedDevice:(BOOL)arg3 ;
-(unsigned long long)assetSyncType;
-(void)_preSeed2_setMusicRecommendationDict:(id)arg1 ;
-(NSDictionary *)musicSyncInfo;
-(NSDictionary *)clientPinningSettingsToken;
-(id)_dateValueForKey:(id)arg1 bundleID:(id)arg2 ;
-(void)_reloadPropertiesFromDefaults;
-(void)setPinnedPodcastIdentifiers:(NSArray *)arg1 ;
-(void)_writePropertiesToDefaults;
-(id)lastSyncInfoRequestDateForBundleIdentifier:(id)arg1 ;
-(BOOL)_watchHasCapability:(id)arg1 ;
-(void)_clearAssetSyncPlaylistDependentDefaults;
-(void)setPinnedPodcastFeedURLs:(NSArray *)arg1 ;
-(id)lastUserLaunchDateForBundleID:(id)arg1 ;
-(void)_notifyChangesForKey:(id)arg1 ;
-(id)_companionSidePerDeviceDefaults;
-(void)dispatcherDidReceiveNotificationFromOtherProcess:(id)arg1 ;
-(void)setLastSiriFaceActiveDate:(NSDate *)arg1 ;
-(void)setPinnedAudiobooks:(NSArray *)arg1 ;
-(void)setListenNowPodcastEpisodes:(NSArray *)arg1 ;
-(void)setPinnedPodcasts:(NSSet *)arg1 ;
-(void)setAllowOffChargerAssetSync:(BOOL)arg1 ;
-(void)setLibraryRecommendationPlaylists:(NSArray *)arg1 ;
-(NSString *)description;
-(NSArray *)pinnedAudiobooks;
-(void)_setupNotifiers;
-(void)setAssetSyncLimitType:(unsigned long long)arg1 ;
-(NSArray *)wantToReadAudiobooks;
-(id)_objectForKey:(id)arg1 ;
-(void)setGizmoPodcastEpisodeLimits:(NSDictionary *)arg1 ;
-(NSNumber *)audiobookDownloadLimit;
-(void)clearAppActivityStatusDefaultsForBundleID:(id)arg1 ;
-(void)setAudiobooksSyncInfo:(NSDictionary *)arg1 ;
-(void)_removeObjectForKey:(id)arg1 ;
-(void)setPinnedPodcastsAreUserSet:(BOOL)arg1 ;
-(void)setLastUserLaunchDateForBundleID:(id)arg1 ;
-(void)setWorkoutPlaylistID:(NSNumber *)arg1 ;
-(void)_writeDate:(id)arg1 forKey:(id)arg2 withBundleID:(id)arg3 ;
-(NSDictionary *)gizmoPodcastDownloadOrders;
-(NSDate *)libraryRecommendationExpirationDate;
-(void)setInstallDateForBundleID:(id)arg1 ;
-(MPMediaPlaylist *)assetSyncPlaylist;
-(void)_migrateDataIfNecessary;
-(void)setWantToReadEnabled:(BOOL)arg1 ;
-(NSNumber *)assetSyncLimit;
-(id)_associatedObject;
-(void)setLastFullySentAssetSyncPlaylistPersistentID:(NSNumber *)arg1 ;
-(void)beginBatchUpdates;
-(id)podcastSizeEstimationData;
-(void)setPinnedPodcastStationUUIDs:(NSArray *)arg1 ;
-(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(NSDictionary *)musicRecommendationDict;
-(void)setLastMusicAppActiveDate:(NSDate *)arg1 ;
-(void)_reloadPropertiesFromDefaultsOnMainThread;
-(void)setMusicRecommendationDict:(NSDictionary *)arg1 ;
-(BOOL)_phoneHasCapability:(id)arg1 ;
-(void)dispatcherDidReceiveNotificationFromRemoteDevice:(id)arg1 ;
-(NSDictionary *)audiobooksSyncInfo;
-(void)endBatchUpdates;
-(void)setLibraryRecommendationAlbums:(NSArray *)arg1 ;
-(unsigned long long)_spaceQuotaForNumberOfSongs:(unsigned long long)arg1 ;
-(void)_addPhoneCapability:(id)arg1 ;
-(id)_playlistPersistentIDForPlaylistName:(id)arg1 ;
-(long long)dormancyIntervalInHoursForBundleID:(id)arg1 ;
-(void)setAssetSyncPlaylistPersistentID:(NSNumber *)arg1 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)syncStateDict;
-(void)setLastUserPinningChangeDateForBundleID:(id)arg1 ;
-(id)installDateForBundleID:(id)arg1 ;
-(void)setCachedRecommendationsData:(NSData *)arg1 ;
-(void)_perDeviceSettingsDidResetNotification:(id)arg1 ;
-(NSDate *)lastSiriFaceActiveDate;
-(void)setPinnedAlbums:(NSArray *)arg1 ;
-(NSSet *)pinnedPodcasts;
-(void)setWantToReadAudiobooks:(NSArray *)arg1 ;
-(void)_resetDomainAccessor;
-(NSNumber *)assetSyncPlaylistPersistentID;
-(NSArray *)pinnedPodcastStationUUIDs;
-(BOOL)allowOffChargerAssetSync;
-(NSNumber *)minimumNumberOfRecentMusicModelObjects;
-(NSDictionary *)gizmoPodcastEpisodeLimits;
-(void)setAssetSyncLimit:(NSNumber *)arg1 ;
-(void)setClientPinningSettingsToken:(NSDictionary *)arg1 ;
-(NSNumber *)lastFullySentAssetSyncPlaylistVersion;
-(void)_removeOldMusicRecommendationsInfoIfPossible;
-(NSArray *)listenNowPodcastFeedURLs;
-(void)_addCapability:(id)arg1 forCapabilitiesKey:(id)arg2 ;
-(void)setLastFullySentAssetSyncPlaylistVersion:(NSNumber *)arg1 ;
-(BOOL)readingNowEnabled;
-(void)setAssetSyncType:(unsigned long long)arg1 ;
-(void)setPodcastSizeEstimationData:(id)arg1 ;
-(void)_setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)setAssetSyncPlaylist:(MPMediaPlaylist *)arg1 ;
-(BOOL)pinnedPodcastsAreUserSet;
-(void)setGizmoPodcastDownloadOrders:(NSDictionary *)arg1 ;
-(void)_setLegacyObject:(id)arg1 forKey:(id)arg2 ifRemoteDeviceMissingCapability:(id)arg3 ;
-(NSNumber *)lastFullySentAssetSyncPlaylistPersistentID;
@end

