/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, ACDDatabase;

@interface ACDDatabaseBackupActivity : NSObject {

	BOOL _xpcActivityPending;
	NSObject*<OS_xpc_object> _activityExecutionCriteria;
	NSObject*<OS_dispatch_queue> _queue;
	ACDDatabase* _database;

}

@property (nonatomic,readonly) ACDDatabase * database;              //@synthesize database=_database - In the implementation block
+(id)new;
-(id)init;
-(ACDDatabase *)database;
-(id)initWithDatabase:(id)arg1 ;
-(id)activityCriteria;
-(void)scheduleBackupIfNonexistent;
-(void)_registerActivityIfNeededSchedulingBackup:(BOOL)arg1 ;
-(void)_registerActivitySchedulingBackup:(BOOL)arg1 ;
-(void)scheduleBackup;
-(void)registerActivityIfNeeded;
@end

