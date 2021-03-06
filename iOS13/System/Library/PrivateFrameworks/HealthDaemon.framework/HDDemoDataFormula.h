/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@interface HDDemoDataFormula : NSObject
+(double)computeBasalMetabolicRateFromWeight:(double)arg1 height:(double)arg2 age:(double)arg3 sex:(long long)arg4 ;
+(double)computeBloodAlcoholContentForNumDrinks:(double)arg1 elapsedTime:(double)arg2 weight:(double)arg3 sex:(long long)arg4 ;
+(double)computeLeanBodyMassFromWeight:(double)arg1 height:(double)arg2 sex:(long long)arg3 waistCircumference:(double)arg4 forearmCircumference:(double)arg5 wristCircumference:(double)arg6 hipCircumference:(double)arg7 ;
+(double)computeBodyFatPercentageFromWeight:(double)arg1 leanBodyMass:(double)arg2 ;
+(double)computeBodyMassIndexFromWeight:(double)arg1 height:(double)arg2 ;
+(double)_computeHumeLeanBodyWeightFromWeight:(double)arg1 height:(double)arg2 sex:(long long)arg3 ;
+(double)_computeOther1LeanBodyWeightFromWeight:(double)arg1 height:(double)arg2 sex:(long long)arg3 ;
+(double)_computeOther2LeanBodyWeightFromWeight:(double)arg1 sex:(long long)arg2 waistCircumference:(double)arg3 forearmCircumference:(double)arg4 wristCircumference:(double)arg5 hipCircumference:(double)arg6 ;
+(double)convertDegreeCelsiusToFahrenheit:(double)arg1 ;
+(double)convertDegreeFahrenheitToCelsius:(double)arg1 ;
@end

