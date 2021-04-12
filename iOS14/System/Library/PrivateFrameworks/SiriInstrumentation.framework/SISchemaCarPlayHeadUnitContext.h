/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaCarPlayHeadUnitContext : PBCodable {

	NSString* _vehicleName;
	NSString* _vehicleModel;
	NSString* _vehicleManufacturer;
	BOOL _hasVehicleName;
	BOOL _hasVehicleModel;
	BOOL _hasVehicleManufacturer;

}

@property (nonatomic,copy) NSString * vehicleName;                      //@synthesize vehicleName=_vehicleName - In the implementation block
@property (assign,nonatomic) BOOL hasVehicleName;                       //@synthesize hasVehicleName=_hasVehicleName - In the implementation block
@property (nonatomic,copy) NSString * vehicleModel;                     //@synthesize vehicleModel=_vehicleModel - In the implementation block
@property (assign,nonatomic) BOOL hasVehicleModel;                      //@synthesize hasVehicleModel=_hasVehicleModel - In the implementation block
@property (nonatomic,copy) NSString * vehicleManufacturer;              //@synthesize vehicleManufacturer=_vehicleManufacturer - In the implementation block
@property (assign,nonatomic) BOOL hasVehicleManufacturer;               //@synthesize hasVehicleManufacturer=_hasVehicleManufacturer - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(NSString *)vehicleModel;
-(void)setVehicleManufacturer:(NSString *)arg1 ;
-(void)setVehicleName:(NSString *)arg1 ;
-(NSString *)vehicleManufacturer;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)vehicleName;
-(void)setVehicleModel:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasVehicleName;
-(BOOL)hasVehicleModel;
-(BOOL)hasVehicleManufacturer;
-(void)setHasVehicleName:(BOOL)arg1 ;
-(void)setHasVehicleModel:(BOOL)arg1 ;
-(void)setHasVehicleManufacturer:(BOOL)arg1 ;
@end

