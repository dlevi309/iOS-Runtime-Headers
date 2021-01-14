/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
*/

#import <Phoenix/AXPhoenixEventMonitor.h>

@interface AXPhoenixDeviceLockMonitor : AXPhoenixEventMonitor {

	BOOL _deviceLocked;

}

@property (assign,getter=isDeviceLocked,nonatomic) BOOL deviceLocked;              //@synthesize deviceLocked=_deviceLocked - In the implementation block
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)isDeviceLocked;
-(void)setDeviceLocked:(BOOL)arg1 ;
-(void)deviceLockStateChanged:(double)arg1 ;
-(BOOL)_queryIsDeviceLocked;
-(void)_notifyObserver:(id)arg1 isDeviceLocked:(BOOL)arg2 timestamp:(double)arg3 ;
@end

