/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(id)initWithQueue:(id)arg1 ;
-(void)_shutdown;
-(id)init;
-(void)_unregisterForNotifications;
-(RTDarwinNotificationHelper *)notificationHelper;
-(void)dealloc;
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

