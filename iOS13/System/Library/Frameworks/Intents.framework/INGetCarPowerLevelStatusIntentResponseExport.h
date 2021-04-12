/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSNumber, NSMeasurement;


@protocol INGetCarPowerLevelStatusIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSNumber * fuelPercentRemaining; 
@property (nonatomic,copy) NSNumber * chargePercentRemaining; 
@property (nonatomic,copy) NSMeasurement * distanceRemaining; 
@property (nonatomic,copy) NSNumber * charging; 
@property (nonatomic,copy) NSNumber * minutesToFull; 
@required
-(long long)code;
-(NSMeasurement *)distanceRemaining;
-(void)setDistanceRemaining:(id)arg1;
-(NSNumber *)charging;
-(void)setCharging:(id)arg1;
-(NSNumber *)chargePercentRemaining;
-(void)setChargePercentRemaining:(id)arg1;
-(NSNumber *)fuelPercentRemaining;
-(void)setFuelPercentRemaining:(id)arg1;
-(NSNumber *)minutesToFull;
-(void)setMinutesToFull:(id)arg1;

@end

