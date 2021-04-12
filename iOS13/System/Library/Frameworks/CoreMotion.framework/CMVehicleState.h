/*
* Generated on Monday, March 1, 2021 at 2:31:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@interface CMVehicleState : NSObject
+(BOOL)isAvailable;
+(id)mostRecentVehicleConnection;
+(id)mostRecentInVehicle;
+(unsigned long long)isVehicleBasedOnDeviceId:(id)arg1 deviceType:(int)arg2 ;
+(unsigned long long)vehicularState;
+(unsigned long long)vehicularHints;
+(unsigned long long)vehicularOperatorState;
@end

