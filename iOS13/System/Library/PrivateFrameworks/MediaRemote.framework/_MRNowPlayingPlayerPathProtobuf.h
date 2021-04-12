/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRNowPlayingClientProtobuf, _MROriginProtobuf, _MRNowPlayingPlayerProtobuf;

@interface _MRNowPlayingPlayerPathProtobuf : PBCodable <NSCopying> {

	_MRNowPlayingClientProtobuf* _client;
	_MROriginProtobuf* _origin;
	_MRNowPlayingPlayerProtobuf* _player;

}

@property (nonatomic,readonly) BOOL isLocal; 
@property (nonatomic,readonly) BOOL isResolved; 
@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) _MROriginProtobuf * origin;                        //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) BOOL hasClient; 
@property (nonatomic,retain) _MRNowPlayingClientProtobuf * client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayer; 
@property (nonatomic,retain) _MRNowPlayingPlayerProtobuf * player;              //@synthesize player=_player - In the implementation block
+(void)initialize;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(_MRNowPlayingClientProtobuf *)client;
-(void)setClient:(_MRNowPlayingClientProtobuf *)arg1 ;
-(BOOL)isResolved;
-(void)writeTo:(id)arg1 ;
-(_MROriginProtobuf *)origin;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setOrigin:(_MROriginProtobuf *)arg1 ;
-(BOOL)isLocal;
-(BOOL)hasOrigin;
-(id)customDescription;
-(_MRNowPlayingPlayerProtobuf *)player;
-(void)setPlayer:(_MRNowPlayingPlayerProtobuf *)arg1 ;
-(BOOL)hasClient;
-(id)customDictionaryRepresentation;
-(BOOL)hasPlayer;
@end

