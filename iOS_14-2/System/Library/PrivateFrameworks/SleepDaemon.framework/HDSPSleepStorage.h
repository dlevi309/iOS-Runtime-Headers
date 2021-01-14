/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/HDSPNotificationObserver.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>
#import <libobjc.A.dylib/HDSPSource.h>

@protocol HKSPUserDefaults;
@class HDSPEnvironment, NSString, HKSPObserverSet, NPSManager;

@interface HDSPSleepStorage : NSObject <HDSPNotificationObserver, HDSPEnvironmentAware, HDSPSource> {

	HDSPEnvironment* _environment;
	HKSPObserverSet* _observers;
	id<HKSPUserDefaults> _userDefaults;
	/*^block*/id _perGizmoDefaultsProvider;
	id<HKSPUserDefaults> _perGizmoDefaults;
	NPSManager* _npsManager;

}

@property (nonatomic,readonly) HKSPObserverSet * observers;                        //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) id<HKSPUserDefaults> userDefaults;                  //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,copy,readonly) id perGizmoDefaultsProvider;                   //@synthesize perGizmoDefaultsProvider=_perGizmoDefaultsProvider - In the implementation block
@property (nonatomic,readonly) id<HKSPUserDefaults> perGizmoDefaults;              //@synthesize perGizmoDefaults=_perGizmoDefaults - In the implementation block
@property (nonatomic,readonly) NPSManager * npsManager;                            //@synthesize npsManager=_npsManager - In the implementation block
@property (nonatomic,readonly) unsigned long long dataVersion; 
@property (nonatomic,readonly) BOOL needsMigration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;               //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) BOOL dontNotify; 
@property (nonatomic,readonly) BOOL dontSync; 
@property (nonatomic,readonly) id<HDSPSource> targetSource; 
+(/*^block*/id)perGizmoDefaultsProvider;
-(id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2 ;
-(unsigned long long)dataVersion;
-(BOOL)saveSleepEventRecordChanges:(id)arg1 error:(id*)arg2 ;
-(id)loadSleepEventRecord:(id*)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(BOOL)_removeObjectProperties:(id)arg1 propertiesToSync:(id)arg2 error:(id*)arg3 ;
-(NPSManager *)npsManager;
-(id)perGizmoDefaultsProvider;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(HKSPObserverSet *)observers;
-(BOOL)saveSleepSettingsChanges:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveSleepScheduleChanges:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveSleepEventRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)_saveObject:(id)arg1 propertiesToSave:(id)arg2 propertiesToSync:(id)arg3 error:(id*)arg4 ;
-(BOOL)_removeObjectProperties:(id)arg1 propertiesToSync:(id)arg2 perGizmoProperties:(id)arg3 error:(id*)arg4 ;
-(BOOL)saveSleepSchedule:(id)arg1 error:(id*)arg2 ;
-(id<HKSPUserDefaults>)perGizmoDefaults;
-(BOOL)saveSleepScheduleModel:(id)arg1 error:(id*)arg2 ;
-(id)initWithEnvironment:(id)arg1 perGizmoDefaultsProvider:(/*^block*/id)arg2 npsManager:(id)arg3 ;
-(BOOL)_saveObjectChanges:(id)arg1 propertiesToSave:(id)arg2 propertiesToSync:(id)arg3 versionKey:(id)arg4 currentVersion:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)handleExternalSync;
-(BOOL)_saveObjectChanges:(id)arg1 propertiesToSave:(id)arg2 propertiesToSync:(id)arg3 perGizmoProperties:(id)arg4 versionKey:(id)arg5 currentVersion:(unsigned long long)arg6 error:(id*)arg7 ;
-(id<HKSPUserDefaults>)userDefaults;
-(BOOL)needsMigration;
-(BOOL)removeSleepScheduleWithError:(id*)arg1 ;
-(id)initWithEnvironment:(id)arg1 ;
-(id)handleActivePairedDeviceDidChange;
-(BOOL)saveSleepSettings:(id)arg1 error:(id*)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)removeSleepEventRecordWithError:(id*)arg1 ;
-(BOOL)removeSleepSettingsWithError:(id*)arg1 ;
-(BOOL)_saveObject:(id)arg1 propertiesToSave:(id)arg2 propertiesToSync:(id)arg3 perGizmoProperties:(id)arg4 error:(id*)arg5 ;
-(HDSPEnvironment *)environment;
-(id)loadSleepScheduleModel:(id*)arg1 ;
-(void)_synchronizeDefaultsForKeys:(id)arg1 perGizmoKeys:(id)arg2 ;
-(id)_loadObjectOfClass:(Class)arg1 propertiesToLoad:(id)arg2 error:(id*)arg3 ;
-(void)_synchronizeDefaults;
-(id)loadSleepSchedule:(id*)arg1 ;
-(id)_loadObjectOfClass:(Class)arg1 propertiesToLoad:(id)arg2 perGizmoProperties:(id)arg3 perGizmoDefaultValues:(id)arg4 error:(id*)arg5 ;
-(id)loadSleepSettings:(id*)arg1 ;
-(void)_updateDefaultsAndKeysToSync:(id)arg1 perGizmoKeysToSync:(id)arg2 propertiesToSync:(id)arg3 perGizmoProperties:(id)arg4 object:(id)arg5 key:(id)arg6 ;
-(NSString *)sourceIdentifier;
@end

