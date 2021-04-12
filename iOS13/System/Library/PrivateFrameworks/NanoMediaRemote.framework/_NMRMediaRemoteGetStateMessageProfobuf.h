/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _NMRMediaRemoteGetStateMessageProfobuf : PBCodable <NSCopying> {

	double _timestamp;
	NSData* _applicationInfoDigest;
	NSData* _knownDigest;
	NSData* _nowPlayingInfoDigest;
	int _originIdentifier;
	NSData* _playbackQueueDigest;
	int _state;
	NSData* _supportedCommandsDigest;
	SCD_Struct_NM2 _has;

}

@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) int state;                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL hasKnownDigest; 
@property (nonatomic,retain) NSData * knownDigest;                           //@synthesize knownDigest=_knownDigest - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasNowPlayingInfoDigest; 
@property (nonatomic,retain) NSData * nowPlayingInfoDigest;                  //@synthesize nowPlayingInfoDigest=_nowPlayingInfoDigest - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationInfoDigest; 
@property (nonatomic,retain) NSData * applicationInfoDigest;                 //@synthesize applicationInfoDigest=_applicationInfoDigest - In the implementation block
@property (nonatomic,readonly) BOOL hasSupportedCommandsDigest; 
@property (nonatomic,retain) NSData * supportedCommandsDigest;               //@synthesize supportedCommandsDigest=_supportedCommandsDigest - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackQueueDigest; 
@property (nonatomic,retain) NSData * playbackQueueDigest;                   //@synthesize playbackQueueDigest=_playbackQueueDigest - In the implementation block
@property (assign,nonatomic) BOOL hasOriginIdentifier; 
@property (assign,nonatomic) int originIdentifier;                           //@synthesize originIdentifier=_originIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)state;
-(double)timestamp;
-(void)setState:(int)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)originIdentifier;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasState;
-(void)setHasState:(BOOL)arg1 ;
-(void)setOriginIdentifier:(int)arg1 ;
-(void)setHasOriginIdentifier:(BOOL)arg1 ;
-(BOOL)hasOriginIdentifier;
-(void)setNowPlayingInfoDigest:(NSData *)arg1 ;
-(void)setApplicationInfoDigest:(NSData *)arg1 ;
-(void)setSupportedCommandsDigest:(NSData *)arg1 ;
-(void)setPlaybackQueueDigest:(NSData *)arg1 ;
-(NSData *)nowPlayingInfoDigest;
-(NSData *)applicationInfoDigest;
-(NSData *)supportedCommandsDigest;
-(NSData *)playbackQueueDigest;
-(void)setKnownDigest:(NSData *)arg1 ;
-(BOOL)hasKnownDigest;
-(BOOL)hasNowPlayingInfoDigest;
-(BOOL)hasApplicationInfoDigest;
-(BOOL)hasSupportedCommandsDigest;
-(BOOL)hasPlaybackQueueDigest;
-(NSData *)knownDigest;
@end

