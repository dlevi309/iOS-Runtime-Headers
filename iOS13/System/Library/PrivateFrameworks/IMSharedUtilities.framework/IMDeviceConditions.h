/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@interface IMDeviceConditions : NSObject

@property (readonly) BOOL isDeviceCharging; 
@property (readonly) BOOL isDeviceOnWifi; 
+(id)sharedInstance;
-(BOOL)isDeviceOnWifi;
-(BOOL)isDeviceCharging;
-(id)_mobileNetworkManager;
-(id)_batteryStatus;
@end

