/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface _MRContentItemMetadataProtobuf : PBCodable <NSCopying> {

	double _duration;
	double _elapsedTime;
	double _elapsedTimeTimestamp;
	long long _iTunesStoreAlbumIdentifier;
	long long _iTunesStoreArtistIdentifier;
	long long _iTunesStoreIdentifier;
	long long _iTunesStoreSubscriptionIdentifier;
	double _inferredTimestamp;
	long long _legacyUniqueIdentifier;
	long long _radioStationIdentifier;
	double _releaseDate;
	double _startTime;
	NSString* _albumArtistName;
	NSString* _albumName;
	NSString* _albumYear;
	NSData* _appMetricsData;
	int _artworkDataHeightDeprecated;
	int _artworkDataWidthDeprecated;
	NSString* _artworkFileURL;
	NSString* _artworkIdentifier;
	NSString* _artworkMIMEType;
	NSString* _artworkURL;
	NSData* _artworkURLTemplatesData;
	NSString* _assetURLString;
	NSString* _brandIdentifier;
	int _chapterCount;
	NSString* _collectionIdentifier;
	NSData* _collectionInfoData;
	NSString* _composer;
	NSString* _contentIdentifier;
	NSData* _currentPlaybackDateData;
	float _defaultPlaybackRate;
	NSData* _deviceSpecificUserInfoData;
	NSString* _directorName;
	int _discNumber;
	float _downloadProgress;
	int _downloadState;
	int _editingStyleFlags;
	int _episodeNumber;
	int _episodeType;
	NSString* _genre;
	NSString* _localizedContentRating;
	NSString* _localizedDurationString;
	NSString* _lyricsURL;
	int _mediaSubType;
	int _mediaType;
	NSData* _nowPlayingInfoData;
	int _numberOfSections;
	int _playCount;
	float _playbackProgress;
	float _playbackRate;
	int _playlistType;
	NSString* _profileIdentifier;
	NSData* _purchaseInfoData;
	NSString* _radioStationName;
	NSString* _radioStationString;
	int _radioStationType;
	int _seasonNumber;
	NSString* _seriesName;
	NSString* _serviceIdentifier;
	NSString* _subtitle;
	NSString* _title;
	int _totalDiscCount;
	int _totalTrackCount;
	NSString* _trackArtistName;
	int _trackNumber;
	NSData* _userInfoData;
	BOOL _artworkAvailable;
	BOOL _infoAvailable;
	BOOL _isAlwaysLive;
	BOOL _isContainer;
	BOOL _isCurrentlyPlaying;
	BOOL _isExplicitItem;
	BOOL _isInWishList;
	BOOL _isLiked;
	BOOL _isLoading;
	BOOL _isPlayable;
	BOOL _isSharable;
	BOOL _isSteerable;
	BOOL _isStreamingContent;
	BOOL _languageOptionsAvailable;
	BOOL _lyricsAvailable;
	SCD_Struct_MR7 _has;

}
-(id)dictionaryRepresentation;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

