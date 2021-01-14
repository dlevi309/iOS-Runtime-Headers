/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_queue, MPAVItemObserver;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class AVAsset, NSObject, AVPlayerItem, MPQueueFeeder, NSArray, MPAlternateTracks, MPNowPlayingContentItem, NSError, NSString, MPMediaItem, MPModelGenericObject, NSNumber, ICMusicSubscriptionLeaseStatus, MPModelPlayEvent, NSDictionary, AVPlayerItemAccessLog, NSURL;

@interface MPAVItem : NSObject {

	AVAsset* _asset;
	NSObject*<OS_dispatch_queue> _assetQueue;
	AVPlayerItem* _avPlayerItem;
	BOOL _isAssetLoaded;
	MPQueueFeeder* _feeder;
	float _soundCheckVolumeNormalization;
	NSArray* _chapterTimeMarkers;
	NSArray* _artworkTimeMarkers;
	NSArray* _urlTimeMarkers;
	NSArray* _closedCaptionTimeMarkers;
	MPAlternateTracks* _alternateTracks;
	double _cachedDuration;
	double _cachedPlayableDuration;
	NSArray* _cachedSeekableTimeRanges;
	double _seekableTimeRangesCacheTime;
	long long _type;
	MPNowPlayingContentItem* _contentItem;
	float _defaultPlaybackRate;
	unsigned _advancedDuringPlayback : 1;
	unsigned _handledFinishTime : 1;
	unsigned _hasPlayedThisSession : 1;
	unsigned _wasCountedAsSkipped : 1;
	unsigned _isStreamable : 2;
	unsigned _watchingAttributes : 1;
	unsigned _userChangedItemsDuringPlayback : 1;
	unsigned _lyricsAvailable : 1;
	unsigned _timeMarkersNeedLoading : 1;
	id _rtcReportingParentHierarchyToken;
	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _hasLoadedHasProtectedContent;
	BOOL _hasLoadedPlaybackMode;
	BOOL _hasPostedNaturalSizeChange;
	BOOL _hasRegisteredForCaptionsAppearanceChanged;
	BOOL _hasValidPlayerItemDuration;
	double _lastLoggedTotalDuration;
	long long _likedState;
	SCD_Struct_MP8 _playerItemDuration;
	long long _exportableArtworkRevision;
	BOOL _meetsPlaybackHistoryThreshold;
	BOOL _assetLoaded;
	BOOL _didAttemptToLoadAsset;
	BOOL _canReusePlayerItem;
	BOOL _likedStateEnabled;
	BOOL _supportsLikedState;
	BOOL _prefersSeekOverSkip;
	BOOL _hasProtectedContent;
	BOOL _tailPlaceholder;
	BOOL _startItem;
	BOOL _shouldPreventPlayback;
	BOOL _allowsAirPlayFromCloud;
	BOOL _allowsExternalPlayback;
	BOOL _requiresLoadedAssetForAirPlayProperties;
	BOOL _hasFinishedDownloading;
	BOOL _hasPerformedErrorResolution;
	BOOL _activeItem;
	BOOL _externalDisplay;
	BOOL _didReachEnd;
	float _currentPlaybackRate;
	float _loudnessInfoVolumeNormalization;
	id<MPAVItemObserver> _observer;
	NSError* _itemError;
	NSString* _queueIdentifier;
	long long _playbackMode;
	long long _albumStoreID;
	NSArray* _buyOffers;
	NSString* _copyrightText;
	NSString* _externalContentIdentifier;
	long long _storeItemInt64ID;
	long long _storeSubscriptionAdamID;
	MPMediaItem* _mediaItem;
	NSString* _explicitBadge;
	long long _repeatIndex;
	long long _lastChangeDirection;
	MPModelGenericObject* _modelGenericObject;
	NSNumber* _initialPlaybackStartTimeOverride;
	NSString* _aggregateDictionaryItemIdentifier;
	NSString* _storeFrontIdentifier;
	NSNumber* _storeAccountID;
	NSNumber* _useListeningHistory;
	long long _leasePlaybackPreventionState;
	ICMusicSubscriptionLeaseStatus* _leaseStatus;
	NSString* _contentItemID;
	NSString* _previousContentItemID;

}

