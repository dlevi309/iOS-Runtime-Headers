/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOChargerPlugsInfo;

@interface GEOEVChargingInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOChargerPlugsInfo* _chargerPlugsInfo;
	unsigned _batteryChargeAfterCharging;
	unsigned _batteryPercentageAfterCharging;
	unsigned _chargingTime;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasChargingTime; 
@property (assign,nonatomic) unsigned chargingTime; 
@property (assign,nonatomic) BOOL hasBatteryPercentageAfterCharging; 
@property (assign,nonatomic) unsigned batteryPercentageAfterCharging; 
@property (assign,nonatomic) BOOL hasBatteryChargeAfterCharging; 
@property (assign,nonatomic) unsigned batteryChargeAfterCharging; 
@property (nonatomic,readonly) BOOL hasChargerPlugsInfo; 
@property (nonatomic,retain) GEOChargerPlugsInfo * chargerPlugsInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setChargingTime:(unsigned)arg1 ;
-(unsigned)chargingTime;
-(void)setHasChargingTime:(BOOL)arg1 ;
-(BOOL)hasChargingTime;
-(GEOChargerPlugsInfo *)chargerPlugsInfo;
-(void)setBatteryPercentageAfterCharging:(unsigned)arg1 ;
-(void)setBatteryChargeAfterCharging:(unsigned)arg1 ;
-(void)setChargerPlugsInfo:(GEOChargerPlugsInfo *)arg1 ;
-(unsigned)batteryPercentageAfterCharging;
-(void)setHasBatteryPercentageAfterCharging:(BOOL)arg1 ;
-(BOOL)hasChargerPlugsInfo;
-(BOOL)hasBatteryPercentageAfterCharging;
-(unsigned)batteryChargeAfterCharging;
-(void)setHasBatteryChargeAfterCharging:(BOOL)arg1 ;
-(BOOL)hasBatteryChargeAfterCharging;
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

