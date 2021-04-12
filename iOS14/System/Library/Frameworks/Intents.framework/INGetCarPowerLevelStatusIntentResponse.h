/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INGetCarPowerLevelStatusIntentResponseExport.h>

@class NSString, NSNumber, NSMeasurement, NSDictionary, NSDateComponents;

@interface INGetCarPowerLevelStatusIntentResponse : INIntentResponse <INGetCarPowerLevelStatusIntentResponseExport>

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSString * carIdentifier; 
@property (nonatomic,copy) NSNumber * fuelPercentRemaining; 
@property (nonatomic,copy) NSNumber * chargePercentRemaining; 
@property (nonatomic,copy) NSMeasurement * distanceRemaining; 
@property (nonatomic,copy) NSNumber * charging; 
@property (nonatomic,copy) NSNumber * minutesToFull; 
@property (nonatomic,copy) NSMeasurement * maximumDistance; 
@property (nonatomic,copy) NSMeasurement * distanceRemainingElectric; 
@property (nonatomic,copy) NSMeasurement * maximumDistanceElectric; 
@property (nonatomic,copy) NSMeasurement * distanceRemainingFuel; 
@property (nonatomic,copy) NSMeasurement * maximumDistanceFuel; 
@property (nonatomic,copy) NSDictionary * consumptionFormulaArguments; 
@property (nonatomic,copy) NSDictionary * chargingFormulaArguments; 
@property (nonatomic,copy) NSDateComponents * dateOfLastStateUpdate; 
@property (nonatomic,copy) NSString * activeConnector; 
@property (nonatomic,copy) NSMeasurement * maximumBatteryCapacity; 
@property (nonatomic,copy) NSMeasurement * currentBatteryCapacity; 
@property (nonatomic,copy) NSMeasurement * minimumBatteryCapacity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(int)_typeFromCode:(long long)arg1 ;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
-(id)init;
-(void)setMaximumDistance:(NSMeasurement *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)activeConnector;
-(void)setActiveConnector:(NSString *)arg1 ;
-(NSString *)carIdentifier;
-(void)setCarIdentifier:(NSString *)arg1 ;
-(NSNumber *)chargePercentRemaining;
-(void)setChargePercentRemaining:(NSNumber *)arg1 ;
-(NSDictionary *)chargingFormulaArguments;
-(void)setChargingFormulaArguments:(NSDictionary *)arg1 ;
-(NSDateComponents *)dateOfLastStateUpdate;
-(NSDictionary *)consumptionFormulaArguments;
-(void)setConsumptionFormulaArguments:(NSDictionary *)arg1 ;
-(NSNumber *)minutesToFull;
-(NSMeasurement *)currentBatteryCapacity;
-(void)setCurrentBatteryCapacity:(NSMeasurement *)arg1 ;
-(NSNumber *)fuelPercentRemaining;
-(void)setDateOfLastStateUpdate:(NSDateComponents *)arg1 ;
-(NSMeasurement *)distanceRemainingFuel;
-(NSMeasurement *)distanceRemainingElectric;
-(void)setDistanceRemainingElectric:(NSMeasurement *)arg1 ;
-(void)setDistanceRemainingFuel:(NSMeasurement *)arg1 ;
-(void)setFuelPercentRemaining:(NSNumber *)arg1 ;
-(NSMeasurement *)maximumBatteryCapacity;
-(void)setMaximumBatteryCapacity:(NSMeasurement *)arg1 ;
-(NSMeasurement *)maximumDistanceElectric;
-(void)setMaximumDistanceElectric:(NSMeasurement *)arg1 ;
-(NSMeasurement *)maximumDistanceFuel;
-(void)setMaximumDistanceFuel:(NSMeasurement *)arg1 ;
-(NSMeasurement *)minimumBatteryCapacity;
-(void)setMinimumBatteryCapacity:(NSMeasurement *)arg1 ;
-(void)setMinutesToFull:(NSNumber *)arg1 ;
-(NSMeasurement *)maximumDistance;
-(long long)_codeWithName:(id)arg1 ;
-(long long)_intentResponseCode;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(void)setPropertiesByName:(id)arg1 ;
-(id)propertiesByName;
-(id)initWithCoder:(id)arg1 ;
-(long long)code;
-(void)setDistanceRemaining:(NSMeasurement *)arg1 ;
-(NSMeasurement *)distanceRemaining;
-(NSNumber *)charging;
-(void)setCharging:(NSNumber *)arg1 ;
@end

