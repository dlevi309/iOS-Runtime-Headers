/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPDiagnosticsProvider.h>
#import <libobjc.A.dylib/HDSPSleepEventProvider.h>
#import <libobjc.A.dylib/HDSPTimeChangeObserver.h>
#import <libobjc.A.dylib/HDSPSource.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>
#import <libobjc.A.dylib/HDSPSleepStorageObserver.h>
#import <libobjc.A.dylib/HDSPApplicationWorkspaceObserver.h>

@protocol HDSPSleepEventDelegate;
@class NSString, HDSPEnvironment, HKSPSleepSchedule, HKSPSleepSettings, HKSPSleepEventRecord, HKSPObserverSet, HKSPSleepScheduleModel;

@interface HDSPSleepScheduleModelManager : NSObject <HDSPDiagnosticsProvider, HDSPSleepEventProvider, HDSPTimeChangeObserver, HDSPSource, HDSPEnvironmentAware, HDSPSleepStorageObserver, HDSPApplicationWorkspaceObserver> {

	os_unfair_lock_s _storeLock;
	HDSPEnvironment* _environment;
	HKSPSleepSchedule* _sleepSchedule;
	HKSPSleepSettings* _sleepSettings;
	HKSPSleepEventRecord* _sleepEventRecord;
	id<HDSPSleepEventDelegate> _sleepEventDelegate;
	HKSPObserverSet* _observers;

}

@property (nonatomic,readonly) os_unfair_lock_s storeLock;                                      //@synthesize storeLock=_storeLock - In the implementation block
@property (nonatomic,readonly) HKSPObserverSet * observers;                                     //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) HKSPSleepSchedule * sleepSchedule;                               //@synthesize sleepSchedule=_sleepSchedule - In the implementation block
@property (nonatomic,readonly) HKSPSleepSettings * sleepSettings;                               //@synthesize sleepSettings=_sleepSettings - In the implementation block
@property (nonatomic,readonly) HKSPSleepEventRecord * sleepEventRecord;                         //@synthesize sleepEventRecord=_sleepEventRecord - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * providerIdentifier; 
@property (assign,nonatomic,__weak) id<HDSPSleepEventDelegate> sleepEventDelegate;              //@synthesize sleepEventDelegate=_sleepEventDelegate - In the implementation block
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) BOOL dontNotify; 
@property (nonatomic,readonly) BOOL dontSync; 
@property (nonatomic,readonly) id<HDSPSource> targetSource; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                            //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
-(id)diagnosticInfo;
-(id<HDSPSleepEventDelegate>)sleepEventDelegate;
-(id)_locked_saveSleepSettings:(id)arg1 ;
-(id)upcomingEventsDueAfterDate:(id)arg1 ;
-(NSString *)providerIdentifier;
-(void)addObserver:(id)arg1 ;
-(void)setSleepEventDelegate:(id<HDSPSleepEventDelegate>)arg1 ;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(HKSPSleepSchedule *)sleepSchedule;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(HKSPObserverSet *)observers;
-(void)_locked_notifyObserversForSleepScheduleChangeFromSource:(id)arg1 ;
-(BOOL)_shouldTurnOffWatchSleepFeatures;
-(id)_loadSleepScheduleModel:(id*)arg1 ;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)notifyObserversForSleepEventRecordChangeFromSource:(id)arg1 ;
-(id)_locked_saveSleepEventRecord:(id)arg1 ;
-(id)_locked_loadSleepSchedule:(id*)arg1 ;
-(id)_locked_updateSleepSettings:(id)arg1 ;
-(void)_locked_notifyObserversForSleepScheduleModelChangeFromSource:(id)arg1 ;
-(id)_locked_resetSleepSettings;
-(id)_locked_applyNecessaryChangesBeforeSaving:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(BOOL)saveSleepEventRecord:(id)arg1 error:(id*)arg2 source:(id)arg3 ;
-(id)_loadSleepEventRecord:(id*)arg1 ;
-(void)notifyObserversForSleepSettingsChangeFromSource:(id)arg1 ;
-(id)_locked_updateSleepEventRecord:(id)arg1 ;
-(void)_locked_notifyObserversForSleepEventRecordChangeFromSource:(id)arg1 ;
-(BOOL)saveSleepSettings:(id)arg1 error:(id*)arg2 source:(id)arg3 ;
-(void)_locked_notifyObserversForSleepSettingsChangeFromSource:(id)arg1 ;
-(void)significantTimeChangeDetected:(id)arg1 ;
-(void)_turnOffWatchSleepFeatures;
-(id)initWithEnvironment:(id)arg1 ;
-(id)_locked_sleepScheduleModel;
-(void)observedApplicationDidUninstall;
-(id)diagnosticDescription;
-(id)_loadSleepSchedule:(id*)arg1 ;
-(id)_loadSleepSettings:(id*)arg1 ;
-(id)_locked_setSleepSettings:(id)arg1 ;
-(BOOL)saveSleepScheduleModel:(id)arg1 error:(id*)arg2 source:(id)arg3 ;
-(id)_earliestDateToScheduleEventsForDate:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)notifyObserversForSleepScheduleChangeFromSource:(id)arg1 ;
-(BOOL)removeSleepScheduleModelWithError:(id*)arg1 source:(id)arg2 ;
-(id)_locked_saveSleepSchedule:(id)arg1 ;
-(id)_locked_loadSleepEventRecord:(id*)arg1 ;
-(HDSPEnvironment *)environment;
-(BOOL)_locked_updateModelWithBlock:(/*^block*/id)arg1 persistBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)_locked_setSleepSchedule:(id)arg1 ;
-(id)_locked_updateSleepSchedule:(id)arg1 ;
-(BOOL)saveSleepSchedule:(id)arg1 error:(id*)arg2 source:(id)arg3 ;
-(id)_locked_validateSleepSchedule:(id)arg1 generateValidSchedule:(BOOL)arg2 ;
-(id)_locked_resetSleepEventRecord;
-(id)_locked_loadSleepSettings:(id*)arg1 ;
-(void)sleepStorageDidChangeExternally:(id)arg1 ;
-(id)_locked_setSleepEventRecord:(id)arg1 ;
-(BOOL)_locked_canApplyChangesFrom:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(BOOL)_shouldNotifyObserver:(id)arg1 forSource:(id)arg2 ;
-(os_unfair_lock_s)storeLock;
-(HKSPSleepEventRecord *)sleepEventRecord;
-(id)_locked_removeSleepSchedule;
-(id)_locked_loadSleepScheduleModel:(id*)arg1 ;
-(NSString *)sourceIdentifier;
-(HKSPSleepSettings *)sleepSettings;
@end

