/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface _NMRCommandOptionsProtobuf : PBCodable <NSCopying> {

	double _playbackPosition;
	long long _radioStationID;
	unsigned long long _trackID;
	NSString* _contentItemID;
	NSString* _contextID;
	NSString* _destinationAppDisplayID;
	NSString* _mediaType;
	int _playbackQueueInsertionPosition;
	float _playbackRate;
	int _queueEndAction;
	NSString* _radioStationHash;
	float _rating;
	int _repeatMode;
	unsigned _sendOptions;
	int _shuffleMode;
	float _skipInterval;
	NSString* _sourceID;
	NSString* _stationURL;
	NSData* _systemAppPlaybackQueueData;
	BOOL _externalPlayerCommand;
	BOOL _negative;
	BOOL _requestDefermentToPlaybackQueuePosition;
	BOOL _shouldBeginRadioPlayback;
	BOOL _shouldOverrideManuallyCuratedQueue;
	SCD_Struct_NM11 _has;

}

@property (nonatomic,readonly) BOOL hasSourceID; 
@property (nonatomic,retain) NSString * sourceID;                                          //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) BOOL hasMediaType; 
@property (nonatomic,retain) NSString * mediaType;                                         //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) BOOL hasExternalPlayerCommand; 
@property (assign,nonatomic) BOOL externalPlayerCommand;                                   //@synthesize externalPlayerCommand=_externalPlayerCommand - In the implementation block
@property (assign,nonatomic) BOOL hasSkipInterval; 
@property (assign,nonatomic) float skipInterval;                                           //@synthesize skipInterval=_skipInterval - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackRate; 
@property (assign,nonatomic) float playbackRate;                                           //@synthesize playbackRate=_playbackRate - In the implementation block
@property (assign,nonatomic) BOOL hasRating; 
@property (assign,nonatomic) float rating;                                                 //@synthesize rating=_rating - In the implementation block
@property (assign,nonatomic) BOOL hasNegative; 
@property (assign,nonatomic) BOOL negative;                                                //@synthesize negative=_negative - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackPosition; 
@property (assign,nonatomic) double playbackPosition;                                      //@synthesize playbackPosition=_playbackPosition - In the implementation block
@property (assign,nonatomic) BOOL hasRepeatMode; 
@property (assign,nonatomic) int repeatMode;                                               //@synthesize repeatMode=_repeatMode - In the implementation block
@property (assign,nonatomic) BOOL hasShuffleMode; 
@property (assign,nonatomic) int shuffleMode;                                              //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (nonatomic,readonly) BOOL hasContextID; 
@property (nonatomic,retain) NSString * contextID;                                         //@synthesize contextID=_contextID - In the implementation block
@property (assign,nonatomic) BOOL hasTrackID; 
@property (assign,nonatomic) unsigned long long trackID;                                   //@synthesize trackID=_trackID - In the implementation block
@property (assign,nonatomic) BOOL hasRadioStationID; 
@property (assign,nonatomic) long long radioStationID;                                     //@synthesize radioStationID=_radioStationID - In the implementation block
@property (nonatomic,readonly) BOOL hasRadioStationHash; 
@property (nonatomic,retain) NSString * radioStationHash;                                  //@synthesize radioStationHash=_radioStationHash - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemAppPlaybackQueueData; 
@property (nonatomic,retain) NSData * systemAppPlaybackQueueData;                          //@synthesize systemAppPlaybackQueueData=_systemAppPlaybackQueueData - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationAppDisplayID; 
@property (nonatomic,retain) NSString * destinationAppDisplayID;                           //@synthesize destinationAppDisplayID=_destinationAppDisplayID - In the implementation block
@property (assign,nonatomic) BOOL hasSendOptions; 
@property (assign,nonatomic) unsigned sendOptions;                                         //@synthesize sendOptions=_sendOptions - In the implementation block
@property (assign,nonatomic) BOOL hasRequestDefermentToPlaybackQueuePosition; 
@property (assign,nonatomic) BOOL requestDefermentToPlaybackQueuePosition;                 //@synthesize requestDefermentToPlaybackQueuePosition=_requestDefermentToPlaybackQueuePosition - In the implementation block
@property (assign,nonatomic) BOOL hasShouldOverrideManuallyCuratedQueue; 
@property (assign,nonatomic) BOOL shouldOverrideManuallyCuratedQueue;                      //@synthesize shouldOverrideManuallyCuratedQueue=_shouldOverrideManuallyCuratedQueue - In the implementation block
@property (nonatomic,readonly) BOOL hasStationURL; 
@property (nonatomic,retain) NSString * stationURL;                                        //@synthesize stationURL=_stationURL - In the implementation block
@property (assign,nonatomic) BOOL hasShouldBeginRadioPlayback; 
@property (assign,nonatomic) BOOL shouldBeginRadioPlayback;                                //@synthesize shouldBeginRadioPlayback=_shouldBeginRadioPlayback - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackQueueInsertionPosition; 
@property (assign,nonatomic) int playbackQueueInsertionPosition;                           //@synthesize playbackQueueInsertionPosition=_playbackQueueInsertionPosition - In the implementation block
@property (nonatomic,readonly) BOOL hasContentItemID; 
@property (nonatomic,retain) NSString * contentItemID;                                     //@synthesize contentItemID=_contentItemID - In the implementation block
@property (assign,nonatomic) BOOL hasQueueEndAction; 
@property (assign,nonatomic) int queueEndAction;                                           //@synthesize queueEndAction=_queueEndAction - In the implementation block
-(float)rating;
-(void)setPlaybackRate:(float)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSourceID:(NSString *)arg1 ;
-(void)setHasPlaybackRate:(BOOL)arg1 ;
-(void)setMediaType:(NSString *)arg1 ;
-(float)playbackRate;
-(void)setPlaybackPosition:(double)arg1 ;
-(void)setShuffleMode:(int)arg1 ;
-(NSString *)mediaType;
-(int)queueEndAction;
-(void)setHasTrackID:(BOOL)arg1 ;
-(void)setHasRadioStationID:(BOOL)arg1 ;
-(BOOL)hasRadioStationID;
-(BOOL)hasSystemAppPlaybackQueueData;
-(unsigned)sendOptions;
-(void)setSendOptions:(unsigned)arg1 ;
-(void)setHasSendOptions:(BOOL)arg1 ;
-(BOOL)hasSendOptions;
-(void)setRequestDefermentToPlaybackQueuePosition:(BOOL)arg1 ;
-(BOOL)hasStationURL;
-(BOOL)hasContentItemID;
-(NSString *)stationURL;
-(void)setHasRequestDefermentToPlaybackQueuePosition:(BOOL)arg1 ;
-(BOOL)hasRequestDefermentToPlaybackQueuePosition;
-(void)setHasShouldOverrideManuallyCuratedQueue:(BOOL)arg1 ;
-(void)setQueueEndAction:(int)arg1 ;
-(BOOL)hasShouldOverrideManuallyCuratedQueue;
-(void)setShouldBeginRadioPlayback:(BOOL)arg1 ;
-(void)setHasShouldBeginRadioPlayback:(BOOL)arg1 ;
-(BOOL)hasShouldBeginRadioPlayback;
-(void)setPlaybackQueueInsertionPosition:(int)arg1 ;
-(void)setHasPlaybackQueueInsertionPosition:(BOOL)arg1 ;
-(BOOL)hasPlaybackQueueInsertionPosition;
-(void)setHasRepeatMode:(BOOL)arg1 ;
-(BOOL)hasRepeatMode;
-(id)repeatModeAsString:(int)arg1 ;
-(int)StringAsRepeatMode:(id)arg1 ;
-(void)setHasShuffleMode:(BOOL)arg1 ;
-(BOOL)hasShuffleMode;
-(id)shuffleModeAsString:(int)arg1 ;
-(int)StringAsShuffleMode:(id)arg1 ;
-(BOOL)negative;
-(BOOL)hasRadioStationHash;
-(BOOL)hasMediaType;
-(void)setHasQueueEndAction:(BOOL)arg1 ;
-(BOOL)hasQueueEndAction;
-(id)queueEndActionAsString:(int)arg1 ;
-(int)StringAsQueueEndAction:(id)arg1 ;
-(float)skipInterval;
-(BOOL)externalPlayerCommand;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRating;
-(unsigned long long)trackID;
-(void)setDestinationAppDisplayID:(NSString *)arg1 ;
-(NSData *)systemAppPlaybackQueueData;
-(BOOL)shouldBeginRadioPlayback;
-(BOOL)requestDefermentToPlaybackQueuePosition;
-(int)playbackQueueInsertionPosition;
-(BOOL)hasDestinationAppDisplayID;
-(NSString *)destinationAppDisplayID;
-(int)repeatMode;
-(void)setRating:(float)arg1 ;
-(BOOL)hasPlaybackRate;
-(id)description;
-(void)setRepeatMode:(int)arg1 ;
-(void)setContextID:(NSString *)arg1 ;
-(NSString *)radioStationHash;
-(void)setRadioStationHash:(NSString *)arg1 ;
-(long long)radioStationID;
-(void)setRadioStationID:(long long)arg1 ;
-(void)setContentItemID:(NSString *)arg1 ;
-(NSString *)contextID;
-(NSString *)contentItemID;
-(double)playbackPosition;
-(unsigned long long)hash;
-(BOOL)hasNegative;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)sourceID;
-(BOOL)hasTrackID;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)shouldOverrideManuallyCuratedQueue;
-(void)setShouldOverrideManuallyCuratedQueue:(BOOL)arg1 ;
-(void)setNegative:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTrackID:(unsigned long long)arg1 ;
-(BOOL)hasSourceID;
-(void)setHasRating:(BOOL)arg1 ;
-(int)shuffleMode;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSystemAppPlaybackQueueData:(NSData *)arg1 ;
-(void)setStationURL:(NSString *)arg1 ;
-(BOOL)hasContextID;
-(void)setSkipInterval:(float)arg1 ;
-(void)setExternalPlayerCommand:(BOOL)arg1 ;
-(BOOL)hasExternalPlayerCommand;
-(void)setHasExternalPlayerCommand:(BOOL)arg1 ;
-(void)setHasSkipInterval:(BOOL)arg1 ;
-(BOOL)hasSkipInterval;
-(void)setHasNegative:(BOOL)arg1 ;
-(void)setHasPlaybackPosition:(BOOL)arg1 ;
-(BOOL)hasPlaybackPosition;
@end

