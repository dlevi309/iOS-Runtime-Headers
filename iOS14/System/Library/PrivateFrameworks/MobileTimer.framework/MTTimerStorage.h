/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTTimerSchedulerDelegate.h>
#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>
#import <libobjc.A.dylib/MTTimerStorage.h>
@class NSArray, MTTimer, NSDate;


@protocol MTTimerStorage <NSObject>
@property (nonatomic,readonly) NSArray * timers; 
@property (nonatomic,readonly) MTTimer * nextTimer; 
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@required
-(MTTimer *)nextTimer;
-(void)registerObserver:(id)arg1;
-(NSDate *)lastModifiedDate;
-(void)removeTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3;
-(void)dismissTimerWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3;
-(void)addTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3;
-(NSArray *)timers;
-(void)updateTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3;
-(void)repeatTimerWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3;
-(void)getTimersWithCompletion:(/*^block*/id)arg1;
-(void)setAllTimers:(id)arg1 source:(id)arg2;

@end


@protocol NAScheduler, MTPersistence;
@class NSArray, MTTimer, NSDate, MTTimerScheduler, NSMutableArray, MTTimerMigrator, MTObserverStore, NSString;

@interface MTTimerStorage : NSObject <MTTimerSchedulerDelegate, MTAgentDiagnosticDelegate, MTTimerStorage> {

	MTTimerScheduler* _scheduler;
	NSMutableArray* _orderedTimers;
	NSDate* _lastModifiedDate;
	/*^block*/id _currentDateProvider;
	MTTimerMigrator* _migrator;
	id<NAScheduler> _serializer;
	MTObserverStore* _observers;
	id<MTPersistence> _persistence;

}

@property (nonatomic,retain) NSMutableArray * orderedTimers;                   //@synthesize orderedTimers=_orderedTimers - In the implementation block
@property (nonatomic,copy) NSDate * lastModifiedDate;                          //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,copy,readonly) id currentDateProvider;                    //@synthesize currentDateProvider=_currentDateProvider - In the implementation block
@property (nonatomic,retain) MTTimerMigrator * migrator;                       //@synthesize migrator=_migrator - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                       //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) MTObserverStore * observers;                      //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) id<MTPersistence> persistence;                    //@synthesize persistence=_persistence - In the implementation block
@property (assign,nonatomic,__weak) MTTimerScheduler * scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * timers; 
@property (nonatomic,readonly) MTTimer * nextTimer; 
+(id)_diagnosticDictionaryForTimer:(id)arg1 ;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(id<MTPersistence>)persistence;
-(void)setPersistence:(id<MTPersistence>)arg1 ;
-(MTTimer *)nextTimer;
-(id)gatherDiagnostics;
-(void)registerObserver:(id)arg1 ;
-(void)printDiagnostics;
-(void)setMigrator:(MTTimerMigrator *)arg1 ;
-(void)handleMigrationFinish;
-(MTObserverStore *)observers;
-(void)_queue_notifyObserversForTimerDismiss:(id)arg1 source:(id)arg2 ;
-(void)_queue_dismissTimerWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(id)init;
-(void)loadTimers;
-(void)_queue_setAllTimers:(id)arg1 source:(id)arg2 ;
-(id)_queuePersistTimer:(id)arg1 replacingTimer:(id)arg2 ;
-(id<NAScheduler>)serializer;
-(void)handleF5Reset;
-(NSDate *)lastModifiedDate;
-(void)_loadTimersWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_notifyObserversForTimerRemoval:(id)arg1 source:(id)arg2 ;
-(void)loadTimersSync;
-(void)removeTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)_queue_notifyObserversForTimerFire:(id)arg1 source:(id)arg2 ;
-(void)_queue_notifyObserversForNextTimerChange:(id)arg1 source:(id)arg2 ;
-(void)_queue_notifyObserversForTimerUpdate:(id)arg1 source:(id)arg2 ;
-(id)currentDateProvider;
-(void)dismissTimerWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)_queue_notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(void)_queue_removeTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)_queue_persistTimers;
-(void)addTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(MTTimerMigrator *)migrator;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(void)setObservers:(MTObserverStore *)arg1 ;
-(NSArray *)timers;
-(void)_queue_addTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)setScheduler:(MTTimerScheduler *)arg1 ;
-(void)updateTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(id)_queue_updateTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)_queue_notifyObserversForTimerAdd:(id)arg1 source:(id)arg2 ;
-(void)_queue_repeatTimerWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(id)_queue_timerMatchingTimerIdentifier:(id)arg1 ;
-(void)_queue_removeAllTimersForSource:(id)arg1 ;
-(void)repeatTimerWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(id)initWithPersistence:(id)arg1 migrator:(id)arg2 serializer:(id)arg3 callbackScheduler:(id)arg4 currentDateProvider:(/*^block*/id)arg5 ;
-(NSMutableArray *)orderedTimers;
-(void)getTimersWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_sortTimers;
-(void)setAllTimers:(id)arg1 source:(id)arg2 ;
-(void)scheduler:(id)arg1 didFireTimer:(id)arg2 ;
-(id)_applyNecessaryChangesFromOldTimer:(id)arg1 currentTimer:(id)arg2 ;
-(id)_diagnosticTimerDictionary;
-(id)initWithPersistence:(id)arg1 ;
-(void)scheduler:(id)arg1 didChangeNextTimer:(id)arg2 ;
-(void)_queue_setAllTimers:(id)arg1 source:(id)arg2 persist:(BOOL)arg3 notify:(BOOL)arg4 ;
-(void)_createDefaultTimerIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_queue_hasMatchingTimer:(id)arg1 ;
-(void)dealloc;
-(void)setOrderedTimers:(NSMutableArray *)arg1 ;
-(MTTimerScheduler *)scheduler;
@end

