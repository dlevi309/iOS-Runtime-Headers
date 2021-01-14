/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/


@interface SUICAudioPowerLevelLinearConverter : NSObject
+(float)_adjustedLinearPowerLevel:(float)arg1 isInput:(BOOL)arg2 ;
+(float)_linearValueForPowerLevel:(float)arg1 shouldAdjustForDeviceType:(BOOL)arg2 isInput:(BOOL)arg3 ;
+(float)_expectedLinearInputPowerLevelMaximum;
+(float)linearValueForInputPowerLevel:(float)arg1 ;
+(float)linearValueForOutputPowerLevel:(float)arg1 ;
@end

