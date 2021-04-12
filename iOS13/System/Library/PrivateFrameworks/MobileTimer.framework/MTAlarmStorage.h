/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTAlarmScheduleDelegate.h>
#import <libobjc.A.dylib/MTAlarmStorage.h>
@class NSArray, MTAlarm, NSDate;


@protocol MTAlarmStorage <NSObject>
@property (nonatomic,readonly) NSArray * alarms; 
@property (nonatomic,readonly) MTAlarm * sleepAlarm; 
@property (nonatomic,readonly) MTAlarm * nextAlarm; 
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) NSArray * allAlarms; 
@required
-(NSDate *)lastModifiedDate;
-(void)registerObserver:(id)arg1;
-(NSArray *)alarms;
-(NSArray *)allAlarms;
-(MTAlarm *)sleepAlarm;
-(void)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 source:(id)arg4;
-(void)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 source:(id)arg4;
-(MTAlarm *)nextAlarm;
-(void)snoozeAlarmWithIdentifier:(id)arg1 snoozeDate:(id)arg2 snoozeAction:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 source:(id)arg5;
-(void)dismissAlarmWithIdentifier:(id)arg1 dismissDate:(id)arg2 dismissAction:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 source:(id)arg5;
-(void)removeAllAlarmsForSource:(id)arg1;
-(void)getAlarmsWithCompletion:(/*^block*/id)arg1;
-(void)addAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3;
-(void)updateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3;
-(void)updateAlarmWithIdentifier:(id)arg1 changeSet:(id)arg2 withCompletion:(/*^block*/id)arg3 source:(id)arg4;
-(void)removeAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3;
-(void)removeAlarmWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3;
-(void)setAllAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3;
-(void)alarmWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end


@protocol NAScheduler, MTPersistence;
@class NSArray, MTAlarm, NSDate, MTAlarmScheduler, NSMutableArray, MTObserverStore, MTAlarmMigrator, NSString;

@interface MTAlarmStorage : NSObject <MTAlarmScheduleDelegate, MTAlarmStorage> {

	MTAlarmScheduler* _scheduler;
	NSMutableArray* _orderedAlarms;
	MTAlarm* _sleepAlarm;
	NSDate* _lastModifiedDate;
	id<NAScheduler> _serializer;
	MTObserverStore* _observers;
	MTAlarmMigrator* _migrator;
	id<MTPersistence> _persistence;
	/*^block*/id _currentDateProvider;

}

