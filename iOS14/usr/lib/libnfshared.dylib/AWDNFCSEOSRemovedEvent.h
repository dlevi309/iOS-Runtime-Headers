/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCSEOSRemovedEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _hardwareType;
	unsigned _reason;
	NSData* _uuidReference;
	BOOL _hasCardEmulationStarted;
	BOOL _hasExpressTransactionStarted;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) unsigned reason;                                   //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                            //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasHasExpressTransactionStarted; 
@property (assign,nonatomic) BOOL hasExpressTransactionStarted;                 //@synthesize hasExpressTransactionStarted=_hasExpressTransactionStarted - In the implementation block
@property (assign,nonatomic) BOOL hasHasCardEmulationStarted; 
@property (assign,nonatomic) BOOL hasCardEmulationStarted;                      //@synthesize hasCardEmulationStarted=_hasCardEmulationStarted - In the implementation block
@property (assign,nonatomic) BOOL hasHardwareType; 
@property (assign,nonatomic) unsigned hardwareType;                             //@synthesize hardwareType=_hardwareType - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasReason;
-(unsigned)hardwareType;
-(void)setHardwareType:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(void)setHasHardwareType:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(id)description;
-(unsigned)reason;
-(BOOL)hasHardwareType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setReason:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(NSData *)uuidReference;
-(void)setHasExpressTransactionStarted:(BOOL)arg1 ;
-(void)setHasHasExpressTransactionStarted:(BOOL)arg1 ;
-(BOOL)hasHasExpressTransactionStarted;
-(void)setHasCardEmulationStarted:(BOOL)arg1 ;
-(void)setHasHasCardEmulationStarted:(BOOL)arg1 ;
-(BOOL)hasHasCardEmulationStarted;
-(BOOL)hasExpressTransactionStarted;
-(BOOL)hasCardEmulationStarted;
@end

