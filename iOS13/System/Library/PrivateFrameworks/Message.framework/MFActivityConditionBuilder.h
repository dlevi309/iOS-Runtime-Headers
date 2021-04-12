/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol MFActivityConditionBuilder <NSObject>
@property (assign,nonatomic) BOOL requireExternalPower; 
@property (assign,nonatomic) BOOL requireWiFi; 
@property (assign,nonatomic) BOOL requireScreenLocked; 
@property (assign,nonatomic) BOOL requireLowPowerModeDisabled; 
@property (assign,nonatomic) float minBatteryLevel; 
@property (assign,nonatomic) long long maxThermalPressureLevel; 
@required
-(BOOL)requireExternalPower;
-(float)minBatteryLevel;
-(BOOL)requireLowPowerModeDisabled;
-(BOOL)requireWiFi;
-(BOOL)requireScreenLocked;
-(long long)maxThermalPressureLevel;
-(void)setRequireExternalPower:(BOOL)arg1;
-(void)setRequireWiFi:(BOOL)arg1;
-(void)setRequireScreenLocked:(BOOL)arg1;
-(void)setRequireLowPowerModeDisabled:(BOOL)arg1;
-(void)setMinBatteryLevel:(float)arg1;
-(void)setMaxThermalPressureLevel:(long long)arg1;

@end

