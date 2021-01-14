/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol RTPersistenceModelProvider, RTPersistenceDelegate;
@class NSPersistentStoreCoordinator, NSDate, RTPersistenceStore, NSManagedObjectModel;

@interface RTPersistenceMigrator : NSObject {

	NSPersistentStoreCoordinator* _cachedCoordinator;
	BOOL _didVacuumStore;
	NSDate* _migrationStartDate;
	NSDate* _migrationEndDate;
	RTPersistenceStore* _store;
	id<RTPersistenceModelProvider> _modelProvider;
	id<RTPersistenceDelegate> _delegate;
	unsigned long long _state;
	NSManagedObjectModel* _nextModel;

}

@property (readonly) NSDate * migrationStartDate;                                      //@synthesize migrationStartDate=_migrationStartDate - In the implementation block
@property (readonly) NSDate * migrationEndDate;                                        //@synthesize migrationEndDate=_migrationEndDate - In the implementation block
@property (readonly) BOOL didVacuumStore;                                              //@synthesize didVacuumStore=_didVacuumStore - In the implementation block
@property (__weak,readonly) RTPersistenceStore * store;                                //@synthesize store=_store - In the implementation block
@property (__weak,readonly) id<RTPersistenceModelProvider> modelProvider;              //@synthesize modelProvider=_modelProvider - In the implementation block
@property (__weak,readonly) id<RTPersistenceDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned long long state;                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * nextModel;                         //@synthesize nextModel=_nextModel - In the implementation block
@property (readonly) unsigned long long status; 
-(unsigned long long)run;
-(id)init;
-(RTPersistenceStore *)store;
-(id<RTPersistenceDelegate>)delegate;
-(void)setState:(unsigned long long)arg1 ;
-(NSDate *)migrationStartDate;
-(unsigned long long)state;
-(unsigned long long)status;
-(id)initWithStore:(id)arg1 modelProvider:(id)arg2 delegate:(id)arg3 ;
-(void)_attemptMigration;
-(void)_executeSingleMigrationStep;
-(unsigned long long)_executeOpenStep;
-(unsigned long long)_executeVacuumStep;
-(unsigned long long)_executePrepareStep;
-(unsigned long long)_executeCacheStep;
-(unsigned long long)_executeMigrateStep;
-(unsigned long long)_executeDestroyStep;
-(unsigned long long)_executeRecreateStep;
-(unsigned long long)_executeRekeyStep;
-(unsigned long long)_executeImportStep;
-(id)_coordinatorForModel:(id)arg1 ;
-(unsigned long long)__executeVacuumStepWithStore:(id)arg1 coordinator:(id)arg2 delegate:(id)arg3 vacuumDate:(id)arg4 ;
-(id)__findCandidateStoresForImportStepWithStore:(id)arg1 ;
-(unsigned long long)__prepareImportStepWithSourceStore:(id)arg1 sourceCoordinator:(id)arg2 destinationStore:(id)arg3 destinationCoordinator:(id)arg4 model:(id)arg5 allowMigration:(BOOL)arg6 ;
-(void)__cleanupAfterImportWithStore:(id)arg1 coordinator:(id)arg2 ;
-(unsigned long long)__executeImportStepWithSourceStore:(id)arg1 sourceCoordinator:(id)arg2 destinationStore:(id)arg3 destinationCoordinator:(id)arg4 model:(id)arg5 ;
-(NSDate *)migrationEndDate;
-(BOOL)didVacuumStore;
-(id<RTPersistenceModelProvider>)modelProvider;
-(NSManagedObjectModel *)nextModel;
-(void)setNextModel:(NSManagedObjectModel *)arg1 ;
@end

