/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCJCOPRestrictedModeEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSData* _log;
	NSData* _uuidReference;
	BOOL _contactless;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasContactless; 
@property (assign,nonatomic) BOOL contactless;                          //@synthesize contactless=_contactless - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                    //@synthesize uuidReference=_uuidReference - In the implementation block
@property (nonatomic,readonly) BOOL hasLog; 
@property (nonatomic,retain) NSData * log;                              //@synthesize log=_log - In the implementation block
-(id)dictionaryRepresentation;
-(NSData *)log;
-(unsigned long long)timestamp;
-(void)setLog:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLog;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(NSData *)uuidReference;
-(void)setContactless:(BOOL)arg1 ;
-(void)setHasContactless:(BOOL)arg1 ;
-(BOOL)hasContactless;
-(BOOL)contactless;
@end

