/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@interface CMVehicleState : NSObject
+(BOOL)isAvailable;
+(unsigned long long)vehicularState;
+(unsigned long long)vehicularHints;
+(id)mostRecentVehicleConnection;
+(id)mostRecentInVehicle;
+(unsigned long long)isVehicleBasedOnDeviceId:(id)arg1 deviceType:(int)arg2 ;
+(unsigned long long)vehicularOperatorState;
@end

