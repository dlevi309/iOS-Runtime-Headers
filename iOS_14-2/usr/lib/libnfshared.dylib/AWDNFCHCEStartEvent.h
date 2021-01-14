/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCHCEStartEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _messageSize;
	unsigned _messageType;
	unsigned _type;
	NSData* _uuidReference;
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                    //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasMessageSize; 
@property (assign,nonatomic) unsigned messageSize;                      //@synthesize messageSize=_messageSize - In the implementation block
@property (assign,nonatomic) BOOL hasMessageType; 
@property (assign,nonatomic) unsigned messageType;                      //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                             //@synthesize type=_type - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned)messageType;
-(void)setMessageType:(unsigned)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(void)setHasMessageType:(BOOL)arg1 ;
-(BOOL)hasMessageType;
-(unsigned long long)timestamp;
-(BOOL)hasType;
-(void)setMessageSize:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(id)description;
-(unsigned)type;
-(void)setHasMessageSize:(BOOL)arg1 ;
-(BOOL)hasMessageSize;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)messageSize;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(NSData *)uuidReference;
@end

