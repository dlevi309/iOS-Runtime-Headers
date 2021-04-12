/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface _MRNowPlayingInfoProtobuf : PBCodable <NSCopying> {

	double _duration;
	double _elapsedTime;
	long long _radioStationIdentifier;
	double _timestamp;
	unsigned long long _uniqueIdentifier;
	NSString* _album;
	NSString* _artist;
	NSData* _artworkDataDigest;
	float _playbackRate;
	NSString* _radioStationHash;
	NSString* _radioStationName;
	int _repeatMode;
	int _shuffleMode;
	NSString* _title;
	BOOL _isAdvertisement;
	BOOL _isAlwaysLive;
	BOOL _isExplicitTrack;
	BOOL _isMusicApp;
	SCD_Struct_MR3 _has;

}

@property (nonatomic,readonly) BOOL hasAlbum; 
@property (nonatomic,retain) NSString * album;                                 //@synthesize album=_album - In the implementation block
@property (nonatomic,readonly) BOOL hasArtist; 
@property (nonatomic,retain) NSString * artist;                                //@synthesize artist=_artist - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasElapsedTime; 
@property (assign,nonatomic) double elapsedTime;                               //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackRate; 
@property (assign,nonatomic) float playbackRate;                               //@synthesize playbackRate=_playbackRate - In the implementation block
@property (assign,nonatomic) BOOL hasRepeatMode; 
@property (assign,nonatomic) int repeatMode;                                   //@synthesize repeatMode=_repeatMode - In the implementation block
@property (assign,nonatomic) BOOL hasShuffleMode; 
@property (assign,nonatomic) int shuffleMode;                                  //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL hasUniqueIdentifier; 
@property (assign,nonatomic) unsigned long long uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasIsExplicitTrack; 
@property (assign,nonatomic) BOOL isExplicitTrack;                             //@synthesize isExplicitTrack=_isExplicitTrack - In the implementation block
@property (assign,nonatomic) BOOL hasIsMusicApp; 
@property (assign,nonatomic) BOOL isMusicApp;                                  //@synthesize isMusicApp=_isMusicApp - In the implementation block
@property (assign,nonatomic) BOOL hasRadioStationIdentifier; 
@property (assign,nonatomic) long long radioStationIdentifier;                 //@synthesize radioStationIdentifier=_radioStationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRadioStationHash; 
@property (nonatomic,retain) NSString * radioStationHash;                      //@synthesize radioStationHash=_radioStationHash - In the implementation block
@property (nonatomic,readonly) BOOL hasRadioStationName; 
@property (nonatomic,retain) NSString * radioStationName;                      //@synthesize radioStationName=_radioStationName - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkDataDigest; 
@property (nonatomic,retain) NSData * artworkDataDigest;                       //@synthesize artworkDataDigest=_artworkDataDigest - In the implementation block
@property (assign,nonatomic) BOOL hasIsAlwaysLive; 
@property (assign,nonatomic) BOOL isAlwaysLive;                                //@synthesize isAlwaysLive=_isAlwaysLive - In the implementation block
@property (assign,nonatomic) BOOL hasIsAdvertisement; 
@property (assign,nonatomic) BOOL isAdvertisement;                             //@synthesize isAdvertisement=_isAdvertisement - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)uniqueIdentifier;
-(double)duration;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)album;
-(NSString *)artist;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUniqueIdentifier:(unsigned long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(BOOL)hasTitle;
-(double)elapsedTime;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasUniqueIdentifier:(BOOL)arg1 ;
-(BOOL)hasUniqueIdentifier;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setAlbum:(NSString *)arg1 ;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(BOOL)hasArtist;
-(void)setElapsedTime:(double)arg1 ;
-(int)repeatMode;
-(void)setRepeatMode:(int)arg1 ;
-(BOOL)isExplicitTrack;
-(BOOL)isAlwaysLive;
-(int)shuffleMode;
-(void)setShuffleMode:(int)arg1 ;
-(NSString *)radioStationName;
-(void)setRadioStationName:(NSString *)arg1 ;
-(NSString *)radioStationHash;
-(void)setRadioStationHash:(NSString *)arg1 ;
-(void)setArtworkDataDigest:(NSData *)arg1 ;
-(NSData *)artworkDataDigest;
-(BOOL)hasElapsedTime;
-(BOOL)hasAlbum;
-(void)setHasElapsedTime:(BOOL)arg1 ;
-(void)setHasPlaybackRate:(BOOL)arg1 ;
-(BOOL)hasPlaybackRate;
-(void)setHasRepeatMode:(BOOL)arg1 ;
-(BOOL)hasRepeatMode;
-(id)repeatModeAsString:(int)arg1 ;
-(int)StringAsRepeatMode:(id)arg1 ;
-(void)setHasShuffleMode:(BOOL)arg1 ;
-(BOOL)hasShuffleMode;
-(id)shuffleModeAsString:(int)arg1 ;
-(int)StringAsShuffleMode:(id)arg1 ;
-(void)setIsExplicitTrack:(BOOL)arg1 ;
-(void)setHasIsExplicitTrack:(BOOL)arg1 ;
-(BOOL)hasIsExplicitTrack;
-(void)setIsMusicApp:(BOOL)arg1 ;
-(void)setHasIsMusicApp:(BOOL)arg1 ;
-(BOOL)hasIsMusicApp;
-(void)setRadioStationIdentifier:(long long)arg1 ;
-(void)setHasRadioStationIdentifier:(BOOL)arg1 ;
-(BOOL)hasRadioStationIdentifier;
-(BOOL)hasRadioStationHash;
-(BOOL)hasRadioStationName;
-(BOOL)hasArtworkDataDigest;
-(void)setIsAlwaysLive:(BOOL)arg1 ;
-(void)setHasIsAlwaysLive:(BOOL)arg1 ;
-(BOOL)hasIsAlwaysLive;
-(void)setIsAdvertisement:(BOOL)arg1 ;
-(void)setHasIsAdvertisement:(BOOL)arg1 ;
-(BOOL)hasIsAdvertisement;
-(BOOL)isMusicApp;
-(long long)radioStationIdentifier;
-(BOOL)isAdvertisement;
@end

