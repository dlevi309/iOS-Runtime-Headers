/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_MR16 _has;

}
-(id)dictionaryRepresentation;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

