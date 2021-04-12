/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _MRNowPlayingInfoProtobuf, _MRPlaybackQueueProtobuf, _MRPlaybackQueueCapabilitiesProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackQueueRequestProtobuf, _MRSupportedCommandsProtobuf;

@interface _MRSetStateMessageProtobuf : PBCodable <NSCopying> {

	double _playbackStateTimestamp;
	NSString* _displayID;
	NSString* _displayName;
	_MRNowPlayingInfoProtobuf* _nowPlayingInfo;
	_MRPlaybackQueueProtobuf* _playbackQueue;
	_MRPlaybackQueueCapabilitiesProtobuf* _playbackQueueCapabilities;
	int _playbackState;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	_MRPlaybackQueueRequestProtobuf* _request;
	_MRSupportedCommandsProtobuf* _supportedCommands;
	SCD_Struct_MR2 _has;

}

@property (nonatomic,readonly) BOOL hasNowPlayingInfo; 
@property (nonatomic,retain) _MRNowPlayingInfoProtobuf * nowPlayingInfo;                                    //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasSupportedCommands; 
@property (nonatomic,retain) _MRSupportedCommandsProtobuf * supportedCommands;                              //@synthesize supportedCommands=_supportedCommands - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackQueue; 
@property (nonatomic,retain) _MRPlaybackQueueProtobuf * playbackQueue;                                      //@synthesize playbackQueue=_playbackQueue - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayID; 
@property (nonatomic,retain) NSString * displayID;                                                          //@synthesize displayID=_displayID - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                                                        //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackState; 
@property (assign,nonatomic) int playbackState;                                                             //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackQueueCapabilities; 
@property (nonatomic,retain) _MRPlaybackQueueCapabilitiesProtobuf * playbackQueueCapabilities;              //@synthesize playbackQueueCapabilities=_playbackQueueCapabilities - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayerPath; 
@property (nonatomic,retain) _MRNowPlayingPlayerPathProtobuf * playerPath;                                  //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) _MRPlaybackQueueRequestProtobuf * request;                                     //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackStateTimestamp; 
@property (assign,nonatomic) double playbackStateTimestamp;                                                 //@synthesize playbackStateTimestamp=_playbackStateTimestamp - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRequest:(_MRPlaybackQueueRequestProtobuf *)arg1 ;
-(_MRPlaybackQueueRequestProtobuf *)request;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)displayID;
-(BOOL)hasDisplayName;
-(BOOL)hasRequest;
-(_MRNowPlayingInfoProtobuf *)nowPlayingInfo;
-(void)setNowPlayingInfo:(_MRNowPlayingInfoProtobuf *)arg1 ;
-(BOOL)hasNowPlayingInfo;
-(int)playbackState;
-(_MRPlaybackQueueProtobuf *)playbackQueue;
-(void)setPlaybackState:(int)arg1 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(void)setDisplayID:(NSString *)arg1 ;
-(void)setPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(BOOL)hasPlayerPath;
-(_MRSupportedCommandsProtobuf *)supportedCommands;
-(void)setSupportedCommands:(_MRSupportedCommandsProtobuf *)arg1 ;
-(void)setPlaybackQueue:(_MRPlaybackQueueProtobuf *)arg1 ;
-(void)setPlaybackQueueCapabilities:(_MRPlaybackQueueCapabilitiesProtobuf *)arg1 ;
-(_MRPlaybackQueueCapabilitiesProtobuf *)playbackQueueCapabilities;
-(void)setPlaybackStateTimestamp:(double)arg1 ;
-(BOOL)hasSupportedCommands;
-(BOOL)hasPlaybackQueue;
-(BOOL)hasDisplayID;
-(void)setHasPlaybackState:(BOOL)arg1 ;
-(BOOL)hasPlaybackState;
-(id)playbackStateAsString:(int)arg1 ;
-(int)StringAsPlaybackState:(id)arg1 ;
-(BOOL)hasPlaybackQueueCapabilities;
-(void)setHasPlaybackStateTimestamp:(BOOL)arg1 ;
-(BOOL)hasPlaybackStateTimestamp;
-(double)playbackStateTimestamp;
@end

