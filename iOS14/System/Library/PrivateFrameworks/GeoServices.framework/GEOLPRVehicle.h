/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOLPRVehicle : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _licensePlate;
	NSString* _name;
	NSString* _powerTypeKey;
	NSString* _vehicleTypeKey;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_licensePlate : 1;
		unsigned read_name : 1;
		unsigned read_powerTypeKey : 1;
		unsigned read_vehicleTypeKey : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) BOOL hasPowerTypeKey; 
@property (nonatomic,retain) NSString * powerTypeKey; 
@property (nonatomic,readonly) BOOL hasVehicleTypeKey; 
@property (nonatomic,retain) NSString * vehicleTypeKey; 
@property (nonatomic,readonly) BOOL hasLicensePlate; 
@property (nonatomic,retain) NSString * licensePlate; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)licensePlate;
-(id)initWithData:(id)arg1 ;
-(NSString *)vehicleTypeKey;
-(NSString *)powerTypeKey;
-(void)setLicensePlate:(NSString *)arg1 ;
-(void)setVehicleTypeKey:(NSString *)arg1 ;
-(void)setPowerTypeKey:(NSString *)arg1 ;
-(BOOL)hasLicensePlate;
-(BOOL)hasVehicleTypeKey;
-(BOOL)hasPowerTypeKey;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

