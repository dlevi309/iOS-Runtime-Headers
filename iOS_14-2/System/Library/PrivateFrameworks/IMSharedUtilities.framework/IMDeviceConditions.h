/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@interface IMDeviceConditions : NSObject

@property (readonly) BOOL isDeviceCharging; 
@property (readonly) BOOL isDeviceOnWifi; 
+(id)sharedInstance;
-(BOOL)isDeviceCharging;
-(id)_mobileNetworkManager;
-(id)_batteryStatus;
-(BOOL)isDeviceOnWifi;
@end