@property (assign) BOOL isAssetLoaded;                                                                                            //@synthesize isAssetLoaded=_isAssetLoaded - In the implementation block
@property (nonatomic,retain) NSArray * chapterTimeMarkers;                                                                        //@synthesize chapterTimeMarkers=_chapterTimeMarkers - In the implementation block
@property (nonatomic,retain) NSArray * artworkTimeMarkers;                                                                        //@synthesize artworkTimeMarkers=_artworkTimeMarkers - In the implementation block
@property (nonatomic,retain) NSArray * urlTimeMarkers;                                                                            //@synthesize urlTimeMarkers=_urlTimeMarkers - In the implementation block
@property (getter=isPlaceholder,nonatomic,readonly) BOOL placeholder; 
@property (getter=isTailPlaceholder,nonatomic,readonly) BOOL tailPlaceholder;                                                     //@synthesize tailPlaceholder=_tailPlaceholder - In the implementation block
@property (assign,getter=isStartItem,nonatomic) BOOL startItem;                                                                   //@synthesize startItem=_startItem - In the implementation block
@property (assign,nonatomic) long long repeatIndex;                                                                               //@synthesize repeatIndex=_repeatIndex - In the implementation block
@property (assign,nonatomic) long long lastChangeDirection;                                                                       //@synthesize lastChangeDirection=_lastChangeDirection - In the implementation block
@property (nonatomic,readonly) BOOL shouldPreventPlayback;                                                                        //@synthesize shouldPreventPlayback=_shouldPreventPlayback - In the implementation block
@property (nonatomic,readonly) MPModelGenericObject * modelGenericObject;                                                         //@synthesize modelGenericObject=_modelGenericObject - In the implementation block
@property (nonatomic,readonly) MPModelPlayEvent * modelPlayEvent; 
@property (nonatomic,copy,readonly) NSNumber * bookmarkTime; 
@property (nonatomic,copy,readonly) NSNumber * initialPlaybackStartTime; 
@property (nonatomic,copy) NSNumber * initialPlaybackStartTimeOverride;                                                           //@synthesize initialPlaybackStartTimeOverride=_initialPlaybackStartTimeOverride - In the implementation block
@property (nonatomic,readonly) BOOL allowsAirPlayFromCloud;                                                                       //@synthesize allowsAirPlayFromCloud=_allowsAirPlayFromCloud - In the implementation block
@property (nonatomic,readonly) BOOL allowsExternalPlayback;                                                                       //@synthesize allowsExternalPlayback=_allowsExternalPlayback - In the implementation block
@property (nonatomic,readonly) BOOL requiresLoadedAssetForAirPlayProperties;                                                      //@synthesize requiresLoadedAssetForAirPlayProperties=_requiresLoadedAssetForAirPlayProperties - In the implementation block
@property (nonatomic,copy,readonly) NSString * aggregateDictionaryItemIdentifier;                                                 //@synthesize aggregateDictionaryItemIdentifier=_aggregateDictionaryItemIdentifier - In the implementation block
@property (assign,setter=_setCurrentPlaybackRate:,getter=_currentPlaybackRate,nonatomic) float _currentPlaybackRate;              //@synthesize currentPlaybackRate=_currentPlaybackRate - In the implementation block
@property (nonatomic,readonly) BOOL hasFinishedDownloading;                                                                       //@synthesize hasFinishedDownloading=_hasFinishedDownloading - In the implementation block
@property (assign,nonatomic) BOOL hasPerformedErrorResolution;                                                                    //@synthesize hasPerformedErrorResolution=_hasPerformedErrorResolution - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * playbackInfo; 
@property (nonatomic,retain) AVPlayerItem * playerItem; 
@property (nonatomic,readonly) OpaqueCMTimebaseRef timebase; 
@property (assign,getter=isActiveItem,nonatomic) BOOL activeItem;                                                                 //@synthesize activeItem=_activeItem - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeFrontIdentifier;                                                              //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (assign,getter=hasExternalDisplay,nonatomic) BOOL externalDisplay;                                                      //@synthesize externalDisplay=_externalDisplay - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MP8 _playerItemDurationIfAvailable; 
@property (nonatomic,readonly) NSNumber * storeAccountID;                                                                         //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,readonly) NSNumber * useListeningHistory;                                                                    //@synthesize useListeningHistory=_useListeningHistory - In the implementation block
@property (nonatomic,readonly) long long leasePlaybackPreventionState;                                                            //@synthesize leasePlaybackPreventionState=_leasePlaybackPreventionState - In the implementation block
@property (nonatomic,copy,readonly) ICMusicSubscriptionLeaseStatus * leaseStatus;                                                 //@synthesize leaseStatus=_leaseStatus - In the implementation block
@property (nonatomic,copy) NSString * explicitBadge;                                                                              //@synthesize explicitBadge=_explicitBadge - In the implementation block
@property (nonatomic,readonly) BOOL didReachEnd;                                                                                  //@synthesize didReachEnd=_didReachEnd - In the implementation block
@property (nonatomic,readonly) BOOL canUseLoadedAsset; 
@property (nonatomic,copy) NSString * contentItemID;                                                                              //@synthesize contentItemID=_contentItemID - In the implementation block
@property (nonatomic,copy) NSString * previousContentItemID;                                                                      //@synthesize previousContentItemID=_previousContentItemID - In the implementation block
@property (nonatomic,readonly) MPNowPlayingContentItem * contentItem; 
@property (assign,nonatomic,__weak) id<MPAVItemObserver> observer;                                                                //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) BOOL meetsPlaybackHistoryThreshold;                                                                //@synthesize meetsPlaybackHistoryThreshold=_meetsPlaybackHistoryThreshold - In the implementation block
@property (getter=isAssetLoaded,nonatomic,readonly) BOOL assetLoaded;                                                             //@synthesize assetLoaded=_assetLoaded - In the implementation block
@property (getter=isAssetURLValid,nonatomic,readonly) BOOL assetURLValid; 
@property (nonatomic,readonly) BOOL didAttemptToLoadAsset;                                                                        //@synthesize didAttemptToLoadAsset=_didAttemptToLoadAsset - In the implementation block
@property (nonatomic,readonly) AVAsset * asset; 
@property (nonatomic,readonly) BOOL canReusePlayerItem;                                                                           //@synthesize canReusePlayerItem=_canReusePlayerItem - In the implementation block
@property (nonatomic,copy,readonly) NSError * playbackError; 
@property (nonatomic,retain) NSError * itemError;                                                                                 //@synthesize itemError=_itemError - In the implementation block
@property (nonatomic,readonly) long long status; 
@property (nonatomic,retain) NSString * queueIdentifier;                                                                          //@synthesize queueIdentifier=_queueIdentifier - In the implementation block
@property (getter=isAlwaysLive,nonatomic,readonly) BOOL alwaysLive; 
@property (assign,nonatomic) BOOL userAdvancedDuringPlayback; 
@property (assign,nonatomic) BOOL userChangedItemsDuringPlayback; 
@property (assign,nonatomic) BOOL userSkippedPlayback; 
@property (assign,nonatomic,__weak) MPQueueFeeder * feeder;                                                                       //@synthesize feeder=_feeder - In the implementation block
@property (assign,nonatomic) BOOL hasPlayedThisSession; 
@property (nonatomic,readonly) long long playbackMode;                                                                            //@synthesize playbackMode=_playbackMode - In the implementation block
@property (nonatomic,readonly) AVPlayerItemAccessLog * accessLog; 
@property (nonatomic,readonly) double currentTimeDisplayOverride; 
@property (assign,nonatomic) float defaultPlaybackRate;                                                                           //@synthesize defaultPlaybackRate=_defaultPlaybackRate - In the implementation block
@property (nonatomic,retain) NSArray * closedCaptionTimeMarkers; 
@property (nonatomic,readonly) BOOL useEmbeddedChapterData; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long customAVEQPreset; 
@property (nonatomic,readonly) BOOL allowsEQ; 
@property (nonatomic,readonly) MPAlternateTracks * alternateTracks;                                                               //@synthesize alternateTracks=_alternateTracks - In the implementation block
@property (nonatomic,readonly) NSString * displayableText; 
@property (nonatomic,readonly) BOOL displayableTextLoaded; 
@property (nonatomic,readonly) NSString * album; 
@property (nonatomic,readonly) long long albumStoreID;                                                                            //@synthesize albumStoreID=_albumStoreID - In the implementation block
@property (nonatomic,readonly) NSString * artist; 
@property (nonatomic,readonly) NSString * albumArtist; 
@property (nonatomic,readonly) long long artistStoreID; 
@property (nonatomic,readonly) unsigned long long albumTrackNumber; 
@property (nonatomic,readonly) unsigned long long albumTrackCount; 
@property (nonatomic,copy,readonly) NSArray * buyOffers;                                                                          //@synthesize buyOffers=_buyOffers - In the implementation block
@property (nonatomic,readonly) BOOL canSeedGenius; 
@property (nonatomic,readonly) NSString * composer; 
@property (nonatomic,copy,readonly) NSString * copyrightText;                                                                     //@synthesize copyrightText=_copyrightText - In the implementation block
@property (nonatomic,readonly) unsigned long long discNumber; 
@property (nonatomic,readonly) unsigned long long discCount; 
@property (getter=isExplicitTrack,nonatomic,readonly) BOOL explicitTrack; 
@property (nonatomic,copy,readonly) NSString * externalContentIdentifier;                                                         //@synthesize externalContentIdentifier=_externalContentIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * genre; 
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (assign,nonatomic) long long likedState; 
@property (getter=isLikedStateEnabled,nonatomic,readonly) BOOL likedStateEnabled;                                                 //@synthesize likedStateEnabled=_likedStateEnabled - In the implementation block
@property (nonatomic,readonly) BOOL supportsLikedState;                                                                           //@synthesize supportsLikedState=_supportsLikedState - In the implementation block
@property (nonatomic,readonly) NSString * lyrics; 
@property (nonatomic,readonly) NSString * libraryLyrics; 
@property (nonatomic,readonly) BOOL hasStoreLyrics; 
@property (nonatomic,readonly) BOOL hasTimeSyncedLyrics; 
@property (nonatomic,copy,readonly) NSString * containerUniqueID; 
@property (nonatomic,readonly) NSString * mainTitle; 
@property (nonatomic,readonly) NSURL * podcastURL; 
@property (getter=isStreamable,nonatomic,readonly) BOOL streamable; 
@property (nonatomic,readonly) unsigned long long persistentID; 
@property (nonatomic,readonly) NSString * databaseID; 
@property (nonatomic,readonly) unsigned long long cloudID; 
@property (nonatomic,readonly) NSString * personID; 
@property (nonatomic,readonly) NSString * cloudUniversalLibraryID; 
@property (nonatomic,readonly) NSString * cloudAlbumID; 
@property (nonatomic,readonly) unsigned long long albumPersistentID; 
@property (nonatomic,readonly) unsigned long long albumArtistPersistentID; 
@property (nonatomic,readonly) unsigned long long artistPersistentID; 
@property (nonatomic,readonly) unsigned long long genrePersistentID; 
@property (nonatomic,readonly) unsigned long long composerPersistentID; 
@property (nonatomic,readonly) BOOL shouldShowComposer; 
@property (nonatomic,readonly) NSString * storeItemID; 
@property (nonatomic,readonly) long long storeItemInt64ID;                                                                        //@synthesize storeItemInt64ID=_storeItemInt64ID - In the implementation block
@property (nonatomic,readonly) long long storePurchasedAdamID; 
@property (nonatomic,readonly) long long storeSubscriptionAdamID;                                                                 //@synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID - In the implementation block
@property (nonatomic,readonly) float userRating; 
@property (nonatomic,readonly) BOOL supportsRewindAndFastForward15Seconds; 
@property (nonatomic,readonly) BOOL durationIsValid; 
@property (nonatomic,readonly) double durationIfAvailable; 
@property (nonatomic,readonly) double durationFromExternalMetadata; 
@property (nonatomic,readonly) double playableDuration; 
@property (nonatomic,readonly) double playableDurationIfAvailable; 
@property (nonatomic,readonly) double timeOfSeekableStart; 
@property (nonatomic,readonly) double timeOfSeekableEnd; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) NSArray * timedMetadataIfAvailable; 
@property (nonatomic,readonly) BOOL usesSubscriptionLease; 
@property (nonatomic,retain,readonly) MPMediaItem * mediaItem;                                                                    //@synthesize mediaItem=_mediaItem - In the implementation block
@property (assign,nonatomic) float loudnessInfoVolumeNormalization;                                                               //@synthesize loudnessInfoVolumeNormalization=_loudnessInfoVolumeNormalization - In the implementation block
@property (assign,nonatomic) float soundCheckVolumeNormalization;                                                                 //@synthesize soundCheckVolumeNormalization=_soundCheckVolumeNormalization - In the implementation block
@property (nonatomic,readonly) BOOL supportsRating; 
@property (nonatomic,readonly) BOOL prefersSeekOverSkip;                                                                          //@synthesize prefersSeekOverSkip=_prefersSeekOverSkip - In the implementation block
@property (nonatomic,readonly) BOOL isAd; 
@property (nonatomic,readonly) BOOL hasProtectedContent;                                                                          //@synthesize hasProtectedContent=_hasProtectedContent - In the implementation block
@property (assign,getter=isInWishList,nonatomic) BOOL inWishList; 
@property (getter=isRadioItem,nonatomic,readonly) BOOL radioItem; 
@property (nonatomic,readonly) BOOL stationAllowsItemLiking; 
@property (nonatomic,copy,readonly) NSString * stationHash; 
@property (nonatomic,readonly) long long stationID; 
@property (nonatomic,copy,readonly) NSString * stationName; 
@property (nonatomic,copy,readonly) NSString * stationStringID; 
@property (nonatomic,readonly) BOOL supportsRadioTrackActions; 
@property (nonatomic,readonly) long long stationProviderID; 
@property (nonatomic,readonly) SCD_Struct_MP8 duration; 
@property (assign,nonatomic) SCD_Struct_MP8 forwardPlaybackEndTime; 
@property (nonatomic,readonly) CGSize presentationSize; 
@property (nonatomic,readonly) id rtcReportingParentHierarchyToken;                                                               //@synthesize rtcReportingParentHierarchyToken=_rtcReportingParentHierarchyToken - In the implementation block
+(BOOL)isPlaceholder;
+(long long)defaultScaleMode;
+(void)setDefaultScaleMode:(long long)arg1 ;
+(id)URLFromPath:(id)arg1 ;
-(NSString *)composer;
-(void)setInWishList:(BOOL)arg1 ;
-(BOOL)isInWishList;
-(NSString *)genre;
-(long long)albumYear;
-(BOOL)isAd;
-(NSString *)lyrics;
-(NSString *)queueIdentifier;
-(BOOL)hasProtectedContent;
-(NSString *)storeFrontIdentifier;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)setQueueIdentifier:(NSString *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)storeItemID;
-(CGSize)naturalSize;
-(BOOL)isPlaceholder;
-(NSString *)artist;
-(BOOL)allowsExternalPlayback;
-(void)setObserver:(id<MPAVItemObserver>)arg1 ;
-(unsigned long long)mediaType;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(id<MPAVItemObserver>)observer;
-(AVAsset *)asset;
-(BOOL)isAlwaysLive;
-(id)path;
-(id)url;
-(void)setRating:(float)arg1 ;
-(float)defaultPlaybackRate;
-(long long)storeSubscriptionAdamID;
-(AVPlayerItemAccessLog *)accessLog;
-(NSNumber *)storeAccountID;
-(unsigned long long)discCount;
-(NSString *)mainTitle;
-(double)playableDuration;
-(NSError *)itemError;
-(long long)storePurchasedAdamID;
-(NSArray *)buyOffers;
-(void)setSelectedAlternateTextTrack:(id)arg1 ;
-(BOOL)allowsEQ;
-(OpaqueCMTimebaseRef)timebase;
-(MPMediaItem *)mediaItem;
-(float)_currentPlaybackRate;
-(BOOL)canUseLoadedAsset;
-(void)setMeetsPlaybackHistoryThresholdForElapsedTime:(double)arg1 startTime:(double)arg2 ;
-(void)disableItemReuse;
-(BOOL)isSupportedDefaultPlaybackSpeed:(long long)arg1 ;
-(id)initWithPlayerItem:(id)arg1 ;
-(void)_releaseAllTimeMarkers;
-(void)flushNowPlayingCaches;
-(void)loadAssetAndPlayerItem;
-(void)_loadAssetAndPlayerItem;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(NSError *)playbackError;
-(NSNumber *)bookmarkTime;
-(NSNumber *)initialPlaybackStartTime;
-(void)resetBookkeeping;
-(void)setAlternateAudioTrackID:(int)arg1 ;
-(void)setAlternateAudioTrackLocale:(id)arg1 ;
-(void)setPlaybackStoppedTime:(double)arg1 ;
-(void)notePlaybackFinishedByHittingEnd;
-(void)setPlaybackCheckpointCurrentTime:(double)arg1 ;
-(void)setPlaybackFinishedTime:(double)arg1 ;
-(int)subtitleTrackID;
-(void)setSubtitleTrackID:(int)arg1 ;
-(void)setUserAdvancedDuringPlayback:(BOOL)arg1 ;
-(void)setUserChangedItemsDuringPlayback:(BOOL)arg1 ;
-(void)setUserSkippedPlayback:(BOOL)arg1 ;
-(BOOL)userAdvancedDuringPlayback;
-(NSString *)albumArtist;
-(BOOL)userSkippedPlayback;
-(BOOL)userChangedItemsDuringPlayback;
-(double)durationInSeconds;
-(long long)artistStoreID;
-(BOOL)canSeedGenius;
-(unsigned long long)albumTrackNumber;
-(unsigned long long)albumTrackCount;
-(void)applyVolumeNormalizationWithSoundCheckEnabled:(BOOL)arg1 ;
-(BOOL)isAssetURLValid;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
-(BOOL)isExplicitTrack;
-(void)setExplicitBadge:(NSString *)arg1 ;
-(void)setLastChangeDirection:(long long)arg1 ;
-(double)currentTimeDisplayOverride;
-(BOOL)usesSubscriptionLease;
-(BOOL)displayableTextLoaded;
-(NSString *)displayableText;
-(long long)likedState;
-(NSString *)libraryLyrics;
-(BOOL)hasStoreLyrics;
-(NSString *)containerUniqueID;
-(BOOL)hasAlternatesForTypes:(unsigned long long)arg1 ;
-(unsigned long long)alternatesCountForTypes:(unsigned long long)arg1 ;
-(BOOL)hasDataForItemArtwork;
-(BOOL)hasDisplayableText;
-(BOOL)hasPlayedThisSession;
-(BOOL)isStreamable;
-(long long)customAVEQPreset;
-(NSURL *)podcastURL;
-(float)playbackRateForLevel:(unsigned long long)arg1 direction:(long long)arg2 paused:(BOOL)arg3 ;
-(void)prepareForRate:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(MPNowPlayingContentItem *)contentItem;
-(CGSize)presentationSize;
-(SCD_Struct_MP8)forwardPlaybackEndTime;
-(void)setForwardPlaybackEndTime:(SCD_Struct_MP8)arg1 ;
-(float)scanIntervalForLevel:(unsigned long long)arg1 paused:(BOOL)arg2 ;
-(unsigned long long)discNumber;
-(void)setHasPlayedThisSession:(BOOL)arg1 ;
-(void)setOverrideDuration:(double)arg1 ;
-(void)setLikedState:(long long)arg1 ;
-(void)setLikedState:(long long)arg1 forUserIdentity:(id)arg2 ;
-(void)setSoundCheckVolumeNormalization:(float)arg1 ;
-(BOOL)supportsRewindAndFastForward15Seconds;
-(BOOL)supportsRating;
-(void)_realoadEmbeddedTimeMarkers;
-(NSArray *)timedMetadataIfAvailable;
-(void)setContentItemID:(NSString *)arg1 ;
-(BOOL)isRadioItem;
-(NSString *)stationHash;
-(BOOL)stationAllowsItemLiking;
-(NSString *)stationName;
-(NSString *)stationStringID;
-(long long)stationProviderID;
-(BOOL)supportsRadioTrackActions;
-(BOOL)useEmbeddedChapterData;
-(void)_loadTimeMarkersBlocking;
-(void)_loadTimeMarkersAsync;
-(NSArray *)chapterTimeMarkers;
-(NSArray *)artworkTimeMarkers;
-(NSArray *)urlTimeMarkers;
-(void)setClosedCaptionTimeMarkers:(NSArray *)arg1 ;
-(NSArray *)closedCaptionTimeMarkers;
-(id)_timeMarkerFromMarkers:(id)arg1 forTime:(double)arg2 ;
-(id)chapterTimeMarkerForTime:(double)arg1 ;
-(id)artworkTimeMarkerForTime:(double)arg1 ;
-(NSDictionary *)playbackInfo;
-(id)urlTimeMarkerForTime:(double)arg1 ;
-(id)closedCaptionTimeMarkerForTime:(double)arg1 ;
-(id)_imageChapterTrackIDsForAsset:(id)arg1 ;
-(NSString *)cloudAlbumID;
-(unsigned long long)albumPersistentID;
-(unsigned long long)albumArtistPersistentID;
-(unsigned long long)artistPersistentID;
-(unsigned long long)genrePersistentID;
-(BOOL)durationIsValid;
-(unsigned long long)composerPersistentID;
-(double)durationFromExternalMetadata;
-(double)_durationFromExternalMetadataIfAvailable;
-(double)durationIfAvailable;
-(double)playableDurationIfAvailable;
-(SCD_Struct_MP8)_playerItemDurationIfAvailable;
-(double)timeOfSeekableEnd;
-(double)timeOfSeekableStart;
-(void)_internalLikedStateDidChangeNotification:(id)arg1 ;
-(void)_itemAttributeAvailableKey:(id)arg1 ;
-(void)_captionAppearanceSettingsChanged;
-(void)_addObservationsForAVPlayerItem:(id)arg1 ;
-(void)_likedStateDidChange;
-(void)_removeObservationsForAVPlayerItem:(id)arg1 ;
-(id)_currentContentItemDeviceSpecificUserInfo;
-(id)_seekableTimeRanges;
-(id)_initialPlaybackStartTimeForPlaybackInfo:(id)arg1 ;
-(void)_loadAvailableMediaCharacteristicsIfNeeded;
-(void)_clearAsset;
-(double)_playableDurationForLoadedTimeRanges:(id)arg1 ;
-(void)_loadAssetProperties;
-(BOOL)_shouldPublishArtworkURL;
-(BOOL)isAssetLoaded;
-(BOOL)isAssetLoaded;
-(void)_updateSoundCheckVolumeNormalizationForPlayerItem;
-(void)_performContentItemUpdate:(/*^block*/id)arg1 ;
-(void)setupPlaybackInfo;
-(/*^block*/id)blockForDirectAVControllerNotificationReferencingItem:(id)arg1 ;
-(void)setupEQPresetWithDefaultPreset:(long long)arg1 ;
-(BOOL)_isBackgroundPlaybackRestricted;
-(void)_updateDurationSnapshotWithElapsedTime:(double)arg1 playbackRate:(float)arg2 ;
-(long long)playbackMode;
-(void)_currentPlaybackRateDidChange:(float)arg1 ;
-(void)_applyLoudnessInfo;
-(double)_expectedStartTimeWithPlaybackInfo:(id)arg1 ;
-(BOOL)isStartItem;
-(double)_expectedStopTimeWithPlaybackInfo:(id)arg1 ;
-(void)_handleUpdatedLikedState:(long long)arg1 forUserIdentity:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)_persistedLikedState;
-(void)_setCurrentPlaybackRate:(float)arg1 ;
-(void)_setNeedsPersistedLikedStateUpdate;
-(MPModelPlayEvent *)modelPlayEvent;
-(void)_setListeningForCaptionsAppearanceSettingsChanged:(BOOL)arg1 ;
-(void)invalidateContentItemDeviceSpecificUserInfo;
-(void)reevaluateHasProtectedContent;
-(void)reevaluateType;
-(void)replacePlayerItemWithPlayerItem:(id)arg1 ;
-(MPAlternateTracks *)alternateTracks;
-(void)resolvePlaybackError:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_updateHasFinishedDownloading;
-(void)_willBecomeActivePlayerItem;
-(id)initWithAsset:(id)arg1 ;
-(void)_willResignActivePlayerItem;
-(void)setArtworkTimeMarkers:(NSArray *)arg1 ;
-(void)setChapterTimeMarkers:(NSArray *)arg1 ;
-(void)setIsAssetLoaded:(BOOL)arg1 ;
-(float)soundCheckVolumeNormalization;
-(void)setUrlTimeMarkers:(NSArray *)arg1 ;
-(id)rtcReportingParentHierarchyToken;
-(void)setItemError:(NSError *)arg1 ;
-(BOOL)meetsPlaybackHistoryThreshold;
-(BOOL)didAttemptToLoadAsset;
-(BOOL)canReusePlayerItem;
-(long long)albumStoreID;
-(void)setStartItem:(BOOL)arg1 ;
-(BOOL)isLikedStateEnabled;
-(BOOL)supportsLikedState;
-(long long)storeItemInt64ID;
-(float)loudnessInfoVolumeNormalization;
-(void)setLoudnessInfoVolumeNormalization:(float)arg1 ;
-(BOOL)prefersSeekOverSkip;
-(BOOL)isTailPlaceholder;
-(long long)repeatIndex;
-(ICMusicSubscriptionLeaseStatus *)leaseStatus;
-(void)setRepeatIndex:(long long)arg1 ;
-(BOOL)shouldPreventPlayback;
-(MPModelGenericObject *)modelGenericObject;
-(NSNumber *)initialPlaybackStartTimeOverride;
-(void)setInitialPlaybackStartTimeOverride:(NSNumber *)arg1 ;
-(BOOL)allowsAirPlayFromCloud;
-(NSString *)aggregateDictionaryItemIdentifier;
-(BOOL)requiresLoadedAssetForAirPlayProperties;
-(BOOL)hasFinishedDownloading;
-(BOOL)hasPerformedErrorResolution;
-(void)setHasPerformedErrorResolution:(BOOL)arg1 ;
-(BOOL)isActiveItem;
-(void)setActiveItem:(BOOL)arg1 ;
-(BOOL)hasExternalDisplay;
-(BOOL)didReachEnd;
-(void)setExternalDisplay:(BOOL)arg1 ;
-(NSNumber *)useListeningHistory;
-(long long)leasePlaybackPreventionState;
-(NSString *)contentItemID;
-(NSString *)previousContentItemID;
-(void)setPreviousContentItemID:(NSString *)arg1 ;
-(unsigned long long)persistentID;
-(NSString *)explicitBadge;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(long long)type;
-(NSString *)album;
-(BOOL)hasTimeSyncedLyrics;
-(void)setDefaultPlaybackRate:(float)arg1 ;
-(long long)stationID;
-(long long)lastChangeDirection;
-(NSString *)personID;
-(MPQueueFeeder *)feeder;
-(/*^block*/id)artworkCatalogBlock;
-(NSString *)databaseID;
-(float)userRating;
-(BOOL)shouldShowComposer;
-(NSString *)externalContentIdentifier;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(SCD_Struct_MP8)duration;
-(void)setFeeder:(MPQueueFeeder *)arg1 ;
-(NSString *)cloudUniversalLibraryID;
-(NSString *)copyrightText;
-(unsigned long long)cloudID;
-(AVPlayerItem *)playerItem;
-(long long)status;
-(void)dealloc;
@end

