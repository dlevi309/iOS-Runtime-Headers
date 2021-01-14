/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCCRSAuthExceptionEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _statusCode;
	unsigned _type;
	NSData* _uuidReference;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                    //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) unsigned statusCode;                       //@synthesize statusCode=_statusCode - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasType:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(void)setStatusCode:(unsigned)arg1 ;
-(unsigned)statusCode;
-(id)description;
-(unsigned)type;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)hasStatusCode;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(NSData *)uuidReference;
@end

