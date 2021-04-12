/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRContentItemProtobuf, NSMutableArray, _MRPlaybackSessionRequestProtobuf, _MRNowPlayingPlayerPathProtobuf, NSString;

@interface _MRPlaybackSessionMigrateRequestProtobuf : PBCodable <NSCopying> {

	double _playbackPosition;
	double _playbackRate;
	_MRContentItemProtobuf* _contentItem;
	int _endpointOptions;
	NSMutableArray* _events;
	_MRPlaybackSessionRequestProtobuf* _playbackSessionRequest;
	int _playbackState;
	int _playerOptions;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	NSString* _requestID;
	SCD_Struct_MR17 _has;

}

@property (nonatomic,readonly) BOOL hasRequestID; 
@property (nonatomic,retain) NSString * requestID;                                                    //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) BOOL hasPlayerOptions; 
@property (assign,nonatomic) int playerOptions;                                                       //@synthesize playerOptions=_playerOptions - In the implementation block
@property (assign,nonatomic) BOOL hasEndpointOptions; 
@property (assign,nonatomic) int endpointOptions;                                                     //@synthesize endpointOptions=_endpointOptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;                                                 //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackPosition; 
@property (assign,nonatomic) double playbackPosition;                                                 //@synthesize playbackPosition=_playbackPosition - In the implementation block
@property (nonatomic,readonly) BOOL hasContentItem; 
@property (nonatomic,retain) _MRContentItemProtobuf * contentItem;                                    //@synthesize contentItem=_contentItem - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayerPath; 
@property (nonatomic,retain) _MRNowPlayingPlayerPathProtobuf * playerPath;                            //@synthesize playerPath=_playerPath - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackState; 
@property (assign,nonatomic) int playbackState;                                                       //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackRate; 
@property (assign,nonatomic) double playbackRate;                                                     //@synthesize playbackRate=_playbackRate - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackSessionRequest; 
@property (nonatomic,retain) _MRPlaybackSessionRequestProtobuf * playbackSessionRequest;              //@synthesize playbackSessionRequest=_playbackSessionRequest - In the implementation block
+(Class)eventsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)events;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)addEvents:(id)arg1 ;
-(unsigned long long)eventsCount;
-(void)clearEvents;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(double)playbackRate;
-(void)setPlaybackRate:(double)arg1 ;
-(void)setPlaybackPosition:(double)arg1 ;
-(int)playbackState;
-(_MRContentItemProtobuf *)contentItem;
-(double)playbackPosition;
-(void)setPlaybackState:(int)arg1 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(void)setPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(BOOL)hasRequestID;
-(BOOL)hasPlayerPath;
-(void)setHasPlaybackState:(BOOL)arg1 ;
-(BOOL)hasPlaybackState;
-(id)playbackStateAsString:(int)arg1 ;
-(int)StringAsPlaybackState:(id)arg1 ;
-(void)setHasPlaybackRate:(BOOL)arg1 ;
-(BOOL)hasPlaybackRate;
-(_MRPlaybackSessionRequestProtobuf *)playbackSessionRequest;
-(int)playerOptions;
-(void)setContentItem:(_MRContentItemProtobuf *)arg1 ;
-(void)setPlayerOptions:(int)arg1 ;
-(void)setEndpointOptions:(int)arg1 ;
-(void)setPlaybackSessionRequest:(_MRPlaybackSessionRequestProtobuf *)arg1 ;
-(int)endpointOptions;
-(BOOL)hasPlaybackPosition;
-(BOOL)hasContentItem;
-(void)setHasPlayerOptions:(BOOL)arg1 ;
-(BOOL)hasPlayerOptions;
-(id)playerOptionsAsString:(int)arg1 ;
-(int)StringAsPlayerOptions:(id)arg1 ;
-(void)setHasEndpointOptions:(BOOL)arg1 ;
-(BOOL)hasEndpointOptions;
-(id)endpointOptionsAsString:(int)arg1 ;
-(int)StringAsEndpointOptions:(id)arg1 ;
-(void)setHasPlaybackPosition:(BOOL)arg1 ;
-(BOOL)hasPlaybackSessionRequest;
@end

