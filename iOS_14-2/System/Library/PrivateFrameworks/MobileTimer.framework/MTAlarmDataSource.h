/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@class MTAlarmManager, MTObserverStore, NSMutableArray, MTAlarm;

@interface MTAlarmDataSource : NSObject {

	MTAlarmManager* _alarmManager;
	MTObserverStore* _observers;
	NSMutableArray* _alarms;
	MTAlarm* _sleepAlarm;
	NSMutableArray* _sleepAlarms;

}

@property (nonatomic,retain) MTAlarmManager * alarmManager;              //@synthesize alarmManager=_alarmManager - In the implementation block
@property (nonatomic,retain) MTObserverStore * observers;                //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSMutableArray * alarms;                    //@synthesize alarms=_alarms - In the implementation block
@property (nonatomic,retain) MTAlarm * sleepAlarm;                       //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
@property (nonatomic,retain) NSMutableArray * sleepAlarms;               //@synthesize sleepAlarms=_sleepAlarms - In the implementation block
-(NSMutableArray *)alarms;
-(void)unregisterObserver:(id)arg1 ;
-(id)removeAlarm:(id)arg1 ;
-(MTAlarmManager *)alarmManager;
-(void)setAlarmManager:(MTAlarmManager *)arg1 ;
-(void)_registerForNotifications;
-(MTAlarm *)sleepAlarm;
-(void)registerObserver:(id)arg1 ;
-(void)setSleepAlarm:(MTAlarm *)arg1 ;
-(id)addAlarm:(id)arg1 ;
-(MTObserverStore *)observers;
-(id)alarmAtRow:(unsigned long long)arg1 ;
-(id)updateAlarm:(id)arg1 ;
-(void)setSleepAlarms:(NSMutableArray *)arg1 ;
-(unsigned long long)numberOfAlarms;
-(id)initWithAlarmManager:(id)arg1 ;
-(unsigned long long)rowForAlarm:(id)arg1 ;
-(void)setAlarms:(NSMutableArray *)arg1 ;
-(void)setObservers:(MTObserverStore *)arg1 ;
-(NSMutableArray *)sleepAlarms;
-(void)_handleAlarmNotification:(id)arg1 block:(/*^block*/id)arg2 ;
-(unsigned long long)rowForAlarmWithID:(id)arg1 ;
-(void)_iterateObserversWithBlock:(/*^block*/id)arg1 ;
-(void)_stateReset;
-(id)reloadAlarms;
-(void)dealloc;
@end

