/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTAlarmScheduleDelegate.h>
#import <libobjc.A.dylib/MTAlarmStorage.h>
@class NSArray, MTAlarm, NSDate;


@protocol MTAlarmStorage <NSObject>
@property (nonatomic,readonly) NSArray * alarms; 
@property (nonatomic,readonly) NSArray * sleepAlarms; 
@property (nonatomic,readonly) MTAlarm * sleepAlarm; 
@property (nonatomic,readonly) MTAlarm * nextAlarm; 
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) NSArray * allAlarms; 
@required
-(void)getAlarmsWithCompletion:(/*^block*/id)arg1;
-(NSArray *)alarms;
-(void)alarmWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(MTAlarm *)nextAlarm;
-(MTAlarm *)sleepAlarm;
-(void)registerObserver:(id)arg1;
-(void)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 source:(id)arg4;
-(NSDate *)lastModifiedDate;
-(NSArray *)allAlarms;
-(void)addAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3;
-(void)removeAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3;
-(void)setAllAlarms:(id)arg1 sleepAlarms:(id)arg2 source:(id)arg3;
-(void)removeAlarmWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3;
-(void)snoozeAlarmWithIdentifier:(id)arg1 snoozeDate:(id)arg2 snoozeAction:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 source:(id)arg5;
-(void)updateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3;
-(void)updateSleepAlarmsWithBlock:(/*^block*/id)arg1 source:(id)arg2;
-(NSArray *)sleepAlarms;
-(void)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 source:(id)arg4;
-(void)removeAllAlarmsForSource:(id)arg1;
-(void)dismissAlarmWithIdentifier:(id)arg1 dismissDate:(id)arg2 dismissAction:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 source:(id)arg5;
-(void)updateAlarmWithIdentifier:(id)arg1 changeSet:(id)arg2 withCompletion:(/*^block*/id)arg3 source:(id)arg4;
-(void)updateSleepAlarms:(id)arg1 source:(id)arg2;

@end


@protocol NAScheduler, MTPersistence;
@class NSArray, MTAlarm, NSDate, MTAlarmScheduler, NSMutableArray, MTObserverStore, MTAlarmMigrator, NSString;

@interface MTAlarmStorage : NSObject <MTAlarmScheduleDelegate, MTAlarmStorage> {

	MTAlarmScheduler* _scheduler;
	NSMutableArray* _orderedAlarms;
	NSMutableArray* _sleepAlarms;
	NSDate* _lastModifiedDate;
	id<NAScheduler> _serializer;
	MTObserverStore* _observers;
	MTAlarmMigrator* _migrator;
	id<MTPersistence> _persistence;
	/*^block*/id _currentDateProvider;

}

