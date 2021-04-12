/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, _MRPlaybackQueueContextProtobuf, NSString, _MRNowPlayingPlayerPathProtobuf;

@interface _MRPlaybackQueueRequestProtobuf : PBCodable <NSCopying> {

	double _artworkHeight;
	double _artworkWidth;
	int _cachingPolicy;
	NSMutableArray* _contentItemIdentifiers;
	_MRPlaybackQueueContextProtobuf* _context;
	NSString* _label;
	int _length;
	int _location;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	NSString* _requestID;
	BOOL _includeInfo;
	BOOL _includeLanguageOptions;
	BOOL _includeLyrics;
	BOOL _includeMetadata;
	BOOL _includeSections;
	BOOL _isLegacyNowPlayingInfoRequest;
	BOOL _returnContentItemAssetsInUserCompletion;
	SCD_Struct_MR3 _has;

}
-(id)dictionaryRepresentation;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

