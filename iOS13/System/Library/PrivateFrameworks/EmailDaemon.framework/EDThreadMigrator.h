/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol OS_dispatch_queue, EDThreadMigratorDelegate;
@class EMThreadScope, EFLocked, NSObject, EDThreadPersistence, EDInMemoryThreadQueryHandler, NSString;

@interface EDThreadMigrator : NSObject <EFLoggable> {

	os_unfair_lock_s _migrationLock;
	AB _cancelled;
	EMThreadScope* _threadScope;
	EFLocked* _state;
	NSObject*<OS_dispatch_queue> _workQueue;
	EDThreadPersistence* _threadPersistence;
	EDInMemoryThreadQueryHandler* _queryHandler;
	id<EDThreadMigratorDelegate> _delegate;

}

@property (nonatomic,readonly) EMThreadScope * threadScope;                               //@synthesize threadScope=_threadScope - In the implementation block
@property (nonatomic,readonly) EFLocked * state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                    //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) EDThreadPersistence * threadPersistence;                   //@synthesize threadPersistence=_threadPersistence - In the implementation block
@property (nonatomic,readonly) EDInMemoryThreadQueryHandler * queryHandler;               //@synthesize queryHandler=_queryHandler - In the implementation block
@property (nonatomic,__weak,readonly) id<EDThreadMigratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long migrationState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id<EDThreadMigratorDelegate>)delegate;
-(void)cancel;
-(void)start;
-(EFLocked *)state;
-(void)reset;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(unsigned long long)migrationState;
-(EDThreadPersistence *)threadPersistence;
-(EMThreadScope *)threadScope;
-(void)_performMigration;
-(EDInMemoryThreadQueryHandler *)queryHandler;
-(void)_scheduleCleanupForBatchedObjectIDs:(id)arg1 ;
-(void)_failMigration;
-(void)_resumeMigration;
-(void)changeObjectIDsToMigrate:(id)arg1 ;
-(void)deleteObjectIDsToMigrate:(id)arg1 ;
-(id)initWithThreadScope:(id)arg1 threadPersistence:(id)arg2 queryHandler:(id)arg3 delegate:(id)arg4 ;
-(void)addObjectIDsToMigrate:(id)arg1 ;
@end

