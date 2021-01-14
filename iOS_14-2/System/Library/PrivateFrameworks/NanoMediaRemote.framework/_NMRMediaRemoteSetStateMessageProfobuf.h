/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _NMRMediaRemoteSetStateMessageProfobuf : PBCodable <NSCopying> {

	double _timestamp;
	NSData* _applicationInfo;
	NSData* _digest;
	NSData* _nowPlayingInfo;
	int _originIdentifier;
	NSData* _payload;
	NSData* _playbackQueue;
	int _state;
	NSData* _supportedCommands;
	SCD_Struct_NM2 _has;

}

@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) int state;                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL hasPayload; 
@property (nonatomic,retain) NSData * payload;                         //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) BOOL hasDigest; 
@property (nonatomic,retain) NSData * digest;                          //@synthesize digest=_digest - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasNowPlayingInfo; 
@property (nonatomic,retain) NSData * nowPlayingInfo;                  //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationInfo; 
@property (nonatomic,retain) NSData * applicationInfo;                 //@synthesize applicationInfo=_applicationInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasSupportedCommands; 
@property (nonatomic,retain) NSData * supportedCommands;               //@synthesize supportedCommands=_supportedCommands - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackQueue; 
@property (nonatomic,retain) NSData * playbackQueue;                   //@synthesize playbackQueue=_playbackQueue - In the implementation block
@property (assign,nonatomic) BOOL hasOriginIdentifier; 
@property (assign,nonatomic) int originIdentifier;                     //@synthesize originIdentifier=_originIdentifier - In the implementation block
-(void)setNowPlayingInfo:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPayload:(NSData *)arg1 ;
-(BOOL)hasState;
-(int)originIdentifier;
-(double)timestamp;
-(NSData *)playbackQueue;
-(void)setPlaybackQueue:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)supportedCommands;
-(void)setDigest:(NSData *)arg1 ;
-(BOOL)hasPayload;
-(NSData *)payload;
-(NSData *)nowPlayingInfo;
-(id)description;
-(void)setHasState:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setState:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(int)state;
-(BOOL)hasNowPlayingInfo;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)digest;
-(void)setSupportedCommands:(NSData *)arg1 ;
-(void)setOriginIdentifier:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)applicationInfo;
-(void)setHasOriginIdentifier:(BOOL)arg1 ;
-(BOOL)hasOriginIdentifier;
-(void)setApplicationInfo:(NSData *)arg1 ;
-(BOOL)hasDigest;
-(BOOL)hasApplicationInfo;
-(BOOL)hasSupportedCommands;
-(BOOL)hasPlaybackQueue;
@end

