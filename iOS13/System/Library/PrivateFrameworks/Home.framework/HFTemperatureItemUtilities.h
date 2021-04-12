/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@interface HFTemperatureItemUtilities : NSObject
+(id)currentHeatingCoolingModeValueInResponse:(id)arg1 ;
+(id)targetHeatingCoolingModeValueInResponse:(id)arg1 ;
+(id)targetTemperatureValueInResponse:(id)arg1 ;
+(long long)_heatingCoolingValueForCurrentHeaterCoolerState:(long long)arg1 isActive:(BOOL)arg2 ;
+(long long)_heatingCoolingValueForTargetHeaterCoolerState:(long long)arg1 isActive:(BOOL)arg2 ;
+(id)integerTemperatureRangeWithinNumberRange:(id)arg1 representsCelsius:(BOOL)arg2 ;
@end

