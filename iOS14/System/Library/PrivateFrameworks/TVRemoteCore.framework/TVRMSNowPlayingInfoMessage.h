/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TVRMSNowPlayingInfoMessage : PBCodable <NSCopying> {

	unsigned long long _databaseID;
	unsigned long long _itemID;
	double _timeRemaining;
	double _timestamp;
	double _totalDuration;
	NSString* _albumName;
	NSString* _artistName;
	int _likedState;
	int _mediaKind;
	int _playbackState;
	unsigned _revisionNumber;
	int _scrubbableState;
	NSString* _trackName;
	BOOL _canSkipNext;
	BOOL _canSkipPrevious;
	BOOL _canWishlist;
	BOOL _hasChapterData;
	BOOL _likeable;
	SCD_Struct_TV7 _has;

}

@property (assign,nonatomic) BOOL hasItemID; 
@property (assign,nonatomic) unsigned long long itemID;                  //@synthesize itemID=_itemID - In the implementation block
@property (assign,nonatomic) BOOL hasDatabaseID; 
@property (assign,nonatomic) unsigned long long databaseID;              //@synthesize databaseID=_databaseID - In the implementation block
@property (nonatomic,readonly) BOOL hasTrackName; 
@property (nonatomic,retain) NSString * trackName;                       //@synthesize trackName=_trackName - In the implementation block
@property (nonatomic,readonly) BOOL hasArtistName; 
@property (nonatomic,retain) NSString * artistName;                      //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,readonly) BOOL hasAlbumName; 
@property (nonatomic,retain) NSString * albumName;                       //@synthesize albumName=_albumName - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTimeRemaining; 
@property (assign,nonatomic) double timeRemaining;                       //@synthesize timeRemaining=_timeRemaining - In the implementation block
@property (assign,nonatomic) BOOL hasTotalDuration; 
@property (assign,nonatomic) double totalDuration;                       //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) BOOL hasRevisionNumber; 
@property (assign,nonatomic) unsigned revisionNumber;                    //@synthesize revisionNumber=_revisionNumber - In the implementation block
@property (assign,nonatomic) BOOL hasMediaKind; 
@property (assign,nonatomic) int mediaKind;                              //@synthesize mediaKind=_mediaKind - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackState; 
@property (assign,nonatomic) int playbackState;                          //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,nonatomic) BOOL hasLikedState; 
@property (assign,nonatomic) int likedState;                             //@synthesize likedState=_likedState - In the implementation block
@property (assign,nonatomic) BOOL hasScrubbableState; 
@property (assign,nonatomic) int scrubbableState;                        //@synthesize scrubbableState=_scrubbableState - In the implementation block
@property (assign,nonatomic) BOOL hasCanSkipNext; 
@property (assign,nonatomic) BOOL canSkipNext;                           //@synthesize canSkipNext=_canSkipNext - In the implementation block
@property (assign,nonatomic) BOOL hasCanSkipPrevious; 
@property (assign,nonatomic) BOOL canSkipPrevious;                       //@synthesize canSkipPrevious=_canSkipPrevious - In the implementation block
@property (assign,nonatomic) BOOL hasLikeable; 
@property (assign,nonatomic) BOOL likeable;                              //@synthesize likeable=_likeable - In the implementation block
@property (assign,nonatomic) BOOL hasCanWishlist; 
@property (assign,nonatomic) BOOL canWishlist;                           //@synthesize canWishlist=_canWishlist - In the implementation block
@property (assign,nonatomic) BOOL hasHasChapterData; 
@property (assign,nonatomic) BOOL hasChapterData;                        //@synthesize hasChapterData=_hasChapterData - In the implementation block
-(void)setPlaybackState:(int)arg1 ;
-(double)totalDuration;
-(id)dictionaryRepresentation;
-(void)setAlbumName:(NSString *)arg1 ;
-(void)setItemID:(unsigned long long)arg1 ;
-(NSString *)albumName;
-(int)playbackState;
-(void)setHasPlaybackState:(BOOL)arg1 ;
-(void)setArtistName:(NSString *)arg1 ;
-(double)timestamp;
-(int)mediaKind;
-(BOOL)hasAlbumName;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)artistName;
-(void)setTotalDuration:(double)arg1 ;
-(void)setTimeRemaining:(double)arg1 ;
-(double)timeRemaining;
-(id)description;
-(unsigned long long)itemID;
-(int)likedState;
-(void)setLikedState:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDatabaseID:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMediaKind:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)databaseID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)hasArtistName;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasPlaybackState;
-(BOOL)hasChapterData;
-(BOOL)hasLikedState;
-(BOOL)hasHasChapterData;
-(void)setHasLikedState:(BOOL)arg1 ;
-(void)setHasChapterData:(BOOL)arg1 ;
-(void)setHasHasChapterData:(BOOL)arg1 ;
-(NSString *)trackName;
-(void)setHasItemID:(BOOL)arg1 ;
-(BOOL)hasItemID;
-(void)setHasDatabaseID:(BOOL)arg1 ;
-(BOOL)hasDatabaseID;
-(void)setRevisionNumber:(unsigned)arg1 ;
-(unsigned)revisionNumber;
-(void)setTrackName:(NSString *)arg1 ;
-(void)setLikeable:(BOOL)arg1 ;
-(void)setCanWishlist:(BOOL)arg1 ;
-(void)setCanSkipPrevious:(BOOL)arg1 ;
-(void)setCanSkipNext:(BOOL)arg1 ;
-(void)setScrubbableState:(int)arg1 ;
-(BOOL)hasTrackName;
-(void)setHasTimeRemaining:(BOOL)arg1 ;
-(BOOL)hasTimeRemaining;
-(void)setHasTotalDuration:(BOOL)arg1 ;
-(BOOL)hasTotalDuration;
-(void)setHasRevisionNumber:(BOOL)arg1 ;
-(BOOL)hasRevisionNumber;
-(void)setHasMediaKind:(BOOL)arg1 ;
-(BOOL)hasMediaKind;
-(void)setHasScrubbableState:(BOOL)arg1 ;
-(BOOL)hasScrubbableState;
-(void)setHasCanSkipNext:(BOOL)arg1 ;
-(BOOL)hasCanSkipNext;
-(void)setHasCanSkipPrevious:(BOOL)arg1 ;
-(BOOL)hasCanSkipPrevious;
-(void)setHasLikeable:(BOOL)arg1 ;
-(BOOL)hasLikeable;
-(void)setHasCanWishlist:(BOOL)arg1 ;
-(BOOL)hasCanWishlist;
-(int)scrubbableState;
-(BOOL)canSkipNext;
-(BOOL)canSkipPrevious;
-(BOOL)likeable;
-(BOOL)canWishlist;
@end

