/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@interface HKManualEntryValidationController : NSObject
-(unsigned long long)validateMinimumAllowedDuration:(double)arg1 ofType:(id)arg2 ;
-(unsigned long long)validateMaximumAllowedDuration:(double)arg1 ofType:(id)arg2 ;
-(unsigned long long)validateWorkoutDistance:(id)arg1 ;
-(unsigned long long)validateWorkoutEnergyBurned:(id)arg1 ;
-(id)supportedQuantityTypes;
-(unsigned long long)validateQuantity:(id)arg1 ofType:(id)arg2 ;
-(unsigned long long)_validateQuantity:(id)arg1 withAbsoluteRange:(id)arg2 confirmRange:(id)arg3 ;
@end

