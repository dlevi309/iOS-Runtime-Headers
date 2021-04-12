/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

