/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCHCIStartOfTransactionEvent : PBCodable <NSCopying> {

	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	unsigned _status;
	NSData* _uuidReference;
	unsigned _version;
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                                       //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) unsigned status;                                        //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                 //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDeltaFromReference; 
@property (assign,nonatomic) unsigned long long timeDeltaFromReference;              //@synthesize timeDeltaFromReference=_timeDeltaFromReference - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(void)setHasStatus:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasStatus;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(unsigned)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)status;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(void)setHasTimeDeltaFromReference:(BOOL)arg1 ;
-(BOOL)hasTimeDeltaFromReference;
-(NSData *)uuidReference;
-(unsigned long long)timeDeltaFromReference;
@end

