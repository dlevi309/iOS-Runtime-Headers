/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASDeviceState : NSObject
+(int)lockState;
+(BOOL)isClassCLocked;
+(id)currentOsBuild;
+(void)blockUntilFirstUnlock;
+(void)runBlockWhenDeviceIsClassCUnlocked:(/*^block*/id)arg1 ;
+(void)setSystemCallbacks:(const PASDeviceStateSystemCallbacks*)arg1 ;
+(BOOL)isDeviceFormattedForProtection;
+(void)setDefaultSystemCallbacks;
+(void)unregisterForLockStateChangeNotifications:(id)arg1 ;
+(id)registerForLockStateChangeNotifications:(/*^block*/id)arg1 ;
+(BOOL)isUnlocked;
@end

