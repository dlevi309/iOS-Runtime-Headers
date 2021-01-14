/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/HDSPSleepAlarmObserver.h>
#import <libobjc.A.dylib/HDSPSource.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@class HDSPEnvironment, HKSPObserverSet, NSString;

@interface HDSPSleepActionManager : NSObject <HDSPSleepAlarmObserver, HDSPSource, HDSPEnvironmentAware> {

	HDSPEnvironment* _environment;
	HKSPObserverSet* _observers;

}

@property (nonatomic,readonly) HKSPObserverSet * observers;                       //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) BOOL dontNotify; 
@property (nonatomic,readonly) BOOL dontSync; 
@property (nonatomic,readonly) id<HDSPSource> targetSource; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
+(BOOL)_isValidSnoozeDate:(id)arg1 ;
+(id)_latestDateInAlarms:(id)arg1 dateBlock:(/*^block*/id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)_updateSleepEventRecord:(id)arg1 delayedNotifyBlock:(/*^block*/id)arg2 ;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(HKSPObserverSet *)observers;
-(void)dismissGoodMorning:(id)arg1 ;
-(id)_notifyObserversForWakeUpAlarmSnoozed:(id)arg1 ;
-(void)skipBedtime:(id)arg1 ;
-(void)delayBedtimeUntilDate:(id)arg1 source:(id)arg2 ;
-(void)sleepAlarmDidDismiss:(id)arg1 source:(id)arg2 ;
-(void)sleepAlarmDidSnooze:(id)arg1 source:(id)arg2 ;
-(void)dismissGoodMorningOnDate:(id)arg1 source:(id)arg2 ;
-(id)initWithEnvironment:(id)arg1 ;
-(BOOL)dontNotify;
-(id)_notifyObserversForWakeUpConfirmed:(id)arg1 ;
-(void)sleepAlarmDismissedOnDate:(id)arg1 source:(id)arg2 ;
-(id)_notifyObserversForGoodMorningDismissed:(id)arg1 ;
-(void)delayBedtimeForTimeInterval:(double)arg1 source:(id)arg2 ;
-(void)confirmAwakeNotificationOnDate:(id)arg1 untilDate:(id)arg2 source:(id)arg3 ;
-(void)removeObserver:(id)arg1 ;
-(void)setSleepMode:(long long)arg1 source:(id)arg2 ;
-(void)skipBedtimeOnDate:(id)arg1 source:(id)arg2 ;
-(id)_notifyObserversForWakeUpAlarmDismissed:(id)arg1 ;
-(void)confirmAwakeNotification:(id)arg1 ;
-(HDSPEnvironment *)environment;
-(void)skipWindDownOnDate:(id)arg1 source:(id)arg2 ;
-(id)_notifyObserversForBedtimeSkip:(id)arg1 ;
-(id)_notifyObserversForWindDownSkip:(id)arg1 ;
-(void)sleepAlarmSnoozedUntilDate:(id)arg1 source:(id)arg2 ;
-(id)_notifyObserversForBedtimeDelay:(id)arg1 ;
-(void)sleepAlarmsModified:(id)arg1 source:(id)arg2 ;
-(void)skipWindDown:(id)arg1 ;
-(void)sleepAlarmWasModifiedBySource:(id)arg1 ;
-(NSString *)sourceIdentifier;
@end

