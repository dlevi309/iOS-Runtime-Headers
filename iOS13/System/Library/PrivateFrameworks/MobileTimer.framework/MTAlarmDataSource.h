/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@class MTAlarmManager, MTObserverStore, NSMutableArray, MTAlarm;

@interface MTAlarmDataSource : NSObject {

	MTAlarmManager* _alarmManager;
	MTObserverStore* _observers;
	NSMutableArray* _alarms;
	MTAlarm* _sleepAlarm;

}

@property (nonatomic,retain) MTAlarmManager * alarmManager;              //@synthesize alarmManager=_alarmManager - In the implementation block
@property (nonatomic,retain) MTObserverStore * observers;                //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSMutableArray * alarms;                    //@synthesize alarms=_alarms - In the implementation block
@property (nonatomic,retain) MTAlarm * sleepAlarm;                       //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
-(void)dealloc;
-(void)setObservers:(MTObserverStore *)arg1 ;
-(MTObserverStore *)observers;
-(void)_registerForNotifications;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(NSMutableArray *)alarms;
-(void)setAlarms:(NSMutableArray *)arg1 ;
-(id)addAlarm:(id)arg1 ;
-(id)removeAlarm:(id)arg1 ;
-(MTAlarmManager *)alarmManager;
-(id)updateAlarm:(id)arg1 ;
-(MTAlarm *)sleepAlarm;
-(void)setSleepAlarm:(MTAlarm *)arg1 ;
-(id)initWithAlarmManager:(id)arg1 ;
-(void)setAlarmManager:(MTAlarmManager *)arg1 ;
-(void)_iterateObserversWithBlock:(/*^block*/id)arg1 ;
-(void)_handleAlarmNotification:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_stateReset;
-(id)reloadAlarms;
-(unsigned long long)rowForAlarmWithID:(id)arg1 ;
-(unsigned long long)rowForAlarm:(id)arg1 ;
-(unsigned long long)numberOfAlarms;
-(id)alarmAtRow:(unsigned long long)arg1 ;
@end

