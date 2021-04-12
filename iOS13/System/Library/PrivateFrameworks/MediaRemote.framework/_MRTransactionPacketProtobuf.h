/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) _MRTransactionKeyProtobuf * key;                    //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasPacketData; 
@property (nonatomic,retain) NSData * packetData;                                //@synthesize packetData=_packetData - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLength; 
@property (assign,nonatomic) unsigned long long totalLength;                     //@synthesize totalLength=_totalLength - In the implementation block
@property (assign,nonatomic) BOOL hasTotalWritePosition; 
@property (assign,nonatomic) unsigned long long totalWritePosition;              //@synthesize totalWritePosition=_totalWritePosition - In the implementation block
+(void)initialize;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_MRTransactionKeyProtobuf *)key;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setKey:(_MRTransactionKeyProtobuf *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasKey;
-(BOOL)hasIdentifier;
-(void)setPacketData:(NSData *)arg1 ;
-(BOOL)hasPacketData;
-(void)setTotalLength:(unsigned long long)arg1 ;
-(void)setHasTotalLength:(BOOL)arg1 ;
-(BOOL)hasTotalLength;
-(void)setTotalWritePosition:(unsigned long long)arg1 ;
-(void)setHasTotalWritePosition:(BOOL)arg1 ;
-(BOOL)hasTotalWritePosition;
-(NSData *)packetData;
-(unsigned long long)totalLength;
-(unsigned long long)totalWritePosition;
-(id)customDictionaryRepresentation;
@end

