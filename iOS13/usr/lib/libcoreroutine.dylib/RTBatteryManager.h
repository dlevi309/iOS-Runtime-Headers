/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>

@class RTDarwinNotificationHelper;

@interface RTBatteryManager : RTService {

	BOOL _monitorBatteryStatusChanges;
	long long _externalConnectionState;
	RTDarwinNotificationHelper* _notificationHelper;

}

@property (assign,nonatomic) BOOL monitorBatteryStatusChanges;                               //@synthesize monitorBatteryStatusChanges=_monitorBatteryStatusChanges - In the implementation block
@property (assign,nonatomic) long long externalConnectionState;                              //@synthesize externalConnectionState=_externalConnectionState - In the implementation block
@property (nonatomic,readonly) RTDarwinNotificationHelper * notificationHelper;              //@synthesize notificationHelper=_notificationHelper - In the implementation block
+(long long)currentExternalConnectionState;
+(BOOL)_ioDrawingUnlimitedPower;
+(id)externalConnectionStateToString:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)_unregisterForNotifications;
-(void)_shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(RTDarwinNotificationHelper *)notificationHelper;
-(id)initWithQueue:(id)arg1 notificationHelper:(id)arg2 ;
-(void)setMonitorBatteryStatusChanges:(BOOL)arg1 ;
-(void)startMonitoringBatteryStatusChanges;
-(void)stopMonitoringBatteryStatusChanges;
-(void)updateBatteryStatus:(long long)arg1 ;
-(void)fetchCurrentChargerConnectionState:(/*^block*/id)arg1 ;
-(BOOL)monitorBatteryStatusChanges;
-(long long)externalConnectionState;
-(void)setExternalConnectionState:(long long)arg1 ;
@end

