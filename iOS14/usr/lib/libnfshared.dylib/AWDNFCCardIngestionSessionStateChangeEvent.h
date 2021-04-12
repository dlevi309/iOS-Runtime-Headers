/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCCardIngestionSessionStateChangeEvent : PBCodable <NSCopying> {

	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	unsigned _cardValidationStatus;
	unsigned _sPID;
	unsigned _sessionStatus;
	unsigned _spStatusCode;
	unsigned _state;
	unsigned _technology;
	NSData* _uuidReference;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                 //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDeltaFromReference; 
@property (assign,nonatomic) unsigned long long timeDeltaFromReference;              //@synthesize timeDeltaFromReference=_timeDeltaFromReference - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) unsigned state;                                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL hasTechnology; 
@property (assign,nonatomic) unsigned technology;                                    //@synthesize technology=_technology - In the implementation block
@property (assign,nonatomic) BOOL hasSpStatusCode; 
@property (assign,nonatomic) unsigned spStatusCode;                                  //@synthesize spStatusCode=_spStatusCode - In the implementation block
@property (assign,nonatomic) BOOL hasCardValidationStatus; 
@property (assign,nonatomic) unsigned cardValidationStatus;                          //@synthesize cardValidationStatus=_cardValidationStatus - In the implementation block
@property (assign,nonatomic) BOOL hasSessionStatus; 
@property (assign,nonatomic) unsigned sessionStatus;                                 //@synthesize sessionStatus=_sessionStatus - In the implementation block
@property (assign,nonatomic) BOOL hasSPID; 
@property (assign,nonatomic) unsigned sPID;                                          //@synthesize sPID=_sPID - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasState;
-(unsigned)sPID;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasState:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setState:(unsigned)arg1 ;
-(unsigned)sessionStatus;
-(unsigned long long)hash;
-(void)setSessionStatus:(unsigned)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned)state;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasSPID;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)technology;
-(void)setTechnology:(unsigned)arg1 ;
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
-(void)setHasTechnology:(BOOL)arg1 ;
-(BOOL)hasTechnology;
-(void)setSpStatusCode:(unsigned)arg1 ;
-(void)setHasSpStatusCode:(BOOL)arg1 ;
-(BOOL)hasSpStatusCode;
-(void)setCardValidationStatus:(unsigned)arg1 ;
-(void)setHasCardValidationStatus:(BOOL)arg1 ;
-(BOOL)hasCardValidationStatus;
-(void)setHasSessionStatus:(BOOL)arg1 ;
-(BOOL)hasSessionStatus;
-(void)setSPID:(unsigned)arg1 ;
-(void)setHasSPID:(BOOL)arg1 ;
-(unsigned)spStatusCode;
-(unsigned)cardValidationStatus;
@end

