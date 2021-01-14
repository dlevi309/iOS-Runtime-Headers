/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString, NSNumber, NSMeasurement, NSDictionary, NSDateComponents;


@protocol INGetCarPowerLevelStatusIntentResponseExport <NSObject,JSExport>
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
@required
-(void)setMaximumDistance:(id)arg1;
-(NSString *)activeConnector;
-(void)setActiveConnector:(id)arg1;
-(NSString *)carIdentifier;
-(void)setCarIdentifier:(id)arg1;
-(NSNumber *)chargePercentRemaining;
-(void)setChargePercentRemaining:(id)arg1;
-(NSDictionary *)chargingFormulaArguments;
-(void)setChargingFormulaArguments:(id)arg1;
-(NSDateComponents *)dateOfLastStateUpdate;
-(NSDictionary *)consumptionFormulaArguments;
-(void)setConsumptionFormulaArguments:(id)arg1;
-(NSNumber *)minutesToFull;
-(NSMeasurement *)currentBatteryCapacity;
-(void)setCurrentBatteryCapacity:(id)arg1;
-(NSNumber *)fuelPercentRemaining;
-(void)setDateOfLastStateUpdate:(id)arg1;
-(NSMeasurement *)distanceRemainingFuel;
-(NSMeasurement *)distanceRemainingElectric;
-(void)setDistanceRemainingElectric:(id)arg1;
-(void)setDistanceRemainingFuel:(id)arg1;
-(void)setFuelPercentRemaining:(id)arg1;
-(NSMeasurement *)maximumBatteryCapacity;
-(void)setMaximumBatteryCapacity:(id)arg1;
-(NSMeasurement *)maximumDistanceElectric;
-(void)setMaximumDistanceElectric:(id)arg1;
-(NSMeasurement *)maximumDistanceFuel;
-(void)setMaximumDistanceFuel:(id)arg1;
-(NSMeasurement *)minimumBatteryCapacity;
-(void)setMinimumBatteryCapacity:(id)arg1;
-(void)setMinutesToFull:(id)arg1;
-(NSMeasurement *)maximumDistance;
-(long long)code;
-(void)setDistanceRemaining:(id)arg1;
-(NSMeasurement *)distanceRemaining;
-(NSNumber *)charging;
-(void)setCharging:(id)arg1;

@end

