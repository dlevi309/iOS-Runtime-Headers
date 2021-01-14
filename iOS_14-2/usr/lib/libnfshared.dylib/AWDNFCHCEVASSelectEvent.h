/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCHCEVASSelectEvent : PBCodable <NSCopying> {

	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	unsigned _mobileCapabilities;
	unsigned _swStatus;
	NSData* _uuidReference;
	unsigned _version;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                                       //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasMobileCapabilities; 
@property (assign,nonatomic) unsigned mobileCapabilities;                            //@synthesize mobileCapabilities=_mobileCapabilities - In the implementation block
@property (assign,nonatomic) BOOL hasSwStatus; 
@property (assign,nonatomic) unsigned swStatus;                                      //@synthesize swStatus=_swStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                 //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDeltaFromReference; 
@property (assign,nonatomic) unsigned long long timeDeltaFromReference;              //@synthesize timeDeltaFromReference=_timeDeltaFromReference - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(void)setHasTimeDeltaFromReference:(BOOL)arg1 ;
-(BOOL)hasTimeDeltaFromReference;
-(NSData *)uuidReference;
-(unsigned long long)timeDeltaFromReference;
-(void)setSwStatus:(unsigned)arg1 ;
-(void)setHasSwStatus:(BOOL)arg1 ;
-(BOOL)hasSwStatus;
-(unsigned)swStatus;
-(void)setMobileCapabilities:(unsigned)arg1 ;
-(void)setHasMobileCapabilities:(BOOL)arg1 ;
-(BOOL)hasMobileCapabilities;
-(unsigned)mobileCapabilities;
@end

