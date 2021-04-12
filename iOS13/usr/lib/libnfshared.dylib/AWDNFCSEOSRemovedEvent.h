/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_AW7 _has;

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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)reason;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setReason:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned)hardwareType;
-(void)setHardwareType:(unsigned)arg1 ;
-(BOOL)hasReason;
-(void)setHasReason:(BOOL)arg1 ;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(NSData *)uuidReference;
-(void)setHasHardwareType:(BOOL)arg1 ;
-(BOOL)hasHardwareType;
-(void)setHasExpressTransactionStarted:(BOOL)arg1 ;
-(void)setHasHasExpressTransactionStarted:(BOOL)arg1 ;
-(BOOL)hasHasExpressTransactionStarted;
-(void)setHasCardEmulationStarted:(BOOL)arg1 ;
-(void)setHasHasCardEmulationStarted:(BOOL)arg1 ;
-(BOOL)hasHasCardEmulationStarted;
-(BOOL)hasExpressTransactionStarted;
-(BOOL)hasCardEmulationStarted;
@end

