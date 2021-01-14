/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VirtualGarage.framework/VirtualGarage
*/


@class NSString, NSDictionary, NSMeasurement, NSNumber;

@interface VGExternalAccessoryState : NSObject {

	NSString* _displayName;
	NSString* _mapsDisplayName;
	int _engineType;
	NSDictionary* _rangesByEngineType;
	BOOL _isCharging;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _year;
	NSString* _colorHex;
	NSMeasurement* _maxEVRange;
	NSString* _consumptionArguments;
	NSString* _chargingArguments;
	NSNumber* _batteryCharge;
	NSMeasurement* _minBatteryCapacity;
	NSMeasurement* _currentBatteryCapacity;
	NSMeasurement* _maxBatteryCapacity;
	NSNumber* _supportedConnectors;
	NSNumber* _activeConnector;
	NSDictionary* _powerByConnector;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * manufacturer;                             //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) NSString * model;                                    //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) NSString * year;                                     //@synthesize year=_year - In the implementation block
@property (nonatomic,readonly) NSString * colorHex;                                 //@synthesize colorHex=_colorHex - In the implementation block
@property (nonatomic,readonly) BOOL isPureElectricVehicle; 
@property (nonatomic,readonly) NSMeasurement * currentEVRange; 
@property (nonatomic,readonly) NSMeasurement * maxEVRange;                          //@synthesize maxEVRange=_maxEVRange - In the implementation block
@property (nonatomic,readonly) NSString * consumptionArguments;                     //@synthesize consumptionArguments=_consumptionArguments - In the implementation block
@property (nonatomic,readonly) NSString * chargingArguments;                        //@synthesize chargingArguments=_chargingArguments - In the implementation block
@property (nonatomic,readonly) NSNumber * batteryCharge;                            //@synthesize batteryCharge=_batteryCharge - In the implementation block
@property (nonatomic,readonly) NSMeasurement * minBatteryCapacity;                  //@synthesize minBatteryCapacity=_minBatteryCapacity - In the implementation block
@property (nonatomic,readonly) NSMeasurement * currentBatteryCapacity;              //@synthesize currentBatteryCapacity=_currentBatteryCapacity - In the implementation block
@property (nonatomic,readonly) NSMeasurement * maxBatteryCapacity;                  //@synthesize maxBatteryCapacity=_maxBatteryCapacity - In the implementation block
@property (nonatomic,readonly) NSNumber * supportedConnectors;                      //@synthesize supportedConnectors=_supportedConnectors - In the implementation block
@property (nonatomic,readonly) BOOL isCharging;                                     //@synthesize isCharging=_isCharging - In the implementation block
@property (nonatomic,readonly) NSNumber * activeConnector;                          //@synthesize activeConnector=_activeConnector - In the implementation block
@property (nonatomic,readonly) NSDictionary * powerByConnector;                     //@synthesize powerByConnector=_powerByConnector - In the implementation block
-(NSString *)year;
-(NSString *)model;
-(NSString *)manufacturer;
-(NSString *)consumptionArguments;
-(NSString *)chargingArguments;
-(NSNumber *)activeConnector;
-(NSMeasurement *)currentBatteryCapacity;
-(NSString *)name;
-(id)description;
-(NSString *)colorHex;
-(NSDictionary *)powerByConnector;
-(NSNumber *)supportedConnectors;
-(BOOL)isCharging;
-(BOOL)isPureElectricVehicle;
-(NSMeasurement *)maxEVRange;
-(NSMeasurement *)minBatteryCapacity;
-(NSMeasurement *)maxBatteryCapacity;
-(NSMeasurement *)currentEVRange;
-(void)_updateWithVehicleInfo:(id)arg1 ;
-(NSNumber *)batteryCharge;
@end

