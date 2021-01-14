/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/HDSPNotificationObserver.h>

@class HKSPObserverSet, NSNumber, NSString;

@interface HDSPDevicePowerMonitor : NSObject <HDSPNotificationObserver> {

	HKSPObserverSet* _observers;
	NSNumber* _isChargingOverride;
	NSNumber* _batteryLevelOverride;

}

@property (nonatomic,readonly) HKSPObserverSet * observers;                //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSNumber * isChargingOverride;                //@synthesize isChargingOverride=_isChargingOverride - In the implementation block
@property (nonatomic,retain) NSNumber * batteryLevelOverride;              //@synthesize batteryLevelOverride=_batteryLevelOverride - In the implementation block
@property (nonatomic,readonly) BOOL isCharging; 
@property (nonatomic,readonly) float batteryLevel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(HKSPObserverSet *)observers;
-(id)init;
-(id)initWithCallbackScheduler:(id)arg1 ;
-(float)batteryLevel;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isCharging;
-(NSNumber *)isChargingOverride;
-(void)setIsChargingOverride:(NSNumber *)arg1 ;
-(NSNumber *)batteryLevelOverride;
-(void)setBatteryLevelOverride:(NSNumber *)arg1 ;
@end

