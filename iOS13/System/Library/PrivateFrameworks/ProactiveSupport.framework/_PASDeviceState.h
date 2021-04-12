/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASDeviceState : NSObject
+(BOOL)isClassCLocked;
+(int)lockState;
+(BOOL)isUnlocked;
+(void)setSystemCallbacks:(const PASDeviceStateSystemCallbacks*)arg1 ;
+(void)setDefaultSystemCallbacks;
+(void)runBlockWhenDeviceIsClassCUnlocked:(/*^block*/id)arg1 ;
+(id)registerForLockStateChangeNotifications:(/*^block*/id)arg1 ;
+(void)unregisterForLockStateChangeNotifications:(id)arg1 ;
+(BOOL)isDeviceFormattedForProtection;
+(void)blockUntilFirstUnlock;
+(id)currentOsBuild;
@end