@property (nonatomic,retain) NSMutableArray * orderedAlarms;                   //@synthesize orderedAlarms=_orderedAlarms - In the implementation block
@property (nonatomic,retain) NSMutableArray * sleepAlarms;                     //@synthesize sleepAlarms=_sleepAlarms - In the implementation block
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
@property (nonatomic,readonly) MTAlarm * sleepAlarm; 
@property (nonatomic,readonly) MTAlarm * nextAlarm; 
@property (nonatomic,readonly) NSArray * allAlarms; 
+(id)_diagnosticDictionaryForAlarm:(id)arg1 ;
-(void)getAlarmsWithCompletion:(/*^block*/id)arg1 ;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(NSArray *)alarms;
-(id<MTPersistence>)persistence;
-(void)setPersistence:(id<MTPersistence>)arg1 ;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(void)_queue_addAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)_notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(id)gatherDiagnostics;
-(void)_queue_setAllAlarms:(id)arg1 sleepAlarms:(id)arg2 source:(id)arg3 ;
-(void)alarmWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(MTAlarm *)nextAlarm;
-(MTAlarm *)sleepAlarm;
-(void)registerObserver:(id)arg1 ;
-(void)printDiagnostics;
-(void)_queue_actuallyRemoveAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)setMigrator:(MTAlarmMigrator *)arg1 ;
-(void)handleMigrationFinish;
-(MTObserverStore *)observers;
-(void)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 source:(id)arg4 ;
-(id)_queuePersistAlarm:(id)arg1 replacingAlarm:(id)arg2 ;
-(void)_queue_resetAlarmsTo:(id)arg1 sleepAlarms:(id)arg2 ;
-(id)init;
-(void)_queue_setAllAlarms:(id)arg1 sleepAlarms:(id)arg2 source:(id)arg3 persist:(BOOL)arg4 notify:(BOOL)arg5 override:(BOOL)arg6 ;
-(id<NAScheduler>)serializer;
-(void)handleF5Reset;
-(NSDate *)lastModifiedDate;
-(void)_queue_updateAlarmWithIdentifier:(id)arg1 changeSet:(id)arg2 withCompletion:(/*^block*/id)arg3 source:(id)arg4 ;
-(void)_queue_dismissMutableAlarm:(id)arg1 dismissDate:(id)arg2 dismissAction:(unsigned long long)arg3 ;
-(NSArray *)allAlarms;
-(id)_queue_allSleepAlarms;
-(void)_notifyObserversForAlarmRemoval:(id)arg1 source:(id)arg2 ;
-(void)setSleepAlarms:(NSMutableArray *)arg1 ;
-(void)_notifyObserversForAlarmAdd:(id)arg1 source:(id)arg2 ;
-(void)addAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)removeAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)_queue_sortSleepAlarms;
-(void)_loadAlarmsWithCompletion:(/*^block*/id)arg1 ;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_convertSleepAlarmToRegular:(id)arg1 ;
-(id)_diagnosticDictionaryForAlarms:(id)arg1 ;
-(id)currentDateProvider;
-(id)_queue_allAlarms;
-(void)_queue_snoozeAlarmWithIdentifier:(id)arg1 snoozeDate:(id)arg2 snoozeAction:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 source:(id)arg5 ;
-(void)loadAlarms;
-(void)setAllAlarms:(id)arg1 sleepAlarms:(id)arg2 source:(id)arg3 ;
-(void)removeAlarmWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)snoozeAlarmWithIdentifier:(id)arg1 snoozeDate:(id)arg2 snoozeAction:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 source:(id)arg5 ;
-(MTAlarmMigrator *)migrator;
-(void)updateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)setOrderedAlarms:(NSMutableArray *)arg1 ;
-(void)_notifyObserversForAlarmDismiss:(id)arg1 dismissAction:(unsigned long long)arg2 source:(id)arg3 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(void)setObservers:(MTObserverStore *)arg1 ;
-(void)updateSleepAlarmsWithBlock:(/*^block*/id)arg1 source:(id)arg2 ;
-(void)_notifyObserversForNextAlarmChange:(id)arg1 source:(id)arg2 ;
-(NSMutableArray *)sleepAlarms;
-(void)setScheduler:(MTAlarmScheduler *)arg1 ;
-(id)_cleanUpSnoozeFireDate:(id)arg1 ;
-(id)_queue_updateSleepAlarmsFromExistingAlarms:(id)arg1 ;
-(void)loadAlarmsSync;
-(id)transferMetadataForSleepAlarm:(id)arg1 fromPrevious:(id)arg2 ;
-(void)_notifyObserversForAlarmSnooze:(id)arg1 snoozeAction:(unsigned long long)arg2 source:(id)arg3 ;
-(void)timeListener:(id)arg1 didDetectSignificantTimeChangeWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)scheduler:(id)arg1 didFireAlarm:(id)arg2 ;
-(NSMutableArray *)orderedAlarms;
-(void)_queue_removeAlarmWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(id)_queue_alarmMatchingAlarm:(id)arg1 ;
-(void)_queue_persistAlarms;
-(void)_notifyObserversForAlarmChange:(id)arg1 source:(id)arg2 ;
-(id)_cleanUpSleepAlarmRepeat:(id)arg1 ;
-(void)_queue_removeAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 source:(id)arg4 ;
-(void)removeAllAlarmsForSource:(id)arg1 ;
-(id)_applyNecessaryChangesFromExistingAlarm:(id)arg1 updatedAlarm:(id)arg2 ;
-(void)dismissAlarmWithIdentifier:(id)arg1 dismissDate:(id)arg2 dismissAction:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 source:(id)arg5 ;
-(id)initWithPersistence:(id)arg1 migrator:(id)arg2 serializer:(id)arg3 callbackScheduler:(id)arg4 currentDateProvider:(/*^block*/id)arg5 ;
-(void)scheduler:(id)arg1 didChangeNextAlarm:(id)arg2 ;
-(BOOL)_queue_hasMatchingAlarm:(id)arg1 ;
-(void)updateAlarmWithIdentifier:(id)arg1 changeSet:(id)arg2 withCompletion:(/*^block*/id)arg3 source:(id)arg4 ;
-(void)_queue_removeAllAlarmsForSource:(id)arg1 ;
-(id)initWithPersistence:(id)arg1 ;
-(void)_resetCurrentToneIdentifier;
-(void)updateSleepAlarms:(id)arg1 source:(id)arg2 ;
-(id)_cleanUpForInternalBuild:(id)arg1 ;
-(id)activeSleepAlarm;
-(id)_queue_updateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)_queue_dismissAlarmWithIdentifier:(id)arg1 dismissDate:(id)arg2 dismissAction:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 source:(id)arg5 ;
-(void)_queue_setAllAlarms:(id)arg1 sleepAlarms:(id)arg2 source:(id)arg3 persist:(BOOL)arg4 notify:(BOOL)arg5 ;
-(void)dealloc;
-(id)_queue_alarmMatchingAlarmIdentifier:(id)arg1 ;
-(void)_queue_sortAlarms;
-(MTAlarmScheduler *)scheduler;
-(void)_notifyObserversForAlarmFire:(id)arg1 triggerType:(unsigned long long)arg2 source:(id)arg3 ;
@end

