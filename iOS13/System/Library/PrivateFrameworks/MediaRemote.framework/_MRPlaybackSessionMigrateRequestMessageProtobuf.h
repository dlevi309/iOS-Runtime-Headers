/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRPlaybackSessionProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionMigrateRequestProtobuf;

@interface _MRPlaybackSessionMigrateRequestMessageProtobuf : PBCodable <NSCopying> {

	_MRPlaybackSessionProtobuf* _playbackSession;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	_MRPlaybackSessionMigrateRequestProtobuf* _request;

}

@property (nonatomic,readonly) BOOL hasPlaybackSession; 
@property (nonatomic,retain) _MRPlaybackSessionProtobuf * playbackSession;                    //@synthesize playbackSession=_playbackSession - In the implementation block
@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) _MRPlaybackSessionMigrateRequestProtobuf * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayerPath; 
@property (nonatomic,retain) _MRNowPlayingPlayerPathProtobuf * playerPath;                    //@synthesize playerPath=_playerPath - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRequest:(_MRPlaybackSessionMigrateRequestProtobuf *)arg1 ;
-(_MRPlaybackSessionMigrateRequestProtobuf *)request;
-(BOOL)hasRequest;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(void)setPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(BOOL)hasPlayerPath;
-(_MRPlaybackSessionProtobuf *)playbackSession;
-(void)setPlaybackSession:(_MRPlaybackSessionProtobuf *)arg1 ;
-(BOOL)hasPlaybackSession;
@end

