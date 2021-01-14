/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray, _MRLyricsItemProtobuf, _MRContentItemMetadataProtobuf;

@interface _MRContentItemProtobuf : PBCodable <NSCopying> {

	NSString* _ancestorIdentifier;
	NSData* _artworkData;
	int _artworkDataHeight;
	int _artworkDataWidth;
	NSMutableArray* _availableLanguageOptions;
	NSMutableArray* _currentLanguageOptions;
	NSString* _identifier;
	NSString* _info;
	_MRLyricsItemProtobuf* _lyrics;
	_MRContentItemMetadataProtobuf* _metadata;
	NSString* _parentIdentifier;
	NSString* _queueIdentifier;
	NSString* _requestIdentifier;
	NSMutableArray* _sections;
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

