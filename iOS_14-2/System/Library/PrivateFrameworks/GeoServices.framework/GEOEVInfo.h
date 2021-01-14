/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOChargerPlugsInfo, NSString;

@interface GEOEVInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOChargerPlugsInfo* _chargerPlugsInfo;
	NSString* _chargingArguments;
	NSString* _consumptionArguments;
	NSString* _vehicleIdentifier;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _currentBatteryCharge;
	unsigned _currentBatteryPercentage;
	unsigned _lastSocUpdateDate;
	unsigned _maxBatteryCharge;
	unsigned _maxRange;
	unsigned _minBatteryCharge;
	BOOL _isCharging;
	struct {
		unsigned has_currentBatteryCharge : 1;
		unsigned has_currentBatteryPercentage : 1;
		unsigned has_lastSocUpdateDate : 1;
		unsigned has_maxBatteryCharge : 1;
		unsigned has_maxRange : 1;
		unsigned has_minBatteryCharge : 1;
		unsigned has_isCharging : 1;
		unsigned read_unknownFields : 1;
		unsigned read_chargerPlugsInfo : 1;
		unsigned read_chargingArguments : 1;
		unsigned read_consumptionArguments : 1;
		unsigned read_vehicleIdentifier : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasCurrentBatteryPercentage; 
@property (assign,nonatomic) unsigned currentBatteryPercentage; 
@property (assign,nonatomic) BOOL hasMaxRange; 
@property (assign,nonatomic) unsigned maxRange; 
@property (nonatomic,readonly) BOOL hasConsumptionArguments; 
@property (nonatomic,retain) NSString * consumptionArguments; 
@property (nonatomic,readonly) BOOL hasChargingArguments; 
@property (nonatomic,retain) NSString * chargingArguments; 
@property (assign,nonatomic) BOOL hasCurrentBatteryCharge; 
@property (assign,nonatomic) unsigned currentBatteryCharge; 
@property (assign,nonatomic) BOOL hasMaxBatteryCharge; 
@property (assign,nonatomic) unsigned maxBatteryCharge; 
@property (assign,nonatomic) BOOL hasIsCharging; 
@property (assign,nonatomic) BOOL isCharging; 
@property (assign,nonatomic) BOOL hasMinBatteryCharge; 
@property (assign,nonatomic) unsigned minBatteryCharge; 
@property (nonatomic,readonly) BOOL hasVehicleIdentifier; 
@property (nonatomic,retain) NSString * vehicleIdentifier; 
@property (nonatomic,readonly) BOOL hasChargerPlugsInfo; 
@property (nonatomic,retain) GEOChargerPlugsInfo * chargerPlugsInfo; 
@property (assign,nonatomic) BOOL hasLastSocUpdateDate; 
@property (assign,nonatomic) unsigned lastSocUpdateDate; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasMaxRange;
-(void)setCurrentBatteryPercentage:(unsigned)arg1 ;
-(GEOChargerPlugsInfo *)chargerPlugsInfo;
-(void)setChargerPlugsInfo:(GEOChargerPlugsInfo *)arg1 ;
-(BOOL)hasChargerPlugsInfo;
-(NSString *)consumptionArguments;
-(NSString *)chargingArguments;
-(NSString *)vehicleIdentifier;
-(void)setMaxRange:(unsigned)arg1 ;
-(void)setConsumptionArguments:(NSString *)arg1 ;
-(void)setChargingArguments:(NSString *)arg1 ;
-(void)setCurrentBatteryCharge:(unsigned)arg1 ;
-(void)setMaxBatteryCharge:(unsigned)arg1 ;
-(void)setIsCharging:(BOOL)arg1 ;
-(void)setMinBatteryCharge:(unsigned)arg1 ;
-(void)setVehicleIdentifier:(NSString *)arg1 ;
-(void)setLastSocUpdateDate:(unsigned)arg1 ;
-(void)setHasCurrentBatteryPercentage:(BOOL)arg1 ;
-(BOOL)hasCurrentBatteryPercentage;
-(void)setHasMaxRange:(BOOL)arg1 ;
-(BOOL)hasConsumptionArguments;
-(BOOL)hasChargingArguments;
-(unsigned)currentBatteryCharge;
-(void)setHasCurrentBatteryCharge:(BOOL)arg1 ;
-(BOOL)hasCurrentBatteryCharge;
-(unsigned)maxBatteryCharge;
-(BOOL)hasMaxBatteryCharge;
-(void)setHasMaxBatteryCharge:(BOOL)arg1 ;
-(void)setHasIsCharging:(BOOL)arg1 ;
-(BOOL)hasIsCharging;
-(unsigned)minBatteryCharge;
-(void)setHasMinBatteryCharge:(BOOL)arg1 ;
-(BOOL)hasMinBatteryCharge;
-(BOOL)hasVehicleIdentifier;
-(unsigned)lastSocUpdateDate;
-(void)setHasLastSocUpdateDate:(BOOL)arg1 ;
-(BOOL)hasLastSocUpdateDate;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned)maxRange;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)isCharging;
-(unsigned)currentBatteryPercentage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

