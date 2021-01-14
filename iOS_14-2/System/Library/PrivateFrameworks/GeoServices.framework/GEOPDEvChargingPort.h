/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDEvChargingPort : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _chargingConnectorType;
	int _chargingLevel;
	unsigned _power;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasPower; 
@property (assign,nonatomic) unsigned power; 
@property (assign,nonatomic) BOOL hasChargingConnectorType; 
@property (assign,nonatomic) int chargingConnectorType; 
@property (assign,nonatomic) BOOL hasChargingLevel; 
@property (assign,nonatomic) int chargingLevel; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setChargingConnectorType:(int)arg1 ;
-(void)setHasPower:(BOOL)arg1 ;
-(void)setChargingLevel:(int)arg1 ;
-(int)chargingConnectorType;
-(void)setHasChargingConnectorType:(BOOL)arg1 ;
-(int)chargingLevel;
-(BOOL)hasChargingConnectorType;
-(id)chargingConnectorTypeAsString:(int)arg1 ;
-(int)StringAsChargingConnectorType:(id)arg1 ;
-(void)setHasChargingLevel:(BOOL)arg1 ;
-(BOOL)hasChargingLevel;
-(id)chargingLevelAsString:(int)arg1 ;
-(int)StringAsChargingLevel:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasPower;
-(id)description;
-(unsigned)power;
-(unsigned long long)hash;
-(void)setPower:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

