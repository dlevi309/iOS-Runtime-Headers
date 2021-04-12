/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) BOOL shouldUseLibraryRecommendations; 
@property (nonatomic,copy) NSDictionary * musicRecommendationDict; 
@property (nonatomic,copy) NSData * cachedRecommendationsData; 
@property (nonatomic,copy) NSDate * recommendationExpirationDate; 
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
@property (nonatomic,copy) NSNumber * podcastsAssetSyncLimit; 
@property (nonatomic,copy) NSSet * pinnedPodcasts; 
@property (nonatomic,copy) NSArray * listenNowPodcastEpisodes; 
@property (nonatomic,copy) NSArray * pinnedPodcastIdentifiers; 
@property (assign,nonatomic) BOOL allowOffChargerAssetSync;                                                                  //@synthesize allowOffChargerAssetSync=_allowOffChargerAssetSync - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDefaults;
-(id)init;
-(NSString *)description;
-(NSDate *)modificationDate;
-(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(id)_objectForKey:(id)arg1 ;
-(void)_setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)_removeObjectForKey:(id)arg1 ;
-(void)beginBatchUpdates;
-(void)endBatchUpdates;
-(id)_associatedObject;
-(void)setPodcastSizeEstimationData:(id)arg1 ;
-(id)podcastSizeEstimationData;
-(NSDictionary *)musicSyncInfo;
-(NSDictionary *)podcastsSyncInfo;
-(NSDictionary *)audiobooksSyncInfo;
-(BOOL)debugSyncInfoEnabled;
-(NSArray *)pinnedAlbums;
-(NSArray *)pinnedPlaylists;
-(void)setPinnedPlaylists:(NSArray *)arg1 ;
-(void)setPinnedAlbums:(NSArray *)arg1 ;
-(NSNumber *)workoutPlaylistID;
-(void)setWorkoutPlaylistID:(NSNumber *)arg1 ;
-(BOOL)pinnedPodcastsAreUserSet;
-(void)setPinnedPodcastsAreUserSet:(BOOL)arg1 ;
-(NSDictionary *)gizmoPodcastDownloadOrders;
-(void)setGizmoPodcastDownloadOrders:(NSDictionary *)arg1 ;
-(NSArray *)pinnedPodcastFeedURLs;
-(void)setPinnedPodcastFeedURLs:(NSArray *)arg1 ;
-(NSDictionary *)gizmoPodcastEpisodeLimits;
-(void)setGizmoPodcastEpisodeLimits:(NSDictionary *)arg1 ;
-(NSArray *)listenNowPodcastFeedURLs;
-(void)setListenNowPodcastFeedURLs:(NSArray *)arg1 ;
-(NSArray *)pinnedPodcastStationUUIDs;
-(void)setPinnedPodcastStationUUIDs:(NSArray *)arg1 ;
-(BOOL)wantToReadEnabled;
-(void)setWantToReadEnabled:(BOOL)arg1 ;
-(NSArray *)wantToReadAudiobooks;
-(void)setWantToReadAudiobooks:(NSArray *)arg1 ;
-(BOOL)readingNowEnabled;
-(void)setReadingNowEnabled:(BOOL)arg1 ;
-(NSArray *)readingNowAudiobooks;
-(void)setReadingNowAudiobooks:(NSArray *)arg1 ;
-(NSArray *)pinnedAudiobooks;
-(void)setPinnedAudiobooks:(NSArray *)arg1 ;
-(NSNumber *)audiobookDownloadLimit;
-(void)setAudiobookDownloadLimit:(NSNumber *)arg1 ;
-(NSDictionary *)clientPinningSettingsToken;
-(void)setClientPinningSettingsToken:(NSDictionary *)arg1 ;
-(BOOL)shouldUseLibraryRecommendations;
-(NSArray *)libraryRecommendationPlaylists;
-(NSArray *)libraryRecommendationAlbums;
-(NSArray *)listenNowPodcastEpisodes;
-(void)setListenNowPodcastEpisodes:(NSArray *)arg1 ;
-(NSNumber *)podcastsAssetSyncLimit;
-(void)setPodcastsAssetSyncLimit:(NSNumber *)arg1 ;
-(NSArray *)pinnedPodcastIdentifiers;
-(void)setPinnedPodcastIdentifiers:(NSArray *)arg1 ;
-(void)_perDeviceSettingsDidResetNotification:(id)arg1 ;
-(void)_setupNotifiers;
-(void)_reloadPropertiesFromDefaultsOnMainThread;
-(NSDictionary *)musicRecommendationDict;
-(void)_removeOldMusicRecommendationsInfoIfPossible;
-(id)_defaultWithPrefix:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)_deviceHasCapability:(id)arg1 forCapabilitiesKey:(id)arg2 ;
-(void)_addCapability:(id)arg1 forCapabilitiesKey:(id)arg2 ;
-(void)_reloadPropertiesFromDefaults;
-(void)_resetDomainAccessor;
-(void)_migrateDataIfNecessary;
-(id)_companionSidePerDeviceDefaults;
-(void)_clearAssetSyncPlaylistDependentDefaults;
-(void)_writePropertiesToDefaults;
-(id)_defaultPlaylistPersistentID;
-(unsigned long long)assetSyncLimitType;
-(NSNumber *)assetSyncLimit;
-(unsigned long long)_spaceQuotaForNumberOfSongs:(unsigned long long)arg1 ;
-(void)_addPhoneCapability:(id)arg1 ;
-(id)_playlistPersistentIDForPlaylistName:(id)arg1 ;
-(void)_setNeedsSynchronize;
-(void)_setLegacyObject:(id)arg1 forKey:(id)arg2 ifRemoteDeviceMissingCapability:(id)arg3 ;
-(BOOL)_continueUsingMusicRecommendationKey;
-(void)_preSeed2_setMusicRecommendationDict:(id)arg1 ;
-(void)_writeDate:(id)arg1 forKey:(id)arg2 withBundleID:(id)arg3 ;
-(id)_dateValueForKey:(id)arg1 bundleID:(id)arg2 ;
-(BOOL)_watchHasCapability:(id)arg1 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 shouldSynchronizeToPairedDevice:(BOOL)arg3 ;
-(void)_notifyChangesForKey:(id)arg1 ;
-(void)dispatcherDidReceiveNotificationFromRemoteDevice:(id)arg1 ;
-(void)dispatcherDidReceiveNotificationFromOtherProcess:(id)arg1 ;
-(BOOL)_phoneHasCapability:(id)arg1 ;
-(void)_addWatchCapability:(id)arg1 ;
-(void)setAssetSyncLimit:(NSNumber *)arg1 ;
-(void)setAssetSyncLimitType:(unsigned long long)arg1 ;
-(void)setAssetSyncType:(unsigned long long)arg1 ;
-(void)setAssetSyncPlaylistPersistentID:(NSNumber *)arg1 ;
-(void)setLastFullySentAssetSyncPlaylistPersistentID:(NSNumber *)arg1 ;
-(void)setLastFullySentAssetSyncPlaylistVersion:(NSNumber *)arg1 ;
-(void)clearPodcastsDefaults;
-(NSSet *)pinnedPodcasts;
-(void)setPinnedPodcasts:(NSSet *)arg1 ;
-(void)setLibraryRecommendationAlbums:(NSArray *)arg1 ;
-(void)setLibraryRecommendationPlaylists:(NSArray *)arg1 ;
-(void)setShouldUseLibraryRecommendations:(BOOL)arg1 ;
-(void)setMusicRecommendationDict:(NSDictionary *)arg1 ;
-(NSDate *)recommendationExpirationDate;
-(void)setRecommendationExpirationDate:(NSDate *)arg1 ;
-(NSData *)cachedRecommendationsData;
-(void)setCachedRecommendationsData:(NSData *)arg1 ;
-(NSDate *)lastMusicAppActiveDate;
-(void)setLastMusicAppActiveDate:(NSDate *)arg1 ;
-(NSDate *)lastSiriFaceActiveDate;
-(void)setLastSiriFaceActiveDate:(NSDate *)arg1 ;
-(NSDictionary *)syncStateDict;
-(id)lastSyncInfoRequestDateForBundleIdentifier:(id)arg1 ;
-(void)setLastSyncInfoRequestDate:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)clearAppActivityStatusDefaultsForBundleID:(id)arg1 ;
-(void)setLastUserLaunchDateForBundleID:(id)arg1 ;
-(void)setLastUserPinningChangeDateForBundleID:(id)arg1 ;
-(void)setInstallDateForBundleID:(id)arg1 ;
-(id)lastUserLaunchDateForBundleID:(id)arg1 ;
-(id)lastUserPinningChangeDateForBundleID:(id)arg1 ;
-(id)installDateForBundleID:(id)arg1 ;
-(long long)dormancyIntervalInHoursForBundleID:(id)arg1 ;
-(NSNumber *)lastFullySentAssetSyncPlaylistPersistentID;
-(NSNumber *)lastFullySentAssetSyncPlaylistVersion;
-(void)setMusicSyncInfo:(NSDictionary *)arg1 ;
-(void)setPodcastsSyncInfo:(NSDictionary *)arg1 ;
-(void)setAudiobooksSyncInfo:(NSDictionary *)arg1 ;
-(unsigned long long)assetSyncType;
-(NSNumber *)assetSyncPlaylistPersistentID;
-(BOOL)allowOffChargerAssetSync;
-(void)setAllowOffChargerAssetSync:(BOOL)arg1 ;
-(MPMediaPlaylist *)assetSyncPlaylist;
-(void)setAssetSyncPlaylist:(MPMediaPlaylist *)arg1 ;
@end

