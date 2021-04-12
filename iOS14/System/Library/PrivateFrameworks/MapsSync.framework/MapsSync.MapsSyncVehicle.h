/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncBaseItem.h>

@class NSString, NSData, NSDate, NSNumber;

@interface MapsSync.MapsSyncVehicle : MapsSync.MapsSyncBaseItem {

	 _colorHex;
	 _currentVehicleState;
	 _displayName;
	 _headUnitBluetoothIdentifier;
	 _headUnitMacAddress;
	 _iapIdentifier;
	 _licensePlate;
	 _lprPowerType;
	 _lprVehicleType;
	 _manufacturer;
	 _model;
	 _pairedAppIdentifier;
	 _powerByConnector;
	 _siriIntentsIdentifier;
	 _supportedConnectors;
	 _vehicleIdentifier;
	 _vehicleType;
	 _year;

}

@property (readonly,nonatomic) NSString * colorHex; 
@property (readonly,nonatomic) NSData * currentVehicleState; 
@property (readonly,nonatomic) NSDate * dateOfVehicleIngestion; 
@property (readonly,nonatomic) NSString * displayName; 
@property (readonly,nonatomic) NSString * headUnitBluetoothIdentifier; 
@property (readonly,nonatomic) NSString * headUnitMacAddress; 
@property (readonly,nonatomic) NSString * iapIdentifier; 
@property (readonly,nonatomic) NSDate * lastStateUpdateDate; 
@property (readonly,nonatomic) NSString * licensePlate; 
@property (readonly,nonatomic) NSString * lprPowerType; 
@property (readonly,nonatomic) NSString * lprVehicleType; 
@property (readonly,nonatomic) NSString * manufacturer; 
@property (readonly,nonatomic) NSString * model; 
@property (readonly,nonatomic) NSString * pairedAppIdentifier; 
@property (readonly,nonatomic) NSData * powerByConnector; 
@property (readonly,nonatomic) NSString * siriIntentsIdentifier; 
@property (readonly,nonatomic) NSNumber * supportedConnectors; 
@property (readonly,nonatomic) NSString * vehicleIdentifier; 
@property (readonly,nonatomic) NSNumber * vehicleType; 
@property (readonly,nonatomic) NSNumber * year; 
+(void)fetch:(long long)arg1 :(long long)arg2 :(id)arg3 sort:(long long)arg4 ascending:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
+(void)fetchForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSNumber *)year;
-(NSString *)model;
-(NSString *)manufacturer;
-(id)initWithObject:(id)arg1 ;
-(Class)managedObjectClass;
-(NSString *)vehicleIdentifier;
-(NSString *)licensePlate;
-(Class)mutableObjectClass;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(NSString *)colorHex;
-(NSData *)currentVehicleState;
-(NSDate *)dateOfVehicleIngestion;
-(NSString *)headUnitBluetoothIdentifier;
-(NSString *)headUnitMacAddress;
-(NSString *)iapIdentifier;
-(NSDate *)lastStateUpdateDate;
-(NSString *)lprPowerType;
-(NSString *)lprVehicleType;
-(NSString *)pairedAppIdentifier;
-(NSData *)powerByConnector;
-(NSString *)siriIntentsIdentifier;
-(NSNumber *)supportedConnectors;
-(NSNumber *)vehicleType;
-(void)setPropertiesWithObject:(id)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
@end

