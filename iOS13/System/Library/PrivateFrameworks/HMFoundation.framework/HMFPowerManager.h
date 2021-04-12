/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class HMFUnfairLock, NSObject;

@interface HMFPowerManager : HMFObject {

	HMFUnfairLock* _lock;
	BOOL _hasBattery;
	BOOL _running;
	float _batteryLevel;
	unsigned _interestNotification;
	long long _batteryState;
	NSObject*<OS_dispatch_queue> _clientQueue;
	IONotificationPortRef _notificationPort;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                           //@synthesize running=_running - In the implementation block
@property (nonatomic,readonly) IONotificationPortRef notificationPort;                //@synthesize notificationPort=_notificationPort - In the implementation block
@property (nonatomic,readonly) unsigned interestNotification;                         //@synthesize interestNotification=_interestNotification - In the implementation block
@property (readonly) BOOL hasBattery;                                                 //@synthesize hasBattery=_hasBattery - In the implementation block
@property (readonly) long long batteryState;                                          //@synthesize batteryState=_batteryState - In the implementation block
@property (readonly) float batteryLevel;                                              //@synthesize batteryLevel=_batteryLevel - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(BOOL)isRunning;
-(long long)batteryState;
-(float)batteryLevel;
-(void)setRunning:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)_deregisterForPowerSourceNotifications:(BOOL)arg1 ;
-(void)_registerForPowerSourceNotifications;
-(IONotificationPortRef)notificationPort;
-(unsigned)interestNotification;
-(void)updateBatteryState:(unsigned)arg1 ;
-(BOOL)hasBattery;
@end

