/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSNumber, NSMeasurement, INSpeakableString;


@protocol INSetClimateSettingsInCarIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSNumber * enableFan; 
@property (nonatomic,copy) NSNumber * enableAirConditioner; 
@property (nonatomic,copy) NSNumber * enableClimateControl; 
@property (nonatomic,copy) NSNumber * enableAutoMode; 
@property (assign,nonatomic) long long airCirculationMode; 
@property (nonatomic,copy) NSNumber * fanSpeedIndex; 
@property (nonatomic,copy) NSNumber * fanSpeedPercentage; 
@property (assign,nonatomic) long long relativeFanSpeedSetting; 
@property (nonatomic,copy) NSMeasurement * temperature; 
@property (assign,nonatomic) long long relativeTemperatureSetting; 
@property (assign,nonatomic) long long climateZone; 
@property (nonatomic,copy) INSpeakableString * carName; 
@required
-(id)init;
-(INSpeakableString *)carName;
-(void)setCarName:(id)arg1;
-(NSMeasurement *)temperature;
-(void)setTemperature:(id)arg1;
-(long long)airCirculationMode;
-(void)setAirCirculationMode:(long long)arg1;
-(long long)climateZone;
-(void)setClimateZone:(long long)arg1;
-(NSNumber *)enableAirConditioner;
-(void)setEnableAirConditioner:(id)arg1;
-(NSNumber *)enableAutoMode;
-(void)setEnableAutoMode:(id)arg1;
-(NSNumber *)enableClimateControl;
-(void)setEnableClimateControl:(id)arg1;
-(NSNumber *)enableFan;
-(void)setEnableFan:(id)arg1;
-(NSNumber *)fanSpeedIndex;
-(void)setFanSpeedIndex:(id)arg1;
-(NSNumber *)fanSpeedPercentage;
-(void)setFanSpeedPercentage:(id)arg1;
-(long long)relativeFanSpeedSetting;
-(void)setRelativeFanSpeedSetting:(long long)arg1;
-(long long)relativeTemperatureSetting;
-(void)setRelativeTemperatureSetting:(long long)arg1;

@end

