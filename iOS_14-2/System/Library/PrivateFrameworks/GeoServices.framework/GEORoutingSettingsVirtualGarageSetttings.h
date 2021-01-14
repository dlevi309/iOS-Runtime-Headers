/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORoutingSettingsVirtualGarageSetttings : PBCodable <NSCopying> {

	int _electronicVehicleCount;
	int _licensePlateCount;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasElectronicVehicleCount; 
@property (assign,nonatomic) int electronicVehicleCount; 
@property (assign,nonatomic) BOOL hasLicensePlateCount; 
@property (assign,nonatomic) int licensePlateCount; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setElectronicVehicleCount:(int)arg1 ;
-(void)setLicensePlateCount:(int)arg1 ;
-(int)electronicVehicleCount;
-(void)setHasElectronicVehicleCount:(BOOL)arg1 ;
-(BOOL)hasElectronicVehicleCount;
-(int)licensePlateCount;
-(void)setHasLicensePlateCount:(BOOL)arg1 ;
-(BOOL)hasLicensePlateCount;
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