@property (nonatomic,retain) NSMutableArray * orderedAlarms;                   //@synthesize orderedAlarms=_orderedAlarms - In the implementation block
@property (nonatomic,retain) MTAlarm * sleepAlarm;                             //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
@property (nonatomic,retain) NSDate * lastModifiedDate;                        //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                       //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) MTObserverStore * observers;                      //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) MTAlarmMigrator * migrator;                       //@synthesize migrator=_migrator - In the implementation block
@property (nonatomic,retain) id<MTPersistence> persistence;                    //@synthesize persistence=_persistence - In the implementation block
@property (nonatomic,copy,readonly) id currentDateProvider;                    //@synthesize currentDateProvider=_currentDateProvider - In the implementation block
@property (assign,nonatomic,__weak) MTAlarmScheduler * scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * alarms; 
@property (nonatomic,readonly) MTAlarm * nextAlarm; 
@property (nonatomic,readonly) NSArray * allAlarms; 
+(id)_diagnosticDictionaryForAlarm:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<MTPersistence>)persistence;
-(void)setObservers:(MTObserverStore *)arg1 ;
-(MTObserverStore *)observers;
-(MTAlarmScheduler *)scheduler;
-(void)setScheduler:(MTAlarmScheduler *)arg1 ;
-(NSDate *)lastModifiedDate;
-(id)initWithPersistence:(id)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(MTAlarmMigrator *)migrator;
-(void)setMigrator:(MTAlarmMigrator *)arg1 ;
-(id<NAScheduler>)serializer;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)setPersistence:(id<MTPersistence>)arg1 ;
-(NSArray *)alarms;
-(void)_notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)allAlarms;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithPersistence:(id)arg1 migrator:(id)arg2 serializer:(id)arg3 callbackScheduler:(id)arg4 currentDateProvider:(/*^block*/id)arg5 ;
-(void)printDiagnostics;
-(id)gatherDiagnostics;
-(void)handleF5Reset;
-(void)handleMigrationFinish;
-(id)currentDateProvider;
-(MTAlarm *)sleepAlarm;
-(void)timeListener:(id)arg1 didDetectSignificantTimeChangeWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 source:(id)arg4 ;
-(void)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 source:(id)arg4 ;
-(void)_loadAlarmsWithCompletion:(/*^block*/id)arg1 ;
-(id)_cleanUpForInternalBuild:(id)arg1 ;
-(id)_cleanUpSnoozeFireDate:(id)arg1 ;
-(id)_cleanUpSleepAlarmRepeat:(id)arg1 ;
-(void)_queue_setAllAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3 persist:(BOOL)arg4 notify:(BOOL)arg5 ;
-(id)_queue_allAlarms;
-(MTAlarm *)nextAlarm;
-(void)_queue_addAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(id)_queue_updateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)_queue_updateAlarmWithIdentifier:(id)arg1 changeSet:(id)arg2 withCompletion:(/*^block*/id)arg3 source:(id)arg4 ;
-(void)_queue_removeAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)_queue_removeAlarmWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)_queue_removeAllAlarmsForSource:(id)arg1 ;
-(void)_queue_setAllAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3 ;
-(void)snoozeAlarmWithIdentifier:(id)arg1 snoozeDate:(id)arg2 snoozeAction:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 source:(id)arg5 ;
-(void)_queue_snoozeAlarmWithIdentifier:(id)arg1 snoozeDate:(id)arg2 snoozeAction:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 source:(id)arg5 ;
-(void)dismissAlarmWithIdentifier:(id)arg1 dismissDate:(id)arg2 dismissAction:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 source:(id)arg5 ;
-(void)_queue_dismissAlarmWithIdentifier:(id)arg1 dismissDate:(id)arg2 dismissAction:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 source:(id)arg5 ;
-(id)_queue_alarmMatchingAlarmIdentifier:(id)arg1 ;
-(BOOL)_queue_hasMatchingAlarm:(id)arg1 ;
-(id)_queuePersistAlarm:(id)arg1 replacingAlarm:(id)arg2 ;
-(void)_notifyObserversForAlarmAdd:(id)arg1 source:(id)arg2 ;
-(id)_queue_alarmMatchingAlarm:(id)arg1 ;
-(void)_queue_dismissMutableAlarm:(id)arg1 dismissDate:(id)arg2 dismissAction:(unsigned long long)arg3 ;
-(void)_notifyObserversForAlarmChange:(id)arg1 source:(id)arg2 ;
-(void)_notifyObserversForAlarmDismiss:(id)arg1 dismissAction:(unsigned long long)arg2 source:(id)arg3 ;
-(void)_queue_actuallyRemoveAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)_notifyObserversForAlarmRemoval:(id)arg1 source:(id)arg2 ;
-(id)_applyNecessaryChangesFromExistingAlarm:(id)arg1 updatedAlarm:(id)arg2 ;
-(void)_queue_persistAlarms;
-(void)_queue_sortAlarms;
-(void)_queue_resetAlarmsTo:(id)arg1 sleepAlarm:(id)arg2 ;
-(void)_notifyObserversForAlarmSnooze:(id)arg1 snoozeAction:(unsigned long long)arg2 source:(id)arg3 ;
-(void)_notifyObserversForNextAlarmChange:(id)arg1 source:(id)arg2 ;
-(void)_notifyObserversForAlarmFire:(id)arg1 triggerType:(unsigned long long)arg2 source:(id)arg3 ;
-(void)removeAllAlarmsForSource:(id)arg1 ;
-(id)_diagnosticAlarmDictionary;
-(void)scheduler:(id)arg1 didChangeNextAlarm:(id)arg2 ;
-(void)scheduler:(id)arg1 didFireAlarm:(id)arg2 ;
-(void)getAlarmsWithCompletion:(/*^block*/id)arg1 ;
-(void)addAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)updateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)updateAlarmWithIdentifier:(id)arg1 changeSet:(id)arg2 withCompletion:(/*^block*/id)arg3 source:(id)arg4 ;
-(void)removeAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)removeAlarmWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)setAllAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3 ;
-(void)alarmWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)loadAlarms;
-(void)loadAlarmsSync;
-(NSMutableArray *)orderedAlarms;
-(void)setOrderedAlarms:(NSMutableArray *)arg1 ;
-(void)setSleepAlarm:(MTAlarm *)arg1 ;
@end

