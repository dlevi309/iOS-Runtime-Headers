/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSDictionary, NSDate, NSString, NSURL, NSArray, _MRContentItemMetadataProtobuf;

@interface MRContentItemMetadata : NSObject <NSCopying> {

	BOOL _container;
	BOOL _hasContainer;
	BOOL _playable;
	BOOL _hasPlayable;
	BOOL _explicitItem;
	BOOL _hasExplicitItem;
	BOOL _streamingContent;
	BOOL _hasStreamingContent;
	BOOL _currentlyPlaying;
	BOOL _hasCurrentlyPlaying;
	BOOL _alwaysLive;
	BOOL _hasAlwaysLive;
	BOOL _sharable;
	BOOL _hasSharable;
	BOOL _liked;
	BOOL _hasLiked;
	BOOL _inWishList;
	BOOL _hasInWishList;
	BOOL _steerable;
	BOOL _hasSteerable;
	BOOL _loading;
	BOOL _hasLoading;
	BOOL _artworkAvailable;
	BOOL _hasArtworkAvailable;
	BOOL _infoAvailable;
	BOOL _hasInfoAvailable;
	BOOL _languageOptionsAvailable;
	BOOL _hasLanguageOptionsAvailable;
	BOOL _lyricsAvailable;
	BOOL _hasLyricsAvailable;
	BOOL _hasPlaybackProgress;
	BOOL _hasPlaybackRate;
	BOOL _hasDefaultPlaybackRate;
	BOOL _hasDownloadProgress;
	BOOL _hasPlaylistType;
	BOOL _hasRadioStationType;
	BOOL _hasEditingStyleFlags;
	BOOL _hasMediaType;
	BOOL _hasMediaSubType;
	BOOL _hasEpisodeType;
	BOOL _hasPlayCount;
	BOOL _hasNumberOfSections;
	BOOL _hasChapterCount;
	BOOL _hasTotalDiscCount;
	BOOL _hasTotalTrackCount;
	BOOL _hasDownloadState;
	BOOL _hasArtworkDataWidthDeprecated;
	BOOL _hasArtworkDataHeightDeprecated;
	BOOL _hasDuration;
	BOOL _hasStartTime;
	BOOL _hasElapsedTime;
	BOOL _hasElapsedTimeTimestamp;
	BOOL _hasInferredTimestamp;
	BOOL _hasSeasonNumber;
	BOOL _hasEpisodeNumber;
	BOOL _hasDiscNumber;
	BOOL _hasTrackNumber;
	BOOL _hasRadioStationIdentifier;
	BOOL _hasITunesStoreIdentifier;
	BOOL _hasITunesStoreSubscriptionIdentifier;
	BOOL _hasITunesStoreArtistIdentifier;
	BOOL _hasITunesStoreAlbumIdentifier;
	BOOL _hasLegacyUniqueIdentifier;
	float _playbackProgress;
	float _playbackRate;
	float _defaultPlaybackRate;
	float _downloadProgress;
	long long _playlistType;
	long long _radioStationType;
	long long _editingStyleFlags;
	long long _mediaType;
	long long _mediaSubType;
	long long _episodeType;
	long long _playCount;
	long long _numberOfSections;
	long long _chapterCount;
	long long _totalDiscCount;
	long long _totalTrackCount;
	long long _downloadState;
	long long _artworkDataWidthDeprecated;
	long long _artworkDataHeightDeprecated;
	double _duration;
	double _startTime;
	double _elapsedTime;
	double _elapsedTimeTimestamp;
	double _inferredTimestamp;
	long long _seasonNumber;
	long long _episodeNumber;
	long long _discNumber;
	long long _trackNumber;
	long long _radioStationIdentifier;
	long long _iTunesStoreIdentifier;
	long long _iTunesStoreSubscriptionIdentifier;
	long long _iTunesStoreArtistIdentifier;
	long long _iTunesStoreAlbumIdentifier;
	long long _legacyUniqueIdentifier;
	NSData* _purchaseInfoData;
	NSDictionary* _appMetrics;
	NSDictionary* _nowPlayingInfo;
	NSDictionary* _userInfo;
	NSDictionary* _deviceSpecificUserInfo;
	NSDictionary* _collectionInfo;
	NSDate* _releaseDate;
	NSDate* _currentPlaybackDate;
	NSString* _title;
	NSString* _subtitle;
	NSString* _albumName;
	NSString* _trackArtistName;
	NSString* _albumArtistName;
	NSString* _directorName;
	NSString* _localizedContentRating;
	NSString* _collectionIdentifier;
	NSString* _profileIdentifier;
	NSURL* _assetURL;
	NSString* _composer;
	NSString* _genre;
	NSString* _contentIdentifier;
	NSString* _radioStationName;
	NSString* _radioStationString;
	NSString* _seriesName;
	NSURL* _lyricsURL;
	NSString* _serviceIdentifier;
	NSString* _brandIdentifier;
	NSString* _localizedDurationString;
	NSString* _artworkIdentifier;
	NSString* _artworkMIMEType;
	NSURL* _artworkURL;
	NSURL* _artworkFileURL;
	NSArray* _artworkURLTemplates;
	NSString* _albumYear;

}

