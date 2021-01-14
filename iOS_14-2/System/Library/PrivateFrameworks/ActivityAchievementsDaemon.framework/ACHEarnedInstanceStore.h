/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/

#import <libobjc.A.dylib/ACHEarnedInstanceEntitySyncedEarnedInstancesObserver.h>
#import <libobjc.A.dylib/ACHEarnedInstanceEntityJournalEntryAppliedObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, ACHEarnedInstanceEntityWrapper, ACHEarnedInstanceDuplicateUtility, NSObject, NSMutableArray, NSHashTable, NSArray, NSString;

@interface ACHEarnedInstanceStore : NSObject <ACHEarnedInstanceEntitySyncedEarnedInstancesObserver, ACHEarnedInstanceEntityJournalEntryAppliedObserver> {

	BOOL _initialEarnedInstanceFetchComplete;
	unsigned char _device;
	HDProfile* _profile;
	ACHEarnedInstanceEntityWrapper* _entityWrapper;
	ACHEarnedInstanceDuplicateUtility* _duplicateUtility;
	NSObject*<OS_dispatch_queue> _earnedInstanceQueue;
	NSMutableArray* _allEarnedInstances;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSHashTable* _observers;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) ACHEarnedInstanceEntityWrapper * entityWrapper;                    //@synthesize entityWrapper=_entityWrapper - In the implementation block
@property (nonatomic,retain) ACHEarnedInstanceDuplicateUtility * duplicateUtility;              //@synthesize duplicateUtility=_duplicateUtility - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> earnedInstanceQueue;                  //@synthesize earnedInstanceQueue=_earnedInstanceQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * allEarnedInstances;                               //@synthesize allEarnedInstances=_allEarnedInstances - In the implementation block
@property (assign,nonatomic) BOOL initialEarnedInstanceFetchComplete;                           //@synthesize initialEarnedInstanceFetchComplete=_initialEarnedInstanceFetchComplete - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> observerQueue;                        //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                           //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) unsigned char device;                                              //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSArray * earnedInstances; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProfile:(HDProfile *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(NSHashTable *)observers;
-(void)setObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned char)device;
-(void)setObservers:(NSHashTable *)arg1 ;
-(HDProfile *)profile;
-(void)removeObserver:(id)arg1 ;
-(void)setDevice:(unsigned char)arg1 ;
-(NSArray *)earnedInstances;
-(id)earnedInstancesForTemplateUniqueName:(id)arg1 ;
-(BOOL)earnedInstanceEntityDidReceiveSyncedEarnedInstances:(id)arg1 provenance:(long long)arg2 ;
-(void)earnedInstanceEntityDidApplyJournalEntriesInsertedEarnedInstances:(id)arg1 removedEarnedInstances:(id)arg2 ;
-(ACHEarnedInstanceEntityWrapper *)entityWrapper;
-(void)setEntityWrapper:(ACHEarnedInstanceEntityWrapper *)arg1 ;
-(BOOL)removeEarnedInstances:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeAllEarnedInstancesWithError:(id*)arg1 ;
-(void)loadAllEarnedInstancesFromDatabaseIfNecessary;
-(BOOL)addEarnedInstances:(id)arg1 databaseContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)addEarnedInstances:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)earnedInstanceQueue;
-(BOOL)_queue_addEarnedInstances:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 triggerSync:(BOOL)arg4 error:(id*)arg5 ;
-(void)_queue_appendOrInsertEarnedInstanceToInMemoryStore:(id)arg1 ;
-(void)_notifyObserversOfAddedEarnedInstances:(id)arg1 ;
-(NSMutableArray *)allEarnedInstances;
-(id)_queue_earnedInstancesArray;
-(id)_queue_addEarnedInstancesWithSingleTemplate:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 error:(id*)arg4 ;
-(ACHEarnedInstanceDuplicateUtility *)duplicateUtility;
-(BOOL)_queue_removeEarnedInstances:(id)arg1 error:(id*)arg2 ;
-(void)_notifyObserversOfRemovedEarnedInstances:(id)arg1 ;
-(BOOL)initialEarnedInstanceFetchComplete;
-(void)setAllEarnedInstances:(NSMutableArray *)arg1 ;
-(void)setInitialEarnedInstanceFetchComplete:(BOOL)arg1 ;
-(void)_notifyInitialFetchComplete;
-(id)initWithProfile:(id)arg1 earnedInstanceEntityWrapper:(id)arg2 earnedInstanceDuplicateUtility:(id)arg3 device:(unsigned char)arg4 ;
-(void)setDuplicateUtility:(ACHEarnedInstanceDuplicateUtility *)arg1 ;
-(void)setEarnedInstanceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

