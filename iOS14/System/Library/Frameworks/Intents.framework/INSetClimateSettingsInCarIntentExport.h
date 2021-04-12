/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMeasurement *)temperature;
-(INSpeakableString *)carName;
-(id)init;
-(void)setCarName:(id)arg1;
-(void)setTemperature:(id)arg1;
-(long long)climateZone;
-(NSNumber *)enableFan;
-(void)setEnableFan:(id)arg1;
-(long long)airCirculationMode;
-(void)setAirCirculationMode:(long long)arg1;
-(void)setClimateZone:(long long)arg1;
-(NSNumber *)enableAutoMode;
-(NSNumber *)enableAirConditioner;
-(void)setEnableAirConditioner:(id)arg1;
-(void)setEnableAutoMode:(id)arg1;
-(NSNumber *)fanSpeedIndex;
-(NSNumber *)enableClimateControl;
-(void)setEnableClimateControl:(id)arg1;
-(void)setFanSpeedIndex:(id)arg1;
-(NSNumber *)fanSpeedPercentage;
-(void)setFanSpeedPercentage:(id)arg1;
-(long long)relativeFanSpeedSetting;
-(void)setRelativeFanSpeedSetting:(long long)arg1;
-(long long)relativeTemperatureSetting;
-(void)setRelativeTemperatureSetting:(long long)arg1;

@end