@property (assign,nonatomic) double elapsedTimeTimestamp;                                  //@synthesize elapsedTimeTimestamp=_elapsedTimeTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasElapsedTimeTimestamp;                                 //@synthesize hasElapsedTimeTimestamp=_hasElapsedTimeTimestamp - In the implementation block
@property (assign,nonatomic) double inferredTimestamp;                                     //@synthesize inferredTimestamp=_inferredTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasInferredTimestamp;                                    //@synthesize hasInferredTimestamp=_hasInferredTimestamp - In the implementation block
@property (nonatomic,readonly) _MRContentItemMetadataProtobuf * protobuf; 
@property (assign,getter=isContainer,nonatomic) BOOL container;                            //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) BOOL hasContainer;                                            //@synthesize hasContainer=_hasContainer - In the implementation block
@property (assign,getter=isPlayable,nonatomic) BOOL playable;                              //@synthesize playable=_playable - In the implementation block
@property (assign,nonatomic) BOOL hasPlayable;                                             //@synthesize hasPlayable=_hasPlayable - In the implementation block
@property (assign,getter=isExplicitItem,nonatomic) BOOL explicitItem;                      //@synthesize explicitItem=_explicitItem - In the implementation block
@property (assign,nonatomic) BOOL hasExplicitItem;                                         //@synthesize hasExplicitItem=_hasExplicitItem - In the implementation block
@property (assign,getter=isStreamingContent,nonatomic) BOOL streamingContent;              //@synthesize streamingContent=_streamingContent - In the implementation block
@property (assign,nonatomic) BOOL hasStreamingContent;                                     //@synthesize hasStreamingContent=_hasStreamingContent - In the implementation block
@property (assign,getter=isCurrentlyPlaying,nonatomic) BOOL currentlyPlaying;              //@synthesize currentlyPlaying=_currentlyPlaying - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentlyPlaying;                                     //@synthesize hasCurrentlyPlaying=_hasCurrentlyPlaying - In the implementation block
@property (assign,getter=isAlwaysLive,nonatomic) BOOL alwaysLive;                          //@synthesize alwaysLive=_alwaysLive - In the implementation block
@property (assign,nonatomic) BOOL hasAlwaysLive;                                           //@synthesize hasAlwaysLive=_hasAlwaysLive - In the implementation block
@property (assign,getter=isSharable,nonatomic) BOOL sharable;                              //@synthesize sharable=_sharable - In the implementation block
@property (assign,nonatomic) BOOL hasSharable;                                             //@synthesize hasSharable=_hasSharable - In the implementation block
@property (assign,getter=isLiked,nonatomic) BOOL liked;                                    //@synthesize liked=_liked - In the implementation block
@property (assign,nonatomic) BOOL hasLiked;                                                //@synthesize hasLiked=_hasLiked - In the implementation block
@property (assign,getter=isInWishList,nonatomic) BOOL inWishList;                          //@synthesize inWishList=_inWishList - In the implementation block
@property (assign,nonatomic) BOOL hasInWishList;                                           //@synthesize hasInWishList=_hasInWishList - In the implementation block
@property (assign,getter=isSteerable,nonatomic) BOOL steerable;                            //@synthesize steerable=_steerable - In the implementation block
@property (assign,nonatomic) BOOL hasSteerable;                                            //@synthesize hasSteerable=_hasSteerable - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) BOOL hasLoading;                                              //@synthesize hasLoading=_hasLoading - In the implementation block
@property (assign,nonatomic) BOOL artworkAvailable;                                        //@synthesize artworkAvailable=_artworkAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasArtworkAvailable;                                     //@synthesize hasArtworkAvailable=_hasArtworkAvailable - In the implementation block
@property (assign,nonatomic) BOOL infoAvailable;                                           //@synthesize infoAvailable=_infoAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasInfoAvailable;                                        //@synthesize hasInfoAvailable=_hasInfoAvailable - In the implementation block
@property (assign,nonatomic) BOOL languageOptionsAvailable;                                //@synthesize languageOptionsAvailable=_languageOptionsAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasLanguageOptionsAvailable;                             //@synthesize hasLanguageOptionsAvailable=_hasLanguageOptionsAvailable - In the implementation block
@property (assign,nonatomic) BOOL lyricsAvailable;                                         //@synthesize lyricsAvailable=_lyricsAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasLyricsAvailable;                                      //@synthesize hasLyricsAvailable=_hasLyricsAvailable - In the implementation block
@property (assign,nonatomic) float playbackProgress;                                       //@synthesize playbackProgress=_playbackProgress - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackProgress;                                     //@synthesize hasPlaybackProgress=_hasPlaybackProgress - In the implementation block
@property (assign,nonatomic) float playbackRate;                                           //@synthesize playbackRate=_playbackRate - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackRate;                                         //@synthesize hasPlaybackRate=_hasPlaybackRate - In the implementation block
@property (assign,nonatomic) float defaultPlaybackRate;                                    //@synthesize defaultPlaybackRate=_defaultPlaybackRate - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultPlaybackRate;                                  //@synthesize hasDefaultPlaybackRate=_hasDefaultPlaybackRate - In the implementation block
@property (assign,nonatomic) float downloadProgress;                                       //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadProgress;                                     //@synthesize hasDownloadProgress=_hasDownloadProgress - In the implementation block
@property (assign,nonatomic) long long playlistType;                                       //@synthesize playlistType=_playlistType - In the implementation block
@property (assign,nonatomic) BOOL hasPlaylistType;                                         //@synthesize hasPlaylistType=_hasPlaylistType - In the implementation block
@property (assign,nonatomic) long long radioStationType;                                   //@synthesize radioStationType=_radioStationType - In the implementation block
@property (assign,nonatomic) BOOL hasRadioStationType;                                     //@synthesize hasRadioStationType=_hasRadioStationType - In the implementation block
@property (assign,nonatomic) long long editingStyleFlags;                                  //@synthesize editingStyleFlags=_editingStyleFlags - In the implementation block
@property (assign,nonatomic) BOOL hasEditingStyleFlags;                                    //@synthesize hasEditingStyleFlags=_hasEditingStyleFlags - In the implementation block
@property (assign,nonatomic) long long mediaType;                                          //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) BOOL hasMediaType;                                            //@synthesize hasMediaType=_hasMediaType - In the implementation block
@property (assign,nonatomic) long long mediaSubType;                                       //@synthesize mediaSubType=_mediaSubType - In the implementation block
@property (assign,nonatomic) BOOL hasMediaSubType;                                         //@synthesize hasMediaSubType=_hasMediaSubType - In the implementation block
@property (assign,nonatomic) long long episodeType;                                        //@synthesize episodeType=_episodeType - In the implementation block
@property (assign,nonatomic) BOOL hasEpisodeType;                                          //@synthesize hasEpisodeType=_hasEpisodeType - In the implementation block
@property (assign,nonatomic) long long playCount;                                          //@synthesize playCount=_playCount - In the implementation block
@property (assign,nonatomic) BOOL hasPlayCount;                                            //@synthesize hasPlayCount=_hasPlayCount - In the implementation block
@property (assign,nonatomic) long long numberOfSections;                                   //@synthesize numberOfSections=_numberOfSections - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfSections;                                     //@synthesize hasNumberOfSections=_hasNumberOfSections - In the implementation block
@property (assign,nonatomic) long long chapterCount;                                       //@synthesize chapterCount=_chapterCount - In the implementation block
@property (assign,nonatomic) BOOL hasChapterCount;                                         //@synthesize hasChapterCount=_hasChapterCount - In the implementation block
@property (assign,nonatomic) long long totalDiscCount;                                     //@synthesize totalDiscCount=_totalDiscCount - In the implementation block
@property (assign,nonatomic) BOOL hasTotalDiscCount;                                       //@synthesize hasTotalDiscCount=_hasTotalDiscCount - In the implementation block
@property (assign,nonatomic) long long totalTrackCount;                                    //@synthesize totalTrackCount=_totalTrackCount - In the implementation block
@property (assign,nonatomic) BOOL hasTotalTrackCount;                                      //@synthesize hasTotalTrackCount=_hasTotalTrackCount - In the implementation block
@property (assign,nonatomic) long long downloadState;                                      //@synthesize downloadState=_downloadState - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadState;                                        //@synthesize hasDownloadState=_hasDownloadState - In the implementation block
@property (assign,nonatomic) double duration;                                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasDuration;                                             //@synthesize hasDuration=_hasDuration - In the implementation block
@property (assign,nonatomic) double startTime;                                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasStartTime;                                            //@synthesize hasStartTime=_hasStartTime - In the implementation block
@property (assign,nonatomic) double elapsedTime;                                           //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) BOOL hasElapsedTime;                                          //@synthesize hasElapsedTime=_hasElapsedTime - In the implementation block
@property (assign,nonatomic) long long seasonNumber;                                       //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (assign,nonatomic) BOOL hasSeasonNumber;                                         //@synthesize hasSeasonNumber=_hasSeasonNumber - In the implementation block
@property (assign,nonatomic) long long episodeNumber;                                      //@synthesize episodeNumber=_episodeNumber - In the implementation block
@property (assign,nonatomic) BOOL hasEpisodeNumber;                                        //@synthesize hasEpisodeNumber=_hasEpisodeNumber - In the implementation block
@property (assign,nonatomic) long long discNumber;                                         //@synthesize discNumber=_discNumber - In the implementation block
@property (assign,nonatomic) BOOL hasDiscNumber;                                           //@synthesize hasDiscNumber=_hasDiscNumber - In the implementation block
@property (assign,nonatomic) long long trackNumber;                                        //@synthesize trackNumber=_trackNumber - In the implementation block
@property (assign,nonatomic) BOOL hasTrackNumber;                                          //@synthesize hasTrackNumber=_hasTrackNumber - In the implementation block
@property (assign,nonatomic) long long radioStationIdentifier;                             //@synthesize radioStationIdentifier=_radioStationIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasRadioStationIdentifier;                               //@synthesize hasRadioStationIdentifier=_hasRadioStationIdentifier - In the implementation block
@property (assign,nonatomic) long long iTunesStoreIdentifier;                              //@synthesize iTunesStoreIdentifier=_iTunesStoreIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasITunesStoreIdentifier;                                //@synthesize hasITunesStoreIdentifier=_hasITunesStoreIdentifier - In the implementation block
@property (assign,nonatomic) long long iTunesStoreSubscriptionIdentifier;                  //@synthesize iTunesStoreSubscriptionIdentifier=_iTunesStoreSubscriptionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasITunesStoreSubscriptionIdentifier;                    //@synthesize hasITunesStoreSubscriptionIdentifier=_hasITunesStoreSubscriptionIdentifier - In the implementation block
@property (assign,nonatomic) long long iTunesStoreArtistIdentifier;                        //@synthesize iTunesStoreArtistIdentifier=_iTunesStoreArtistIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasITunesStoreArtistIdentifier;                          //@synthesize hasITunesStoreArtistIdentifier=_hasITunesStoreArtistIdentifier - In the implementation block
@property (assign,nonatomic) long long iTunesStoreAlbumIdentifier;                         //@synthesize iTunesStoreAlbumIdentifier=_iTunesStoreAlbumIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasITunesStoreAlbumIdentifier;                           //@synthesize hasITunesStoreAlbumIdentifier=_hasITunesStoreAlbumIdentifier - In the implementation block
@property (assign,nonatomic) long long legacyUniqueIdentifier;                             //@synthesize legacyUniqueIdentifier=_legacyUniqueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasLegacyUniqueIdentifier;                               //@synthesize hasLegacyUniqueIdentifier=_hasLegacyUniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSData * purchaseInfoData;                                      //@synthesize purchaseInfoData=_purchaseInfoData - In the implementation block
@property (nonatomic,copy) NSDictionary * appMetrics;                                      //@synthesize appMetrics=_appMetrics - In the implementation block
@property (nonatomic,copy) NSDictionary * nowPlayingInfo;                                  //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                        //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * deviceSpecificUserInfo;                          //@synthesize deviceSpecificUserInfo=_deviceSpecificUserInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * collectionInfo;                                  //@synthesize collectionInfo=_collectionInfo - In the implementation block
@property (nonatomic,copy) NSDate * releaseDate;                                           //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,copy) NSDate * currentPlaybackDate;                                   //@synthesize currentPlaybackDate=_currentPlaybackDate - In the implementation block
@property (nonatomic,copy) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                            //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * albumName;                                           //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,copy) NSString * trackArtistName;                                     //@synthesize trackArtistName=_trackArtistName - In the implementation block
@property (nonatomic,copy) NSString * albumArtistName;                                     //@synthesize albumArtistName=_albumArtistName - In the implementation block
@property (nonatomic,copy) NSString * directorName;                                        //@synthesize directorName=_directorName - In the implementation block
@property (nonatomic,copy) NSString * localizedContentRating;                              //@synthesize localizedContentRating=_localizedContentRating - In the implementation block
@property (nonatomic,copy) NSString * collectionIdentifier;                                //@synthesize collectionIdentifier=_collectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * profileIdentifier;                                   //@synthesize profileIdentifier=_profileIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * assetURL;                                               //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,copy) NSString * composer;                                            //@synthesize composer=_composer - In the implementation block
@property (nonatomic,copy) NSString * genre;                                               //@synthesize genre=_genre - In the implementation block
@property (nonatomic,copy) NSString * contentIdentifier;                                   //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * radioStationName;                                    //@synthesize radioStationName=_radioStationName - In the implementation block
@property (nonatomic,copy) NSString * radioStationString;                                  //@synthesize radioStationString=_radioStationString - In the implementation block
@property (nonatomic,copy) NSString * seriesName;                                          //@synthesize seriesName=_seriesName - In the implementation block
@property (nonatomic,copy) NSURL * lyricsURL;                                              //@synthesize lyricsURL=_lyricsURL - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;                                   //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * brandIdentifier;                                     //@synthesize brandIdentifier=_brandIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedDurationString;                             //@synthesize localizedDurationString=_localizedDurationString - In the implementation block
@property (nonatomic,copy) NSString * artworkIdentifier;                                   //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (nonatomic,copy) NSString * artworkMIMEType;                                     //@synthesize artworkMIMEType=_artworkMIMEType - In the implementation block
@property (nonatomic,copy) NSURL * artworkURL;                                             //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,copy) NSURL * artworkFileURL;                                         //@synthesize artworkFileURL=_artworkFileURL - In the implementation block
@property (nonatomic,copy) NSArray * artworkURLTemplates;                                  //@synthesize artworkURLTemplates=_artworkURLTemplates - In the implementation block
@property (nonatomic,copy) NSString * albumYear;                                           //@synthesize albumYear=_albumYear - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,readonly) long long artworkDataWidthDeprecated;                       //@synthesize artworkDataWidthDeprecated=_artworkDataWidthDeprecated - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkDataWidthDeprecated;                         //@synthesize hasArtworkDataWidthDeprecated=_hasArtworkDataWidthDeprecated - In the implementation block
@property (nonatomic,readonly) long long artworkDataHeightDeprecated;                      //@synthesize artworkDataHeightDeprecated=_artworkDataHeightDeprecated - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkDataHeightDeprecated;                        //@synthesize hasArtworkDataHeightDeprecated=_hasArtworkDataHeightDeprecated - In the implementation block
@property (nonatomic,readonly) double calculatedPlaybackPosition; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
-(void)setPlaylistType:(long long)arg1 ;
-(NSString *)profileIdentifier;
-(NSString *)localizedContentRating;
-(BOOL)isSteerable;
-(void)setTrackArtistName:(NSString *)arg1 ;
-(NSString *)composer;
-(void)setTotalDiscCount:(long long)arg1 ;
-(void)setRadioStationType:(long long)arg1 ;
-(long long)editingStyleFlags;
-(long long)playlistType;
-(NSURL *)lyricsURL;
-(void)setHasSharable:(BOOL)arg1 ;
-(BOOL)isExplicitItem;
-(NSString *)directorName;
-(void)setInWishList:(BOOL)arg1 ;
-(BOOL)hasExplicitItem;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(void)setLyricsAvailable:(BOOL)arg1 ;
-(BOOL)isInWishList;
-(BOOL)isLiked;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(void)setPlaybackRate:(float)arg1 ;
-(long long)radioStationType;
-(void)setComposer:(NSString *)arg1 ;
-(void)setDeviceSpecificUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setCollectionIdentifier:(NSString *)arg1 ;
-(NSString *)trackArtistName;
-(NSString *)radioStationName;
-(NSString *)seriesName;
-(long long)episodeNumber;
-(NSString *)genre;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setEpisodeNumber:(long long)arg1 ;
-(long long)seasonNumber;
-(long long)totalTrackCount;
-(void)setTotalTrackCount:(long long)arg1 ;
-(void)setSeasonNumber:(long long)arg1 ;
-(NSString *)albumArtistName;
-(void)setDirectorName:(NSString *)arg1 ;
-(void)setProfileIdentifier:(NSString *)arg1 ;
-(NSString *)albumYear;
-(void)setHasStartTime:(BOOL)arg1 ;
-(NSString *)collectionIdentifier;
-(BOOL)isPlayable;
-(NSArray *)artworkURLTemplates;
-(long long)playCount;
-(void)setArtworkURL:(NSURL *)arg1 ;
-(long long)totalDiscCount;
-(BOOL)hasTotalTrackCount;
-(NSDate *)releaseDate;
-(void)setAlbumName:(NSString *)arg1 ;
-(NSDictionary *)collectionInfo;
-(void)setLocalizedDurationString:(NSString *)arg1 ;
-(void)setHasPlaybackRate:(BOOL)arg1 ;
-(void)setSteerable:(BOOL)arg1 ;
-(void)setPlayCount:(long long)arg1 ;
-(void)setRadioStationName:(NSString *)arg1 ;
-(long long)trackNumber;
-(NSURL *)artworkURL;
-(NSString *)albumName;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(void)setSeriesName:(NSString *)arg1 ;
-(NSDictionary *)deviceSpecificUserInfo;
-(void)setEpisodeType:(long long)arg1 ;
-(NSString *)localizedDurationString;
-(NSString *)artworkIdentifier;
-(void)setLocalizedContentRating:(NSString *)arg1 ;
-(void)setDiscNumber:(long long)arg1 ;
-(void)setElapsedTime:(double)arg1 ;
-(void)setHasTotalDiscCount:(BOOL)arg1 ;
-(void)setArtworkURLTemplates:(NSArray *)arg1 ;
-(void)setPlayable:(BOOL)arg1 ;
-(long long)downloadState;
-(NSDate *)currentPlaybackDate;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(double)arg1 ;
-(BOOL)hasStartTime;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)hasAlwaysLive;
-(void)setMediaType:(long long)arg1 ;
-(NSDictionary *)userInfo;
-(BOOL)isContainer;
-(float)playbackRate;
-(void)setHasRadioStationIdentifier:(BOOL)arg1 ;
-(long long)mediaType;
-(void)setAssetURL:(NSURL *)arg1 ;
-(BOOL)isLoading;
-(double)calculatedPlaybackPosition;
-(void)setArtworkDataWidthDeprecated:(long long)arg1 ;
-(BOOL)isStreamingContent;
-(void)setTrackNumber:(long long)arg1 ;
-(BOOL)hasElapsedTimeTimestamp;
-(NSString *)radioStationString;
-(void)setHasExplicitItem:(BOOL)arg1 ;
-(void)setHasMediaType:(BOOL)arg1 ;
-(void)setHasDefaultPlaybackRate:(BOOL)arg1 ;
-(void)setLiked:(BOOL)arg1 ;
-(void)setMediaSubType:(long long)arg1 ;
-(void)setAppMetrics:(NSDictionary *)arg1 ;
-(BOOL)hasPlaylistType;
-(void)setHasLegacyUniqueIdentifier:(BOOL)arg1 ;
-(long long)episodeType;
-(long long)numberOfSections;
-(NSString *)brandIdentifier;
-(BOOL)hasPlayCount;
-(void)setArtworkAvailable:(BOOL)arg1 ;
-(void)setHasEpisodeNumber:(BOOL)arg1 ;
-(BOOL)hasArtworkDataWidthDeprecated;
-(void)setGenre:(NSString *)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(BOOL)hasContainer;
-(NSURL *)assetURL;
-(NSString *)subtitle;
-(void)setBrandIdentifier:(NSString *)arg1 ;
-(void)setHasDownloadProgress:(BOOL)arg1 ;
-(void)setITunesStoreArtistIdentifier:(long long)arg1 ;
-(void)setRadioStationString:(NSString *)arg1 ;
-(BOOL)isAlwaysLive;
-(BOOL)hasMediaType;
-(void)setTitle:(NSString *)arg1 ;
-(long long)radioStationIdentifier;
-(void)setITunesStoreSubscriptionIdentifier:(long long)arg1 ;
-(long long)iTunesStoreSubscriptionIdentifier;
-(void)setRadioStationIdentifier:(long long)arg1 ;
-(BOOL)isCurrentlyPlaying;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasSteerable:(BOOL)arg1 ;
-(void)setHasPlayCount:(BOOL)arg1 ;
-(void)setPurchaseInfoData:(NSData *)arg1 ;
-(BOOL)hasInfoAvailable;
-(void)setLyricsURL:(NSURL *)arg1 ;
-(NSString *)contentIdentifier;
-(BOOL)hasChapterCount;
-(void)setHasEditingStyleFlags:(BOOL)arg1 ;
-(void)setHasTrackNumber:(BOOL)arg1 ;
-(float)playbackProgress;
-(void)setHasITunesStoreAlbumIdentifier:(BOOL)arg1 ;
-(BOOL)hasStreamingContent;
-(void)setPlaybackProgress:(float)arg1 ;
-(void)setSharable:(BOOL)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setHasInferredTimestamp:(BOOL)arg1 ;
-(void)setHasInfoAvailable:(BOOL)arg1 ;
-(void)setCollectionInfo:(NSDictionary *)arg1 ;
-(BOOL)hasTrackNumber;
-(BOOL)lyricsAvailable;
-(NSDictionary *)nowPlayingInfo;
-(BOOL)hasTotalDiscCount;
-(float)defaultPlaybackRate;
-(float)downloadProgress;
-(BOOL)hasCurrentlyPlaying;
-(BOOL)isSharable;
-(BOOL)hasITunesStoreArtistIdentifier;
-(void)setContainer:(BOOL)arg1 ;
-(BOOL)hasNumberOfSections;
-(BOOL)hasPlaybackRate;
-(void)setArtworkDataHeightDeprecated:(long long)arg1 ;
-(void)setHasITunesStoreSubscriptionIdentifier:(BOOL)arg1 ;
-(BOOL)hasLanguageOptionsAvailable;
-(NSString *)serviceIdentifier;
-(BOOL)hasSharable;
-(double)elapsedTime;
-(void)setHasITunesStoreIdentifier:(BOOL)arg1 ;
-(void)setInfoAvailable:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasDefaultPlaybackRate;
-(void)setHasStreamingContent:(BOOL)arg1 ;
-(void)setHasNumberOfSections:(BOOL)arg1 ;
-(BOOL)hasDownloadState;
-(void)setStreamingContent:(BOOL)arg1 ;
-(long long)discNumber;
-(BOOL)hasInferredTimestamp;
-(BOOL)hasInWishList;
-(void)setLanguageOptionsAvailable:(BOOL)arg1 ;
-(void)setHasElapsedTime:(BOOL)arg1 ;
-(BOOL)hasRadioStationType;
-(NSData *)data;
-(void)setHasChapterCount:(BOOL)arg1 ;
-(BOOL)hasEditingStyleFlags;
-(long long)iTunesStoreIdentifier;
-(void)setHasSeasonNumber:(BOOL)arg1 ;
-(long long)artworkDataHeightDeprecated;
-(long long)iTunesStoreAlbumIdentifier;
-(void)setDownloadState:(long long)arg1 ;
-(void)setHasAlwaysLive:(BOOL)arg1 ;
-(void)setHasLyricsAvailable:(BOOL)arg1 ;
-(BOOL)hasITunesStoreIdentifier;
-(BOOL)hasEpisodeNumber;
-(void)setHasMediaSubType:(BOOL)arg1 ;
-(void)setHasLanguageOptionsAvailable:(BOOL)arg1 ;
-(void)setArtworkMIMEType:(NSString *)arg1 ;
-(NSDictionary *)appMetrics;
-(long long)legacyUniqueIdentifier;
-(_MRContentItemMetadataProtobuf *)protobuf;
-(void)setInferredTimestamp:(double)arg1 ;
-(BOOL)hasDownloadProgress;
-(BOOL)hasLiked;
-(BOOL)hasDiscNumber;
-(void)setAlbumArtistName:(NSString *)arg1 ;
-(void)setHasTotalTrackCount:(BOOL)arg1 ;
-(BOOL)hasLegacyUniqueIdentifier;
-(BOOL)hasRadioStationIdentifier;
-(void)setDefaultPlaybackRate:(float)arg1 ;
-(void)setHasArtworkAvailable:(BOOL)arg1 ;
-(BOOL)hasElapsedTime;
-(BOOL)hasMediaSubType;
-(void)setCurrentlyPlaying:(BOOL)arg1 ;
-(void)setHasLoading:(BOOL)arg1 ;
-(void)setHasDownloadState:(BOOL)arg1 ;
-(BOOL)hasLoading;
-(void)setChapterCount:(long long)arg1 ;
-(void)setHasDiscNumber:(BOOL)arg1 ;
-(NSData *)purchaseInfoData;
-(void)setHasCurrentlyPlaying:(BOOL)arg1 ;
-(void)setHasPlayable:(BOOL)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setITunesStoreAlbumIdentifier:(long long)arg1 ;
-(long long)mediaSubType;
-(void)setDownloadProgress:(float)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(double)calculatedPlaybackPositionFromDate:(id)arg1 ;
-(BOOL)hasSteerable;
-(void)setHasPlaybackProgress:(BOOL)arg1 ;
-(BOOL)artworkAvailable;
-(void)setExplicitItem:(BOOL)arg1 ;
-(BOOL)hasPlayable;
-(void)setEditingStyleFlags:(long long)arg1 ;
-(BOOL)hasEpisodeType;
-(void)setLegacyUniqueIdentifier:(long long)arg1 ;
-(void)setHasITunesStoreArtistIdentifier:(BOOL)arg1 ;
-(BOOL)hasSeasonNumber;
-(double)inferredTimestamp;
-(BOOL)hasITunesStoreAlbumIdentifier;
-(void)setContentIdentifier:(NSString *)arg1 ;
-(BOOL)languageOptionsAvailable;
-(void)setElapsedTimeTimestamp:(double)arg1 ;
-(double)duration;
-(void)setAlbumYear:(NSString *)arg1 ;
-(BOOL)hasArtworkDataHeightDeprecated;
-(void)setHasInWishList:(BOOL)arg1 ;
-(NSURL *)artworkFileURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasEpisodeType:(BOOL)arg1 ;
-(double)startTime;
-(long long)iTunesStoreArtistIdentifier;
-(void)setHasElapsedTimeTimestamp:(BOOL)arg1 ;
-(void)setITunesStoreIdentifier:(long long)arg1 ;
-(long long)chapterCount;
-(double)elapsedTimeTimestamp;
-(BOOL)hasArtworkAvailable;
-(void)setHasPlaylistType:(BOOL)arg1 ;
-(NSString *)title;
-(void)setCurrentPlaybackDate:(NSDate *)arg1 ;
-(void)setHasLiked:(BOOL)arg1 ;
-(void)setNumberOfSections:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasPlaybackProgress;
-(void)setAlwaysLive:(BOOL)arg1 ;
-(BOOL)hasLyricsAvailable;
-(NSString *)artworkMIMEType;
-(BOOL)hasITunesStoreSubscriptionIdentifier;
-(BOOL)infoAvailable;
-(void)setHasRadioStationType:(BOOL)arg1 ;
-(void)setHasContainer:(BOOL)arg1 ;
-(void)setArtworkFileURL:(NSURL *)arg1 ;
-(long long)artworkDataWidthDeprecated;
@end

