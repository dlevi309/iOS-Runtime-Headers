/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOEVChargeInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _gainedBatteryPercentage;
	unsigned _chargingTime;
	unsigned _gainedBatteryCharge;
	unsigned _gainedTravelRange;
	struct {
		unsigned has_gainedBatteryPercentage : 1;
		unsigned has_chargingTime : 1;
		unsigned has_gainedBatteryCharge : 1;
		unsigned has_gainedTravelRange : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasChargingTime; 
@property (assign,nonatomic) unsigned chargingTime; 
@property (assign,nonatomic) BOOL hasGainedBatteryPercentage; 
@property (assign,nonatomic) double gainedBatteryPercentage; 
@property (assign,nonatomic) BOOL hasGainedTravelRange; 
@property (assign,nonatomic) unsigned gainedTravelRange; 
@property (assign,nonatomic) BOOL hasGainedBatteryCharge; 
@property (assign,nonatomic) unsigned gainedBatteryCharge; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setChargingTime:(unsigned)arg1 ;
-(void)setGainedBatteryPercentage:(double)arg1 ;
-(void)setGainedTravelRange:(unsigned)arg1 ;
-(void)setGainedBatteryCharge:(unsigned)arg1 ;
-(unsigned)chargingTime;
-(void)setHasChargingTime:(BOOL)arg1 ;
-(BOOL)hasChargingTime;
-(double)gainedBatteryPercentage;
-(BOOL)hasGainedBatteryPercentage;
-(void)setHasGainedBatteryPercentage:(BOOL)arg1 ;
-(unsigned)gainedTravelRange;
-(void)setHasGainedTravelRange:(BOOL)arg1 ;
-(BOOL)hasGainedTravelRange;
-(unsigned)gainedBatteryCharge;
-(void)setHasGainedBatteryCharge:(BOOL)arg1 ;
-(BOOL)hasGainedBatteryCharge;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

