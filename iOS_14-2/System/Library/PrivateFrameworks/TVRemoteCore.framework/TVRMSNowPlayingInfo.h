/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class NSString;

@interface TVRMSNowPlayingInfo : NSObject {

	BOOL _canSkipNext;
	BOOL _canSkipPrevious;
	BOOL _canWishlist;
	BOOL _hasChapterData;
	BOOL _likeable;
	int _revisionNumber;
	unsigned long long _itemID;
	unsigned long long _databaseID;
	NSString* _trackName;
	NSString* _artistName;
	NSString* _albumName;
	double _timestamp;
	double _timeRemaining;
	double _totalDuration;
	long long _mediaKind;
	long long _playbackState;
	long long _likedState;
	long long _scrubbableState;

}

@property (assign,nonatomic) unsigned long long itemID;                    //@synthesize itemID=_itemID - In the implementation block
@property (assign,nonatomic) unsigned long long databaseID;                //@synthesize databaseID=_databaseID - In the implementation block
@property (nonatomic,retain) NSString * trackName;                         //@synthesize trackName=_trackName - In the implementation block
@property (nonatomic,retain) NSString * artistName;                        //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,retain) NSString * albumName;                         //@synthesize albumName=_albumName - In the implementation block
@property (assign,nonatomic) double timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double timeRemaining;                         //@synthesize timeRemaining=_timeRemaining - In the implementation block
@property (assign,nonatomic) double totalDuration;                         //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) int revisionNumber;                           //@synthesize revisionNumber=_revisionNumber - In the implementation block
@property (assign,nonatomic) long long mediaKind;                          //@synthesize mediaKind=_mediaKind - In the implementation block
@property (assign,nonatomic) long long playbackState;                      //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,nonatomic) long long likedState;                         //@synthesize likedState=_likedState - In the implementation block
@property (assign,nonatomic) long long scrubbableState;                    //@synthesize scrubbableState=_scrubbableState - In the implementation block
@property (assign,nonatomic) BOOL canSkipNext;                             //@synthesize canSkipNext=_canSkipNext - In the implementation block
@property (assign,nonatomic) BOOL canSkipPrevious;                         //@synthesize canSkipPrevious=_canSkipPrevious - In the implementation block
@property (assign,nonatomic) BOOL canWishlist;                             //@synthesize canWishlist=_canWishlist - In the implementation block
@property (assign,nonatomic) BOOL hasChapterData;                          //@synthesize hasChapterData=_hasChapterData - In the implementation block
@property (assign,getter=isLikeable,nonatomic) BOOL likeable;              //@synthesize likeable=_likeable - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (nonatomic,readonly) NSString * artworkIdentifier; 
-(void)setPlaybackState:(long long)arg1 ;
-(double)totalDuration;
-(void)setAlbumName:(NSString *)arg1 ;
-(void)setItemID:(unsigned long long)arg1 ;
-(NSString *)albumName;
-(NSString *)artworkIdentifier;
-(BOOL)isPlaying;
-(long long)playbackState;
-(void)setArtistName:(NSString *)arg1 ;
-(double)timestamp;
-(long long)mediaKind;
-(NSString *)artistName;
-(void)setTotalDuration:(double)arg1 ;
-(void)setTimeRemaining:(double)arg1 ;
-(double)timeRemaining;
-(id)description;
-(unsigned long long)itemID;
-(long long)likedState;
-(void)setLikedState:(long long)arg1 ;
-(id)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setDatabaseID:(unsigned long long)arg1 ;
-(void)setMediaKind:(long long)arg1 ;
-(unsigned long long)databaseID;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)hasChapterData;
-(void)setHasChapterData:(BOOL)arg1 ;
-(NSString *)trackName;
-(void)setRevisionNumber:(int)arg1 ;
-(int)revisionNumber;
-(void)setTrackName:(NSString *)arg1 ;
-(void)setLikeable:(BOOL)arg1 ;
-(void)setCanWishlist:(BOOL)arg1 ;
-(void)setCanSkipPrevious:(BOOL)arg1 ;
-(void)setCanSkipNext:(BOOL)arg1 ;
-(void)setScrubbableState:(long long)arg1 ;
-(long long)scrubbableState;
-(BOOL)canSkipNext;
-(BOOL)canSkipPrevious;
-(BOOL)canWishlist;
-(BOOL)isLikeable;
@end

