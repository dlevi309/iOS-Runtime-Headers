/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateDeviceBase : PBCodable <NSCopying> {

	int _deviceBatteryState;
	int _deviceInterfaceOrientation;
	BOOL _deviceInVehicle;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasDeviceInterfaceOrientation; 
@property (assign,nonatomic) int deviceInterfaceOrientation; 
@property (assign,nonatomic) BOOL hasDeviceBatteryState; 
@property (assign,nonatomic) int deviceBatteryState; 
@property (assign,nonatomic) BOOL hasDeviceInVehicle; 
@property (assign,nonatomic) BOOL deviceInVehicle; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setDeviceInterfaceOrientation:(int)arg1 ;
-(void)setDeviceBatteryState:(int)arg1 ;
-(void)setDeviceInVehicle:(BOOL)arg1 ;
-(int)deviceInterfaceOrientation;
-(BOOL)hasDeviceBatteryState;
-(void)setHasDeviceInterfaceOrientation:(BOOL)arg1 ;
-(BOOL)hasDeviceInterfaceOrientation;
-(void)setHasDeviceBatteryState:(BOOL)arg1 ;
-(id)deviceInterfaceOrientationAsString:(int)arg1 ;
-(int)StringAsDeviceInterfaceOrientation:(id)arg1 ;
-(int)deviceBatteryState;
-(id)deviceBatteryStateAsString:(int)arg1 ;
-(int)StringAsDeviceBatteryState:(id)arg1 ;
-(BOOL)deviceInVehicle;
-(void)setHasDeviceInVehicle:(BOOL)arg1 ;
-(BOOL)hasDeviceInVehicle;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

