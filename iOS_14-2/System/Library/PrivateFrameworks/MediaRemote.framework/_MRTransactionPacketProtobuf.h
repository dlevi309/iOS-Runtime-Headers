/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _MRTransactionKeyProtobuf, NSData;

@interface _MRTransactionPacketProtobuf : PBCodable <NSCopying> {

	unsigned long long _totalLength;
	unsigned long long _totalWritePosition;
	NSString* _identifier;
	_MRTransactionKeyProtobuf* _key;
	NSData* _packetData;
	SCD_Struct_MR2 _has;

}
+(void)initialize;
-(id)dictionaryRepresentation;
-(id)customDictionaryRepresentation;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

