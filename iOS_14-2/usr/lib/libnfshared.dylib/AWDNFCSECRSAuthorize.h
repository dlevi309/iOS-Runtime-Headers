/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCSECRSAuthorize : PBCodable <NSCopying> {

	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	NSData* _aid;
	unsigned _method;
	unsigned _status;
	NSData* _uuidReference;
	BOOL _activated;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) unsigned status;                                        //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasMethod; 
@property (assign,nonatomic) unsigned method;                                        //@synthesize method=_method - In the implementation block
@property (assign,nonatomic) BOOL hasActivated; 
@property (assign,nonatomic) BOOL activated;                                         //@synthesize activated=_activated - In the implementation block
@property (nonatomic,readonly) BOOL hasAid; 
@property (nonatomic,retain) NSData * aid;                                           //@synthesize aid=_aid - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                 //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDeltaFromReference; 
@property (assign,nonatomic) unsigned long long timeDeltaFromReference;              //@synthesize timeDeltaFromReference=_timeDeltaFromReference - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)activated;
-(NSData *)aid;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasMethod;
-(unsigned)method;
-(unsigned long long)timestamp;
-(void)setHasMethod:(BOOL)arg1 ;
-(BOOL)hasActivated;
-(void)setHasActivated:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setActivated:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(BOOL)hasAid;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(void)setMethod:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setAid:(NSData *)arg1 ;
-(void)setStatus:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
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

