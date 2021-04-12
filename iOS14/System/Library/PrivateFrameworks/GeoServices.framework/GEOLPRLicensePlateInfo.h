/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOLPRLicensePlateStructure, NSMutableArray;

@interface GEOLPRLicensePlateInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOLPRLicensePlateStructure* _licensePlateStructure;
	NSMutableArray* _powerTypeKeys;
	NSMutableArray* _vehicleTypeKeys;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_licensePlateStructure : 1;
		unsigned read_powerTypeKeys : 1;
		unsigned read_vehicleTypeKeys : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * vehicleTypeKeys; 
@property (nonatomic,retain) NSMutableArray * powerTypeKeys; 
@property (nonatomic,readonly) BOOL hasLicensePlateStructure; 
@property (nonatomic,retain) GEOLPRLicensePlateStructure * licensePlateStructure; 
+(Class)vehicleTypeKeysType;
+(Class)powerTypeKeysType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSMutableArray *)vehicleTypeKeys;
-(NSMutableArray *)powerTypeKeys;
-(unsigned long long)vehicleTypeKeysCount;
-(void)clearVehicleTypeKeys;
-(unsigned long long)powerTypeKeysCount;
-(void)clearPowerTypeKeys;
-(void)setPowerTypeKeys:(NSMutableArray *)arg1 ;
-(void)setVehicleTypeKeys:(NSMutableArray *)arg1 ;
-(GEOLPRLicensePlateStructure *)licensePlateStructure;
-(void)addVehicleTypeKeys:(id)arg1 ;
-(void)addPowerTypeKeys:(id)arg1 ;
-(void)setLicensePlateStructure:(GEOLPRLicensePlateStructure *)arg1 ;
-(id)vehicleTypeKeysAtIndex:(unsigned long long)arg1 ;
-(id)powerTypeKeysAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasLicensePlateStructure;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
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

