/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface HMFPowerManager : HMFObject {

	os_unfair_lock_s _lock;
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
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)setRunning:(BOOL)arg1 ;
-(id)init;
-(void)start;
-(float)batteryLevel;
-(long long)batteryState;
-(void)stop;
-(BOOL)isRunning;
-(BOOL)hasBattery;
-(void)updateBatteryState:(unsigned)arg1 ;
-(void)dealloc;
-(void)_deregisterForPowerSourceNotifications:(BOOL)arg1 ;
-(void)_registerForPowerSourceNotifications;
-(IONotificationPortRef)notificationPort;
-(unsigned)interestNotification;
@end

