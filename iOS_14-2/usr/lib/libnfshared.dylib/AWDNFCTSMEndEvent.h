/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCTSMEndEvent : PBCodable <NSCopying> {

	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	NSData* _aid;
	NSData* _discretionaryData;
	unsigned _lcState;
	unsigned _status;
	NSData* _uuidReference;
	BOOL _authEnable;
	BOOL _mfdEnable;
	BOOL _restricted;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) unsigned status;                                        //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasAuthEnable; 
@property (assign,nonatomic) BOOL authEnable;                                        //@synthesize authEnable=_authEnable - In the implementation block
@property (assign,nonatomic) BOOL hasMfdEnable; 
@property (assign,nonatomic) BOOL mfdEnable;                                         //@synthesize mfdEnable=_mfdEnable - In the implementation block
@property (assign,nonatomic) BOOL hasLcState; 
@property (assign,nonatomic) unsigned lcState;                                       //@synthesize lcState=_lcState - In the implementation block
@property (assign,nonatomic) BOOL hasRestricted; 
@property (assign,nonatomic) BOOL restricted;                                        //@synthesize restricted=_restricted - In the implementation block
@property (nonatomic,readonly) BOOL hasAid; 
@property (nonatomic,retain) NSData * aid;                                           //@synthesize aid=_aid - In the implementation block
@property (nonatomic,readonly) BOOL hasDiscretionaryData; 
@property (nonatomic,retain) NSData * discretionaryData;                             //@synthesize discretionaryData=_discretionaryData - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                 //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDeltaFromReference; 
@property (assign,nonatomic) unsigned long long timeDeltaFromReference;              //@synthesize timeDeltaFromReference=_timeDeltaFromReference - In the implementation block
-(id)dictionaryRepresentation;
-(NSData *)aid;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)setRestricted:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)discretionaryData;
-(BOOL)hasStatus;
-(BOOL)hasAid;
-(id)description;
-(BOOL)restricted;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setAid:(NSData *)arg1 ;
-(unsigned)lcState;
-(void)setStatus:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)status;
-(void)setDiscretionaryData:(NSData *)arg1 ;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(void)setHasTimeDeltaFromReference:(BOOL)arg1 ;
-(BOOL)hasTimeDeltaFromReference;
-(NSData *)uuidReference;
-(unsigned long long)timeDeltaFromReference;
-(void)setAuthEnable:(BOOL)arg1 ;
-(void)setHasAuthEnable:(BOOL)arg1 ;
-(BOOL)hasAuthEnable;
-(void)setMfdEnable:(BOOL)arg1 ;
-(void)setHasMfdEnable:(BOOL)arg1 ;
-(BOOL)hasMfdEnable;
-(void)setLcState:(unsigned)arg1 ;
-(void)setHasLcState:(BOOL)arg1 ;
-(BOOL)hasLcState;
-(void)setHasRestricted:(BOOL)arg1 ;
-(BOOL)hasRestricted;
-(BOOL)hasDiscretionaryData;
-(BOOL)authEnable;
-(BOOL)mfdEnable;
@end

